// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAININGJOBRESPONSEBODYLATESTPROGRESSOVERALLPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_GETTRAININGJOBRESPONSEBODYLATESTPROGRESSOVERALLPROGRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetTrainingJobResponseBodyLatestProgressOverallProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrainingJobResponseBodyLatestProgressOverallProgress& obj) { 
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrainingJobResponseBodyLatestProgressOverallProgress& obj) { 
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetTrainingJobResponseBodyLatestProgressOverallProgress() = default ;
    GetTrainingJobResponseBodyLatestProgressOverallProgress(const GetTrainingJobResponseBodyLatestProgressOverallProgress &) = default ;
    GetTrainingJobResponseBodyLatestProgressOverallProgress(GetTrainingJobResponseBodyLatestProgressOverallProgress &&) = default ;
    GetTrainingJobResponseBodyLatestProgressOverallProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrainingJobResponseBodyLatestProgressOverallProgress() = default ;
    GetTrainingJobResponseBodyLatestProgressOverallProgress& operator=(const GetTrainingJobResponseBodyLatestProgressOverallProgress &) = default ;
    GetTrainingJobResponseBodyLatestProgressOverallProgress& operator=(GetTrainingJobResponseBodyLatestProgressOverallProgress &&) = default ;
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
    inline GetTrainingJobResponseBodyLatestProgressOverallProgress& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline GetTrainingJobResponseBodyLatestProgressOverallProgress& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> timestamp_ = nullptr;
    std::shared_ptr<float> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
