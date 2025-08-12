// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMANAGERINFOBYAUTHCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMANAGERINFOBYAUTHCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class GetManagerInfoByAuthCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetManagerInfoByAuthCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TeamName, teamName_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(WaId, waId_);
    };
    friend void from_json(const Darabonba::Json& j, GetManagerInfoByAuthCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TeamName, teamName_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(WaId, waId_);
    };
    GetManagerInfoByAuthCodeResponseBody() = default ;
    GetManagerInfoByAuthCodeResponseBody(const GetManagerInfoByAuthCodeResponseBody &) = default ;
    GetManagerInfoByAuthCodeResponseBody(GetManagerInfoByAuthCodeResponseBody &&) = default ;
    GetManagerInfoByAuthCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetManagerInfoByAuthCodeResponseBody() = default ;
    GetManagerInfoByAuthCodeResponseBody& operator=(const GetManagerInfoByAuthCodeResponseBody &) = default ;
    GetManagerInfoByAuthCodeResponseBody& operator=(GetManagerInfoByAuthCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orgId_ != nullptr
        && this->phone_ != nullptr && this->requestId_ != nullptr && this->teamName_ != nullptr && this->userName_ != nullptr && this->waId_ != nullptr; };
    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline GetManagerInfoByAuthCodeResponseBody& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline GetManagerInfoByAuthCodeResponseBody& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetManagerInfoByAuthCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // teamName Field Functions 
    bool hasTeamName() const { return this->teamName_ != nullptr;};
    void deleteTeamName() { this->teamName_ = nullptr;};
    inline string teamName() const { DARABONBA_PTR_GET_DEFAULT(teamName_, "") };
    inline GetManagerInfoByAuthCodeResponseBody& setTeamName(string teamName) { DARABONBA_PTR_SET_VALUE(teamName_, teamName) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetManagerInfoByAuthCodeResponseBody& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // waId Field Functions 
    bool hasWaId() const { return this->waId_ != nullptr;};
    void deleteWaId() { this->waId_ = nullptr;};
    inline int64_t waId() const { DARABONBA_PTR_GET_DEFAULT(waId_, 0L) };
    inline GetManagerInfoByAuthCodeResponseBody& setWaId(int64_t waId) { DARABONBA_PTR_SET_VALUE(waId_, waId) };


  protected:
    // The organization ID.
    std::shared_ptr<string> orgId_ = nullptr;
    // The mobile number.
    std::shared_ptr<string> phone_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The team name.
    std::shared_ptr<string> teamName_ = nullptr;
    // The tenant name.
    std::shared_ptr<string> userName_ = nullptr;
    // The ID of the Elastic Desktop Service account.
    std::shared_ptr<int64_t> waId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
