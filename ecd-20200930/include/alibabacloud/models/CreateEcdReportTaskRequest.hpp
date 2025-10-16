// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEECDREPORTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEECDREPORTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateEcdReportTaskRequestFilterList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateEcdReportTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEcdReportTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FilterList, filterList_);
      DARABONBA_PTR_TO_JSON(LangType, langType_);
      DARABONBA_PTR_TO_JSON(ReportFileName, reportFileName_);
      DARABONBA_PTR_TO_JSON(SubType, subType_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEcdReportTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterList, filterList_);
      DARABONBA_PTR_FROM_JSON(LangType, langType_);
      DARABONBA_PTR_FROM_JSON(ReportFileName, reportFileName_);
      DARABONBA_PTR_FROM_JSON(SubType, subType_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    CreateEcdReportTaskRequest() = default ;
    CreateEcdReportTaskRequest(const CreateEcdReportTaskRequest &) = default ;
    CreateEcdReportTaskRequest(CreateEcdReportTaskRequest &&) = default ;
    CreateEcdReportTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEcdReportTaskRequest() = default ;
    CreateEcdReportTaskRequest& operator=(const CreateEcdReportTaskRequest &) = default ;
    CreateEcdReportTaskRequest& operator=(CreateEcdReportTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterList_ == nullptr
        && return this->langType_ == nullptr && return this->reportFileName_ == nullptr && return this->subType_ == nullptr && return this->taskType_ == nullptr; };
    // filterList Field Functions 
    bool hasFilterList() const { return this->filterList_ != nullptr;};
    void deleteFilterList() { this->filterList_ = nullptr;};
    inline const vector<CreateEcdReportTaskRequestFilterList> & filterList() const { DARABONBA_PTR_GET_CONST(filterList_, vector<CreateEcdReportTaskRequestFilterList>) };
    inline vector<CreateEcdReportTaskRequestFilterList> filterList() { DARABONBA_PTR_GET(filterList_, vector<CreateEcdReportTaskRequestFilterList>) };
    inline CreateEcdReportTaskRequest& setFilterList(const vector<CreateEcdReportTaskRequestFilterList> & filterList) { DARABONBA_PTR_SET_VALUE(filterList_, filterList) };
    inline CreateEcdReportTaskRequest& setFilterList(vector<CreateEcdReportTaskRequestFilterList> && filterList) { DARABONBA_PTR_SET_RVALUE(filterList_, filterList) };


    // langType Field Functions 
    bool hasLangType() const { return this->langType_ != nullptr;};
    void deleteLangType() { this->langType_ = nullptr;};
    inline string langType() const { DARABONBA_PTR_GET_DEFAULT(langType_, "") };
    inline CreateEcdReportTaskRequest& setLangType(string langType) { DARABONBA_PTR_SET_VALUE(langType_, langType) };


    // reportFileName Field Functions 
    bool hasReportFileName() const { return this->reportFileName_ != nullptr;};
    void deleteReportFileName() { this->reportFileName_ = nullptr;};
    inline string reportFileName() const { DARABONBA_PTR_GET_DEFAULT(reportFileName_, "") };
    inline CreateEcdReportTaskRequest& setReportFileName(string reportFileName) { DARABONBA_PTR_SET_VALUE(reportFileName_, reportFileName) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string subType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline CreateEcdReportTaskRequest& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateEcdReportTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    std::shared_ptr<vector<CreateEcdReportTaskRequestFilterList>> filterList_ = nullptr;
    std::shared_ptr<string> langType_ = nullptr;
    std::shared_ptr<string> reportFileName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> subType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
