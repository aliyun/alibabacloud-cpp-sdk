// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTRYNAMESPACERESPONSEBODYNAMESPACE_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTRYNAMESPACERESPONSEBODYNAMESPACE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetRegistryNamespaceResponseBodyNamespace : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegistryNamespaceResponseBodyNamespace& obj) { 
      DARABONBA_PTR_TO_JSON(acl, acl_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(maintainer, maintainer_);
      DARABONBA_PTR_TO_JSON(modules, modules_);
      DARABONBA_PTR_TO_JSON(namespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(sharedAccounts, sharedAccounts_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegistryNamespaceResponseBodyNamespace& obj) { 
      DARABONBA_PTR_FROM_JSON(acl, acl_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(maintainer, maintainer_);
      DARABONBA_PTR_FROM_JSON(modules, modules_);
      DARABONBA_PTR_FROM_JSON(namespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(sharedAccounts, sharedAccounts_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetRegistryNamespaceResponseBodyNamespace() = default ;
    GetRegistryNamespaceResponseBodyNamespace(const GetRegistryNamespaceResponseBodyNamespace &) = default ;
    GetRegistryNamespaceResponseBodyNamespace(GetRegistryNamespaceResponseBodyNamespace &&) = default ;
    GetRegistryNamespaceResponseBodyNamespace(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegistryNamespaceResponseBodyNamespace() = default ;
    GetRegistryNamespaceResponseBodyNamespace& operator=(const GetRegistryNamespaceResponseBodyNamespace &) = default ;
    GetRegistryNamespaceResponseBodyNamespace& operator=(GetRegistryNamespaceResponseBodyNamespace &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acl_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->maintainer_ != nullptr && this->modules_ != nullptr && this->namespaceName_ != nullptr
        && this->sharedAccounts_ != nullptr && this->type_ != nullptr; };
    // acl Field Functions 
    bool hasAcl() const { return this->acl_ != nullptr;};
    void deleteAcl() { this->acl_ = nullptr;};
    inline string acl() const { DARABONBA_PTR_GET_DEFAULT(acl_, "") };
    inline GetRegistryNamespaceResponseBodyNamespace& setAcl(string acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetRegistryNamespaceResponseBodyNamespace& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetRegistryNamespaceResponseBodyNamespace& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // maintainer Field Functions 
    bool hasMaintainer() const { return this->maintainer_ != nullptr;};
    void deleteMaintainer() { this->maintainer_ = nullptr;};
    inline string maintainer() const { DARABONBA_PTR_GET_DEFAULT(maintainer_, "") };
    inline GetRegistryNamespaceResponseBodyNamespace& setMaintainer(string maintainer) { DARABONBA_PTR_SET_VALUE(maintainer_, maintainer) };


    // modules Field Functions 
    bool hasModules() const { return this->modules_ != nullptr;};
    void deleteModules() { this->modules_ = nullptr;};
    inline int32_t modules() const { DARABONBA_PTR_GET_DEFAULT(modules_, 0) };
    inline GetRegistryNamespaceResponseBodyNamespace& setModules(int32_t modules) { DARABONBA_PTR_SET_VALUE(modules_, modules) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline GetRegistryNamespaceResponseBodyNamespace& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // sharedAccounts Field Functions 
    bool hasSharedAccounts() const { return this->sharedAccounts_ != nullptr;};
    void deleteSharedAccounts() { this->sharedAccounts_ = nullptr;};
    inline const vector<int64_t> & sharedAccounts() const { DARABONBA_PTR_GET_CONST(sharedAccounts_, vector<int64_t>) };
    inline vector<int64_t> sharedAccounts() { DARABONBA_PTR_GET(sharedAccounts_, vector<int64_t>) };
    inline GetRegistryNamespaceResponseBodyNamespace& setSharedAccounts(const vector<int64_t> & sharedAccounts) { DARABONBA_PTR_SET_VALUE(sharedAccounts_, sharedAccounts) };
    inline GetRegistryNamespaceResponseBodyNamespace& setSharedAccounts(vector<int64_t> && sharedAccounts) { DARABONBA_PTR_SET_RVALUE(sharedAccounts_, sharedAccounts) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetRegistryNamespaceResponseBodyNamespace& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> acl_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> maintainer_ = nullptr;
    std::shared_ptr<int32_t> modules_ = nullptr;
    std::shared_ptr<string> namespaceName_ = nullptr;
    std::shared_ptr<vector<int64_t>> sharedAccounts_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
