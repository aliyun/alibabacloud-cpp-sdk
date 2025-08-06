// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAININGJOBREQUESTSCHEDULER_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAININGJOBREQUESTSCHEDULER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class CreateTrainingJobRequestScheduler : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrainingJobRequestScheduler& obj) { 
      DARABONBA_PTR_TO_JSON(MaxRunningTimeInMinutes, maxRunningTimeInMinutes_);
      DARABONBA_PTR_TO_JSON(MaxRunningTimeInSeconds, maxRunningTimeInSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrainingJobRequestScheduler& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxRunningTimeInMinutes, maxRunningTimeInMinutes_);
      DARABONBA_PTR_FROM_JSON(MaxRunningTimeInSeconds, maxRunningTimeInSeconds_);
    };
    CreateTrainingJobRequestScheduler() = default ;
    CreateTrainingJobRequestScheduler(const CreateTrainingJobRequestScheduler &) = default ;
    CreateTrainingJobRequestScheduler(CreateTrainingJobRequestScheduler &&) = default ;
    CreateTrainingJobRequestScheduler(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrainingJobRequestScheduler() = default ;
    CreateTrainingJobRequestScheduler& operator=(const CreateTrainingJobRequestScheduler &) = default ;
    CreateTrainingJobRequestScheduler& operator=(CreateTrainingJobRequestScheduler &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxRunningTimeInMinutes_ != nullptr
        && this->maxRunningTimeInSeconds_ != nullptr; };
    // maxRunningTimeInMinutes Field Functions 
    bool hasMaxRunningTimeInMinutes() const { return this->maxRunningTimeInMinutes_ != nullptr;};
    void deleteMaxRunningTimeInMinutes() { this->maxRunningTimeInMinutes_ = nullptr;};
    inline int64_t maxRunningTimeInMinutes() const { DARABONBA_PTR_GET_DEFAULT(maxRunningTimeInMinutes_, 0L) };
    inline CreateTrainingJobRequestScheduler& setMaxRunningTimeInMinutes(int64_t maxRunningTimeInMinutes) { DARABONBA_PTR_SET_VALUE(maxRunningTimeInMinutes_, maxRunningTimeInMinutes) };


    // maxRunningTimeInSeconds Field Functions 
    bool hasMaxRunningTimeInSeconds() const { return this->maxRunningTimeInSeconds_ != nullptr;};
    void deleteMaxRunningTimeInSeconds() { this->maxRunningTimeInSeconds_ = nullptr;};
    inline int64_t maxRunningTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxRunningTimeInSeconds_, 0L) };
    inline CreateTrainingJobRequestScheduler& setMaxRunningTimeInSeconds(int64_t maxRunningTimeInSeconds) { DARABONBA_PTR_SET_VALUE(maxRunningTimeInSeconds_, maxRunningTimeInSeconds) };


  protected:
    std::shared_ptr<int64_t> maxRunningTimeInMinutes_ = nullptr;
    std::shared_ptr<int64_t> maxRunningTimeInSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
