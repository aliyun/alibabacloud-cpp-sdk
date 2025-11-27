// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTEXTUALRETRIEVALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONTEXTUALRETRIEVALREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ContextualMessage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ContextualRetrievalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContextualRetrievalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RecallOnly, recallOnly_);
      DARABONBA_PTR_TO_JSON(SmartClusterIds, smartClusterIds_);
    };
    friend void from_json(const Darabonba::Json& j, ContextualRetrievalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RecallOnly, recallOnly_);
      DARABONBA_PTR_FROM_JSON(SmartClusterIds, smartClusterIds_);
    };
    ContextualRetrievalRequest() = default ;
    ContextualRetrievalRequest(const ContextualRetrievalRequest &) = default ;
    ContextualRetrievalRequest(ContextualRetrievalRequest &&) = default ;
    ContextualRetrievalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContextualRetrievalRequest() = default ;
    ContextualRetrievalRequest& operator=(const ContextualRetrievalRequest &) = default ;
    ContextualRetrievalRequest& operator=(ContextualRetrievalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetName_ == nullptr
        && return this->messages_ == nullptr && return this->projectName_ == nullptr && return this->recallOnly_ == nullptr && return this->smartClusterIds_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline ContextualRetrievalRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<ContextualMessage> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<ContextualMessage>) };
    inline vector<ContextualMessage> messages() { DARABONBA_PTR_GET(messages_, vector<ContextualMessage>) };
    inline ContextualRetrievalRequest& setMessages(const vector<ContextualMessage> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline ContextualRetrievalRequest& setMessages(vector<ContextualMessage> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ContextualRetrievalRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // recallOnly Field Functions 
    bool hasRecallOnly() const { return this->recallOnly_ != nullptr;};
    void deleteRecallOnly() { this->recallOnly_ = nullptr;};
    inline bool recallOnly() const { DARABONBA_PTR_GET_DEFAULT(recallOnly_, false) };
    inline ContextualRetrievalRequest& setRecallOnly(bool recallOnly) { DARABONBA_PTR_SET_VALUE(recallOnly_, recallOnly) };


    // smartClusterIds Field Functions 
    bool hasSmartClusterIds() const { return this->smartClusterIds_ != nullptr;};
    void deleteSmartClusterIds() { this->smartClusterIds_ = nullptr;};
    inline const vector<string> & smartClusterIds() const { DARABONBA_PTR_GET_CONST(smartClusterIds_, vector<string>) };
    inline vector<string> smartClusterIds() { DARABONBA_PTR_GET(smartClusterIds_, vector<string>) };
    inline ContextualRetrievalRequest& setSmartClusterIds(const vector<string> & smartClusterIds) { DARABONBA_PTR_SET_VALUE(smartClusterIds_, smartClusterIds) };
    inline ContextualRetrievalRequest& setSmartClusterIds(vector<string> && smartClusterIds) { DARABONBA_PTR_SET_RVALUE(smartClusterIds_, smartClusterIds) };


  protected:
    // The dataset.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The conversation or tool invocation history. The latest message is at the end of the list (with an index number of n-1), whereas the earliest message is at the beginning of the list (with an index number of 0). Historical messages must be provided in user-assistant pairs. The maximum number of messages that you can specify is 2\\*n+1. The current question cannot exceed 1,000 characters in length. The maximum number of historical messages allowed is 100.
    // 
    // This parameter is required.
    std::shared_ptr<vector<ContextualMessage>> messages_ = nullptr;
    // The name of the project. For more information, see [CreateProject](https://help.aliyun.com/zh/imm/getting-started/create-a-project-1?spm=a2c4g.11186623.help-menu-search-62354.d_0).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // Indicates whether to enable recall-only (embedding-based search). If you set this parameter to true, returned results have not been re-ranked and can be ranked in custom order. Default value: false.
    std::shared_ptr<bool> recallOnly_ = nullptr;
    // The IDs of clusters from which results are retrieved.
    std::shared_ptr<vector<string>> smartClusterIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
