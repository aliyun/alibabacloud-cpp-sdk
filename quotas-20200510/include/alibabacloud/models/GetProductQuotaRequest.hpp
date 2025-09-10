// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRODUCTQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPRODUCTQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetProductQuotaRequestDimensions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class GetProductQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProductQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetProductQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
    };
    GetProductQuotaRequest() = default ;
    GetProductQuotaRequest(const GetProductQuotaRequest &) = default ;
    GetProductQuotaRequest(GetProductQuotaRequest &&) = default ;
    GetProductQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProductQuotaRequest() = default ;
    GetProductQuotaRequest& operator=(const GetProductQuotaRequest &) = default ;
    GetProductQuotaRequest& operator=(GetProductQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dimensions_ != nullptr
        && this->productCode_ != nullptr && this->quotaActionCode_ != nullptr; };
    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<GetProductQuotaRequestDimensions> & dimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<GetProductQuotaRequestDimensions>) };
    inline vector<GetProductQuotaRequestDimensions> dimensions() { DARABONBA_PTR_GET(dimensions_, vector<GetProductQuotaRequestDimensions>) };
    inline GetProductQuotaRequest& setDimensions(const vector<GetProductQuotaRequestDimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline GetProductQuotaRequest& setDimensions(vector<GetProductQuotaRequestDimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetProductQuotaRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string quotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline GetProductQuotaRequest& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


  protected:
    // The quota dimensions.
    std::shared_ptr<vector<GetProductQuotaRequestDimensions>> dimensions_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    // 
    // >  To query the abbreviation of an Alibaba Cloud service name, call the [ListProducts](https://help.aliyun.com/document_detail/440555.html) operation and check the value of `ProductCode` in the response.
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // The quota ID.
    // 
    // >  To query a quota ID of an Alibaba Cloud service, call the [ListProductQuotas](https://help.aliyun.com/document_detail/440554.html) operation and check the value of `QuotaActionCode` in the response.
    // 
    // This parameter is required.
    std::shared_ptr<string> quotaActionCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
