// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCUSTOMSOURCETOPICANALYSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCUSTOMSOURCETOPICANALYSISREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitCustomSourceTopicAnalysisRequestNews.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitCustomSourceTopicAnalysisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCustomSourceTopicAnalysisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisTypes, analysisTypes_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(MaxTopicSize, maxTopicSize_);
      DARABONBA_PTR_TO_JSON(News, news_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCustomSourceTopicAnalysisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisTypes, analysisTypes_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(MaxTopicSize, maxTopicSize_);
      DARABONBA_PTR_FROM_JSON(News, news_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitCustomSourceTopicAnalysisRequest() = default ;
    SubmitCustomSourceTopicAnalysisRequest(const SubmitCustomSourceTopicAnalysisRequest &) = default ;
    SubmitCustomSourceTopicAnalysisRequest(SubmitCustomSourceTopicAnalysisRequest &&) = default ;
    SubmitCustomSourceTopicAnalysisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCustomSourceTopicAnalysisRequest() = default ;
    SubmitCustomSourceTopicAnalysisRequest& operator=(const SubmitCustomSourceTopicAnalysisRequest &) = default ;
    SubmitCustomSourceTopicAnalysisRequest& operator=(SubmitCustomSourceTopicAnalysisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->analysisTypes_ != nullptr
        && this->fileType_ != nullptr && this->fileUrl_ != nullptr && this->maxTopicSize_ != nullptr && this->news_ != nullptr && this->workspaceId_ != nullptr; };
    // analysisTypes Field Functions 
    bool hasAnalysisTypes() const { return this->analysisTypes_ != nullptr;};
    void deleteAnalysisTypes() { this->analysisTypes_ = nullptr;};
    inline const vector<string> & analysisTypes() const { DARABONBA_PTR_GET_CONST(analysisTypes_, vector<string>) };
    inline vector<string> analysisTypes() { DARABONBA_PTR_GET(analysisTypes_, vector<string>) };
    inline SubmitCustomSourceTopicAnalysisRequest& setAnalysisTypes(const vector<string> & analysisTypes) { DARABONBA_PTR_SET_VALUE(analysisTypes_, analysisTypes) };
    inline SubmitCustomSourceTopicAnalysisRequest& setAnalysisTypes(vector<string> && analysisTypes) { DARABONBA_PTR_SET_RVALUE(analysisTypes_, analysisTypes) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline SubmitCustomSourceTopicAnalysisRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline SubmitCustomSourceTopicAnalysisRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // maxTopicSize Field Functions 
    bool hasMaxTopicSize() const { return this->maxTopicSize_ != nullptr;};
    void deleteMaxTopicSize() { this->maxTopicSize_ = nullptr;};
    inline int32_t maxTopicSize() const { DARABONBA_PTR_GET_DEFAULT(maxTopicSize_, 0) };
    inline SubmitCustomSourceTopicAnalysisRequest& setMaxTopicSize(int32_t maxTopicSize) { DARABONBA_PTR_SET_VALUE(maxTopicSize_, maxTopicSize) };


    // news Field Functions 
    bool hasNews() const { return this->news_ != nullptr;};
    void deleteNews() { this->news_ = nullptr;};
    inline const vector<SubmitCustomSourceTopicAnalysisRequestNews> & news() const { DARABONBA_PTR_GET_CONST(news_, vector<SubmitCustomSourceTopicAnalysisRequestNews>) };
    inline vector<SubmitCustomSourceTopicAnalysisRequestNews> news() { DARABONBA_PTR_GET(news_, vector<SubmitCustomSourceTopicAnalysisRequestNews>) };
    inline SubmitCustomSourceTopicAnalysisRequest& setNews(const vector<SubmitCustomSourceTopicAnalysisRequestNews> & news) { DARABONBA_PTR_SET_VALUE(news_, news) };
    inline SubmitCustomSourceTopicAnalysisRequest& setNews(vector<SubmitCustomSourceTopicAnalysisRequestNews> && news) { DARABONBA_PTR_SET_RVALUE(news_, news) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitCustomSourceTopicAnalysisRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<vector<string>> analysisTypes_ = nullptr;
    std::shared_ptr<string> fileType_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<int32_t> maxTopicSize_ = nullptr;
    std::shared_ptr<vector<SubmitCustomSourceTopicAnalysisRequestNews>> news_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
