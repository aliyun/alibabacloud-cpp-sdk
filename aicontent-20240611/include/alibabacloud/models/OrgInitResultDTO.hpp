// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORGINITRESULTDTO_HPP_
#define ALIBABACLOUD_MODELS_ORGINITRESULTDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class OrgInitResultDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrgInitResultDTO& obj) { 
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(clientUuid, clientUuid_);
      DARABONBA_PTR_TO_JSON(isNew, isNew_);
      DARABONBA_PTR_TO_JSON(orgId, orgId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, OrgInitResultDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(clientUuid, clientUuid_);
      DARABONBA_PTR_FROM_JSON(isNew, isNew_);
      DARABONBA_PTR_FROM_JSON(orgId, orgId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    OrgInitResultDTO() = default ;
    OrgInitResultDTO(const OrgInitResultDTO &) = default ;
    OrgInitResultDTO(OrgInitResultDTO &&) = default ;
    OrgInitResultDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrgInitResultDTO() = default ;
    OrgInitResultDTO& operator=(const OrgInitResultDTO &) = default ;
    OrgInitResultDTO& operator=(OrgInitResultDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->clientId_ == nullptr && this->clientUuid_ == nullptr && this->isNew_ == nullptr && this->orgId_ == nullptr && this->userId_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline OrgInitResultDTO& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline OrgInitResultDTO& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientUuid Field Functions 
    bool hasClientUuid() const { return this->clientUuid_ != nullptr;};
    void deleteClientUuid() { this->clientUuid_ = nullptr;};
    inline string getClientUuid() const { DARABONBA_PTR_GET_DEFAULT(clientUuid_, "") };
    inline OrgInitResultDTO& setClientUuid(string clientUuid) { DARABONBA_PTR_SET_VALUE(clientUuid_, clientUuid) };


    // isNew Field Functions 
    bool hasIsNew() const { return this->isNew_ != nullptr;};
    void deleteIsNew() { this->isNew_ = nullptr;};
    inline bool getIsNew() const { DARABONBA_PTR_GET_DEFAULT(isNew_, false) };
    inline OrgInitResultDTO& setIsNew(bool isNew) { DARABONBA_PTR_SET_VALUE(isNew_, isNew) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline int64_t getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, 0L) };
    inline OrgInitResultDTO& setOrgId(int64_t orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline OrgInitResultDTO& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> apiKey_ {};
    shared_ptr<int64_t> clientId_ {};
    shared_ptr<string> clientUuid_ {};
    shared_ptr<bool> isNew_ {};
    shared_ptr<int64_t> orgId_ {};
    shared_ptr<int64_t> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
