// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTRYNAMESPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTRYNAMESPACERESPONSEBODY_HPP_
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
  class GetRegistryNamespaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegistryNamespaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegistryNamespaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetRegistryNamespaceResponseBody() = default ;
    GetRegistryNamespaceResponseBody(const GetRegistryNamespaceResponseBody &) = default ;
    GetRegistryNamespaceResponseBody(GetRegistryNamespaceResponseBody &&) = default ;
    GetRegistryNamespaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegistryNamespaceResponseBody() = default ;
    GetRegistryNamespaceResponseBody& operator=(const GetRegistryNamespaceResponseBody &) = default ;
    GetRegistryNamespaceResponseBody& operator=(GetRegistryNamespaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Namespace : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Namespace& obj) { 
        DARABONBA_PTR_TO_JSON(acl, acl_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(maintainer, maintainer_);
        DARABONBA_PTR_TO_JSON(modules, modules_);
        DARABONBA_PTR_TO_JSON(namespaceName, namespaceName_);
        DARABONBA_PTR_TO_JSON(sharedAccounts, sharedAccounts_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Namespace& obj) { 
        DARABONBA_PTR_FROM_JSON(acl, acl_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(maintainer, maintainer_);
        DARABONBA_PTR_FROM_JSON(modules, modules_);
        DARABONBA_PTR_FROM_JSON(namespaceName, namespaceName_);
        DARABONBA_PTR_FROM_JSON(sharedAccounts, sharedAccounts_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Namespace() = default ;
      Namespace(const Namespace &) = default ;
      Namespace(Namespace &&) = default ;
      Namespace(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Namespace() = default ;
      Namespace& operator=(const Namespace &) = default ;
      Namespace& operator=(Namespace &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->acl_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->maintainer_ == nullptr && this->modules_ == nullptr && this->namespaceName_ == nullptr
        && this->sharedAccounts_ == nullptr && this->type_ == nullptr; };
      // acl Field Functions 
      bool hasAcl() const { return this->acl_ != nullptr;};
      void deleteAcl() { this->acl_ = nullptr;};
      inline string getAcl() const { DARABONBA_PTR_GET_DEFAULT(acl_, "") };
      inline Namespace& setAcl(string acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Namespace& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Namespace& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // maintainer Field Functions 
      bool hasMaintainer() const { return this->maintainer_ != nullptr;};
      void deleteMaintainer() { this->maintainer_ = nullptr;};
      inline string getMaintainer() const { DARABONBA_PTR_GET_DEFAULT(maintainer_, "") };
      inline Namespace& setMaintainer(string maintainer) { DARABONBA_PTR_SET_VALUE(maintainer_, maintainer) };


      // modules Field Functions 
      bool hasModules() const { return this->modules_ != nullptr;};
      void deleteModules() { this->modules_ = nullptr;};
      inline int32_t getModules() const { DARABONBA_PTR_GET_DEFAULT(modules_, 0) };
      inline Namespace& setModules(int32_t modules) { DARABONBA_PTR_SET_VALUE(modules_, modules) };


      // namespaceName Field Functions 
      bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
      void deleteNamespaceName() { this->namespaceName_ = nullptr;};
      inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
      inline Namespace& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


      // sharedAccounts Field Functions 
      bool hasSharedAccounts() const { return this->sharedAccounts_ != nullptr;};
      void deleteSharedAccounts() { this->sharedAccounts_ = nullptr;};
      inline const vector<int64_t> & getSharedAccounts() const { DARABONBA_PTR_GET_CONST(sharedAccounts_, vector<int64_t>) };
      inline vector<int64_t> getSharedAccounts() { DARABONBA_PTR_GET(sharedAccounts_, vector<int64_t>) };
      inline Namespace& setSharedAccounts(const vector<int64_t> & sharedAccounts) { DARABONBA_PTR_SET_VALUE(sharedAccounts_, sharedAccounts) };
      inline Namespace& setSharedAccounts(vector<int64_t> && sharedAccounts) { DARABONBA_PTR_SET_RVALUE(sharedAccounts_, sharedAccounts) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Namespace& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> acl_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> maintainer_ {};
      shared_ptr<int32_t> modules_ {};
      shared_ptr<string> namespaceName_ {};
      shared_ptr<vector<int64_t>> sharedAccounts_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->namespace_ == nullptr
        && this->requestId_ == nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline const GetRegistryNamespaceResponseBody::Namespace & getNamespace() const { DARABONBA_PTR_GET_CONST(namespace_, GetRegistryNamespaceResponseBody::Namespace) };
    inline GetRegistryNamespaceResponseBody::Namespace getNamespace() { DARABONBA_PTR_GET(namespace_, GetRegistryNamespaceResponseBody::Namespace) };
    inline GetRegistryNamespaceResponseBody& setNamespace(const GetRegistryNamespaceResponseBody::Namespace & _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };
    inline GetRegistryNamespaceResponseBody& setNamespace(GetRegistryNamespaceResponseBody::Namespace && _namespace) { DARABONBA_PTR_SET_RVALUE(namespace_, _namespace) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRegistryNamespaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetRegistryNamespaceResponseBody::Namespace> namespace_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
