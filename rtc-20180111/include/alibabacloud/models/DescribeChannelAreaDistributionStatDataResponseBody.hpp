// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELAREADISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELAREADISTRIBUTIONSTATDATARESPONSEBODY_HPP_
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
  class DescribeChannelAreaDistributionStatDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelAreaDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AreaStatList, areaStatList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelAreaDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaStatList, areaStatList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeChannelAreaDistributionStatDataResponseBody() = default ;
    DescribeChannelAreaDistributionStatDataResponseBody(const DescribeChannelAreaDistributionStatDataResponseBody &) = default ;
    DescribeChannelAreaDistributionStatDataResponseBody(DescribeChannelAreaDistributionStatDataResponseBody &&) = default ;
    DescribeChannelAreaDistributionStatDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelAreaDistributionStatDataResponseBody() = default ;
    DescribeChannelAreaDistributionStatDataResponseBody& operator=(const DescribeChannelAreaDistributionStatDataResponseBody &) = default ;
    DescribeChannelAreaDistributionStatDataResponseBody& operator=(DescribeChannelAreaDistributionStatDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AreaStatList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AreaStatList& obj) { 
        DARABONBA_PTR_TO_JSON(AreaName, areaName_);
        DARABONBA_PTR_TO_JSON(CallUserCount, callUserCount_);
        DARABONBA_PTR_TO_JSON(HighQualityTransmissionRate, highQualityTransmissionRate_);
        DARABONBA_PTR_TO_JSON(PubUserCount, pubUserCount_);
        DARABONBA_PTR_TO_JSON(SubUserCount, subUserCount_);
      };
      friend void from_json(const Darabonba::Json& j, AreaStatList& obj) { 
        DARABONBA_PTR_FROM_JSON(AreaName, areaName_);
        DARABONBA_PTR_FROM_JSON(CallUserCount, callUserCount_);
        DARABONBA_PTR_FROM_JSON(HighQualityTransmissionRate, highQualityTransmissionRate_);
        DARABONBA_PTR_FROM_JSON(PubUserCount, pubUserCount_);
        DARABONBA_PTR_FROM_JSON(SubUserCount, subUserCount_);
      };
      AreaStatList() = default ;
      AreaStatList(const AreaStatList &) = default ;
      AreaStatList(AreaStatList &&) = default ;
      AreaStatList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AreaStatList() = default ;
      AreaStatList& operator=(const AreaStatList &) = default ;
      AreaStatList& operator=(AreaStatList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->areaName_ == nullptr
        && this->callUserCount_ == nullptr && this->highQualityTransmissionRate_ == nullptr && this->pubUserCount_ == nullptr && this->subUserCount_ == nullptr; };
      // areaName Field Functions 
      bool hasAreaName() const { return this->areaName_ != nullptr;};
      void deleteAreaName() { this->areaName_ = nullptr;};
      inline string getAreaName() const { DARABONBA_PTR_GET_DEFAULT(areaName_, "") };
      inline AreaStatList& setAreaName(string areaName) { DARABONBA_PTR_SET_VALUE(areaName_, areaName) };


      // callUserCount Field Functions 
      bool hasCallUserCount() const { return this->callUserCount_ != nullptr;};
      void deleteCallUserCount() { this->callUserCount_ = nullptr;};
      inline int32_t getCallUserCount() const { DARABONBA_PTR_GET_DEFAULT(callUserCount_, 0) };
      inline AreaStatList& setCallUserCount(int32_t callUserCount) { DARABONBA_PTR_SET_VALUE(callUserCount_, callUserCount) };


      // highQualityTransmissionRate Field Functions 
      bool hasHighQualityTransmissionRate() const { return this->highQualityTransmissionRate_ != nullptr;};
      void deleteHighQualityTransmissionRate() { this->highQualityTransmissionRate_ = nullptr;};
      inline string getHighQualityTransmissionRate() const { DARABONBA_PTR_GET_DEFAULT(highQualityTransmissionRate_, "") };
      inline AreaStatList& setHighQualityTransmissionRate(string highQualityTransmissionRate) { DARABONBA_PTR_SET_VALUE(highQualityTransmissionRate_, highQualityTransmissionRate) };


      // pubUserCount Field Functions 
      bool hasPubUserCount() const { return this->pubUserCount_ != nullptr;};
      void deletePubUserCount() { this->pubUserCount_ = nullptr;};
      inline int32_t getPubUserCount() const { DARABONBA_PTR_GET_DEFAULT(pubUserCount_, 0) };
      inline AreaStatList& setPubUserCount(int32_t pubUserCount) { DARABONBA_PTR_SET_VALUE(pubUserCount_, pubUserCount) };


      // subUserCount Field Functions 
      bool hasSubUserCount() const { return this->subUserCount_ != nullptr;};
      void deleteSubUserCount() { this->subUserCount_ = nullptr;};
      inline int32_t getSubUserCount() const { DARABONBA_PTR_GET_DEFAULT(subUserCount_, 0) };
      inline AreaStatList& setSubUserCount(int32_t subUserCount) { DARABONBA_PTR_SET_VALUE(subUserCount_, subUserCount) };


    protected:
      shared_ptr<string> areaName_ {};
      shared_ptr<int32_t> callUserCount_ {};
      shared_ptr<string> highQualityTransmissionRate_ {};
      shared_ptr<int32_t> pubUserCount_ {};
      shared_ptr<int32_t> subUserCount_ {};
    };

    virtual bool empty() const override { return this->areaStatList_ == nullptr
        && this->requestId_ == nullptr; };
    // areaStatList Field Functions 
    bool hasAreaStatList() const { return this->areaStatList_ != nullptr;};
    void deleteAreaStatList() { this->areaStatList_ = nullptr;};
    inline const vector<DescribeChannelAreaDistributionStatDataResponseBody::AreaStatList> & getAreaStatList() const { DARABONBA_PTR_GET_CONST(areaStatList_, vector<DescribeChannelAreaDistributionStatDataResponseBody::AreaStatList>) };
    inline vector<DescribeChannelAreaDistributionStatDataResponseBody::AreaStatList> getAreaStatList() { DARABONBA_PTR_GET(areaStatList_, vector<DescribeChannelAreaDistributionStatDataResponseBody::AreaStatList>) };
    inline DescribeChannelAreaDistributionStatDataResponseBody& setAreaStatList(const vector<DescribeChannelAreaDistributionStatDataResponseBody::AreaStatList> & areaStatList) { DARABONBA_PTR_SET_VALUE(areaStatList_, areaStatList) };
    inline DescribeChannelAreaDistributionStatDataResponseBody& setAreaStatList(vector<DescribeChannelAreaDistributionStatDataResponseBody::AreaStatList> && areaStatList) { DARABONBA_PTR_SET_RVALUE(areaStatList_, areaStatList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChannelAreaDistributionStatDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeChannelAreaDistributionStatDataResponseBody::AreaStatList>> areaStatList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
