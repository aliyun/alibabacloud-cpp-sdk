// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDOCCLUSTERTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDOCCLUSTERTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitDocClusterTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDocClusterTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Documents, documentsShrink_);
      DARABONBA_PTR_TO_JSON(SummaryLength, summaryLength_);
      DARABONBA_PTR_TO_JSON(TitleLength, titleLength_);
      DARABONBA_PTR_TO_JSON(TopicCount, topicCount_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDocClusterTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Documents, documentsShrink_);
      DARABONBA_PTR_FROM_JSON(SummaryLength, summaryLength_);
      DARABONBA_PTR_FROM_JSON(TitleLength, titleLength_);
      DARABONBA_PTR_FROM_JSON(TopicCount, topicCount_);
    };
    SubmitDocClusterTaskShrinkRequest() = default ;
    SubmitDocClusterTaskShrinkRequest(const SubmitDocClusterTaskShrinkRequest &) = default ;
    SubmitDocClusterTaskShrinkRequest(SubmitDocClusterTaskShrinkRequest &&) = default ;
    SubmitDocClusterTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDocClusterTaskShrinkRequest() = default ;
    SubmitDocClusterTaskShrinkRequest& operator=(const SubmitDocClusterTaskShrinkRequest &) = default ;
    SubmitDocClusterTaskShrinkRequest& operator=(SubmitDocClusterTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->documentsShrink_ == nullptr && return this->summaryLength_ == nullptr && return this->titleLength_ == nullptr && return this->topicCount_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline SubmitDocClusterTaskShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // documentsShrink Field Functions 
    bool hasDocumentsShrink() const { return this->documentsShrink_ != nullptr;};
    void deleteDocumentsShrink() { this->documentsShrink_ = nullptr;};
    inline string documentsShrink() const { DARABONBA_PTR_GET_DEFAULT(documentsShrink_, "") };
    inline SubmitDocClusterTaskShrinkRequest& setDocumentsShrink(string documentsShrink) { DARABONBA_PTR_SET_VALUE(documentsShrink_, documentsShrink) };


    // summaryLength Field Functions 
    bool hasSummaryLength() const { return this->summaryLength_ != nullptr;};
    void deleteSummaryLength() { this->summaryLength_ = nullptr;};
    inline int32_t summaryLength() const { DARABONBA_PTR_GET_DEFAULT(summaryLength_, 0) };
    inline SubmitDocClusterTaskShrinkRequest& setSummaryLength(int32_t summaryLength) { DARABONBA_PTR_SET_VALUE(summaryLength_, summaryLength) };


    // titleLength Field Functions 
    bool hasTitleLength() const { return this->titleLength_ != nullptr;};
    void deleteTitleLength() { this->titleLength_ = nullptr;};
    inline int32_t titleLength() const { DARABONBA_PTR_GET_DEFAULT(titleLength_, 0) };
    inline SubmitDocClusterTaskShrinkRequest& setTitleLength(int32_t titleLength) { DARABONBA_PTR_SET_VALUE(titleLength_, titleLength) };


    // topicCount Field Functions 
    bool hasTopicCount() const { return this->topicCount_ != nullptr;};
    void deleteTopicCount() { this->topicCount_ = nullptr;};
    inline int32_t topicCount() const { DARABONBA_PTR_GET_DEFAULT(topicCount_, 0) };
    inline SubmitDocClusterTaskShrinkRequest& setTopicCount(int32_t topicCount) { DARABONBA_PTR_SET_VALUE(topicCount_, topicCount) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> documentsShrink_ = nullptr;
    std::shared_ptr<int32_t> summaryLength_ = nullptr;
    std::shared_ptr<int32_t> titleLength_ = nullptr;
    std::shared_ptr<int32_t> topicCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
