// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKCOPIESRESPONSEBODYDATACURRENTACTIVITYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_GETTASKCOPIESRESPONSEBODYDATACURRENTACTIVITYINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetTaskCopiesResponseBodyDataCurrentActivityInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskCopiesResponseBodyDataCurrentActivityInstances& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
      DARABONBA_PTR_TO_JSON(ActivityInstanceStatus, activityInstanceStatus_);
      DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
      DARABONBA_PTR_TO_JSON(ActivityNameInEnglish, activityNameInEnglish_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskCopiesResponseBodyDataCurrentActivityInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
      DARABONBA_PTR_FROM_JSON(ActivityInstanceStatus, activityInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
      DARABONBA_PTR_FROM_JSON(ActivityNameInEnglish, activityNameInEnglish_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetTaskCopiesResponseBodyDataCurrentActivityInstances() = default ;
    GetTaskCopiesResponseBodyDataCurrentActivityInstances(const GetTaskCopiesResponseBodyDataCurrentActivityInstances &) = default ;
    GetTaskCopiesResponseBodyDataCurrentActivityInstances(GetTaskCopiesResponseBodyDataCurrentActivityInstances &&) = default ;
    GetTaskCopiesResponseBodyDataCurrentActivityInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskCopiesResponseBodyDataCurrentActivityInstances() = default ;
    GetTaskCopiesResponseBodyDataCurrentActivityInstances& operator=(const GetTaskCopiesResponseBodyDataCurrentActivityInstances &) = default ;
    GetTaskCopiesResponseBodyDataCurrentActivityInstances& operator=(GetTaskCopiesResponseBodyDataCurrentActivityInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activityId_ != nullptr
        && this->activityInstanceStatus_ != nullptr && this->activityName_ != nullptr && this->activityNameInEnglish_ != nullptr && this->id_ != nullptr; };
    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline string activityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
    inline GetTaskCopiesResponseBodyDataCurrentActivityInstances& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


    // activityInstanceStatus Field Functions 
    bool hasActivityInstanceStatus() const { return this->activityInstanceStatus_ != nullptr;};
    void deleteActivityInstanceStatus() { this->activityInstanceStatus_ = nullptr;};
    inline string activityInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(activityInstanceStatus_, "") };
    inline GetTaskCopiesResponseBodyDataCurrentActivityInstances& setActivityInstanceStatus(string activityInstanceStatus) { DARABONBA_PTR_SET_VALUE(activityInstanceStatus_, activityInstanceStatus) };


    // activityName Field Functions 
    bool hasActivityName() const { return this->activityName_ != nullptr;};
    void deleteActivityName() { this->activityName_ = nullptr;};
    inline string activityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
    inline GetTaskCopiesResponseBodyDataCurrentActivityInstances& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


    // activityNameInEnglish Field Functions 
    bool hasActivityNameInEnglish() const { return this->activityNameInEnglish_ != nullptr;};
    void deleteActivityNameInEnglish() { this->activityNameInEnglish_ = nullptr;};
    inline string activityNameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(activityNameInEnglish_, "") };
    inline GetTaskCopiesResponseBodyDataCurrentActivityInstances& setActivityNameInEnglish(string activityNameInEnglish) { DARABONBA_PTR_SET_VALUE(activityNameInEnglish_, activityNameInEnglish) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetTaskCopiesResponseBodyDataCurrentActivityInstances& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<string> activityId_ = nullptr;
    std::shared_ptr<string> activityInstanceStatus_ = nullptr;
    std::shared_ptr<string> activityName_ = nullptr;
    std::shared_ptr<string> activityNameInEnglish_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
