// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHARTNAMESPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHARTNAMESPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListChartNamespaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChartNamespaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListChartNamespaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListChartNamespaceResponseBody() = default ;
    ListChartNamespaceResponseBody(const ListChartNamespaceResponseBody &) = default ;
    ListChartNamespaceResponseBody(ListChartNamespaceResponseBody &&) = default ;
    ListChartNamespaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChartNamespaceResponseBody() = default ;
    ListChartNamespaceResponseBody& operator=(const ListChartNamespaceResponseBody &) = default ;
    ListChartNamespaceResponseBody& operator=(ListChartNamespaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Namespaces : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Namespaces& obj) { 
        DARABONBA_PTR_TO_JSON(AutoCreateRepo, autoCreateRepo_);
        DARABONBA_PTR_TO_JSON(DefaultRepoType, defaultRepoType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
        DARABONBA_PTR_TO_JSON(NamespaceStatus, namespaceStatus_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, Namespaces& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoCreateRepo, autoCreateRepo_);
        DARABONBA_PTR_FROM_JSON(DefaultRepoType, defaultRepoType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
        DARABONBA_PTR_FROM_JSON(NamespaceStatus, namespaceStatus_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
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
      virtual bool empty() const override { return this->autoCreateRepo_ == nullptr
        && this->defaultRepoType_ == nullptr && this->instanceId_ == nullptr && this->namespaceId_ == nullptr && this->namespaceName_ == nullptr && this->namespaceStatus_ == nullptr
        && this->resourceGroupId_ == nullptr; };
      // autoCreateRepo Field Functions 
      bool hasAutoCreateRepo() const { return this->autoCreateRepo_ != nullptr;};
      void deleteAutoCreateRepo() { this->autoCreateRepo_ = nullptr;};
      inline bool getAutoCreateRepo() const { DARABONBA_PTR_GET_DEFAULT(autoCreateRepo_, false) };
      inline Namespaces& setAutoCreateRepo(bool autoCreateRepo) { DARABONBA_PTR_SET_VALUE(autoCreateRepo_, autoCreateRepo) };


      // defaultRepoType Field Functions 
      bool hasDefaultRepoType() const { return this->defaultRepoType_ != nullptr;};
      void deleteDefaultRepoType() { this->defaultRepoType_ = nullptr;};
      inline string getDefaultRepoType() const { DARABONBA_PTR_GET_DEFAULT(defaultRepoType_, "") };
      inline Namespaces& setDefaultRepoType(string defaultRepoType) { DARABONBA_PTR_SET_VALUE(defaultRepoType_, defaultRepoType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Namespaces& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // namespaceId Field Functions 
      bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
      void deleteNamespaceId() { this->namespaceId_ = nullptr;};
      inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
      inline Namespaces& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


      // namespaceName Field Functions 
      bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
      void deleteNamespaceName() { this->namespaceName_ = nullptr;};
      inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
      inline Namespaces& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


      // namespaceStatus Field Functions 
      bool hasNamespaceStatus() const { return this->namespaceStatus_ != nullptr;};
      void deleteNamespaceStatus() { this->namespaceStatus_ = nullptr;};
      inline string getNamespaceStatus() const { DARABONBA_PTR_GET_DEFAULT(namespaceStatus_, "") };
      inline Namespaces& setNamespaceStatus(string namespaceStatus) { DARABONBA_PTR_SET_VALUE(namespaceStatus_, namespaceStatus) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Namespaces& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    protected:
      // Indicates whether a repository was automatically created when a chart is pushed to the namespace.
      shared_ptr<bool> autoCreateRepo_ {};
      // The default repository type. Valid values:
      // 
      // *   `PUBLIC`: a public repository
      // *   `PRIVATE`: a private repository
      shared_ptr<string> defaultRepoType_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The ID of the namespace.
      shared_ptr<string> namespaceId_ {};
      // The name of the namespace.
      shared_ptr<string> namespaceName_ {};
      // The status of the namespace. Valid values:
      // 
      // *   `NORMAL`: The namespace is normal.
      // *   `DELETING`: The namespace is being deleted.
      shared_ptr<string> namespaceStatus_ {};
      // The ID of the resource group to which the instance belongs.
      shared_ptr<string> resourceGroupId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->isSuccess_ == nullptr && this->namespaces_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListChartNamespaceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListChartNamespaceResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // namespaces Field Functions 
    bool hasNamespaces() const { return this->namespaces_ != nullptr;};
    void deleteNamespaces() { this->namespaces_ = nullptr;};
    inline const vector<ListChartNamespaceResponseBody::Namespaces> & getNamespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<ListChartNamespaceResponseBody::Namespaces>) };
    inline vector<ListChartNamespaceResponseBody::Namespaces> getNamespaces() { DARABONBA_PTR_GET(namespaces_, vector<ListChartNamespaceResponseBody::Namespaces>) };
    inline ListChartNamespaceResponseBody& setNamespaces(const vector<ListChartNamespaceResponseBody::Namespaces> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
    inline ListChartNamespaceResponseBody& setNamespaces(vector<ListChartNamespaceResponseBody::Namespaces> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListChartNamespaceResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListChartNamespaceResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListChartNamespaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListChartNamespaceResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The return value.
    shared_ptr<string> code_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> isSuccess_ {};
    // The namespaces.
    shared_ptr<vector<ListChartNamespaceResponseBody::Namespaces>> namespaces_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
