// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDINGTALKMEETINGINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDINGTALKMEETINGINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetDingtalkMeetingInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDingtalkMeetingInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(clusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(creatorNick, creatorNick_);
      DARABONBA_PTR_TO_JSON(creatorWorkNo, creatorWorkNo_);
      DARABONBA_PTR_TO_JSON(deptName, deptName_);
      DARABONBA_PTR_TO_JSON(enableQualityMonitor, enableQualityMonitor_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(freeType, freeType_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(timeLength, timeLength_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(userCount, userCount_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDingtalkMeetingInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(creatorNick, creatorNick_);
      DARABONBA_PTR_FROM_JSON(creatorWorkNo, creatorWorkNo_);
      DARABONBA_PTR_FROM_JSON(deptName, deptName_);
      DARABONBA_PTR_FROM_JSON(enableQualityMonitor, enableQualityMonitor_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(freeType, freeType_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(timeLength, timeLength_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(userCount, userCount_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetDingtalkMeetingInfoResponseBody() = default ;
    GetDingtalkMeetingInfoResponseBody(const GetDingtalkMeetingInfoResponseBody &) = default ;
    GetDingtalkMeetingInfoResponseBody(GetDingtalkMeetingInfoResponseBody &&) = default ;
    GetDingtalkMeetingInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDingtalkMeetingInfoResponseBody() = default ;
    GetDingtalkMeetingInfoResponseBody& operator=(const GetDingtalkMeetingInfoResponseBody &) = default ;
    GetDingtalkMeetingInfoResponseBody& operator=(GetDingtalkMeetingInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterName_ == nullptr
        && this->conferenceId_ == nullptr && this->creatorId_ == nullptr && this->creatorNick_ == nullptr && this->creatorWorkNo_ == nullptr && this->deptName_ == nullptr
        && this->enableQualityMonitor_ == nullptr && this->endTime_ == nullptr && this->freeType_ == nullptr && this->requestId_ == nullptr && this->scene_ == nullptr
        && this->startTime_ == nullptr && this->timeLength_ == nullptr && this->title_ == nullptr && this->userCount_ == nullptr && this->vendorRequestId_ == nullptr
        && this->vendorType_ == nullptr; };
    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline GetDingtalkMeetingInfoResponseBody& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline GetDingtalkMeetingInfoResponseBody& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline GetDingtalkMeetingInfoResponseBody& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // creatorNick Field Functions 
    bool hasCreatorNick() const { return this->creatorNick_ != nullptr;};
    void deleteCreatorNick() { this->creatorNick_ = nullptr;};
    inline string getCreatorNick() const { DARABONBA_PTR_GET_DEFAULT(creatorNick_, "") };
    inline GetDingtalkMeetingInfoResponseBody& setCreatorNick(string creatorNick) { DARABONBA_PTR_SET_VALUE(creatorNick_, creatorNick) };


    // creatorWorkNo Field Functions 
    bool hasCreatorWorkNo() const { return this->creatorWorkNo_ != nullptr;};
    void deleteCreatorWorkNo() { this->creatorWorkNo_ = nullptr;};
    inline string getCreatorWorkNo() const { DARABONBA_PTR_GET_DEFAULT(creatorWorkNo_, "") };
    inline GetDingtalkMeetingInfoResponseBody& setCreatorWorkNo(string creatorWorkNo) { DARABONBA_PTR_SET_VALUE(creatorWorkNo_, creatorWorkNo) };


    // deptName Field Functions 
    bool hasDeptName() const { return this->deptName_ != nullptr;};
    void deleteDeptName() { this->deptName_ = nullptr;};
    inline string getDeptName() const { DARABONBA_PTR_GET_DEFAULT(deptName_, "") };
    inline GetDingtalkMeetingInfoResponseBody& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


    // enableQualityMonitor Field Functions 
    bool hasEnableQualityMonitor() const { return this->enableQualityMonitor_ != nullptr;};
    void deleteEnableQualityMonitor() { this->enableQualityMonitor_ = nullptr;};
    inline bool getEnableQualityMonitor() const { DARABONBA_PTR_GET_DEFAULT(enableQualityMonitor_, false) };
    inline GetDingtalkMeetingInfoResponseBody& setEnableQualityMonitor(bool enableQualityMonitor) { DARABONBA_PTR_SET_VALUE(enableQualityMonitor_, enableQualityMonitor) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetDingtalkMeetingInfoResponseBody& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // freeType Field Functions 
    bool hasFreeType() const { return this->freeType_ != nullptr;};
    void deleteFreeType() { this->freeType_ = nullptr;};
    inline string getFreeType() const { DARABONBA_PTR_GET_DEFAULT(freeType_, "") };
    inline GetDingtalkMeetingInfoResponseBody& setFreeType(string freeType) { DARABONBA_PTR_SET_VALUE(freeType_, freeType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDingtalkMeetingInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline GetDingtalkMeetingInfoResponseBody& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetDingtalkMeetingInfoResponseBody& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeLength Field Functions 
    bool hasTimeLength() const { return this->timeLength_ != nullptr;};
    void deleteTimeLength() { this->timeLength_ = nullptr;};
    inline int64_t getTimeLength() const { DARABONBA_PTR_GET_DEFAULT(timeLength_, 0L) };
    inline GetDingtalkMeetingInfoResponseBody& setTimeLength(int64_t timeLength) { DARABONBA_PTR_SET_VALUE(timeLength_, timeLength) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetDingtalkMeetingInfoResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userCount Field Functions 
    bool hasUserCount() const { return this->userCount_ != nullptr;};
    void deleteUserCount() { this->userCount_ = nullptr;};
    inline int32_t getUserCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0) };
    inline GetDingtalkMeetingInfoResponseBody& setUserCount(int32_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetDingtalkMeetingInfoResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetDingtalkMeetingInfoResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> clusterName_ {};
    shared_ptr<string> conferenceId_ {};
    shared_ptr<string> creatorId_ {};
    shared_ptr<string> creatorNick_ {};
    shared_ptr<string> creatorWorkNo_ {};
    shared_ptr<string> deptName_ {};
    shared_ptr<bool> enableQualityMonitor_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> freeType_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> scene_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<int64_t> timeLength_ {};
    shared_ptr<string> title_ {};
    shared_ptr<int32_t> userCount_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
