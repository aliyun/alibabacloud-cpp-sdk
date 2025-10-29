// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKPLAYFAILSTATUSRESPONSEBODYPLAYFAILSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKPLAYFAILSTATUSRESPONSEBODYPLAYFAILSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus& obj) { 
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(V20001, v20001_);
      DARABONBA_PTR_TO_JSON(V20002, v20002_);
      DARABONBA_PTR_TO_JSON(V20011, v20011_);
      DARABONBA_PTR_TO_JSON(V20012, v20012_);
      DARABONBA_PTR_TO_JSON(V20013, v20013_);
      DARABONBA_PTR_TO_JSON(V20052, v20052_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(V20001, v20001_);
      DARABONBA_PTR_FROM_JSON(V20002, v20002_);
      DARABONBA_PTR_FROM_JSON(V20011, v20011_);
      DARABONBA_PTR_FROM_JSON(V20012, v20012_);
      DARABONBA_PTR_FROM_JSON(V20013, v20013_);
      DARABONBA_PTR_FROM_JSON(V20052, v20052_);
    };
    DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus() = default ;
    DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus(const DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus &) = default ;
    DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus(DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus &&) = default ;
    DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus() = default ;
    DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus& operator=(const DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus &) = default ;
    DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus& operator=(DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->timeStamp_ == nullptr
        && return this->v20001_ == nullptr && return this->v20002_ == nullptr && return this->v20011_ == nullptr && return this->v20012_ == nullptr && return this->v20013_ == nullptr
        && return this->v20052_ == nullptr; };
    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // v20001 Field Functions 
    bool hasV20001() const { return this->v20001_ != nullptr;};
    void deleteV20001() { this->v20001_ = nullptr;};
    inline string v20001() const { DARABONBA_PTR_GET_DEFAULT(v20001_, "") };
    inline DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus& setV20001(string v20001) { DARABONBA_PTR_SET_VALUE(v20001_, v20001) };


    // v20002 Field Functions 
    bool hasV20002() const { return this->v20002_ != nullptr;};
    void deleteV20002() { this->v20002_ = nullptr;};
    inline string v20002() const { DARABONBA_PTR_GET_DEFAULT(v20002_, "") };
    inline DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus& setV20002(string v20002) { DARABONBA_PTR_SET_VALUE(v20002_, v20002) };


    // v20011 Field Functions 
    bool hasV20011() const { return this->v20011_ != nullptr;};
    void deleteV20011() { this->v20011_ = nullptr;};
    inline string v20011() const { DARABONBA_PTR_GET_DEFAULT(v20011_, "") };
    inline DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus& setV20011(string v20011) { DARABONBA_PTR_SET_VALUE(v20011_, v20011) };


    // v20012 Field Functions 
    bool hasV20012() const { return this->v20012_ != nullptr;};
    void deleteV20012() { this->v20012_ = nullptr;};
    inline string v20012() const { DARABONBA_PTR_GET_DEFAULT(v20012_, "") };
    inline DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus& setV20012(string v20012) { DARABONBA_PTR_SET_VALUE(v20012_, v20012) };


    // v20013 Field Functions 
    bool hasV20013() const { return this->v20013_ != nullptr;};
    void deleteV20013() { this->v20013_ = nullptr;};
    inline string v20013() const { DARABONBA_PTR_GET_DEFAULT(v20013_, "") };
    inline DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus& setV20013(string v20013) { DARABONBA_PTR_SET_VALUE(v20013_, v20013) };


    // v20052 Field Functions 
    bool hasV20052() const { return this->v20052_ != nullptr;};
    void deleteV20052() { this->v20052_ = nullptr;};
    inline string v20052() const { DARABONBA_PTR_GET_DEFAULT(v20052_, "") };
    inline DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus& setV20052(string v20052) { DARABONBA_PTR_SET_VALUE(v20052_, v20052) };


  protected:
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The status code that indicates failed DNS resolution.
    std::shared_ptr<string> v20001_ = nullptr;
    // The status code that indicates failed authentication.
    std::shared_ptr<string> v20002_ = nullptr;
    // The status code that indicates a connection signaling timeout.
    std::shared_ptr<string> v20011_ = nullptr;
    // The status code that indicates a subscription signaling error.
    std::shared_ptr<string> v20012_ = nullptr;
    // The status code indicating that the stream to subscribe to does not exist.
    std::shared_ptr<string> v20013_ = nullptr;
    // The status code that indicates a media packet collection timeout.
    std::shared_ptr<string> v20052_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
