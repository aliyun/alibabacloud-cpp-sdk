// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIALARMRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDIALARMRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDIAlarmRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIAlarmRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DIAlarmRuleId, DIAlarmRuleId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIAlarmRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DIAlarmRuleId, DIAlarmRuleId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListDIAlarmRulesRequest() = default ;
    ListDIAlarmRulesRequest(const ListDIAlarmRulesRequest &) = default ;
    ListDIAlarmRulesRequest(ListDIAlarmRulesRequest &&) = default ;
    ListDIAlarmRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIAlarmRulesRequest() = default ;
    ListDIAlarmRulesRequest& operator=(const ListDIAlarmRulesRequest &) = default ;
    ListDIAlarmRulesRequest& operator=(ListDIAlarmRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DIAlarmRuleId_ != nullptr
        && this->jobId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // DIAlarmRuleId Field Functions 
    bool hasDIAlarmRuleId() const { return this->DIAlarmRuleId_ != nullptr;};
    void deleteDIAlarmRuleId() { this->DIAlarmRuleId_ = nullptr;};
    inline int64_t DIAlarmRuleId() const { DARABONBA_PTR_GET_DEFAULT(DIAlarmRuleId_, 0L) };
    inline ListDIAlarmRulesRequest& setDIAlarmRuleId(int64_t DIAlarmRuleId) { DARABONBA_PTR_SET_VALUE(DIAlarmRuleId_, DIAlarmRuleId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline ListDIAlarmRulesRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDIAlarmRulesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDIAlarmRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the alert rule. If you leave this parameter empty, all alert rules of the task are queried.
    std::shared_ptr<int64_t> DIAlarmRuleId_ = nullptr;
    // The ID of the task for which alert rules are configured.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
