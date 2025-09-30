// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMRESPONSEBODYMULTICOLLECTIONRECALLRESULTMATCHESMETADATA_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMRESPONSEBODYMULTICOLLECTIONRECALLRESULTMATCHESMETADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata() = default ;
    ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata(const ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata &) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata(ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata &&) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata() = default ;
    ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata& operator=(const ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata &) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata& operator=(ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->source_ != nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline int64_t source() const { DARABONBA_PTR_GET_DEFAULT(source_, 0L) };
    inline ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata& setSource(int64_t source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    std::shared_ptr<int64_t> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
