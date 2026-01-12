// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPODEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPODEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetPodEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPodEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MaxEventsNum, maxEventsNum_);
      DARABONBA_PTR_TO_JSON(PodUid, podUid_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetPodEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MaxEventsNum, maxEventsNum_);
      DARABONBA_PTR_FROM_JSON(PodUid, podUid_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetPodEventsRequest() = default ;
    GetPodEventsRequest(const GetPodEventsRequest &) = default ;
    GetPodEventsRequest(GetPodEventsRequest &&) = default ;
    GetPodEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPodEventsRequest() = default ;
    GetPodEventsRequest& operator=(const GetPodEventsRequest &) = default ;
    GetPodEventsRequest& operator=(GetPodEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->maxEventsNum_ == nullptr && this->podUid_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetPodEventsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // maxEventsNum Field Functions 
    bool hasMaxEventsNum() const { return this->maxEventsNum_ != nullptr;};
    void deleteMaxEventsNum() { this->maxEventsNum_ = nullptr;};
    inline int32_t getMaxEventsNum() const { DARABONBA_PTR_GET_DEFAULT(maxEventsNum_, 0) };
    inline GetPodEventsRequest& setMaxEventsNum(int32_t maxEventsNum) { DARABONBA_PTR_SET_VALUE(maxEventsNum_, maxEventsNum) };


    // podUid Field Functions 
    bool hasPodUid() const { return this->podUid_ != nullptr;};
    void deletePodUid() { this->podUid_ = nullptr;};
    inline string getPodUid() const { DARABONBA_PTR_GET_DEFAULT(podUid_, "") };
    inline GetPodEventsRequest& setPodUid(string podUid) { DARABONBA_PTR_SET_VALUE(podUid_, podUid) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetPodEventsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time (UTC).
    shared_ptr<string> endTime_ {};
    // The maximum number of events that can be returned.
    shared_ptr<int32_t> maxEventsNum_ {};
    // The node UID. Call [GetJob](https://help.aliyun.com/document_detail/459677.html) to get the node UID.
    shared_ptr<string> podUid_ {};
    // The start time (UTC).
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
