// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEMBERAPIKEYDTO_HPP_
#define ALIBABACLOUD_MODELS_MEMBERAPIKEYDTO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ClientDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class MemberApiKeyDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MemberApiKeyDTO& obj) { 
      DARABONBA_PTR_TO_JSON(client, client_);
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(deleteTag, deleteTag_);
      DARABONBA_PTR_TO_JSON(expireAt, expireAt_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(keyPreview, keyPreview_);
      DARABONBA_PTR_TO_JSON(memberUserId, memberUserId_);
      DARABONBA_PTR_TO_JSON(memberUserName, memberUserName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, MemberApiKeyDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(client, client_);
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(deleteTag, deleteTag_);
      DARABONBA_PTR_FROM_JSON(expireAt, expireAt_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(keyPreview, keyPreview_);
      DARABONBA_PTR_FROM_JSON(memberUserId, memberUserId_);
      DARABONBA_PTR_FROM_JSON(memberUserName, memberUserName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    MemberApiKeyDTO() = default ;
    MemberApiKeyDTO(const MemberApiKeyDTO &) = default ;
    MemberApiKeyDTO(MemberApiKeyDTO &&) = default ;
    MemberApiKeyDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MemberApiKeyDTO() = default ;
    MemberApiKeyDTO& operator=(const MemberApiKeyDTO &) = default ;
    MemberApiKeyDTO& operator=(MemberApiKeyDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->client_ == nullptr
        && this->clientId_ == nullptr && this->deleteTag_ == nullptr && this->expireAt_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->id_ == nullptr && this->key_ == nullptr && this->keyPreview_ == nullptr && this->memberUserId_ == nullptr && this->memberUserName_ == nullptr
        && this->name_ == nullptr && this->status_ == nullptr; };
    // client Field Functions 
    bool hasClient() const { return this->client_ != nullptr;};
    void deleteClient() { this->client_ = nullptr;};
    inline const ClientDTO & getClient() const { DARABONBA_PTR_GET_CONST(client_, ClientDTO) };
    inline ClientDTO getClient() { DARABONBA_PTR_GET(client_, ClientDTO) };
    inline MemberApiKeyDTO& setClient(const ClientDTO & client) { DARABONBA_PTR_SET_VALUE(client_, client) };
    inline MemberApiKeyDTO& setClient(ClientDTO && client) { DARABONBA_PTR_SET_RVALUE(client_, client) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline MemberApiKeyDTO& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // deleteTag Field Functions 
    bool hasDeleteTag() const { return this->deleteTag_ != nullptr;};
    void deleteDeleteTag() { this->deleteTag_ = nullptr;};
    inline int32_t getDeleteTag() const { DARABONBA_PTR_GET_DEFAULT(deleteTag_, 0) };
    inline MemberApiKeyDTO& setDeleteTag(int32_t deleteTag) { DARABONBA_PTR_SET_VALUE(deleteTag_, deleteTag) };


    // expireAt Field Functions 
    bool hasExpireAt() const { return this->expireAt_ != nullptr;};
    void deleteExpireAt() { this->expireAt_ = nullptr;};
    inline string getExpireAt() const { DARABONBA_PTR_GET_DEFAULT(expireAt_, "") };
    inline MemberApiKeyDTO& setExpireAt(string expireAt) { DARABONBA_PTR_SET_VALUE(expireAt_, expireAt) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline MemberApiKeyDTO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline MemberApiKeyDTO& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline MemberApiKeyDTO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline MemberApiKeyDTO& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // keyPreview Field Functions 
    bool hasKeyPreview() const { return this->keyPreview_ != nullptr;};
    void deleteKeyPreview() { this->keyPreview_ = nullptr;};
    inline string getKeyPreview() const { DARABONBA_PTR_GET_DEFAULT(keyPreview_, "") };
    inline MemberApiKeyDTO& setKeyPreview(string keyPreview) { DARABONBA_PTR_SET_VALUE(keyPreview_, keyPreview) };


    // memberUserId Field Functions 
    bool hasMemberUserId() const { return this->memberUserId_ != nullptr;};
    void deleteMemberUserId() { this->memberUserId_ = nullptr;};
    inline int64_t getMemberUserId() const { DARABONBA_PTR_GET_DEFAULT(memberUserId_, 0L) };
    inline MemberApiKeyDTO& setMemberUserId(int64_t memberUserId) { DARABONBA_PTR_SET_VALUE(memberUserId_, memberUserId) };


    // memberUserName Field Functions 
    bool hasMemberUserName() const { return this->memberUserName_ != nullptr;};
    void deleteMemberUserName() { this->memberUserName_ = nullptr;};
    inline string getMemberUserName() const { DARABONBA_PTR_GET_DEFAULT(memberUserName_, "") };
    inline MemberApiKeyDTO& setMemberUserName(string memberUserName) { DARABONBA_PTR_SET_VALUE(memberUserName_, memberUserName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MemberApiKeyDTO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline MemberApiKeyDTO& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<ClientDTO> client_ {};
    shared_ptr<int64_t> clientId_ {};
    shared_ptr<int32_t> deleteTag_ {};
    shared_ptr<string> expireAt_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> key_ {};
    shared_ptr<string> keyPreview_ {};
    shared_ptr<int64_t> memberUserId_ {};
    shared_ptr<string> memberUserName_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
