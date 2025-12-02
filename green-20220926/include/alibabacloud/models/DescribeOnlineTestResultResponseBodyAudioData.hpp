// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEONLINETESTRESULTRESPONSEBODYAUDIODATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEONLINETESTRESULTRESPONSEBODYAUDIODATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class DescribeOnlineTestResultResponseBodyAudioData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOnlineTestResultResponseBodyAudioData& obj) { 
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOnlineTestResultResponseBodyAudioData& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeOnlineTestResultResponseBodyAudioData() = default ;
    DescribeOnlineTestResultResponseBodyAudioData(const DescribeOnlineTestResultResponseBodyAudioData &) = default ;
    DescribeOnlineTestResultResponseBodyAudioData(DescribeOnlineTestResultResponseBodyAudioData &&) = default ;
    DescribeOnlineTestResultResponseBodyAudioData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOnlineTestResultResponseBodyAudioData() = default ;
    DescribeOnlineTestResultResponseBodyAudioData& operator=(const DescribeOnlineTestResultResponseBodyAudioData &) = default ;
    DescribeOnlineTestResultResponseBodyAudioData& operator=(DescribeOnlineTestResultResponseBodyAudioData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->timeStamp_ == nullptr; };
    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeOnlineTestResultResponseBodyAudioData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
