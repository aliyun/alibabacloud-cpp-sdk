// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKVVDATARESPONSEBODYVVDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKVVDATARESPONSEBODYVVDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeRTSNativeSDKVvDataResponseBodyVvData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRTSNativeSDKVvDataResponseBodyVvData& obj) { 
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(VvSuccess, vvSuccess_);
      DARABONBA_PTR_TO_JSON(VvTotal, vvTotal_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRTSNativeSDKVvDataResponseBodyVvData& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(VvSuccess, vvSuccess_);
      DARABONBA_PTR_FROM_JSON(VvTotal, vvTotal_);
    };
    DescribeRTSNativeSDKVvDataResponseBodyVvData() = default ;
    DescribeRTSNativeSDKVvDataResponseBodyVvData(const DescribeRTSNativeSDKVvDataResponseBodyVvData &) = default ;
    DescribeRTSNativeSDKVvDataResponseBodyVvData(DescribeRTSNativeSDKVvDataResponseBodyVvData &&) = default ;
    DescribeRTSNativeSDKVvDataResponseBodyVvData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRTSNativeSDKVvDataResponseBodyVvData() = default ;
    DescribeRTSNativeSDKVvDataResponseBodyVvData& operator=(const DescribeRTSNativeSDKVvDataResponseBodyVvData &) = default ;
    DescribeRTSNativeSDKVvDataResponseBodyVvData& operator=(DescribeRTSNativeSDKVvDataResponseBodyVvData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->timeStamp_ == nullptr
        && return this->vvSuccess_ == nullptr && return this->vvTotal_ == nullptr; };
    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeRTSNativeSDKVvDataResponseBodyVvData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // vvSuccess Field Functions 
    bool hasVvSuccess() const { return this->vvSuccess_ != nullptr;};
    void deleteVvSuccess() { this->vvSuccess_ = nullptr;};
    inline string vvSuccess() const { DARABONBA_PTR_GET_DEFAULT(vvSuccess_, "") };
    inline DescribeRTSNativeSDKVvDataResponseBodyVvData& setVvSuccess(string vvSuccess) { DARABONBA_PTR_SET_VALUE(vvSuccess_, vvSuccess) };


    // vvTotal Field Functions 
    bool hasVvTotal() const { return this->vvTotal_ != nullptr;};
    void deleteVvTotal() { this->vvTotal_ = nullptr;};
    inline string vvTotal() const { DARABONBA_PTR_GET_DEFAULT(vvTotal_, "") };
    inline DescribeRTSNativeSDKVvDataResponseBodyVvData& setVvTotal(string vvTotal) { DARABONBA_PTR_SET_VALUE(vvTotal_, vvTotal) };


  protected:
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The number of successful playbacks within the period of time.
    std::shared_ptr<string> vvSuccess_ = nullptr;
    // The total number of playbacks within the period of time.
    std::shared_ptr<string> vvTotal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
