// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALISTMEDIASUMMARYLISTSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALISTMEDIASUMMARYLISTSUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaListResponseBodyMediaListMediaSummaryListSummaryFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListResponseBodyMediaListMediaSummaryListSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListResponseBodyMediaListMediaSummaryListSummary& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
      DARABONBA_PTR_TO_JSON(File, file_);
      DARABONBA_PTR_TO_JSON(MediaWorkflowId, mediaWorkflowId_);
      DARABONBA_PTR_TO_JSON(MediaWorkflowName, mediaWorkflowName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListResponseBodyMediaListMediaSummaryListSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
      DARABONBA_PTR_FROM_JSON(File, file_);
      DARABONBA_PTR_FROM_JSON(MediaWorkflowId, mediaWorkflowId_);
      DARABONBA_PTR_FROM_JSON(MediaWorkflowName, mediaWorkflowName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryMediaListResponseBodyMediaListMediaSummaryListSummary() = default ;
    QueryMediaListResponseBodyMediaListMediaSummaryListSummary(const QueryMediaListResponseBodyMediaListMediaSummaryListSummary &) = default ;
    QueryMediaListResponseBodyMediaListMediaSummaryListSummary(QueryMediaListResponseBodyMediaListMediaSummaryListSummary &&) = default ;
    QueryMediaListResponseBodyMediaListMediaSummaryListSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListResponseBodyMediaListMediaSummaryListSummary() = default ;
    QueryMediaListResponseBodyMediaListMediaSummaryListSummary& operator=(const QueryMediaListResponseBodyMediaListMediaSummaryListSummary &) = default ;
    QueryMediaListResponseBodyMediaListMediaSummaryListSummary& operator=(QueryMediaListResponseBodyMediaListMediaSummaryListSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityName_ == nullptr
        && return this->file_ == nullptr && return this->mediaWorkflowId_ == nullptr && return this->mediaWorkflowName_ == nullptr && return this->type_ == nullptr; };
    // activityName Field Functions 
    bool hasActivityName() const { return this->activityName_ != nullptr;};
    void deleteActivityName() { this->activityName_ = nullptr;};
    inline string activityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
    inline QueryMediaListResponseBodyMediaListMediaSummaryListSummary& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline const Models::QueryMediaListResponseBodyMediaListMediaSummaryListSummaryFile & file() const { DARABONBA_PTR_GET_CONST(file_, Models::QueryMediaListResponseBodyMediaListMediaSummaryListSummaryFile) };
    inline Models::QueryMediaListResponseBodyMediaListMediaSummaryListSummaryFile file() { DARABONBA_PTR_GET(file_, Models::QueryMediaListResponseBodyMediaListMediaSummaryListSummaryFile) };
    inline QueryMediaListResponseBodyMediaListMediaSummaryListSummary& setFile(const Models::QueryMediaListResponseBodyMediaListMediaSummaryListSummaryFile & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
    inline QueryMediaListResponseBodyMediaListMediaSummaryListSummary& setFile(Models::QueryMediaListResponseBodyMediaListMediaSummaryListSummaryFile && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


    // mediaWorkflowId Field Functions 
    bool hasMediaWorkflowId() const { return this->mediaWorkflowId_ != nullptr;};
    void deleteMediaWorkflowId() { this->mediaWorkflowId_ = nullptr;};
    inline string mediaWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowId_, "") };
    inline QueryMediaListResponseBodyMediaListMediaSummaryListSummary& setMediaWorkflowId(string mediaWorkflowId) { DARABONBA_PTR_SET_VALUE(mediaWorkflowId_, mediaWorkflowId) };


    // mediaWorkflowName Field Functions 
    bool hasMediaWorkflowName() const { return this->mediaWorkflowName_ != nullptr;};
    void deleteMediaWorkflowName() { this->mediaWorkflowName_ = nullptr;};
    inline string mediaWorkflowName() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowName_, "") };
    inline QueryMediaListResponseBodyMediaListMediaSummaryListSummary& setMediaWorkflowName(string mediaWorkflowName) { DARABONBA_PTR_SET_VALUE(mediaWorkflowName_, mediaWorkflowName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryMediaListResponseBodyMediaListMediaSummaryListSummary& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the workflow activity.
    std::shared_ptr<string> activityName_ = nullptr;
    // The information about the input file.
    std::shared_ptr<Models::QueryMediaListResponseBodyMediaListMediaSummaryListSummaryFile> file_ = nullptr;
    // The ID of the workflow that generates the summary.
    std::shared_ptr<string> mediaWorkflowId_ = nullptr;
    // The name of the workflow that generates the summary.
    std::shared_ptr<string> mediaWorkflowName_ = nullptr;
    // The type of the summary. Valid values:
    // 
    // *   **Video**: video
    // *   **Gif**: dynamic image
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
