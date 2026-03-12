// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINBYSALEIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINBYSALEIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20160511
{
namespace Models
{
  class QueryDomainBySaleIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainBySaleIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SaleId, saleId_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainBySaleIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SaleId, saleId_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    QueryDomainBySaleIdRequest() = default ;
    QueryDomainBySaleIdRequest(const QueryDomainBySaleIdRequest &) = default ;
    QueryDomainBySaleIdRequest(QueryDomainBySaleIdRequest &&) = default ;
    QueryDomainBySaleIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainBySaleIdRequest() = default ;
    QueryDomainBySaleIdRequest& operator=(const QueryDomainBySaleIdRequest &) = default ;
    QueryDomainBySaleIdRequest& operator=(QueryDomainBySaleIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->saleId_ == nullptr && this->userClientIp_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QueryDomainBySaleIdRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // saleId Field Functions 
    bool hasSaleId() const { return this->saleId_ != nullptr;};
    void deleteSaleId() { this->saleId_ = nullptr;};
    inline string getSaleId() const { DARABONBA_PTR_GET_DEFAULT(saleId_, "") };
    inline QueryDomainBySaleIdRequest& setSaleId(string saleId) { DARABONBA_PTR_SET_VALUE(saleId_, saleId) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline QueryDomainBySaleIdRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    shared_ptr<string> lang_ {};
    // This parameter is required.
    shared_ptr<string> saleId_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20160511
#endif
