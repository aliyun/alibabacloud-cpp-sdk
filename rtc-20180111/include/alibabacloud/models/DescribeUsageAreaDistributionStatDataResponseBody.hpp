// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSAGEAREADISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSAGEAREADISTRIBUTIONSTATDATARESPONSEBODY_HPP_
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
  class DescribeUsageAreaDistributionStatDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsageAreaDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UsageAreaStatList, usageAreaStatList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsageAreaDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UsageAreaStatList, usageAreaStatList_);
    };
    DescribeUsageAreaDistributionStatDataResponseBody() = default ;
    DescribeUsageAreaDistributionStatDataResponseBody(const DescribeUsageAreaDistributionStatDataResponseBody &) = default ;
    DescribeUsageAreaDistributionStatDataResponseBody(DescribeUsageAreaDistributionStatDataResponseBody &&) = default ;
    DescribeUsageAreaDistributionStatDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsageAreaDistributionStatDataResponseBody() = default ;
    DescribeUsageAreaDistributionStatDataResponseBody& operator=(const DescribeUsageAreaDistributionStatDataResponseBody &) = default ;
    DescribeUsageAreaDistributionStatDataResponseBody& operator=(DescribeUsageAreaDistributionStatDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UsageAreaStatList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UsageAreaStatList& obj) { 
        DARABONBA_PTR_TO_JSON(AudioCallDuration, audioCallDuration_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TotalCallDuration, totalCallDuration_);
        DARABONBA_PTR_TO_JSON(VideoCallDuration, videoCallDuration_);
      };
      friend void from_json(const Darabonba::Json& j, UsageAreaStatList& obj) { 
        DARABONBA_PTR_FROM_JSON(AudioCallDuration, audioCallDuration_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TotalCallDuration, totalCallDuration_);
        DARABONBA_PTR_FROM_JSON(VideoCallDuration, videoCallDuration_);
      };
      UsageAreaStatList() = default ;
      UsageAreaStatList(const UsageAreaStatList &) = default ;
      UsageAreaStatList(UsageAreaStatList &&) = default ;
      UsageAreaStatList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UsageAreaStatList() = default ;
      UsageAreaStatList& operator=(const UsageAreaStatList &) = default ;
      UsageAreaStatList& operator=(UsageAreaStatList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->audioCallDuration_ == nullptr
        && this->name_ == nullptr && this->totalCallDuration_ == nullptr && this->videoCallDuration_ == nullptr; };
      // audioCallDuration Field Functions 
      bool hasAudioCallDuration() const { return this->audioCallDuration_ != nullptr;};
      void deleteAudioCallDuration() { this->audioCallDuration_ = nullptr;};
      inline int32_t getAudioCallDuration() const { DARABONBA_PTR_GET_DEFAULT(audioCallDuration_, 0) };
      inline UsageAreaStatList& setAudioCallDuration(int32_t audioCallDuration) { DARABONBA_PTR_SET_VALUE(audioCallDuration_, audioCallDuration) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UsageAreaStatList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // totalCallDuration Field Functions 
      bool hasTotalCallDuration() const { return this->totalCallDuration_ != nullptr;};
      void deleteTotalCallDuration() { this->totalCallDuration_ = nullptr;};
      inline int32_t getTotalCallDuration() const { DARABONBA_PTR_GET_DEFAULT(totalCallDuration_, 0) };
      inline UsageAreaStatList& setTotalCallDuration(int32_t totalCallDuration) { DARABONBA_PTR_SET_VALUE(totalCallDuration_, totalCallDuration) };


      // videoCallDuration Field Functions 
      bool hasVideoCallDuration() const { return this->videoCallDuration_ != nullptr;};
      void deleteVideoCallDuration() { this->videoCallDuration_ = nullptr;};
      inline int32_t getVideoCallDuration() const { DARABONBA_PTR_GET_DEFAULT(videoCallDuration_, 0) };
      inline UsageAreaStatList& setVideoCallDuration(int32_t videoCallDuration) { DARABONBA_PTR_SET_VALUE(videoCallDuration_, videoCallDuration) };


    protected:
      shared_ptr<int32_t> audioCallDuration_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int32_t> totalCallDuration_ {};
      shared_ptr<int32_t> videoCallDuration_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->usageAreaStatList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUsageAreaDistributionStatDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usageAreaStatList Field Functions 
    bool hasUsageAreaStatList() const { return this->usageAreaStatList_ != nullptr;};
    void deleteUsageAreaStatList() { this->usageAreaStatList_ = nullptr;};
    inline const vector<DescribeUsageAreaDistributionStatDataResponseBody::UsageAreaStatList> & getUsageAreaStatList() const { DARABONBA_PTR_GET_CONST(usageAreaStatList_, vector<DescribeUsageAreaDistributionStatDataResponseBody::UsageAreaStatList>) };
    inline vector<DescribeUsageAreaDistributionStatDataResponseBody::UsageAreaStatList> getUsageAreaStatList() { DARABONBA_PTR_GET(usageAreaStatList_, vector<DescribeUsageAreaDistributionStatDataResponseBody::UsageAreaStatList>) };
    inline DescribeUsageAreaDistributionStatDataResponseBody& setUsageAreaStatList(const vector<DescribeUsageAreaDistributionStatDataResponseBody::UsageAreaStatList> & usageAreaStatList) { DARABONBA_PTR_SET_VALUE(usageAreaStatList_, usageAreaStatList) };
    inline DescribeUsageAreaDistributionStatDataResponseBody& setUsageAreaStatList(vector<DescribeUsageAreaDistributionStatDataResponseBody::UsageAreaStatList> && usageAreaStatList) { DARABONBA_PTR_SET_RVALUE(usageAreaStatList_, usageAreaStatList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeUsageAreaDistributionStatDataResponseBody::UsageAreaStatList>> usageAreaStatList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
