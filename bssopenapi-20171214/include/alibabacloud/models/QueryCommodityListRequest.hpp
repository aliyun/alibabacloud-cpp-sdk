// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOMMODITYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOMMODITYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryCommodityListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCommodityListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCommodityListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    QueryCommodityListRequest() = default ;
    QueryCommodityListRequest(const QueryCommodityListRequest &) = default ;
    QueryCommodityListRequest(QueryCommodityListRequest &&) = default ;
    QueryCommodityListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCommodityListRequest() = default ;
    QueryCommodityListRequest& operator=(const QueryCommodityListRequest &) = default ;
    QueryCommodityListRequest& operator=(QueryCommodityListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->productCode_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QueryCommodityListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline QueryCommodityListRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    std::shared_ptr<string> lang_ = nullptr;
    // The code of the service.
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
