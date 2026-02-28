// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSAGEOSSDKVERSIONDISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSAGEOSSDKVERSIONDISTRIBUTIONSTATDATARESPONSEBODY_HPP_
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
  class DescribeUsageOsSdkVersionDistributionStatDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsageOsSdkVersionDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UsageOsSdkVersionStatList, usageOsSdkVersionStatList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsageOsSdkVersionDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UsageOsSdkVersionStatList, usageOsSdkVersionStatList_);
    };
    DescribeUsageOsSdkVersionDistributionStatDataResponseBody() = default ;
    DescribeUsageOsSdkVersionDistributionStatDataResponseBody(const DescribeUsageOsSdkVersionDistributionStatDataResponseBody &) = default ;
    DescribeUsageOsSdkVersionDistributionStatDataResponseBody(DescribeUsageOsSdkVersionDistributionStatDataResponseBody &&) = default ;
    DescribeUsageOsSdkVersionDistributionStatDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsageOsSdkVersionDistributionStatDataResponseBody() = default ;
    DescribeUsageOsSdkVersionDistributionStatDataResponseBody& operator=(const DescribeUsageOsSdkVersionDistributionStatDataResponseBody &) = default ;
    DescribeUsageOsSdkVersionDistributionStatDataResponseBody& operator=(DescribeUsageOsSdkVersionDistributionStatDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UsageOsSdkVersionStatList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UsageOsSdkVersionStatList& obj) { 
        DARABONBA_PTR_TO_JSON(AudioCallDuration, audioCallDuration_);
        DARABONBA_PTR_TO_JSON(CallDurationRatio, callDurationRatio_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Os, os_);
        DARABONBA_PTR_TO_JSON(TotalCallDuration, totalCallDuration_);
        DARABONBA_PTR_TO_JSON(VideoCallDuration, videoCallDuration_);
      };
      friend void from_json(const Darabonba::Json& j, UsageOsSdkVersionStatList& obj) { 
        DARABONBA_PTR_FROM_JSON(AudioCallDuration, audioCallDuration_);
        DARABONBA_PTR_FROM_JSON(CallDurationRatio, callDurationRatio_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Os, os_);
        DARABONBA_PTR_FROM_JSON(TotalCallDuration, totalCallDuration_);
        DARABONBA_PTR_FROM_JSON(VideoCallDuration, videoCallDuration_);
      };
      UsageOsSdkVersionStatList() = default ;
      UsageOsSdkVersionStatList(const UsageOsSdkVersionStatList &) = default ;
      UsageOsSdkVersionStatList(UsageOsSdkVersionStatList &&) = default ;
      UsageOsSdkVersionStatList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UsageOsSdkVersionStatList() = default ;
      UsageOsSdkVersionStatList& operator=(const UsageOsSdkVersionStatList &) = default ;
      UsageOsSdkVersionStatList& operator=(UsageOsSdkVersionStatList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->audioCallDuration_ == nullptr
        && this->callDurationRatio_ == nullptr && this->name_ == nullptr && this->os_ == nullptr && this->totalCallDuration_ == nullptr && this->videoCallDuration_ == nullptr; };
      // audioCallDuration Field Functions 
      bool hasAudioCallDuration() const { return this->audioCallDuration_ != nullptr;};
      void deleteAudioCallDuration() { this->audioCallDuration_ = nullptr;};
      inline int64_t getAudioCallDuration() const { DARABONBA_PTR_GET_DEFAULT(audioCallDuration_, 0L) };
      inline UsageOsSdkVersionStatList& setAudioCallDuration(int64_t audioCallDuration) { DARABONBA_PTR_SET_VALUE(audioCallDuration_, audioCallDuration) };


      // callDurationRatio Field Functions 
      bool hasCallDurationRatio() const { return this->callDurationRatio_ != nullptr;};
      void deleteCallDurationRatio() { this->callDurationRatio_ = nullptr;};
      inline string getCallDurationRatio() const { DARABONBA_PTR_GET_DEFAULT(callDurationRatio_, "") };
      inline UsageOsSdkVersionStatList& setCallDurationRatio(string callDurationRatio) { DARABONBA_PTR_SET_VALUE(callDurationRatio_, callDurationRatio) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UsageOsSdkVersionStatList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline UsageOsSdkVersionStatList& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // totalCallDuration Field Functions 
      bool hasTotalCallDuration() const { return this->totalCallDuration_ != nullptr;};
      void deleteTotalCallDuration() { this->totalCallDuration_ = nullptr;};
      inline int64_t getTotalCallDuration() const { DARABONBA_PTR_GET_DEFAULT(totalCallDuration_, 0L) };
      inline UsageOsSdkVersionStatList& setTotalCallDuration(int64_t totalCallDuration) { DARABONBA_PTR_SET_VALUE(totalCallDuration_, totalCallDuration) };


      // videoCallDuration Field Functions 
      bool hasVideoCallDuration() const { return this->videoCallDuration_ != nullptr;};
      void deleteVideoCallDuration() { this->videoCallDuration_ = nullptr;};
      inline int64_t getVideoCallDuration() const { DARABONBA_PTR_GET_DEFAULT(videoCallDuration_, 0L) };
      inline UsageOsSdkVersionStatList& setVideoCallDuration(int64_t videoCallDuration) { DARABONBA_PTR_SET_VALUE(videoCallDuration_, videoCallDuration) };


    protected:
      shared_ptr<int64_t> audioCallDuration_ {};
      shared_ptr<string> callDurationRatio_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> os_ {};
      shared_ptr<int64_t> totalCallDuration_ {};
      shared_ptr<int64_t> videoCallDuration_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->usageOsSdkVersionStatList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUsageOsSdkVersionDistributionStatDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usageOsSdkVersionStatList Field Functions 
    bool hasUsageOsSdkVersionStatList() const { return this->usageOsSdkVersionStatList_ != nullptr;};
    void deleteUsageOsSdkVersionStatList() { this->usageOsSdkVersionStatList_ = nullptr;};
    inline const vector<DescribeUsageOsSdkVersionDistributionStatDataResponseBody::UsageOsSdkVersionStatList> & getUsageOsSdkVersionStatList() const { DARABONBA_PTR_GET_CONST(usageOsSdkVersionStatList_, vector<DescribeUsageOsSdkVersionDistributionStatDataResponseBody::UsageOsSdkVersionStatList>) };
    inline vector<DescribeUsageOsSdkVersionDistributionStatDataResponseBody::UsageOsSdkVersionStatList> getUsageOsSdkVersionStatList() { DARABONBA_PTR_GET(usageOsSdkVersionStatList_, vector<DescribeUsageOsSdkVersionDistributionStatDataResponseBody::UsageOsSdkVersionStatList>) };
    inline DescribeUsageOsSdkVersionDistributionStatDataResponseBody& setUsageOsSdkVersionStatList(const vector<DescribeUsageOsSdkVersionDistributionStatDataResponseBody::UsageOsSdkVersionStatList> & usageOsSdkVersionStatList) { DARABONBA_PTR_SET_VALUE(usageOsSdkVersionStatList_, usageOsSdkVersionStatList) };
    inline DescribeUsageOsSdkVersionDistributionStatDataResponseBody& setUsageOsSdkVersionStatList(vector<DescribeUsageOsSdkVersionDistributionStatDataResponseBody::UsageOsSdkVersionStatList> && usageOsSdkVersionStatList) { DARABONBA_PTR_SET_RVALUE(usageOsSdkVersionStatList_, usageOsSdkVersionStatList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeUsageOsSdkVersionDistributionStatDataResponseBody::UsageOsSdkVersionStatList>> usageOsSdkVersionStatList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
