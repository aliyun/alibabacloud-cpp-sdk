// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANALYSISTAGDETAILBYTASKIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTANALYSISTAGDETAILBYTASKIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListAnalysisTagDetailByTaskIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnalysisTagDetailByTaskIdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentTags, contentTags_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(TagTaskType, tagTaskType_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnalysisTagDetailByTaskIdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentTags, contentTags_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(TagTaskType, tagTaskType_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ListAnalysisTagDetailByTaskIdResponseBodyData() = default ;
    ListAnalysisTagDetailByTaskIdResponseBodyData(const ListAnalysisTagDetailByTaskIdResponseBodyData &) = default ;
    ListAnalysisTagDetailByTaskIdResponseBodyData(ListAnalysisTagDetailByTaskIdResponseBodyData &&) = default ;
    ListAnalysisTagDetailByTaskIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnalysisTagDetailByTaskIdResponseBodyData() = default ;
    ListAnalysisTagDetailByTaskIdResponseBodyData& operator=(const ListAnalysisTagDetailByTaskIdResponseBodyData &) = default ;
    ListAnalysisTagDetailByTaskIdResponseBodyData& operator=(ListAnalysisTagDetailByTaskIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->contentTags_ != nullptr && this->id_ != nullptr && this->tagTaskType_ != nullptr && this->taskId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListAnalysisTagDetailByTaskIdResponseBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentTags Field Functions 
    bool hasContentTags() const { return this->contentTags_ != nullptr;};
    void deleteContentTags() { this->contentTags_ = nullptr;};
    inline const vector<Models::ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags> & contentTags() const { DARABONBA_PTR_GET_CONST(contentTags_, vector<Models::ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags>) };
    inline vector<Models::ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags> contentTags() { DARABONBA_PTR_GET(contentTags_, vector<Models::ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags>) };
    inline ListAnalysisTagDetailByTaskIdResponseBodyData& setContentTags(const vector<Models::ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags> & contentTags) { DARABONBA_PTR_SET_VALUE(contentTags_, contentTags) };
    inline ListAnalysisTagDetailByTaskIdResponseBodyData& setContentTags(vector<Models::ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags> && contentTags) { DARABONBA_PTR_SET_RVALUE(contentTags_, contentTags) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListAnalysisTagDetailByTaskIdResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // tagTaskType Field Functions 
    bool hasTagTaskType() const { return this->tagTaskType_ != nullptr;};
    void deleteTagTaskType() { this->tagTaskType_ = nullptr;};
    inline string tagTaskType() const { DARABONBA_PTR_GET_DEFAULT(tagTaskType_, "") };
    inline ListAnalysisTagDetailByTaskIdResponseBodyData& setTagTaskType(string tagTaskType) { DARABONBA_PTR_SET_VALUE(tagTaskType_, tagTaskType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListAnalysisTagDetailByTaskIdResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<vector<Models::ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags>> contentTags_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> tagTaskType_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
