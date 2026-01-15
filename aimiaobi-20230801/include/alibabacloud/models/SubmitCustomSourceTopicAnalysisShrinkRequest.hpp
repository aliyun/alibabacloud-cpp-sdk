// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCUSTOMSOURCETOPICANALYSISSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCUSTOMSOURCETOPICANALYSISSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitCustomSourceTopicAnalysisShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCustomSourceTopicAnalysisShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisTypes, analysisTypesShrink_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(MaxTopicSize, maxTopicSize_);
      DARABONBA_PTR_TO_JSON(News, newsShrink_);
      DARABONBA_PTR_TO_JSON(Topics, topicsShrink_);
      DARABONBA_PTR_TO_JSON(TopicsFileUrl, topicsFileUrl_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCustomSourceTopicAnalysisShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisTypes, analysisTypesShrink_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(MaxTopicSize, maxTopicSize_);
      DARABONBA_PTR_FROM_JSON(News, newsShrink_);
      DARABONBA_PTR_FROM_JSON(Topics, topicsShrink_);
      DARABONBA_PTR_FROM_JSON(TopicsFileUrl, topicsFileUrl_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitCustomSourceTopicAnalysisShrinkRequest() = default ;
    SubmitCustomSourceTopicAnalysisShrinkRequest(const SubmitCustomSourceTopicAnalysisShrinkRequest &) = default ;
    SubmitCustomSourceTopicAnalysisShrinkRequest(SubmitCustomSourceTopicAnalysisShrinkRequest &&) = default ;
    SubmitCustomSourceTopicAnalysisShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCustomSourceTopicAnalysisShrinkRequest() = default ;
    SubmitCustomSourceTopicAnalysisShrinkRequest& operator=(const SubmitCustomSourceTopicAnalysisShrinkRequest &) = default ;
    SubmitCustomSourceTopicAnalysisShrinkRequest& operator=(SubmitCustomSourceTopicAnalysisShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisTypesShrink_ == nullptr
        && this->fileType_ == nullptr && this->fileUrl_ == nullptr && this->maxTopicSize_ == nullptr && this->newsShrink_ == nullptr && this->topicsShrink_ == nullptr
        && this->topicsFileUrl_ == nullptr && this->workspaceId_ == nullptr; };
    // analysisTypesShrink Field Functions 
    bool hasAnalysisTypesShrink() const { return this->analysisTypesShrink_ != nullptr;};
    void deleteAnalysisTypesShrink() { this->analysisTypesShrink_ = nullptr;};
    inline string getAnalysisTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(analysisTypesShrink_, "") };
    inline SubmitCustomSourceTopicAnalysisShrinkRequest& setAnalysisTypesShrink(string analysisTypesShrink) { DARABONBA_PTR_SET_VALUE(analysisTypesShrink_, analysisTypesShrink) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline SubmitCustomSourceTopicAnalysisShrinkRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline SubmitCustomSourceTopicAnalysisShrinkRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // maxTopicSize Field Functions 
    bool hasMaxTopicSize() const { return this->maxTopicSize_ != nullptr;};
    void deleteMaxTopicSize() { this->maxTopicSize_ = nullptr;};
    inline int32_t getMaxTopicSize() const { DARABONBA_PTR_GET_DEFAULT(maxTopicSize_, 0) };
    inline SubmitCustomSourceTopicAnalysisShrinkRequest& setMaxTopicSize(int32_t maxTopicSize) { DARABONBA_PTR_SET_VALUE(maxTopicSize_, maxTopicSize) };


    // newsShrink Field Functions 
    bool hasNewsShrink() const { return this->newsShrink_ != nullptr;};
    void deleteNewsShrink() { this->newsShrink_ = nullptr;};
    inline string getNewsShrink() const { DARABONBA_PTR_GET_DEFAULT(newsShrink_, "") };
    inline SubmitCustomSourceTopicAnalysisShrinkRequest& setNewsShrink(string newsShrink) { DARABONBA_PTR_SET_VALUE(newsShrink_, newsShrink) };


    // topicsShrink Field Functions 
    bool hasTopicsShrink() const { return this->topicsShrink_ != nullptr;};
    void deleteTopicsShrink() { this->topicsShrink_ = nullptr;};
    inline string getTopicsShrink() const { DARABONBA_PTR_GET_DEFAULT(topicsShrink_, "") };
    inline SubmitCustomSourceTopicAnalysisShrinkRequest& setTopicsShrink(string topicsShrink) { DARABONBA_PTR_SET_VALUE(topicsShrink_, topicsShrink) };


    // topicsFileUrl Field Functions 
    bool hasTopicsFileUrl() const { return this->topicsFileUrl_ != nullptr;};
    void deleteTopicsFileUrl() { this->topicsFileUrl_ = nullptr;};
    inline string getTopicsFileUrl() const { DARABONBA_PTR_GET_DEFAULT(topicsFileUrl_, "") };
    inline SubmitCustomSourceTopicAnalysisShrinkRequest& setTopicsFileUrl(string topicsFileUrl) { DARABONBA_PTR_SET_VALUE(topicsFileUrl_, topicsFileUrl) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitCustomSourceTopicAnalysisShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> analysisTypesShrink_ {};
    shared_ptr<string> fileType_ {};
    shared_ptr<string> fileUrl_ {};
    shared_ptr<int32_t> maxTopicSize_ {};
    shared_ptr<string> newsShrink_ {};
    shared_ptr<string> topicsShrink_ {};
    shared_ptr<string> topicsFileUrl_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
