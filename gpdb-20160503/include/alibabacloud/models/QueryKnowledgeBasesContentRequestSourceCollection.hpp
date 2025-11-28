// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTREQUESTSOURCECOLLECTION_HPP_
#define ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTREQUESTSOURCECOLLECTION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryKnowledgeBasesContentRequestSourceCollectionQueryParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryKnowledgeBasesContentRequestSourceCollection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryKnowledgeBasesContentRequestSourceCollection& obj) { 
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_TO_JSON(QueryParams, queryParams_);
    };
    friend void from_json(const Darabonba::Json& j, QueryKnowledgeBasesContentRequestSourceCollection& obj) { 
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_FROM_JSON(QueryParams, queryParams_);
    };
    QueryKnowledgeBasesContentRequestSourceCollection() = default ;
    QueryKnowledgeBasesContentRequestSourceCollection(const QueryKnowledgeBasesContentRequestSourceCollection &) = default ;
    QueryKnowledgeBasesContentRequestSourceCollection(QueryKnowledgeBasesContentRequestSourceCollection &&) = default ;
    QueryKnowledgeBasesContentRequestSourceCollection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryKnowledgeBasesContentRequestSourceCollection() = default ;
    QueryKnowledgeBasesContentRequestSourceCollection& operator=(const QueryKnowledgeBasesContentRequestSourceCollection &) = default ;
    QueryKnowledgeBasesContentRequestSourceCollection& operator=(QueryKnowledgeBasesContentRequestSourceCollection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collection_ == nullptr
        && return this->namespace_ == nullptr && return this->namespacePassword_ == nullptr && return this->queryParams_ == nullptr; };
    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string collection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline QueryKnowledgeBasesContentRequestSourceCollection& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline QueryKnowledgeBasesContentRequestSourceCollection& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespacePassword Field Functions 
    bool hasNamespacePassword() const { return this->namespacePassword_ != nullptr;};
    void deleteNamespacePassword() { this->namespacePassword_ = nullptr;};
    inline string namespacePassword() const { DARABONBA_PTR_GET_DEFAULT(namespacePassword_, "") };
    inline QueryKnowledgeBasesContentRequestSourceCollection& setNamespacePassword(string namespacePassword) { DARABONBA_PTR_SET_VALUE(namespacePassword_, namespacePassword) };


    // queryParams Field Functions 
    bool hasQueryParams() const { return this->queryParams_ != nullptr;};
    void deleteQueryParams() { this->queryParams_ = nullptr;};
    inline const Models::QueryKnowledgeBasesContentRequestSourceCollectionQueryParams & queryParams() const { DARABONBA_PTR_GET_CONST(queryParams_, Models::QueryKnowledgeBasesContentRequestSourceCollectionQueryParams) };
    inline Models::QueryKnowledgeBasesContentRequestSourceCollectionQueryParams queryParams() { DARABONBA_PTR_GET(queryParams_, Models::QueryKnowledgeBasesContentRequestSourceCollectionQueryParams) };
    inline QueryKnowledgeBasesContentRequestSourceCollection& setQueryParams(const Models::QueryKnowledgeBasesContentRequestSourceCollectionQueryParams & queryParams) { DARABONBA_PTR_SET_VALUE(queryParams_, queryParams) };
    inline QueryKnowledgeBasesContentRequestSourceCollection& setQueryParams(Models::QueryKnowledgeBasesContentRequestSourceCollectionQueryParams && queryParams) { DARABONBA_PTR_SET_RVALUE(queryParams_, queryParams) };


  protected:
    // The name of the document collection.
    // 
    // >  You can call the [CreateDocumentCollection](https://help.aliyun.com/document_detail/2618448.html) operation to create a document collection and call the [ListDocumentCollections](https://help.aliyun.com/document_detail/2618452.html) operation to query a list of document collections.
    // 
    // This parameter is required.
    std::shared_ptr<string> collection_ = nullptr;
    // The namespace.
    // 
    // >  You can call the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) operation to create a namespace and call the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) operation to query a list of namespaces.
    std::shared_ptr<string> namespace_ = nullptr;
    // The password of the namespace.
    // 
    // >  The value of this parameter is specified when you call the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespacePassword_ = nullptr;
    // The condition that is used to filter the data to be updated. Specify this parameter in a format that is the same as the WHERE clause.
    std::shared_ptr<Models::QueryKnowledgeBasesContentRequestSourceCollectionQueryParams> queryParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
