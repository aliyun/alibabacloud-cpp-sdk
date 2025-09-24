// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPRICEENTITYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPRICEENTITYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryPriceEntityListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPriceEntityListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPriceEntityListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    QueryPriceEntityListRequest() = default ;
    QueryPriceEntityListRequest(const QueryPriceEntityListRequest &) = default ;
    QueryPriceEntityListRequest(QueryPriceEntityListRequest &&) = default ;
    QueryPriceEntityListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPriceEntityListRequest() = default ;
    QueryPriceEntityListRequest& operator=(const QueryPriceEntityListRequest &) = default ;
    QueryPriceEntityListRequest& operator=(QueryPriceEntityListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityCode_ != nullptr
        && this->lang_ != nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline QueryPriceEntityListRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QueryPriceEntityListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The code of the service.
    // 
    // This parameter is required.
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
