// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSAGEDISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSAGEDISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeUsageDistributionStatDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsageDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UsageStatList, usageStatList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsageDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UsageStatList, usageStatList_);
    };
    DescribeUsageDistributionStatDataResponseBody() = default ;
    DescribeUsageDistributionStatDataResponseBody(const DescribeUsageDistributionStatDataResponseBody &) = default ;
    DescribeUsageDistributionStatDataResponseBody(DescribeUsageDistributionStatDataResponseBody &&) = default ;
    DescribeUsageDistributionStatDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsageDistributionStatDataResponseBody() = default ;
    DescribeUsageDistributionStatDataResponseBody& operator=(const DescribeUsageDistributionStatDataResponseBody &) = default ;
    DescribeUsageDistributionStatDataResponseBody& operator=(DescribeUsageDistributionStatDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UsageStatList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UsageStatList& obj) { 
        DARABONBA_PTR_TO_JSON(AudioCallDuration, audioCallDuration_);
        DARABONBA_PTR_TO_JSON(CallDurationRatio, callDurationRatio_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TotalCallDuration, totalCallDuration_);
        DARABONBA_PTR_TO_JSON(VideoCallDuration, videoCallDuration_);
      };
      friend void from_json(const Darabonba::Json& j, UsageStatList& obj) { 
        DARABONBA_PTR_FROM_JSON(AudioCallDuration, audioCallDuration_);
        DARABONBA_PTR_FROM_JSON(CallDurationRatio, callDurationRatio_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TotalCallDuration, totalCallDuration_);
        DARABONBA_PTR_FROM_JSON(VideoCallDuration, videoCallDuration_);
      };
      UsageStatList() = default ;
      UsageStatList(const UsageStatList &) = default ;
      UsageStatList(UsageStatList &&) = default ;
      UsageStatList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UsageStatList() = default ;
      UsageStatList& operator=(const UsageStatList &) = default ;
      UsageStatList& operator=(UsageStatList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->audioCallDuration_ == nullptr
        && this->callDurationRatio_ == nullptr && this->name_ == nullptr && this->totalCallDuration_ == nullptr && this->videoCallDuration_ == nullptr; };
      // audioCallDuration Field Functions 
      bool hasAudioCallDuration() const { return this->audioCallDuration_ != nullptr;};
      void deleteAudioCallDuration() { this->audioCallDuration_ = nullptr;};
      inline int64_t getAudioCallDuration() const { DARABONBA_PTR_GET_DEFAULT(audioCallDuration_, 0L) };
      inline UsageStatList& setAudioCallDuration(int64_t audioCallDuration) { DARABONBA_PTR_SET_VALUE(audioCallDuration_, audioCallDuration) };


      // callDurationRatio Field Functions 
      bool hasCallDurationRatio() const { return this->callDurationRatio_ != nullptr;};
      void deleteCallDurationRatio() { this->callDurationRatio_ = nullptr;};
      inline string getCallDurationRatio() const { DARABONBA_PTR_GET_DEFAULT(callDurationRatio_, "") };
      inline UsageStatList& setCallDurationRatio(string callDurationRatio) { DARABONBA_PTR_SET_VALUE(callDurationRatio_, callDurationRatio) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UsageStatList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // totalCallDuration Field Functions 
      bool hasTotalCallDuration() const { return this->totalCallDuration_ != nullptr;};
      void deleteTotalCallDuration() { this->totalCallDuration_ = nullptr;};
      inline int64_t getTotalCallDuration() const { DARABONBA_PTR_GET_DEFAULT(totalCallDuration_, 0L) };
      inline UsageStatList& setTotalCallDuration(int64_t totalCallDuration) { DARABONBA_PTR_SET_VALUE(totalCallDuration_, totalCallDuration) };


      // videoCallDuration Field Functions 
      bool hasVideoCallDuration() const { return this->videoCallDuration_ != nullptr;};
      void deleteVideoCallDuration() { this->videoCallDuration_ = nullptr;};
      inline int64_t getVideoCallDuration() const { DARABONBA_PTR_GET_DEFAULT(videoCallDuration_, 0L) };
      inline UsageStatList& setVideoCallDuration(int64_t videoCallDuration) { DARABONBA_PTR_SET_VALUE(videoCallDuration_, videoCallDuration) };


    protected:
      shared_ptr<int64_t> audioCallDuration_ {};
      shared_ptr<string> callDurationRatio_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int64_t> totalCallDuration_ {};
      shared_ptr<int64_t> videoCallDuration_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->usageStatList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUsageDistributionStatDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usageStatList Field Functions 
    bool hasUsageStatList() const { return this->usageStatList_ != nullptr;};
    void deleteUsageStatList() { this->usageStatList_ = nullptr;};
    inline const vector<DescribeUsageDistributionStatDataResponseBody::UsageStatList> & getUsageStatList() const { DARABONBA_PTR_GET_CONST(usageStatList_, vector<DescribeUsageDistributionStatDataResponseBody::UsageStatList>) };
    inline vector<DescribeUsageDistributionStatDataResponseBody::UsageStatList> getUsageStatList() { DARABONBA_PTR_GET(usageStatList_, vector<DescribeUsageDistributionStatDataResponseBody::UsageStatList>) };
    inline DescribeUsageDistributionStatDataResponseBody& setUsageStatList(const vector<DescribeUsageDistributionStatDataResponseBody::UsageStatList> & usageStatList) { DARABONBA_PTR_SET_VALUE(usageStatList_, usageStatList) };
    inline DescribeUsageDistributionStatDataResponseBody& setUsageStatList(vector<DescribeUsageDistributionStatDataResponseBody::UsageStatList> && usageStatList) { DARABONBA_PTR_SET_RVALUE(usageStatList_, usageStatList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeUsageDistributionStatDataResponseBody::UsageStatList>> usageStatList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
