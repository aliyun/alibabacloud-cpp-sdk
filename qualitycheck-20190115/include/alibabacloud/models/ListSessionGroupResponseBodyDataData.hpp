// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSESSIONGROUPRESPONSEBODYDATADATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSESSIONGROUPRESPONSEBODYDATADATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSessionGroupResponseBodyDataDataCallerList.hpp>
#include <alibabacloud/models/ListSessionGroupResponseBodyDataDataCustomerIdList.hpp>
#include <alibabacloud/models/ListSessionGroupResponseBodyDataDataCustomerNameList.hpp>
#include <alibabacloud/models/ListSessionGroupResponseBodyDataDataCustomerServiceIdList.hpp>
#include <alibabacloud/models/ListSessionGroupResponseBodyDataDataCustomerServiceNameList.hpp>
#include <alibabacloud/models/ListSessionGroupResponseBodyDataDataReviewerList.hpp>
#include <alibabacloud/models/ListSessionGroupResponseBodyDataDataSkillGroupNameList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListSessionGroupResponseBodyDataData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSessionGroupResponseBodyDataData& obj) { 
      DARABONBA_PTR_TO_JSON(AssignStatus, assignStatus_);
      DARABONBA_PTR_TO_JSON(CallStartTime, callStartTime_);
      DARABONBA_PTR_TO_JSON(CallerList, callerList_);
      DARABONBA_PTR_TO_JSON(CustomerIdList, customerIdList_);
      DARABONBA_PTR_TO_JSON(CustomerNameList, customerNameList_);
      DARABONBA_PTR_TO_JSON(CustomerServiceIdList, customerServiceIdList_);
      DARABONBA_PTR_TO_JSON(CustomerServiceNameList, customerServiceNameList_);
      DARABONBA_PTR_TO_JSON(HitSessionCount, hitSessionCount_);
      DARABONBA_PTR_TO_JSON(LastDataId, lastDataId_);
      DARABONBA_PTR_TO_JSON(ReviewStatus, reviewStatus_);
      DARABONBA_PTR_TO_JSON(ReviewerList, reviewerList_);
      DARABONBA_PTR_TO_JSON(SchemeTaskConfigId, schemeTaskConfigId_);
      DARABONBA_PTR_TO_JSON(SchemeTaskConfigName, schemeTaskConfigName_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
      DARABONBA_PTR_TO_JSON(SessionGroupId, sessionGroupId_);
      DARABONBA_PTR_TO_JSON(SessionGroupReviewedOrComplained, sessionGroupReviewedOrComplained_);
      DARABONBA_PTR_TO_JSON(SkillGroupNameList, skillGroupNameList_);
    };
    friend void from_json(const Darabonba::Json& j, ListSessionGroupResponseBodyDataData& obj) { 
      DARABONBA_PTR_FROM_JSON(AssignStatus, assignStatus_);
      DARABONBA_PTR_FROM_JSON(CallStartTime, callStartTime_);
      DARABONBA_PTR_FROM_JSON(CallerList, callerList_);
      DARABONBA_PTR_FROM_JSON(CustomerIdList, customerIdList_);
      DARABONBA_PTR_FROM_JSON(CustomerNameList, customerNameList_);
      DARABONBA_PTR_FROM_JSON(CustomerServiceIdList, customerServiceIdList_);
      DARABONBA_PTR_FROM_JSON(CustomerServiceNameList, customerServiceNameList_);
      DARABONBA_PTR_FROM_JSON(HitSessionCount, hitSessionCount_);
      DARABONBA_PTR_FROM_JSON(LastDataId, lastDataId_);
      DARABONBA_PTR_FROM_JSON(ReviewStatus, reviewStatus_);
      DARABONBA_PTR_FROM_JSON(ReviewerList, reviewerList_);
      DARABONBA_PTR_FROM_JSON(SchemeTaskConfigId, schemeTaskConfigId_);
      DARABONBA_PTR_FROM_JSON(SchemeTaskConfigName, schemeTaskConfigName_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
      DARABONBA_PTR_FROM_JSON(SessionGroupId, sessionGroupId_);
      DARABONBA_PTR_FROM_JSON(SessionGroupReviewedOrComplained, sessionGroupReviewedOrComplained_);
      DARABONBA_PTR_FROM_JSON(SkillGroupNameList, skillGroupNameList_);
    };
    ListSessionGroupResponseBodyDataData() = default ;
    ListSessionGroupResponseBodyDataData(const ListSessionGroupResponseBodyDataData &) = default ;
    ListSessionGroupResponseBodyDataData(ListSessionGroupResponseBodyDataData &&) = default ;
    ListSessionGroupResponseBodyDataData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSessionGroupResponseBodyDataData() = default ;
    ListSessionGroupResponseBodyDataData& operator=(const ListSessionGroupResponseBodyDataData &) = default ;
    ListSessionGroupResponseBodyDataData& operator=(ListSessionGroupResponseBodyDataData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignStatus_ == nullptr
        && return this->callStartTime_ == nullptr && return this->callerList_ == nullptr && return this->customerIdList_ == nullptr && return this->customerNameList_ == nullptr && return this->customerServiceIdList_ == nullptr
        && return this->customerServiceNameList_ == nullptr && return this->hitSessionCount_ == nullptr && return this->lastDataId_ == nullptr && return this->reviewStatus_ == nullptr && return this->reviewerList_ == nullptr
        && return this->schemeTaskConfigId_ == nullptr && return this->schemeTaskConfigName_ == nullptr && return this->score_ == nullptr && return this->sessionCount_ == nullptr && return this->sessionGroupId_ == nullptr
        && return this->sessionGroupReviewedOrComplained_ == nullptr && return this->skillGroupNameList_ == nullptr; };
    // assignStatus Field Functions 
    bool hasAssignStatus() const { return this->assignStatus_ != nullptr;};
    void deleteAssignStatus() { this->assignStatus_ = nullptr;};
    inline int32_t assignStatus() const { DARABONBA_PTR_GET_DEFAULT(assignStatus_, 0) };
    inline ListSessionGroupResponseBodyDataData& setAssignStatus(int32_t assignStatus) { DARABONBA_PTR_SET_VALUE(assignStatus_, assignStatus) };


    // callStartTime Field Functions 
    bool hasCallStartTime() const { return this->callStartTime_ != nullptr;};
    void deleteCallStartTime() { this->callStartTime_ = nullptr;};
    inline string callStartTime() const { DARABONBA_PTR_GET_DEFAULT(callStartTime_, "") };
    inline ListSessionGroupResponseBodyDataData& setCallStartTime(string callStartTime) { DARABONBA_PTR_SET_VALUE(callStartTime_, callStartTime) };


    // callerList Field Functions 
    bool hasCallerList() const { return this->callerList_ != nullptr;};
    void deleteCallerList() { this->callerList_ = nullptr;};
    inline const Models::ListSessionGroupResponseBodyDataDataCallerList & callerList() const { DARABONBA_PTR_GET_CONST(callerList_, Models::ListSessionGroupResponseBodyDataDataCallerList) };
    inline Models::ListSessionGroupResponseBodyDataDataCallerList callerList() { DARABONBA_PTR_GET(callerList_, Models::ListSessionGroupResponseBodyDataDataCallerList) };
    inline ListSessionGroupResponseBodyDataData& setCallerList(const Models::ListSessionGroupResponseBodyDataDataCallerList & callerList) { DARABONBA_PTR_SET_VALUE(callerList_, callerList) };
    inline ListSessionGroupResponseBodyDataData& setCallerList(Models::ListSessionGroupResponseBodyDataDataCallerList && callerList) { DARABONBA_PTR_SET_RVALUE(callerList_, callerList) };


    // customerIdList Field Functions 
    bool hasCustomerIdList() const { return this->customerIdList_ != nullptr;};
    void deleteCustomerIdList() { this->customerIdList_ = nullptr;};
    inline const Models::ListSessionGroupResponseBodyDataDataCustomerIdList & customerIdList() const { DARABONBA_PTR_GET_CONST(customerIdList_, Models::ListSessionGroupResponseBodyDataDataCustomerIdList) };
    inline Models::ListSessionGroupResponseBodyDataDataCustomerIdList customerIdList() { DARABONBA_PTR_GET(customerIdList_, Models::ListSessionGroupResponseBodyDataDataCustomerIdList) };
    inline ListSessionGroupResponseBodyDataData& setCustomerIdList(const Models::ListSessionGroupResponseBodyDataDataCustomerIdList & customerIdList) { DARABONBA_PTR_SET_VALUE(customerIdList_, customerIdList) };
    inline ListSessionGroupResponseBodyDataData& setCustomerIdList(Models::ListSessionGroupResponseBodyDataDataCustomerIdList && customerIdList) { DARABONBA_PTR_SET_RVALUE(customerIdList_, customerIdList) };


    // customerNameList Field Functions 
    bool hasCustomerNameList() const { return this->customerNameList_ != nullptr;};
    void deleteCustomerNameList() { this->customerNameList_ = nullptr;};
    inline const Models::ListSessionGroupResponseBodyDataDataCustomerNameList & customerNameList() const { DARABONBA_PTR_GET_CONST(customerNameList_, Models::ListSessionGroupResponseBodyDataDataCustomerNameList) };
    inline Models::ListSessionGroupResponseBodyDataDataCustomerNameList customerNameList() { DARABONBA_PTR_GET(customerNameList_, Models::ListSessionGroupResponseBodyDataDataCustomerNameList) };
    inline ListSessionGroupResponseBodyDataData& setCustomerNameList(const Models::ListSessionGroupResponseBodyDataDataCustomerNameList & customerNameList) { DARABONBA_PTR_SET_VALUE(customerNameList_, customerNameList) };
    inline ListSessionGroupResponseBodyDataData& setCustomerNameList(Models::ListSessionGroupResponseBodyDataDataCustomerNameList && customerNameList) { DARABONBA_PTR_SET_RVALUE(customerNameList_, customerNameList) };


    // customerServiceIdList Field Functions 
    bool hasCustomerServiceIdList() const { return this->customerServiceIdList_ != nullptr;};
    void deleteCustomerServiceIdList() { this->customerServiceIdList_ = nullptr;};
    inline const Models::ListSessionGroupResponseBodyDataDataCustomerServiceIdList & customerServiceIdList() const { DARABONBA_PTR_GET_CONST(customerServiceIdList_, Models::ListSessionGroupResponseBodyDataDataCustomerServiceIdList) };
    inline Models::ListSessionGroupResponseBodyDataDataCustomerServiceIdList customerServiceIdList() { DARABONBA_PTR_GET(customerServiceIdList_, Models::ListSessionGroupResponseBodyDataDataCustomerServiceIdList) };
    inline ListSessionGroupResponseBodyDataData& setCustomerServiceIdList(const Models::ListSessionGroupResponseBodyDataDataCustomerServiceIdList & customerServiceIdList) { DARABONBA_PTR_SET_VALUE(customerServiceIdList_, customerServiceIdList) };
    inline ListSessionGroupResponseBodyDataData& setCustomerServiceIdList(Models::ListSessionGroupResponseBodyDataDataCustomerServiceIdList && customerServiceIdList) { DARABONBA_PTR_SET_RVALUE(customerServiceIdList_, customerServiceIdList) };


    // customerServiceNameList Field Functions 
    bool hasCustomerServiceNameList() const { return this->customerServiceNameList_ != nullptr;};
    void deleteCustomerServiceNameList() { this->customerServiceNameList_ = nullptr;};
    inline const Models::ListSessionGroupResponseBodyDataDataCustomerServiceNameList & customerServiceNameList() const { DARABONBA_PTR_GET_CONST(customerServiceNameList_, Models::ListSessionGroupResponseBodyDataDataCustomerServiceNameList) };
    inline Models::ListSessionGroupResponseBodyDataDataCustomerServiceNameList customerServiceNameList() { DARABONBA_PTR_GET(customerServiceNameList_, Models::ListSessionGroupResponseBodyDataDataCustomerServiceNameList) };
    inline ListSessionGroupResponseBodyDataData& setCustomerServiceNameList(const Models::ListSessionGroupResponseBodyDataDataCustomerServiceNameList & customerServiceNameList) { DARABONBA_PTR_SET_VALUE(customerServiceNameList_, customerServiceNameList) };
    inline ListSessionGroupResponseBodyDataData& setCustomerServiceNameList(Models::ListSessionGroupResponseBodyDataDataCustomerServiceNameList && customerServiceNameList) { DARABONBA_PTR_SET_RVALUE(customerServiceNameList_, customerServiceNameList) };


    // hitSessionCount Field Functions 
    bool hasHitSessionCount() const { return this->hitSessionCount_ != nullptr;};
    void deleteHitSessionCount() { this->hitSessionCount_ = nullptr;};
    inline int32_t hitSessionCount() const { DARABONBA_PTR_GET_DEFAULT(hitSessionCount_, 0) };
    inline ListSessionGroupResponseBodyDataData& setHitSessionCount(int32_t hitSessionCount) { DARABONBA_PTR_SET_VALUE(hitSessionCount_, hitSessionCount) };


    // lastDataId Field Functions 
    bool hasLastDataId() const { return this->lastDataId_ != nullptr;};
    void deleteLastDataId() { this->lastDataId_ = nullptr;};
    inline string lastDataId() const { DARABONBA_PTR_GET_DEFAULT(lastDataId_, "") };
    inline ListSessionGroupResponseBodyDataData& setLastDataId(string lastDataId) { DARABONBA_PTR_SET_VALUE(lastDataId_, lastDataId) };


    // reviewStatus Field Functions 
    bool hasReviewStatus() const { return this->reviewStatus_ != nullptr;};
    void deleteReviewStatus() { this->reviewStatus_ = nullptr;};
    inline int32_t reviewStatus() const { DARABONBA_PTR_GET_DEFAULT(reviewStatus_, 0) };
    inline ListSessionGroupResponseBodyDataData& setReviewStatus(int32_t reviewStatus) { DARABONBA_PTR_SET_VALUE(reviewStatus_, reviewStatus) };


    // reviewerList Field Functions 
    bool hasReviewerList() const { return this->reviewerList_ != nullptr;};
    void deleteReviewerList() { this->reviewerList_ = nullptr;};
    inline const Models::ListSessionGroupResponseBodyDataDataReviewerList & reviewerList() const { DARABONBA_PTR_GET_CONST(reviewerList_, Models::ListSessionGroupResponseBodyDataDataReviewerList) };
    inline Models::ListSessionGroupResponseBodyDataDataReviewerList reviewerList() { DARABONBA_PTR_GET(reviewerList_, Models::ListSessionGroupResponseBodyDataDataReviewerList) };
    inline ListSessionGroupResponseBodyDataData& setReviewerList(const Models::ListSessionGroupResponseBodyDataDataReviewerList & reviewerList) { DARABONBA_PTR_SET_VALUE(reviewerList_, reviewerList) };
    inline ListSessionGroupResponseBodyDataData& setReviewerList(Models::ListSessionGroupResponseBodyDataDataReviewerList && reviewerList) { DARABONBA_PTR_SET_RVALUE(reviewerList_, reviewerList) };


    // schemeTaskConfigId Field Functions 
    bool hasSchemeTaskConfigId() const { return this->schemeTaskConfigId_ != nullptr;};
    void deleteSchemeTaskConfigId() { this->schemeTaskConfigId_ = nullptr;};
    inline int64_t schemeTaskConfigId() const { DARABONBA_PTR_GET_DEFAULT(schemeTaskConfigId_, 0L) };
    inline ListSessionGroupResponseBodyDataData& setSchemeTaskConfigId(int64_t schemeTaskConfigId) { DARABONBA_PTR_SET_VALUE(schemeTaskConfigId_, schemeTaskConfigId) };


    // schemeTaskConfigName Field Functions 
    bool hasSchemeTaskConfigName() const { return this->schemeTaskConfigName_ != nullptr;};
    void deleteSchemeTaskConfigName() { this->schemeTaskConfigName_ = nullptr;};
    inline string schemeTaskConfigName() const { DARABONBA_PTR_GET_DEFAULT(schemeTaskConfigName_, "") };
    inline ListSessionGroupResponseBodyDataData& setSchemeTaskConfigName(string schemeTaskConfigName) { DARABONBA_PTR_SET_VALUE(schemeTaskConfigName_, schemeTaskConfigName) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int64_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0L) };
    inline ListSessionGroupResponseBodyDataData& setScore(int64_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // sessionCount Field Functions 
    bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
    void deleteSessionCount() { this->sessionCount_ = nullptr;};
    inline int32_t sessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0) };
    inline ListSessionGroupResponseBodyDataData& setSessionCount(int32_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


    // sessionGroupId Field Functions 
    bool hasSessionGroupId() const { return this->sessionGroupId_ != nullptr;};
    void deleteSessionGroupId() { this->sessionGroupId_ = nullptr;};
    inline string sessionGroupId() const { DARABONBA_PTR_GET_DEFAULT(sessionGroupId_, "") };
    inline ListSessionGroupResponseBodyDataData& setSessionGroupId(string sessionGroupId) { DARABONBA_PTR_SET_VALUE(sessionGroupId_, sessionGroupId) };


    // sessionGroupReviewedOrComplained Field Functions 
    bool hasSessionGroupReviewedOrComplained() const { return this->sessionGroupReviewedOrComplained_ != nullptr;};
    void deleteSessionGroupReviewedOrComplained() { this->sessionGroupReviewedOrComplained_ = nullptr;};
    inline bool sessionGroupReviewedOrComplained() const { DARABONBA_PTR_GET_DEFAULT(sessionGroupReviewedOrComplained_, false) };
    inline ListSessionGroupResponseBodyDataData& setSessionGroupReviewedOrComplained(bool sessionGroupReviewedOrComplained) { DARABONBA_PTR_SET_VALUE(sessionGroupReviewedOrComplained_, sessionGroupReviewedOrComplained) };


    // skillGroupNameList Field Functions 
    bool hasSkillGroupNameList() const { return this->skillGroupNameList_ != nullptr;};
    void deleteSkillGroupNameList() { this->skillGroupNameList_ = nullptr;};
    inline const Models::ListSessionGroupResponseBodyDataDataSkillGroupNameList & skillGroupNameList() const { DARABONBA_PTR_GET_CONST(skillGroupNameList_, Models::ListSessionGroupResponseBodyDataDataSkillGroupNameList) };
    inline Models::ListSessionGroupResponseBodyDataDataSkillGroupNameList skillGroupNameList() { DARABONBA_PTR_GET(skillGroupNameList_, Models::ListSessionGroupResponseBodyDataDataSkillGroupNameList) };
    inline ListSessionGroupResponseBodyDataData& setSkillGroupNameList(const Models::ListSessionGroupResponseBodyDataDataSkillGroupNameList & skillGroupNameList) { DARABONBA_PTR_SET_VALUE(skillGroupNameList_, skillGroupNameList) };
    inline ListSessionGroupResponseBodyDataData& setSkillGroupNameList(Models::ListSessionGroupResponseBodyDataDataSkillGroupNameList && skillGroupNameList) { DARABONBA_PTR_SET_RVALUE(skillGroupNameList_, skillGroupNameList) };


  protected:
    std::shared_ptr<int32_t> assignStatus_ = nullptr;
    std::shared_ptr<string> callStartTime_ = nullptr;
    std::shared_ptr<Models::ListSessionGroupResponseBodyDataDataCallerList> callerList_ = nullptr;
    std::shared_ptr<Models::ListSessionGroupResponseBodyDataDataCustomerIdList> customerIdList_ = nullptr;
    std::shared_ptr<Models::ListSessionGroupResponseBodyDataDataCustomerNameList> customerNameList_ = nullptr;
    std::shared_ptr<Models::ListSessionGroupResponseBodyDataDataCustomerServiceIdList> customerServiceIdList_ = nullptr;
    std::shared_ptr<Models::ListSessionGroupResponseBodyDataDataCustomerServiceNameList> customerServiceNameList_ = nullptr;
    std::shared_ptr<int32_t> hitSessionCount_ = nullptr;
    std::shared_ptr<string> lastDataId_ = nullptr;
    std::shared_ptr<int32_t> reviewStatus_ = nullptr;
    std::shared_ptr<Models::ListSessionGroupResponseBodyDataDataReviewerList> reviewerList_ = nullptr;
    std::shared_ptr<int64_t> schemeTaskConfigId_ = nullptr;
    std::shared_ptr<string> schemeTaskConfigName_ = nullptr;
    std::shared_ptr<int64_t> score_ = nullptr;
    std::shared_ptr<int32_t> sessionCount_ = nullptr;
    std::shared_ptr<string> sessionGroupId_ = nullptr;
    std::shared_ptr<bool> sessionGroupReviewedOrComplained_ = nullptr;
    std::shared_ptr<Models::ListSessionGroupResponseBodyDataDataSkillGroupNameList> skillGroupNameList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
