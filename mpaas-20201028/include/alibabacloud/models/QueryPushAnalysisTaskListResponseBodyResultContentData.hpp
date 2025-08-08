// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUSHANALYSISTASKLISTRESPONSEBODYRESULTCONTENTDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUSHANALYSISTASKLISTRESPONSEBODYRESULTCONTENTDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryPushAnalysisTaskListResponseBodyResultContentDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryPushAnalysisTaskListResponseBodyResultContentData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPushAnalysisTaskListResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPushAnalysisTaskListResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryPushAnalysisTaskListResponseBodyResultContentData() = default ;
    QueryPushAnalysisTaskListResponseBodyResultContentData(const QueryPushAnalysisTaskListResponseBodyResultContentData &) = default ;
    QueryPushAnalysisTaskListResponseBodyResultContentData(QueryPushAnalysisTaskListResponseBodyResultContentData &&) = default ;
    QueryPushAnalysisTaskListResponseBodyResultContentData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPushAnalysisTaskListResponseBodyResultContentData() = default ;
    QueryPushAnalysisTaskListResponseBodyResultContentData& operator=(const QueryPushAnalysisTaskListResponseBodyResultContentData &) = default ;
    QueryPushAnalysisTaskListResponseBodyResultContentData& operator=(QueryPushAnalysisTaskListResponseBodyResultContentData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gmtCreate_ != nullptr
        && this->list_ != nullptr && this->taskId_ != nullptr && this->taskName_ != nullptr && this->templateId_ != nullptr && this->templateName_ != nullptr
        && this->type_ != nullptr; };
    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline QueryPushAnalysisTaskListResponseBodyResultContentData& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::QueryPushAnalysisTaskListResponseBodyResultContentDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::QueryPushAnalysisTaskListResponseBodyResultContentDataList>) };
    inline vector<Models::QueryPushAnalysisTaskListResponseBodyResultContentDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::QueryPushAnalysisTaskListResponseBodyResultContentDataList>) };
    inline QueryPushAnalysisTaskListResponseBodyResultContentData& setList(const vector<Models::QueryPushAnalysisTaskListResponseBodyResultContentDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline QueryPushAnalysisTaskListResponseBodyResultContentData& setList(vector<Models::QueryPushAnalysisTaskListResponseBodyResultContentDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline QueryPushAnalysisTaskListResponseBodyResultContentData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline QueryPushAnalysisTaskListResponseBodyResultContentData& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline QueryPushAnalysisTaskListResponseBodyResultContentData& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline QueryPushAnalysisTaskListResponseBodyResultContentData& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int64_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
    inline QueryPushAnalysisTaskListResponseBodyResultContentData& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<vector<Models::QueryPushAnalysisTaskListResponseBodyResultContentDataList>> list_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
    std::shared_ptr<int64_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
