// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAININGJOBRESPONSEBODYSCHEDULER_HPP_
#define ALIBABACLOUD_MODELS_GETTRAININGJOBRESPONSEBODYSCHEDULER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetTrainingJobResponseBodyScheduler : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrainingJobResponseBodyScheduler& obj) { 
      DARABONBA_PTR_TO_JSON(MaxRunningTimeInMinutes, maxRunningTimeInMinutes_);
      DARABONBA_PTR_TO_JSON(MaxRunningTimeInSeconds, maxRunningTimeInSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrainingJobResponseBodyScheduler& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxRunningTimeInMinutes, maxRunningTimeInMinutes_);
      DARABONBA_PTR_FROM_JSON(MaxRunningTimeInSeconds, maxRunningTimeInSeconds_);
    };
    GetTrainingJobResponseBodyScheduler() = default ;
    GetTrainingJobResponseBodyScheduler(const GetTrainingJobResponseBodyScheduler &) = default ;
    GetTrainingJobResponseBodyScheduler(GetTrainingJobResponseBodyScheduler &&) = default ;
    GetTrainingJobResponseBodyScheduler(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrainingJobResponseBodyScheduler() = default ;
    GetTrainingJobResponseBodyScheduler& operator=(const GetTrainingJobResponseBodyScheduler &) = default ;
    GetTrainingJobResponseBodyScheduler& operator=(GetTrainingJobResponseBodyScheduler &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxRunningTimeInMinutes_ != nullptr
        && this->maxRunningTimeInSeconds_ != nullptr; };
    // maxRunningTimeInMinutes Field Functions 
    bool hasMaxRunningTimeInMinutes() const { return this->maxRunningTimeInMinutes_ != nullptr;};
    void deleteMaxRunningTimeInMinutes() { this->maxRunningTimeInMinutes_ = nullptr;};
    inline string maxRunningTimeInMinutes() const { DARABONBA_PTR_GET_DEFAULT(maxRunningTimeInMinutes_, "") };
    inline GetTrainingJobResponseBodyScheduler& setMaxRunningTimeInMinutes(string maxRunningTimeInMinutes) { DARABONBA_PTR_SET_VALUE(maxRunningTimeInMinutes_, maxRunningTimeInMinutes) };


    // maxRunningTimeInSeconds Field Functions 
    bool hasMaxRunningTimeInSeconds() const { return this->maxRunningTimeInSeconds_ != nullptr;};
    void deleteMaxRunningTimeInSeconds() { this->maxRunningTimeInSeconds_ = nullptr;};
    inline string maxRunningTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxRunningTimeInSeconds_, "") };
    inline GetTrainingJobResponseBodyScheduler& setMaxRunningTimeInSeconds(string maxRunningTimeInSeconds) { DARABONBA_PTR_SET_VALUE(maxRunningTimeInSeconds_, maxRunningTimeInSeconds) };


  protected:
    std::shared_ptr<string> maxRunningTimeInMinutes_ = nullptr;
    std::shared_ptr<string> maxRunningTimeInSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
