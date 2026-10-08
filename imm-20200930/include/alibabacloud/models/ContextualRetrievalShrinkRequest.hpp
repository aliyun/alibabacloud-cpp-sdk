// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTEXTUALRETRIEVALSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONTEXTUALRETRIEVALSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ContextualRetrievalShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContextualRetrievalShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Messages, messagesShrink_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RecallOnly, recallOnly_);
      DARABONBA_PTR_TO_JSON(SmartClusterIds, smartClusterIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ContextualRetrievalShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Messages, messagesShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RecallOnly, recallOnly_);
      DARABONBA_PTR_FROM_JSON(SmartClusterIds, smartClusterIdsShrink_);
    };
    ContextualRetrievalShrinkRequest() = default ;
    ContextualRetrievalShrinkRequest(const ContextualRetrievalShrinkRequest &) = default ;
    ContextualRetrievalShrinkRequest(ContextualRetrievalShrinkRequest &&) = default ;
    ContextualRetrievalShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContextualRetrievalShrinkRequest() = default ;
    ContextualRetrievalShrinkRequest& operator=(const ContextualRetrievalShrinkRequest &) = default ;
    ContextualRetrievalShrinkRequest& operator=(ContextualRetrievalShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetName_ == nullptr
        && this->messagesShrink_ == nullptr && this->projectName_ == nullptr && this->recallOnly_ == nullptr && this->smartClusterIdsShrink_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline ContextualRetrievalShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // messagesShrink Field Functions 
    bool hasMessagesShrink() const { return this->messagesShrink_ != nullptr;};
    void deleteMessagesShrink() { this->messagesShrink_ = nullptr;};
    inline string getMessagesShrink() const { DARABONBA_PTR_GET_DEFAULT(messagesShrink_, "") };
    inline ContextualRetrievalShrinkRequest& setMessagesShrink(string messagesShrink) { DARABONBA_PTR_SET_VALUE(messagesShrink_, messagesShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ContextualRetrievalShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // recallOnly Field Functions 
    bool hasRecallOnly() const { return this->recallOnly_ != nullptr;};
    void deleteRecallOnly() { this->recallOnly_ = nullptr;};
    inline bool getRecallOnly() const { DARABONBA_PTR_GET_DEFAULT(recallOnly_, false) };
    inline ContextualRetrievalShrinkRequest& setRecallOnly(bool recallOnly) { DARABONBA_PTR_SET_VALUE(recallOnly_, recallOnly) };


    // smartClusterIdsShrink Field Functions 
    bool hasSmartClusterIdsShrink() const { return this->smartClusterIdsShrink_ != nullptr;};
    void deleteSmartClusterIdsShrink() { this->smartClusterIdsShrink_ = nullptr;};
    inline string getSmartClusterIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(smartClusterIdsShrink_, "") };
    inline ContextualRetrievalShrinkRequest& setSmartClusterIdsShrink(string smartClusterIdsShrink) { DARABONBA_PTR_SET_VALUE(smartClusterIdsShrink_, smartClusterIdsShrink) };


  protected:
    // The dataset used for retrieval.
    // 
    // This parameter is required.
    shared_ptr<string> datasetName_ {};
    // The conversation history and tool calling history. The latest message is at the end (index n-1), and the oldest message is at the beginning (index 0). The messages must be in user-assistant pairs, with a total count of 2*n+1, and the length of the latest question cannot exceed 1,000 characters. The conversation history is limited to 100 messages.
    // 
    // This parameter is required.
    shared_ptr<string> messagesShrink_ {};
    // The name of the project. For more information about how to obtain the project name, see [Create a project](https://www.alibabacloud.com/help/en/imm/getting-started/create-a-project-1).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // Specifies whether to enable only the recall process (embedding search). If this parameter is set to true, the returned data is not reranked, which allows you to customize the reranking process. Default value: false.
    shared_ptr<bool> recallOnly_ {};
    // The list of smart cluster IDs, which are used to retrieve files within specific smart clusters.
    shared_ptr<string> smartClusterIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
