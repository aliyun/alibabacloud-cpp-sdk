// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGISTRYNAMESPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREGISTRYNAMESPACESRESPONSEBODY_HPP_
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
  class ListRegistryNamespacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegistryNamespacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(namespaces, namespaces_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegistryNamespacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(namespaces, namespaces_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListRegistryNamespacesResponseBody() = default ;
    ListRegistryNamespacesResponseBody(const ListRegistryNamespacesResponseBody &) = default ;
    ListRegistryNamespacesResponseBody(ListRegistryNamespacesResponseBody &&) = default ;
    ListRegistryNamespacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegistryNamespacesResponseBody() = default ;
    ListRegistryNamespacesResponseBody& operator=(const ListRegistryNamespacesResponseBody &) = default ;
    ListRegistryNamespacesResponseBody& operator=(ListRegistryNamespacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Namespaces : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Namespaces& obj) { 
        DARABONBA_PTR_TO_JSON(acl, acl_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(maintainer, maintainer_);
        DARABONBA_PTR_TO_JSON(modules, modules_);
        DARABONBA_PTR_TO_JSON(namespaceName, namespaceName_);
        DARABONBA_PTR_TO_JSON(sharedAccounts, sharedAccounts_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Namespaces& obj) { 
        DARABONBA_PTR_FROM_JSON(acl, acl_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(maintainer, maintainer_);
        DARABONBA_PTR_FROM_JSON(modules, modules_);
        DARABONBA_PTR_FROM_JSON(namespaceName, namespaceName_);
        DARABONBA_PTR_FROM_JSON(sharedAccounts, sharedAccounts_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Namespaces() = default ;
      Namespaces(const Namespaces &) = default ;
      Namespaces(Namespaces &&) = default ;
      Namespaces(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Namespaces() = default ;
      Namespaces& operator=(const Namespaces &) = default ;
      Namespaces& operator=(Namespaces &&) = default ;
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
      inline Namespaces& setAcl(string acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Namespaces& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Namespaces& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // maintainer Field Functions 
      bool hasMaintainer() const { return this->maintainer_ != nullptr;};
      void deleteMaintainer() { this->maintainer_ = nullptr;};
      inline string getMaintainer() const { DARABONBA_PTR_GET_DEFAULT(maintainer_, "") };
      inline Namespaces& setMaintainer(string maintainer) { DARABONBA_PTR_SET_VALUE(maintainer_, maintainer) };


      // modules Field Functions 
      bool hasModules() const { return this->modules_ != nullptr;};
      void deleteModules() { this->modules_ = nullptr;};
      inline int32_t getModules() const { DARABONBA_PTR_GET_DEFAULT(modules_, 0) };
      inline Namespaces& setModules(int32_t modules) { DARABONBA_PTR_SET_VALUE(modules_, modules) };


      // namespaceName Field Functions 
      bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
      void deleteNamespaceName() { this->namespaceName_ = nullptr;};
      inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
      inline Namespaces& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


      // sharedAccounts Field Functions 
      bool hasSharedAccounts() const { return this->sharedAccounts_ != nullptr;};
      void deleteSharedAccounts() { this->sharedAccounts_ = nullptr;};
      inline const vector<int64_t> & getSharedAccounts() const { DARABONBA_PTR_GET_CONST(sharedAccounts_, vector<int64_t>) };
      inline vector<int64_t> getSharedAccounts() { DARABONBA_PTR_GET(sharedAccounts_, vector<int64_t>) };
      inline Namespaces& setSharedAccounts(const vector<int64_t> & sharedAccounts) { DARABONBA_PTR_SET_VALUE(sharedAccounts_, sharedAccounts) };
      inline Namespaces& setSharedAccounts(vector<int64_t> && sharedAccounts) { DARABONBA_PTR_SET_RVALUE(sharedAccounts_, sharedAccounts) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Namespaces& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


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

    virtual bool empty() const override { return this->count_ == nullptr
        && this->maxResults_ == nullptr && this->namespaces_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListRegistryNamespacesResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRegistryNamespacesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // namespaces Field Functions 
    bool hasNamespaces() const { return this->namespaces_ != nullptr;};
    void deleteNamespaces() { this->namespaces_ = nullptr;};
    inline const vector<ListRegistryNamespacesResponseBody::Namespaces> & getNamespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<ListRegistryNamespacesResponseBody::Namespaces>) };
    inline vector<ListRegistryNamespacesResponseBody::Namespaces> getNamespaces() { DARABONBA_PTR_GET(namespaces_, vector<ListRegistryNamespacesResponseBody::Namespaces>) };
    inline ListRegistryNamespacesResponseBody& setNamespaces(const vector<ListRegistryNamespacesResponseBody::Namespaces> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
    inline ListRegistryNamespacesResponseBody& setNamespaces(vector<ListRegistryNamespacesResponseBody::Namespaces> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRegistryNamespacesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRegistryNamespacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int64_t> count_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<vector<ListRegistryNamespacesResponseBody::Namespaces>> namespaces_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
