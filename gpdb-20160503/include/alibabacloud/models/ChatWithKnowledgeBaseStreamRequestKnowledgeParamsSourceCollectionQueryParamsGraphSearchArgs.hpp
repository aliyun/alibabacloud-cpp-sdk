// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMREQUESTKNOWLEDGEPARAMSSOURCECOLLECTIONQUERYPARAMSGRAPHSEARCHARGS_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMREQUESTKNOWLEDGEPARAMSSOURCECOLLECTIONQUERYPARAMSGRAPHSEARCHARGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs& obj) { 
      DARABONBA_PTR_TO_JSON(GraphTopK, graphTopK_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(GraphTopK, graphTopK_);
    };
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs() = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs(const ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs &) = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs(ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs &&) = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs() = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs& operator=(const ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs &) = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs& operator=(ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->graphTopK_ == nullptr; };
    // graphTopK Field Functions 
    bool hasGraphTopK() const { return this->graphTopK_ != nullptr;};
    void deleteGraphTopK() { this->graphTopK_ = nullptr;};
    inline int64_t graphTopK() const { DARABONBA_PTR_GET_DEFAULT(graphTopK_, 0L) };
    inline ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs& setGraphTopK(int64_t graphTopK) { DARABONBA_PTR_SET_VALUE(graphTopK_, graphTopK) };


  protected:
    // The number of top entities and relationship edges. Default value: 60.
    std::shared_ptr<int64_t> graphTopK_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
