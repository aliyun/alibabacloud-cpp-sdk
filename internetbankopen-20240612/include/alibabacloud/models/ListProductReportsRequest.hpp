// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTREPORTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTREPORTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace InternetBankOpen20240612
{
namespace Models
{
  class ListProductReportsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductReportsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LatestOnly, latestOnly_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductReportsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LatestOnly, latestOnly_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    ListProductReportsRequest() = default ;
    ListProductReportsRequest(const ListProductReportsRequest &) = default ;
    ListProductReportsRequest(ListProductReportsRequest &&) = default ;
    ListProductReportsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductReportsRequest() = default ;
    ListProductReportsRequest& operator=(const ListProductReportsRequest &) = default ;
    ListProductReportsRequest& operator=(ListProductReportsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->latestOnly_ == nullptr
        && this->productCode_ == nullptr; };
    // latestOnly Field Functions 
    bool hasLatestOnly() const { return this->latestOnly_ != nullptr;};
    void deleteLatestOnly() { this->latestOnly_ = nullptr;};
    inline bool getLatestOnly() const { DARABONBA_PTR_GET_DEFAULT(latestOnly_, false) };
    inline ListProductReportsRequest& setLatestOnly(bool latestOnly) { DARABONBA_PTR_SET_VALUE(latestOnly_, latestOnly) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListProductReportsRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // Specifies whether to return only the most recent active epoch report. If this parameter is omitted or set to false, the operation returns active reports within the last ten completed natural weeks in UTC+8, up to ten records. If set to true, the operation queries the most recent active report from all completed historical epochs, returning at most one record without the ten-week limit. Only true or false is accepted. If a string is passed, it must strictly use the lowercase characters true or false. Other values return InvalidParameter.LatestOnly. This operation does not support paging.
    shared_ptr<bool> latestOnly_ {};
    // The product code of the data product for which to query periodic reports. This must be consistent with the product code used when calling InvokeDataProduct. This parameter is required and allows only 1 to 128 ASCII letters, digits, periods (.), underscores (_), or hyphens (-). Leading and trailing spaces are not trimmed. If this parameter is missing or incorrectly formatted, InvalidParameter.ProductCode is returned. The query is limited to reports belonging to the current Alibaba Cloud account. If no available reports exist, an empty Reports array is returned.
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace InternetBankOpen20240612
#endif
