// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAININGJOBRESPONSEBODYLATESTPROGRESSREMAININGTIME_HPP_
#define ALIBABACLOUD_MODELS_GETTRAININGJOBRESPONSEBODYLATESTPROGRESSREMAININGTIME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetTrainingJobResponseBodyLatestProgressRemainingTime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrainingJobResponseBodyLatestProgressRemainingTime& obj) { 
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrainingJobResponseBodyLatestProgressRemainingTime& obj) { 
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetTrainingJobResponseBodyLatestProgressRemainingTime() = default ;
    GetTrainingJobResponseBodyLatestProgressRemainingTime(const GetTrainingJobResponseBodyLatestProgressRemainingTime &) = default ;
    GetTrainingJobResponseBodyLatestProgressRemainingTime(GetTrainingJobResponseBodyLatestProgressRemainingTime &&) = default ;
    GetTrainingJobResponseBodyLatestProgressRemainingTime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrainingJobResponseBodyLatestProgressRemainingTime() = default ;
    GetTrainingJobResponseBodyLatestProgressRemainingTime& operator=(const GetTrainingJobResponseBodyLatestProgressRemainingTime &) = default ;
    GetTrainingJobResponseBodyLatestProgressRemainingTime& operator=(GetTrainingJobResponseBodyLatestProgressRemainingTime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->timestamp_ != nullptr
        && this->value_ != nullptr; };
    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline GetTrainingJobResponseBodyLatestProgressRemainingTime& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int64_t value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
    inline GetTrainingJobResponseBodyLatestProgressRemainingTime& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> timestamp_ = nullptr;
    std::shared_ptr<int64_t> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
