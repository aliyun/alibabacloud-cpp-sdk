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
      DARABONBA_PTR_TO_JSON(allowedModelGroupConfig, allowedModelGroupConfig_);
      DARABONBA_PTR_TO_JSON(allowedModels, allowedModels_);
      DARABONBA_PTR_TO_JSON(clientUuid, clientUuid_);
      DARABONBA_PTR_TO_JSON(contact, contact_);
      DARABONBA_PTR_TO_JSON(deleteTag, deleteTag_);
      DARABONBA_PTR_TO_JSON(discount, discount_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(main, main_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(parentId, parentId_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ClientDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(allowedModelGroupConfig, allowedModelGroupConfig_);
      DARABONBA_PTR_FROM_JSON(allowedModels, allowedModels_);
      DARABONBA_PTR_FROM_JSON(clientUuid, clientUuid_);
      DARABONBA_PTR_FROM_JSON(contact, contact_);
      DARABONBA_PTR_FROM_JSON(deleteTag, deleteTag_);
      DARABONBA_PTR_FROM_JSON(discount, discount_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(main, main_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(parentId, parentId_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
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
        && this->allowedModelGroupConfig_ == nullptr && this->allowedModels_ == nullptr && this->clientUuid_ == nullptr && this->contact_ == nullptr && this->deleteTag_ == nullptr
        && this->discount_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->level_ == nullptr
        && this->main_ == nullptr && this->name_ == nullptr && this->nodeType_ == nullptr && this->parentId_ == nullptr && this->remark_ == nullptr
        && this->userId_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline ClientDTO& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // allowedModelGroupConfig Field Functions 
    bool hasAllowedModelGroupConfig() const { return this->allowedModelGroupConfig_ != nullptr;};
    void deleteAllowedModelGroupConfig() { this->allowedModelGroupConfig_ = nullptr;};
    inline string getAllowedModelGroupConfig() const { DARABONBA_PTR_GET_DEFAULT(allowedModelGroupConfig_, "") };
    inline ClientDTO& setAllowedModelGroupConfig(string allowedModelGroupConfig) { DARABONBA_PTR_SET_VALUE(allowedModelGroupConfig_, allowedModelGroupConfig) };


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


    // discount Field Functions 
    bool hasDiscount() const { return this->discount_ != nullptr;};
    void deleteDiscount() { this->discount_ = nullptr;};
    inline double getDiscount() const { DARABONBA_PTR_GET_DEFAULT(discount_, 0.0) };
    inline ClientDTO& setDiscount(double discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


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


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
    inline ClientDTO& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


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


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ClientDTO& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline ClientDTO& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ClientDTO& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline ClientDTO& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The company address.
    shared_ptr<string> address_ {};
    // The authorization management configuration in the format of {"model_ids":[...],"group_ids":[...]}. An empty value indicates that group authorization is not used.
    shared_ptr<string> allowedModelGroupConfig_ {};
    // The list of allowed model IDs, separated by commas. An empty value indicates all models.
    shared_ptr<string> allowedModels_ {};
    // The customer UUID.
    shared_ptr<string> clientUuid_ {};
    // The contact information.
    shared_ptr<string> contact_ {};
    // The status. A value of 0 indicates enabled, and a non-zero value indicates disabled.
    shared_ptr<int32_t> deleteTag_ {};
    // The discount factor. A value of 1.0 indicates no discount.
    shared_ptr<double> discount_ {};
    // The creation time.
    shared_ptr<string> gmtCreate_ {};
    // The update time.
    shared_ptr<string> gmtModified_ {};
    // ID
    shared_ptr<int64_t> id_ {};
    // The hierarchy level. Valid values: 1 to 5.
    shared_ptr<int32_t> level_ {};
    // The account type. A value of 0 indicates a main account, and a value of 1 indicates a regular account.
    shared_ptr<int32_t> main_ {};
    // The customer name.
    shared_ptr<string> name_ {};
    // The node type. Valid values: department: Department. user: User node, which is a leaf in the department tree.
    shared_ptr<string> nodeType_ {};
    // The parent department ID. An empty value indicates the top level.
    shared_ptr<int64_t> parentId_ {};
    // The remarks.
    shared_ptr<string> remark_ {};
    // The user ID. This field has a value only when the node type is user.
    shared_ptr<int64_t> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
