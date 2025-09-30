// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMREQUESTKNOWLEDGEPARAMSSOURCECOLLECTION_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMREQUESTKNOWLEDGEPARAMSSOURCECOLLECTION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection& obj) { 
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_TO_JSON(QueryParams, queryParams_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection& obj) { 
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_FROM_JSON(QueryParams, queryParams_);
    };
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection() = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection(const ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection &) = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection(ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection &&) = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection() = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection& operator=(const ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection &) = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection& operator=(ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->collection_ != nullptr
        && this->namespace_ != nullptr && this->namespacePassword_ != nullptr && this->queryParams_ != nullptr; };
    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string collection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespacePassword Field Functions 
    bool hasNamespacePassword() const { return this->namespacePassword_ != nullptr;};
    void deleteNamespacePassword() { this->namespacePassword_ = nullptr;};
    inline string namespacePassword() const { DARABONBA_PTR_GET_DEFAULT(namespacePassword_, "") };
    inline ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection& setNamespacePassword(string namespacePassword) { DARABONBA_PTR_SET_VALUE(namespacePassword_, namespacePassword) };


    // queryParams Field Functions 
    bool hasQueryParams() const { return this->queryParams_ != nullptr;};
    void deleteQueryParams() { this->queryParams_ = nullptr;};
    inline const Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParams & queryParams() const { DARABONBA_PTR_GET_CONST(queryParams_, Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParams) };
    inline Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParams queryParams() { DARABONBA_PTR_GET(queryParams_, Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParams) };
    inline ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection& setQueryParams(const Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParams & queryParams) { DARABONBA_PTR_SET_VALUE(queryParams_, queryParams) };
    inline ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection& setQueryParams(Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParams && queryParams) { DARABONBA_PTR_SET_RVALUE(queryParams_, queryParams) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> collection_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> namespacePassword_ = nullptr;
    std::shared_ptr<Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParams> queryParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
