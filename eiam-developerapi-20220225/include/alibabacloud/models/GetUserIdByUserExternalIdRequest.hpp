// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERIDBYUSEREXTERNALIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERIDBYUSEREXTERNALIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GetUserIdByUserExternalIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserIdByUserExternalIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(userExternalId, userExternalId_);
      DARABONBA_PTR_TO_JSON(userSourceId, userSourceId_);
      DARABONBA_PTR_TO_JSON(userSourceType, userSourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserIdByUserExternalIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(userExternalId, userExternalId_);
      DARABONBA_PTR_FROM_JSON(userSourceId, userSourceId_);
      DARABONBA_PTR_FROM_JSON(userSourceType, userSourceType_);
    };
    GetUserIdByUserExternalIdRequest() = default ;
    GetUserIdByUserExternalIdRequest(const GetUserIdByUserExternalIdRequest &) = default ;
    GetUserIdByUserExternalIdRequest(GetUserIdByUserExternalIdRequest &&) = default ;
    GetUserIdByUserExternalIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserIdByUserExternalIdRequest() = default ;
    GetUserIdByUserExternalIdRequest& operator=(const GetUserIdByUserExternalIdRequest &) = default ;
    GetUserIdByUserExternalIdRequest& operator=(GetUserIdByUserExternalIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userExternalId_ == nullptr
        && return this->userSourceId_ == nullptr && return this->userSourceType_ == nullptr; };
    // userExternalId Field Functions 
    bool hasUserExternalId() const { return this->userExternalId_ != nullptr;};
    void deleteUserExternalId() { this->userExternalId_ = nullptr;};
    inline string userExternalId() const { DARABONBA_PTR_GET_DEFAULT(userExternalId_, "") };
    inline GetUserIdByUserExternalIdRequest& setUserExternalId(string userExternalId) { DARABONBA_PTR_SET_VALUE(userExternalId_, userExternalId) };


    // userSourceId Field Functions 
    bool hasUserSourceId() const { return this->userSourceId_ != nullptr;};
    void deleteUserSourceId() { this->userSourceId_ = nullptr;};
    inline string userSourceId() const { DARABONBA_PTR_GET_DEFAULT(userSourceId_, "") };
    inline GetUserIdByUserExternalIdRequest& setUserSourceId(string userSourceId) { DARABONBA_PTR_SET_VALUE(userSourceId_, userSourceId) };


    // userSourceType Field Functions 
    bool hasUserSourceType() const { return this->userSourceType_ != nullptr;};
    void deleteUserSourceType() { this->userSourceType_ = nullptr;};
    inline string userSourceType() const { DARABONBA_PTR_GET_DEFAULT(userSourceType_, "") };
    inline GetUserIdByUserExternalIdRequest& setUserSourceType(string userSourceType) { DARABONBA_PTR_SET_VALUE(userSourceType_, userSourceType) };


  protected:
    // The external ID of the account.
    // 
    // This parameter is required.
    std::shared_ptr<string> userExternalId_ = nullptr;
    // The source ID of the account. If the account was created in IDaaS, its source ID is the ID of the IDaaS instance. If the account was imported, its source ID is the enterprise ID in the source. For example, if the account was imported from DingTalk, its source ID is the corpId value of the enterprise in DingTalk.
    // 
    // This parameter is required.
    std::shared_ptr<string> userSourceId_ = nullptr;
    // The source type of the account. Valid values:
    // 
    // *   build_in: The account was created in Identity as a Service (IDaaS).
    // *   ding_talk: The account was imported from DingTalk.
    // *   ad: The account was imported from Microsoft Active Directory (AD).
    // *   ldap: The account was imported from a Lightweight Directory Access Protocol (LDAP) service.
    // 
    // This parameter is required.
    std::shared_ptr<string> userSourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
