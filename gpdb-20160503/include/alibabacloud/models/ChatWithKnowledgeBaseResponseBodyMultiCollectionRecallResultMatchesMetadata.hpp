// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASERESPONSEBODYMULTICOLLECTIONRECALLRESULTMATCHESMETADATA_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASERESPONSEBODYMULTICOLLECTIONRECALLRESULTMATCHESMETADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatchesMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatchesMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatchesMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatchesMetadata() = default ;
    ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatchesMetadata(const ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatchesMetadata &) = default ;
    ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatchesMetadata(ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatchesMetadata &&) = default ;
    ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatchesMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatchesMetadata() = default ;
    ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatchesMetadata& operator=(const ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatchesMetadata &) = default ;
    ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatchesMetadata& operator=(ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatchesMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->source_ == nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline int64_t source() const { DARABONBA_PTR_GET_DEFAULT(source_, 0L) };
    inline ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatchesMetadata& setSource(int64_t source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    std::shared_ptr<int64_t> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
