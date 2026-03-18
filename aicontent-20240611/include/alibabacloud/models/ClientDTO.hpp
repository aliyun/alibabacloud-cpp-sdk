// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLIENTDTO_HPP_
#define ALIBABACLOUD_MODELS_CLIENTDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ClientDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClientDTO& obj) { 
      DARABONBA_PTR_TO_JSON(address, address_);
      DARABONBA_PTR_TO_JSON(allowedModels, allowedModels_);
      DARABONBA_PTR_TO_JSON(clientUuid, clientUuid_);
      DARABONBA_PTR_TO_JSON(contact, contact_);
      DARABONBA_PTR_TO_JSON(deleteTag, deleteTag_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(main, main_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, ClientDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(allowedModels, allowedModels_);
      DARABONBA_PTR_FROM_JSON(clientUuid, clientUuid_);
      DARABONBA_PTR_FROM_JSON(contact, contact_);
      DARABONBA_PTR_FROM_JSON(deleteTag, deleteTag_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(main, main_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
    };
    ClientDTO() = default ;
    ClientDTO(const ClientDTO &) = default ;
    ClientDTO(ClientDTO &&) = default ;
    ClientDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClientDTO() = default ;
    ClientDTO& operator=(const ClientDTO &) = default ;
    ClientDTO& operator=(ClientDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && this->allowedModels_ == nullptr && this->clientUuid_ == nullptr && this->contact_ == nullptr && this->deleteTag_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->main_ == nullptr && this->name_ == nullptr && this->remark_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline ClientDTO& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // allowedModels Field Functions 
    bool hasAllowedModels() const { return this->allowedModels_ != nullptr;};
    void deleteAllowedModels() { this->allowedModels_ = nullptr;};
    inline string getAllowedModels() const { DARABONBA_PTR_GET_DEFAULT(allowedModels_, "") };
    inline ClientDTO& setAllowedModels(string allowedModels) { DARABONBA_PTR_SET_VALUE(allowedModels_, allowedModels) };


    // clientUuid Field Functions 
    bool hasClientUuid() const { return this->clientUuid_ != nullptr;};
    void deleteClientUuid() { this->clientUuid_ = nullptr;};
    inline string getClientUuid() const { DARABONBA_PTR_GET_DEFAULT(clientUuid_, "") };
    inline ClientDTO& setClientUuid(string clientUuid) { DARABONBA_PTR_SET_VALUE(clientUuid_, clientUuid) };


    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline string getContact() const { DARABONBA_PTR_GET_DEFAULT(contact_, "") };
    inline ClientDTO& setContact(string contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };


    // deleteTag Field Functions 
    bool hasDeleteTag() const { return this->deleteTag_ != nullptr;};
    void deleteDeleteTag() { this->deleteTag_ = nullptr;};
    inline int32_t getDeleteTag() const { DARABONBA_PTR_GET_DEFAULT(deleteTag_, 0) };
    inline ClientDTO& setDeleteTag(int32_t deleteTag) { DARABONBA_PTR_SET_VALUE(deleteTag_, deleteTag) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ClientDTO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ClientDTO& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ClientDTO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // main Field Functions 
    bool hasMain() const { return this->main_ != nullptr;};
    void deleteMain() { this->main_ = nullptr;};
    inline int32_t getMain() const { DARABONBA_PTR_GET_DEFAULT(main_, 0) };
    inline ClientDTO& setMain(int32_t main) { DARABONBA_PTR_SET_VALUE(main_, main) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ClientDTO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ClientDTO& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    shared_ptr<string> address_ {};
    shared_ptr<string> allowedModels_ {};
    shared_ptr<string> clientUuid_ {};
    shared_ptr<string> contact_ {};
    shared_ptr<int32_t> deleteTag_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<int32_t> main_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> remark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
