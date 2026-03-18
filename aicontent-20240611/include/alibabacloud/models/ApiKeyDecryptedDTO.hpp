// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APIKEYDECRYPTEDDTO_HPP_
#define ALIBABACLOUD_MODELS_APIKEYDECRYPTEDDTO_HPP_
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
  class ApiKeyDecryptedDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApiKeyDecryptedDTO& obj) { 
      DARABONBA_PTR_TO_JSON(client, client_);
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(deleteTag, deleteTag_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(keyPreview, keyPreview_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ApiKeyDecryptedDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(client, client_);
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(deleteTag, deleteTag_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(keyPreview, keyPreview_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ApiKeyDecryptedDTO() = default ;
    ApiKeyDecryptedDTO(const ApiKeyDecryptedDTO &) = default ;
    ApiKeyDecryptedDTO(ApiKeyDecryptedDTO &&) = default ;
    ApiKeyDecryptedDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApiKeyDecryptedDTO() = default ;
    ApiKeyDecryptedDTO& operator=(const ApiKeyDecryptedDTO &) = default ;
    ApiKeyDecryptedDTO& operator=(ApiKeyDecryptedDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->client_ == nullptr
        && this->clientId_ == nullptr && this->deleteTag_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->key_ == nullptr && this->keyPreview_ == nullptr && this->name_ == nullptr; };
    // client Field Functions 
    bool hasClient() const { return this->client_ != nullptr;};
    void deleteClient() { this->client_ = nullptr;};
    inline const ClientDTO & getClient() const { DARABONBA_PTR_GET_CONST(client_, ClientDTO) };
    inline ClientDTO getClient() { DARABONBA_PTR_GET(client_, ClientDTO) };
    inline ApiKeyDecryptedDTO& setClient(const ClientDTO & client) { DARABONBA_PTR_SET_VALUE(client_, client) };
    inline ApiKeyDecryptedDTO& setClient(ClientDTO && client) { DARABONBA_PTR_SET_RVALUE(client_, client) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline ApiKeyDecryptedDTO& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // deleteTag Field Functions 
    bool hasDeleteTag() const { return this->deleteTag_ != nullptr;};
    void deleteDeleteTag() { this->deleteTag_ = nullptr;};
    inline int32_t getDeleteTag() const { DARABONBA_PTR_GET_DEFAULT(deleteTag_, 0) };
    inline ApiKeyDecryptedDTO& setDeleteTag(int32_t deleteTag) { DARABONBA_PTR_SET_VALUE(deleteTag_, deleteTag) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ApiKeyDecryptedDTO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ApiKeyDecryptedDTO& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ApiKeyDecryptedDTO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ApiKeyDecryptedDTO& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // keyPreview Field Functions 
    bool hasKeyPreview() const { return this->keyPreview_ != nullptr;};
    void deleteKeyPreview() { this->keyPreview_ = nullptr;};
    inline string getKeyPreview() const { DARABONBA_PTR_GET_DEFAULT(keyPreview_, "") };
    inline ApiKeyDecryptedDTO& setKeyPreview(string keyPreview) { DARABONBA_PTR_SET_VALUE(keyPreview_, keyPreview) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ApiKeyDecryptedDTO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<ClientDTO> client_ {};
    shared_ptr<int64_t> clientId_ {};
    shared_ptr<int32_t> deleteTag_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> key_ {};
    shared_ptr<string> keyPreview_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
