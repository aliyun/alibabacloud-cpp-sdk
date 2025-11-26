// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANNOTATIONMISSIONRESPONSEBODYDATAANNOTATIONMISSIONLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTANNOTATIONMISSIONRESPONSEBODYDATAANNOTATIONMISSIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListAnnotationMissionResponseBodyDataAnnotationMissionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnnotationMissionResponseBodyDataAnnotationMissionList& obj) { 
      DARABONBA_PTR_TO_JSON(AnnotationMissionDataSourceType, annotationMissionDataSourceType_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionDebugDataSourceList, annotationMissionDebugDataSourceList_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionId, annotationMissionId_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionName, annotationMissionName_);
      DARABONBA_PTR_TO_JSON(AnnotationStatus, annotationStatus_);
      DARABONBA_PTR_TO_JSON(ConversationTimeEndFilter, conversationTimeEndFilter_);
      DARABONBA_PTR_TO_JSON(ConversationTimeStartFilter, conversationTimeStartFilter_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExcludeOtherMissionSession, excludeOtherMissionSession_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SamplingCount, samplingCount_);
      DARABONBA_PTR_TO_JSON(SamplingDescription, samplingDescription_);
      DARABONBA_PTR_TO_JSON(SamplingRate, samplingRate_);
      DARABONBA_PTR_TO_JSON(SamplingType, samplingType_);
      DARABONBA_PTR_TO_JSON(SessionEndReasonFilterList, sessionEndReasonFilterList_);
      DARABONBA_PTR_TO_JSON(SessionFinishCount, sessionFinishCount_);
      DARABONBA_PTR_TO_JSON(SessionTotalCount, sessionTotalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnnotationMissionResponseBodyDataAnnotationMissionList& obj) { 
      DARABONBA_PTR_FROM_JSON(AnnotationMissionDataSourceType, annotationMissionDataSourceType_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionDebugDataSourceList, annotationMissionDebugDataSourceList_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionId, annotationMissionId_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionName, annotationMissionName_);
      DARABONBA_PTR_FROM_JSON(AnnotationStatus, annotationStatus_);
      DARABONBA_PTR_FROM_JSON(ConversationTimeEndFilter, conversationTimeEndFilter_);
      DARABONBA_PTR_FROM_JSON(ConversationTimeStartFilter, conversationTimeStartFilter_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExcludeOtherMissionSession, excludeOtherMissionSession_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SamplingCount, samplingCount_);
      DARABONBA_PTR_FROM_JSON(SamplingDescription, samplingDescription_);
      DARABONBA_PTR_FROM_JSON(SamplingRate, samplingRate_);
      DARABONBA_PTR_FROM_JSON(SamplingType, samplingType_);
      DARABONBA_PTR_FROM_JSON(SessionEndReasonFilterList, sessionEndReasonFilterList_);
      DARABONBA_PTR_FROM_JSON(SessionFinishCount, sessionFinishCount_);
      DARABONBA_PTR_FROM_JSON(SessionTotalCount, sessionTotalCount_);
    };
    ListAnnotationMissionResponseBodyDataAnnotationMissionList() = default ;
    ListAnnotationMissionResponseBodyDataAnnotationMissionList(const ListAnnotationMissionResponseBodyDataAnnotationMissionList &) = default ;
    ListAnnotationMissionResponseBodyDataAnnotationMissionList(ListAnnotationMissionResponseBodyDataAnnotationMissionList &&) = default ;
    ListAnnotationMissionResponseBodyDataAnnotationMissionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnnotationMissionResponseBodyDataAnnotationMissionList() = default ;
    ListAnnotationMissionResponseBodyDataAnnotationMissionList& operator=(const ListAnnotationMissionResponseBodyDataAnnotationMissionList &) = default ;
    ListAnnotationMissionResponseBodyDataAnnotationMissionList& operator=(ListAnnotationMissionResponseBodyDataAnnotationMissionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotationMissionDataSourceType_ == nullptr
        && return this->annotationMissionDebugDataSourceList_ == nullptr && return this->annotationMissionId_ == nullptr && return this->annotationMissionName_ == nullptr && return this->annotationStatus_ == nullptr && return this->conversationTimeEndFilter_ == nullptr
        && return this->conversationTimeStartFilter_ == nullptr && return this->createTime_ == nullptr && return this->excludeOtherMissionSession_ == nullptr && return this->finishTime_ == nullptr && return this->instanceId_ == nullptr
        && return this->samplingCount_ == nullptr && return this->samplingDescription_ == nullptr && return this->samplingRate_ == nullptr && return this->samplingType_ == nullptr && return this->sessionEndReasonFilterList_ == nullptr
        && return this->sessionFinishCount_ == nullptr && return this->sessionTotalCount_ == nullptr; };
    // annotationMissionDataSourceType Field Functions 
    bool hasAnnotationMissionDataSourceType() const { return this->annotationMissionDataSourceType_ != nullptr;};
    void deleteAnnotationMissionDataSourceType() { this->annotationMissionDataSourceType_ = nullptr;};
    inline int32_t annotationMissionDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionDataSourceType_, 0) };
    inline ListAnnotationMissionResponseBodyDataAnnotationMissionList& setAnnotationMissionDataSourceType(int32_t annotationMissionDataSourceType) { DARABONBA_PTR_SET_VALUE(annotationMissionDataSourceType_, annotationMissionDataSourceType) };


    // annotationMissionDebugDataSourceList Field Functions 
    bool hasAnnotationMissionDebugDataSourceList() const { return this->annotationMissionDebugDataSourceList_ != nullptr;};
    void deleteAnnotationMissionDebugDataSourceList() { this->annotationMissionDebugDataSourceList_ = nullptr;};
    inline const vector<int32_t> & annotationMissionDebugDataSourceList() const { DARABONBA_PTR_GET_CONST(annotationMissionDebugDataSourceList_, vector<int32_t>) };
    inline vector<int32_t> annotationMissionDebugDataSourceList() { DARABONBA_PTR_GET(annotationMissionDebugDataSourceList_, vector<int32_t>) };
    inline ListAnnotationMissionResponseBodyDataAnnotationMissionList& setAnnotationMissionDebugDataSourceList(const vector<int32_t> & annotationMissionDebugDataSourceList) { DARABONBA_PTR_SET_VALUE(annotationMissionDebugDataSourceList_, annotationMissionDebugDataSourceList) };
    inline ListAnnotationMissionResponseBodyDataAnnotationMissionList& setAnnotationMissionDebugDataSourceList(vector<int32_t> && annotationMissionDebugDataSourceList) { DARABONBA_PTR_SET_RVALUE(annotationMissionDebugDataSourceList_, annotationMissionDebugDataSourceList) };


    // annotationMissionId Field Functions 
    bool hasAnnotationMissionId() const { return this->annotationMissionId_ != nullptr;};
    void deleteAnnotationMissionId() { this->annotationMissionId_ = nullptr;};
    inline string annotationMissionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionId_, "") };
    inline ListAnnotationMissionResponseBodyDataAnnotationMissionList& setAnnotationMissionId(string annotationMissionId) { DARABONBA_PTR_SET_VALUE(annotationMissionId_, annotationMissionId) };


    // annotationMissionName Field Functions 
    bool hasAnnotationMissionName() const { return this->annotationMissionName_ != nullptr;};
    void deleteAnnotationMissionName() { this->annotationMissionName_ = nullptr;};
    inline string annotationMissionName() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionName_, "") };
    inline ListAnnotationMissionResponseBodyDataAnnotationMissionList& setAnnotationMissionName(string annotationMissionName) { DARABONBA_PTR_SET_VALUE(annotationMissionName_, annotationMissionName) };


    // annotationStatus Field Functions 
    bool hasAnnotationStatus() const { return this->annotationStatus_ != nullptr;};
    void deleteAnnotationStatus() { this->annotationStatus_ = nullptr;};
    inline int32_t annotationStatus() const { DARABONBA_PTR_GET_DEFAULT(annotationStatus_, 0) };
    inline ListAnnotationMissionResponseBodyDataAnnotationMissionList& setAnnotationStatus(int32_t annotationStatus) { DARABONBA_PTR_SET_VALUE(annotationStatus_, annotationStatus) };


    // conversationTimeEndFilter Field Functions 
    bool hasConversationTimeEndFilter() const { return this->conversationTimeEndFilter_ != nullptr;};
    void deleteConversationTimeEndFilter() { this->conversationTimeEndFilter_ = nullptr;};
    inline int64_t conversationTimeEndFilter() const { DARABONBA_PTR_GET_DEFAULT(conversationTimeEndFilter_, 0L) };
    inline ListAnnotationMissionResponseBodyDataAnnotationMissionList& setConversationTimeEndFilter(int64_t conversationTimeEndFilter) { DARABONBA_PTR_SET_VALUE(conversationTimeEndFilter_, conversationTimeEndFilter) };


    // conversationTimeStartFilter Field Functions 
    bool hasConversationTimeStartFilter() const { return this->conversationTimeStartFilter_ != nullptr;};
    void deleteConversationTimeStartFilter() { this->conversationTimeStartFilter_ = nullptr;};
    inline int64_t conversationTimeStartFilter() const { DARABONBA_PTR_GET_DEFAULT(conversationTimeStartFilter_, 0L) };
    inline ListAnnotationMissionResponseBodyDataAnnotationMissionList& setConversationTimeStartFilter(int64_t conversationTimeStartFilter) { DARABONBA_PTR_SET_VALUE(conversationTimeStartFilter_, conversationTimeStartFilter) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListAnnotationMissionResponseBodyDataAnnotationMissionList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // excludeOtherMissionSession Field Functions 
    bool hasExcludeOtherMissionSession() const { return this->excludeOtherMissionSession_ != nullptr;};
    void deleteExcludeOtherMissionSession() { this->excludeOtherMissionSession_ = nullptr;};
    inline bool excludeOtherMissionSession() const { DARABONBA_PTR_GET_DEFAULT(excludeOtherMissionSession_, false) };
    inline ListAnnotationMissionResponseBodyDataAnnotationMissionList& setExcludeOtherMissionSession(bool excludeOtherMissionSession) { DARABONBA_PTR_SET_VALUE(excludeOtherMissionSession_, excludeOtherMissionSession) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline ListAnnotationMissionResponseBodyDataAnnotationMissionList& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAnnotationMissionResponseBodyDataAnnotationMissionList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // samplingCount Field Functions 
    bool hasSamplingCount() const { return this->samplingCount_ != nullptr;};
    void deleteSamplingCount() { this->samplingCount_ = nullptr;};
    inline int32_t samplingCount() const { DARABONBA_PTR_GET_DEFAULT(samplingCount_, 0) };
    inline ListAnnotationMissionResponseBodyDataAnnotationMissionList& setSamplingCount(int32_t samplingCount) { DARABONBA_PTR_SET_VALUE(samplingCount_, samplingCount) };


    // samplingDescription Field Functions 
    bool hasSamplingDescription() const { return this->samplingDescription_ != nullptr;};
    void deleteSamplingDescription() { this->samplingDescription_ = nullptr;};
    inline string samplingDescription() const { DARABONBA_PTR_GET_DEFAULT(samplingDescription_, "") };
    inline ListAnnotationMissionResponseBodyDataAnnotationMissionList& setSamplingDescription(string samplingDescription) { DARABONBA_PTR_SET_VALUE(samplingDescription_, samplingDescription) };


    // samplingRate Field Functions 
    bool hasSamplingRate() const { return this->samplingRate_ != nullptr;};
    void deleteSamplingRate() { this->samplingRate_ = nullptr;};
    inline int32_t samplingRate() const { DARABONBA_PTR_GET_DEFAULT(samplingRate_, 0) };
    inline ListAnnotationMissionResponseBodyDataAnnotationMissionList& setSamplingRate(int32_t samplingRate) { DARABONBA_PTR_SET_VALUE(samplingRate_, samplingRate) };


    // samplingType Field Functions 
    bool hasSamplingType() const { return this->samplingType_ != nullptr;};
    void deleteSamplingType() { this->samplingType_ = nullptr;};
    inline int32_t samplingType() const { DARABONBA_PTR_GET_DEFAULT(samplingType_, 0) };
    inline ListAnnotationMissionResponseBodyDataAnnotationMissionList& setSamplingType(int32_t samplingType) { DARABONBA_PTR_SET_VALUE(samplingType_, samplingType) };


    // sessionEndReasonFilterList Field Functions 
    bool hasSessionEndReasonFilterList() const { return this->sessionEndReasonFilterList_ != nullptr;};
    void deleteSessionEndReasonFilterList() { this->sessionEndReasonFilterList_ = nullptr;};
    inline const vector<int32_t> & sessionEndReasonFilterList() const { DARABONBA_PTR_GET_CONST(sessionEndReasonFilterList_, vector<int32_t>) };
    inline vector<int32_t> sessionEndReasonFilterList() { DARABONBA_PTR_GET(sessionEndReasonFilterList_, vector<int32_t>) };
    inline ListAnnotationMissionResponseBodyDataAnnotationMissionList& setSessionEndReasonFilterList(const vector<int32_t> & sessionEndReasonFilterList) { DARABONBA_PTR_SET_VALUE(sessionEndReasonFilterList_, sessionEndReasonFilterList) };
    inline ListAnnotationMissionResponseBodyDataAnnotationMissionList& setSessionEndReasonFilterList(vector<int32_t> && sessionEndReasonFilterList) { DARABONBA_PTR_SET_RVALUE(sessionEndReasonFilterList_, sessionEndReasonFilterList) };


    // sessionFinishCount Field Functions 
    bool hasSessionFinishCount() const { return this->sessionFinishCount_ != nullptr;};
    void deleteSessionFinishCount() { this->sessionFinishCount_ = nullptr;};
    inline int32_t sessionFinishCount() const { DARABONBA_PTR_GET_DEFAULT(sessionFinishCount_, 0) };
    inline ListAnnotationMissionResponseBodyDataAnnotationMissionList& setSessionFinishCount(int32_t sessionFinishCount) { DARABONBA_PTR_SET_VALUE(sessionFinishCount_, sessionFinishCount) };


    // sessionTotalCount Field Functions 
    bool hasSessionTotalCount() const { return this->sessionTotalCount_ != nullptr;};
    void deleteSessionTotalCount() { this->sessionTotalCount_ = nullptr;};
    inline int32_t sessionTotalCount() const { DARABONBA_PTR_GET_DEFAULT(sessionTotalCount_, 0) };
    inline ListAnnotationMissionResponseBodyDataAnnotationMissionList& setSessionTotalCount(int32_t sessionTotalCount) { DARABONBA_PTR_SET_VALUE(sessionTotalCount_, sessionTotalCount) };


  protected:
    std::shared_ptr<int32_t> annotationMissionDataSourceType_ = nullptr;
    std::shared_ptr<vector<int32_t>> annotationMissionDebugDataSourceList_ = nullptr;
    std::shared_ptr<string> annotationMissionId_ = nullptr;
    std::shared_ptr<string> annotationMissionName_ = nullptr;
    std::shared_ptr<int32_t> annotationStatus_ = nullptr;
    std::shared_ptr<int64_t> conversationTimeEndFilter_ = nullptr;
    std::shared_ptr<int64_t> conversationTimeStartFilter_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<bool> excludeOtherMissionSession_ = nullptr;
    std::shared_ptr<int64_t> finishTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> samplingCount_ = nullptr;
    std::shared_ptr<string> samplingDescription_ = nullptr;
    std::shared_ptr<int32_t> samplingRate_ = nullptr;
    std::shared_ptr<int32_t> samplingType_ = nullptr;
    std::shared_ptr<vector<int32_t>> sessionEndReasonFilterList_ = nullptr;
    std::shared_ptr<int32_t> sessionFinishCount_ = nullptr;
    std::shared_ptr<int32_t> sessionTotalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
