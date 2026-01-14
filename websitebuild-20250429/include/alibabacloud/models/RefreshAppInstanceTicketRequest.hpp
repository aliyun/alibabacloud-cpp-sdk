// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHAPPINSTANCETICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHAPPINSTANCETICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class RefreshAppInstanceTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshAppInstanceTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshAppInstanceTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    RefreshAppInstanceTicketRequest() = default ;
    RefreshAppInstanceTicketRequest(const RefreshAppInstanceTicketRequest &) = default ;
    RefreshAppInstanceTicketRequest(RefreshAppInstanceTicketRequest &&) = default ;
    RefreshAppInstanceTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshAppInstanceTicketRequest() = default ;
    RefreshAppInstanceTicketRequest& operator=(const RefreshAppInstanceTicketRequest &) = default ;
    RefreshAppInstanceTicketRequest& operator=(RefreshAppInstanceTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->token_ == nullptr && this->uuid_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline RefreshAppInstanceTicketRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline RefreshAppInstanceTicketRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline RefreshAppInstanceTicketRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> token_ {};
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
