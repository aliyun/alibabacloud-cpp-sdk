// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETADATAINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMETADATAINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListMetadataInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetadataInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(env, env_);
      DARABONBA_PTR_TO_JSON(namespace_id, namespaceId_);
      DARABONBA_PTR_TO_JSON(namespace_name, namespaceName_);
      DARABONBA_PTR_TO_JSON(order_by, orderBy_);
      DARABONBA_PTR_TO_JSON(order_direction, orderDirection_);
      DARABONBA_PTR_TO_JSON(org_id, orgId_);
      DARABONBA_PTR_TO_JSON(page_number, pageNumber_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(pbc_id, pbcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetadataInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(env, env_);
      DARABONBA_PTR_FROM_JSON(namespace_id, namespaceId_);
      DARABONBA_PTR_FROM_JSON(namespace_name, namespaceName_);
      DARABONBA_PTR_FROM_JSON(order_by, orderBy_);
      DARABONBA_PTR_FROM_JSON(order_direction, orderDirection_);
      DARABONBA_PTR_FROM_JSON(org_id, orgId_);
      DARABONBA_PTR_FROM_JSON(page_number, pageNumber_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(pbc_id, pbcId_);
    };
    ListMetadataInfosRequest() = default ;
    ListMetadataInfosRequest(const ListMetadataInfosRequest &) = default ;
    ListMetadataInfosRequest(ListMetadataInfosRequest &&) = default ;
    ListMetadataInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetadataInfosRequest() = default ;
    ListMetadataInfosRequest& operator=(const ListMetadataInfosRequest &) = default ;
    ListMetadataInfosRequest& operator=(ListMetadataInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr
        && this->namespaceId_ == nullptr && this->namespaceName_ == nullptr && this->orderBy_ == nullptr && this->orderDirection_ == nullptr && this->orgId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->pbcId_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ListMetadataInfosRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline int64_t getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, 0L) };
    inline ListMetadataInfosRequest& setNamespaceId(int64_t namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline ListMetadataInfosRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListMetadataInfosRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline ListMetadataInfosRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline int32_t getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, 0) };
    inline ListMetadataInfosRequest& setOrgId(int32_t orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListMetadataInfosRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMetadataInfosRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pbcId Field Functions 
    bool hasPbcId() const { return this->pbcId_ != nullptr;};
    void deletePbcId() { this->pbcId_ = nullptr;};
    inline int64_t getPbcId() const { DARABONBA_PTR_GET_DEFAULT(pbcId_, 0L) };
    inline ListMetadataInfosRequest& setPbcId(int64_t pbcId) { DARABONBA_PTR_SET_VALUE(pbcId_, pbcId) };


  protected:
    shared_ptr<string> env_ {};
    shared_ptr<int64_t> namespaceId_ {};
    shared_ptr<string> namespaceName_ {};
    shared_ptr<string> orderBy_ {};
    shared_ptr<string> orderDirection_ {};
    shared_ptr<int32_t> orgId_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    // This parameter is required.
    shared_ptr<int64_t> pbcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
