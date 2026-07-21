// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEECDREPORTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEECDREPORTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(FilterList, filterList_);
      DARABONBA_PTR_TO_JSON(LangType, langType_);
      DARABONBA_PTR_TO_JSON(ReportFileName, reportFileName_);
      DARABONBA_PTR_TO_JSON(SubType, subType_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEcdReportTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
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
    class FilterList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FilterList& obj) { 
        DARABONBA_PTR_TO_JSON(FilterKey, filterKey_);
        DARABONBA_PTR_TO_JSON(FilterValues, filterValues_);
      };
      friend void from_json(const Darabonba::Json& j, FilterList& obj) { 
        DARABONBA_PTR_FROM_JSON(FilterKey, filterKey_);
        DARABONBA_PTR_FROM_JSON(FilterValues, filterValues_);
      };
      FilterList() = default ;
      FilterList(const FilterList &) = default ;
      FilterList(FilterList &&) = default ;
      FilterList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FilterList() = default ;
      FilterList& operator=(const FilterList &) = default ;
      FilterList& operator=(FilterList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->filterKey_ == nullptr
        && this->filterValues_ == nullptr; };
      // filterKey Field Functions 
      bool hasFilterKey() const { return this->filterKey_ != nullptr;};
      void deleteFilterKey() { this->filterKey_ = nullptr;};
      inline string getFilterKey() const { DARABONBA_PTR_GET_DEFAULT(filterKey_, "") };
      inline FilterList& setFilterKey(string filterKey) { DARABONBA_PTR_SET_VALUE(filterKey_, filterKey) };


      // filterValues Field Functions 
      bool hasFilterValues() const { return this->filterValues_ != nullptr;};
      void deleteFilterValues() { this->filterValues_ = nullptr;};
      inline const vector<string> & getFilterValues() const { DARABONBA_PTR_GET_CONST(filterValues_, vector<string>) };
      inline vector<string> getFilterValues() { DARABONBA_PTR_GET(filterValues_, vector<string>) };
      inline FilterList& setFilterValues(const vector<string> & filterValues) { DARABONBA_PTR_SET_VALUE(filterValues_, filterValues) };
      inline FilterList& setFilterValues(vector<string> && filterValues) { DARABONBA_PTR_SET_RVALUE(filterValues_, filterValues) };


    protected:
      // The report query filter condition. The valid values vary based on the SubType value:
      // 1. Cloud computer report
      // - KeyWord: automatic keyword recognition for cloud computers.
      // - RegionId: the region ID.
      // - DesktopId: the cloud computer ID.
      // - DesktopName: the cloud computer name (fuzzy match).
      // - OfficeSiteId: the office network ID.
      // - OfficeSiteName: the office network name (fuzzy match).
      // - Status: the cloud computer status.
      // - DesktopType: the desktop specifications.
      // - DesktopIP: the cloud computer IP address.
      // - SubPayType: the billing method.
      // - EndUserId: the username (fuzzy match).
      // - ExpireTime: the expiration time in the yyyy-MM-dd\\"T\\"HH:mm:ss\\"Z\\" format.
      // - IncludeAssignedUser: specifies whether users are assigned.
      // - ResourceGroupId: the resource group ID.
      // - PolicyId: the policy ID.
      // - Tag:{Tag Key}: the cloud computer tag. To query by multiple tags, pass in multiple Filter objects.
      shared_ptr<string> filterKey_ {};
      // The values of the filter condition.
      // When FilterKey is set to one of the following values, only the first value in FilterValues is used:
      // - KeyWord
      // - DesktopName
      // - OfficeSiteName
      // - DesktopIP
      // - EndUserId
      // - ExpireTime
      // - IncludeAssignedUser
      shared_ptr<vector<string>> filterValues_ {};
    };

    virtual bool empty() const override { return this->businessChannel_ == nullptr
        && this->filterList_ == nullptr && this->langType_ == nullptr && this->reportFileName_ == nullptr && this->subType_ == nullptr && this->taskType_ == nullptr; };
    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline CreateEcdReportTaskRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // filterList Field Functions 
    bool hasFilterList() const { return this->filterList_ != nullptr;};
    void deleteFilterList() { this->filterList_ = nullptr;};
    inline const vector<CreateEcdReportTaskRequest::FilterList> & getFilterList() const { DARABONBA_PTR_GET_CONST(filterList_, vector<CreateEcdReportTaskRequest::FilterList>) };
    inline vector<CreateEcdReportTaskRequest::FilterList> getFilterList() { DARABONBA_PTR_GET(filterList_, vector<CreateEcdReportTaskRequest::FilterList>) };
    inline CreateEcdReportTaskRequest& setFilterList(const vector<CreateEcdReportTaskRequest::FilterList> & filterList) { DARABONBA_PTR_SET_VALUE(filterList_, filterList) };
    inline CreateEcdReportTaskRequest& setFilterList(vector<CreateEcdReportTaskRequest::FilterList> && filterList) { DARABONBA_PTR_SET_RVALUE(filterList_, filterList) };


    // langType Field Functions 
    bool hasLangType() const { return this->langType_ != nullptr;};
    void deleteLangType() { this->langType_ = nullptr;};
    inline string getLangType() const { DARABONBA_PTR_GET_DEFAULT(langType_, "") };
    inline CreateEcdReportTaskRequest& setLangType(string langType) { DARABONBA_PTR_SET_VALUE(langType_, langType) };


    // reportFileName Field Functions 
    bool hasReportFileName() const { return this->reportFileName_ != nullptr;};
    void deleteReportFileName() { this->reportFileName_ = nullptr;};
    inline string getReportFileName() const { DARABONBA_PTR_GET_DEFAULT(reportFileName_, "") };
    inline CreateEcdReportTaskRequest& setReportFileName(string reportFileName) { DARABONBA_PTR_SET_VALUE(reportFileName_, reportFileName) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline CreateEcdReportTaskRequest& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateEcdReportTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    shared_ptr<string> businessChannel_ {};
    // The list of filter conditions for query results. The filter condition objects have a logical AND (&) relationship.
    // Each filter condition contains FilterKey and FilterValues, which represent the filter condition name and specific values.
    shared_ptr<vector<CreateEcdReportTaskRequest::FilterList>> filterList_ {};
    // The report language type. This is an enumerated value.
    shared_ptr<string> langType_ {};
    // The report file name.
    shared_ptr<string> reportFileName_ {};
    // The report task subtype.
    // [_single.params.SubType.enum.  DESKTOP]Cloud computer
    // 
    // This parameter is required.
    shared_ptr<string> subType_ {};
    // The report task type.
    // 
    // This parameter is required.
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
