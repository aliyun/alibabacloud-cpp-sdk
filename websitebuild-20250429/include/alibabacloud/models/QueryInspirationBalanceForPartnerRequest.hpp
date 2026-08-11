// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSPIRATIONBALANCEFORPARTNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSPIRATIONBALANCEFORPARTNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class QueryInspirationBalanceForPartnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInspirationBalanceForPartnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BelongId, belongId_);
      DARABONBA_PTR_TO_JSON(BelongIdType, belongIdType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInspirationBalanceForPartnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BelongId, belongId_);
      DARABONBA_PTR_FROM_JSON(BelongIdType, belongIdType_);
    };
    QueryInspirationBalanceForPartnerRequest() = default ;
    QueryInspirationBalanceForPartnerRequest(const QueryInspirationBalanceForPartnerRequest &) = default ;
    QueryInspirationBalanceForPartnerRequest(QueryInspirationBalanceForPartnerRequest &&) = default ;
    QueryInspirationBalanceForPartnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInspirationBalanceForPartnerRequest() = default ;
    QueryInspirationBalanceForPartnerRequest& operator=(const QueryInspirationBalanceForPartnerRequest &) = default ;
    QueryInspirationBalanceForPartnerRequest& operator=(QueryInspirationBalanceForPartnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->belongId_ == nullptr
        && this->belongIdType_ == nullptr; };
    // belongId Field Functions 
    bool hasBelongId() const { return this->belongId_ != nullptr;};
    void deleteBelongId() { this->belongId_ = nullptr;};
    inline string getBelongId() const { DARABONBA_PTR_GET_DEFAULT(belongId_, "") };
    inline QueryInspirationBalanceForPartnerRequest& setBelongId(string belongId) { DARABONBA_PTR_SET_VALUE(belongId_, belongId) };


    // belongIdType Field Functions 
    bool hasBelongIdType() const { return this->belongIdType_ != nullptr;};
    void deleteBelongIdType() { this->belongIdType_ = nullptr;};
    inline string getBelongIdType() const { DARABONBA_PTR_GET_DEFAULT(belongIdType_, "") };
    inline QueryInspirationBalanceForPartnerRequest& setBelongIdType(string belongIdType) { DARABONBA_PTR_SET_VALUE(belongIdType_, belongIdType) };


  protected:
    // The owner ID, which can be a website ID or an Alibaba Cloud account ID.
    shared_ptr<string> belongId_ {};
    // The type of the owner ID. Valid values: siteId and uid.
    shared_ptr<string> belongIdType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
