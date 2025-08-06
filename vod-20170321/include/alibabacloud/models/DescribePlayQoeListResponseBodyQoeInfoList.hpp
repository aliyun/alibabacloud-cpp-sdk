// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYQOELISTRESPONSEBODYQOEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYQOELISTRESPONSEBODYQOEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayQoeListResponseBodyQoeInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayQoeListResponseBodyQoeInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(QoeFinishedVV, qoeFinishedVV_);
      DARABONBA_PTR_TO_JSON(QoeFinishedVVRate, qoeFinishedVVRate_);
      DARABONBA_PTR_TO_JSON(QoeJumpRate5s, qoeJumpRate5s_);
      DARABONBA_PTR_TO_JSON(QoeUFinishedVVTime, qoeUFinishedVVTime_);
      DARABONBA_PTR_TO_JSON(QoeUV, qoeUV_);
      DARABONBA_PTR_TO_JSON(QoeUVVDuration, qoeUVVDuration_);
      DARABONBA_PTR_TO_JSON(QoeUVVTime, qoeUVVTime_);
      DARABONBA_PTR_TO_JSON(QoeVDuration, qoeVDuration_);
      DARABONBA_PTR_TO_JSON(QoeVVDuration, qoeVVDuration_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayQoeListResponseBodyQoeInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(QoeFinishedVV, qoeFinishedVV_);
      DARABONBA_PTR_FROM_JSON(QoeFinishedVVRate, qoeFinishedVVRate_);
      DARABONBA_PTR_FROM_JSON(QoeJumpRate5s, qoeJumpRate5s_);
      DARABONBA_PTR_FROM_JSON(QoeUFinishedVVTime, qoeUFinishedVVTime_);
      DARABONBA_PTR_FROM_JSON(QoeUV, qoeUV_);
      DARABONBA_PTR_FROM_JSON(QoeUVVDuration, qoeUVVDuration_);
      DARABONBA_PTR_FROM_JSON(QoeUVVTime, qoeUVVTime_);
      DARABONBA_PTR_FROM_JSON(QoeVDuration, qoeVDuration_);
      DARABONBA_PTR_FROM_JSON(QoeVVDuration, qoeVVDuration_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribePlayQoeListResponseBodyQoeInfoList() = default ;
    DescribePlayQoeListResponseBodyQoeInfoList(const DescribePlayQoeListResponseBodyQoeInfoList &) = default ;
    DescribePlayQoeListResponseBodyQoeInfoList(DescribePlayQoeListResponseBodyQoeInfoList &&) = default ;
    DescribePlayQoeListResponseBodyQoeInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayQoeListResponseBodyQoeInfoList() = default ;
    DescribePlayQoeListResponseBodyQoeInfoList& operator=(const DescribePlayQoeListResponseBodyQoeInfoList &) = default ;
    DescribePlayQoeListResponseBodyQoeInfoList& operator=(DescribePlayQoeListResponseBodyQoeInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->qoeFinishedVV_ != nullptr
        && this->qoeFinishedVVRate_ != nullptr && this->qoeJumpRate5s_ != nullptr && this->qoeUFinishedVVTime_ != nullptr && this->qoeUV_ != nullptr && this->qoeUVVDuration_ != nullptr
        && this->qoeUVVTime_ != nullptr && this->qoeVDuration_ != nullptr && this->qoeVVDuration_ != nullptr && this->traceId_ != nullptr; };
    // qoeFinishedVV Field Functions 
    bool hasQoeFinishedVV() const { return this->qoeFinishedVV_ != nullptr;};
    void deleteQoeFinishedVV() { this->qoeFinishedVV_ = nullptr;};
    inline float qoeFinishedVV() const { DARABONBA_PTR_GET_DEFAULT(qoeFinishedVV_, 0.0) };
    inline DescribePlayQoeListResponseBodyQoeInfoList& setQoeFinishedVV(float qoeFinishedVV) { DARABONBA_PTR_SET_VALUE(qoeFinishedVV_, qoeFinishedVV) };


    // qoeFinishedVVRate Field Functions 
    bool hasQoeFinishedVVRate() const { return this->qoeFinishedVVRate_ != nullptr;};
    void deleteQoeFinishedVVRate() { this->qoeFinishedVVRate_ = nullptr;};
    inline float qoeFinishedVVRate() const { DARABONBA_PTR_GET_DEFAULT(qoeFinishedVVRate_, 0.0) };
    inline DescribePlayQoeListResponseBodyQoeInfoList& setQoeFinishedVVRate(float qoeFinishedVVRate) { DARABONBA_PTR_SET_VALUE(qoeFinishedVVRate_, qoeFinishedVVRate) };


    // qoeJumpRate5s Field Functions 
    bool hasQoeJumpRate5s() const { return this->qoeJumpRate5s_ != nullptr;};
    void deleteQoeJumpRate5s() { this->qoeJumpRate5s_ = nullptr;};
    inline float qoeJumpRate5s() const { DARABONBA_PTR_GET_DEFAULT(qoeJumpRate5s_, 0.0) };
    inline DescribePlayQoeListResponseBodyQoeInfoList& setQoeJumpRate5s(float qoeJumpRate5s) { DARABONBA_PTR_SET_VALUE(qoeJumpRate5s_, qoeJumpRate5s) };


    // qoeUFinishedVVTime Field Functions 
    bool hasQoeUFinishedVVTime() const { return this->qoeUFinishedVVTime_ != nullptr;};
    void deleteQoeUFinishedVVTime() { this->qoeUFinishedVVTime_ = nullptr;};
    inline float qoeUFinishedVVTime() const { DARABONBA_PTR_GET_DEFAULT(qoeUFinishedVVTime_, 0.0) };
    inline DescribePlayQoeListResponseBodyQoeInfoList& setQoeUFinishedVVTime(float qoeUFinishedVVTime) { DARABONBA_PTR_SET_VALUE(qoeUFinishedVVTime_, qoeUFinishedVVTime) };


    // qoeUV Field Functions 
    bool hasQoeUV() const { return this->qoeUV_ != nullptr;};
    void deleteQoeUV() { this->qoeUV_ = nullptr;};
    inline float qoeUV() const { DARABONBA_PTR_GET_DEFAULT(qoeUV_, 0.0) };
    inline DescribePlayQoeListResponseBodyQoeInfoList& setQoeUV(float qoeUV) { DARABONBA_PTR_SET_VALUE(qoeUV_, qoeUV) };


    // qoeUVVDuration Field Functions 
    bool hasQoeUVVDuration() const { return this->qoeUVVDuration_ != nullptr;};
    void deleteQoeUVVDuration() { this->qoeUVVDuration_ = nullptr;};
    inline float qoeUVVDuration() const { DARABONBA_PTR_GET_DEFAULT(qoeUVVDuration_, 0.0) };
    inline DescribePlayQoeListResponseBodyQoeInfoList& setQoeUVVDuration(float qoeUVVDuration) { DARABONBA_PTR_SET_VALUE(qoeUVVDuration_, qoeUVVDuration) };


    // qoeUVVTime Field Functions 
    bool hasQoeUVVTime() const { return this->qoeUVVTime_ != nullptr;};
    void deleteQoeUVVTime() { this->qoeUVVTime_ = nullptr;};
    inline float qoeUVVTime() const { DARABONBA_PTR_GET_DEFAULT(qoeUVVTime_, 0.0) };
    inline DescribePlayQoeListResponseBodyQoeInfoList& setQoeUVVTime(float qoeUVVTime) { DARABONBA_PTR_SET_VALUE(qoeUVVTime_, qoeUVVTime) };


    // qoeVDuration Field Functions 
    bool hasQoeVDuration() const { return this->qoeVDuration_ != nullptr;};
    void deleteQoeVDuration() { this->qoeVDuration_ = nullptr;};
    inline float qoeVDuration() const { DARABONBA_PTR_GET_DEFAULT(qoeVDuration_, 0.0) };
    inline DescribePlayQoeListResponseBodyQoeInfoList& setQoeVDuration(float qoeVDuration) { DARABONBA_PTR_SET_VALUE(qoeVDuration_, qoeVDuration) };


    // qoeVVDuration Field Functions 
    bool hasQoeVVDuration() const { return this->qoeVVDuration_ != nullptr;};
    void deleteQoeVVDuration() { this->qoeVVDuration_ = nullptr;};
    inline float qoeVVDuration() const { DARABONBA_PTR_GET_DEFAULT(qoeVVDuration_, 0.0) };
    inline DescribePlayQoeListResponseBodyQoeInfoList& setQoeVVDuration(float qoeVVDuration) { DARABONBA_PTR_SET_VALUE(qoeVVDuration_, qoeVVDuration) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribePlayQoeListResponseBodyQoeInfoList& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    std::shared_ptr<float> qoeFinishedVV_ = nullptr;
    std::shared_ptr<float> qoeFinishedVVRate_ = nullptr;
    std::shared_ptr<float> qoeJumpRate5s_ = nullptr;
    std::shared_ptr<float> qoeUFinishedVVTime_ = nullptr;
    std::shared_ptr<float> qoeUV_ = nullptr;
    std::shared_ptr<float> qoeUVVDuration_ = nullptr;
    std::shared_ptr<float> qoeUVVTime_ = nullptr;
    std::shared_ptr<float> qoeVDuration_ = nullptr;
    std::shared_ptr<float> qoeVVDuration_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
