// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMECORPSUBMISSIONRESPONSEBODYDATACURRENTACTIVITYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_GETMECORPSUBMISSIONRESPONSEBODYDATACURRENTACTIVITYINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
      DARABONBA_PTR_TO_JSON(ActivityInstanceStatus, activityInstanceStatus_);
      DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
      DARABONBA_PTR_TO_JSON(ActivityNameEn, activityNameEn_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
      DARABONBA_PTR_FROM_JSON(ActivityInstanceStatus, activityInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
      DARABONBA_PTR_FROM_JSON(ActivityNameEn, activityNameEn_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances() = default ;
    GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances(const GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances &) = default ;
    GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances(GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances &&) = default ;
    GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances() = default ;
    GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances& operator=(const GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances &) = default ;
    GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances& operator=(GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityId_ == nullptr
        && return this->activityInstanceStatus_ == nullptr && return this->activityName_ == nullptr && return this->activityNameEn_ == nullptr && return this->id_ == nullptr; };
    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline string activityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
    inline GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


    // activityInstanceStatus Field Functions 
    bool hasActivityInstanceStatus() const { return this->activityInstanceStatus_ != nullptr;};
    void deleteActivityInstanceStatus() { this->activityInstanceStatus_ = nullptr;};
    inline string activityInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(activityInstanceStatus_, "") };
    inline GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances& setActivityInstanceStatus(string activityInstanceStatus) { DARABONBA_PTR_SET_VALUE(activityInstanceStatus_, activityInstanceStatus) };


    // activityName Field Functions 
    bool hasActivityName() const { return this->activityName_ != nullptr;};
    void deleteActivityName() { this->activityName_ = nullptr;};
    inline string activityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
    inline GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


    // activityNameEn Field Functions 
    bool hasActivityNameEn() const { return this->activityNameEn_ != nullptr;};
    void deleteActivityNameEn() { this->activityNameEn_ = nullptr;};
    inline string activityNameEn() const { DARABONBA_PTR_GET_DEFAULT(activityNameEn_, "") };
    inline GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances& setActivityNameEn(string activityNameEn) { DARABONBA_PTR_SET_VALUE(activityNameEn_, activityNameEn) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<string> activityId_ = nullptr;
    std::shared_ptr<string> activityInstanceStatus_ = nullptr;
    std::shared_ptr<string> activityName_ = nullptr;
    std::shared_ptr<string> activityNameEn_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
