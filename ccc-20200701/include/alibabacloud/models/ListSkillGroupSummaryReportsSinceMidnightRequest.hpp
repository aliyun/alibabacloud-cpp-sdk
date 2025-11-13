// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLGROUPSUMMARYREPORTSSINCEMIDNIGHTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLGROUPSUMMARYREPORTSSINCEMIDNIGHTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListSkillGroupSummaryReportsSinceMidnightRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillGroupSummaryReportsSinceMidnightRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SkillGroups, skillGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillGroupSummaryReportsSinceMidnightRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SkillGroups, skillGroups_);
    };
    ListSkillGroupSummaryReportsSinceMidnightRequest() = default ;
    ListSkillGroupSummaryReportsSinceMidnightRequest(const ListSkillGroupSummaryReportsSinceMidnightRequest &) = default ;
    ListSkillGroupSummaryReportsSinceMidnightRequest(ListSkillGroupSummaryReportsSinceMidnightRequest &&) = default ;
    ListSkillGroupSummaryReportsSinceMidnightRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillGroupSummaryReportsSinceMidnightRequest() = default ;
    ListSkillGroupSummaryReportsSinceMidnightRequest& operator=(const ListSkillGroupSummaryReportsSinceMidnightRequest &) = default ;
    ListSkillGroupSummaryReportsSinceMidnightRequest& operator=(ListSkillGroupSummaryReportsSinceMidnightRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->skillGroups_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListSkillGroupSummaryReportsSinceMidnightRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSkillGroupSummaryReportsSinceMidnightRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSkillGroupSummaryReportsSinceMidnightRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // skillGroups Field Functions 
    bool hasSkillGroups() const { return this->skillGroups_ != nullptr;};
    void deleteSkillGroups() { this->skillGroups_ = nullptr;};
    inline string skillGroups() const { DARABONBA_PTR_GET_DEFAULT(skillGroups_, "") };
    inline ListSkillGroupSummaryReportsSinceMidnightRequest& setSkillGroups(string skillGroups) { DARABONBA_PTR_SET_VALUE(skillGroups_, skillGroups) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> skillGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
