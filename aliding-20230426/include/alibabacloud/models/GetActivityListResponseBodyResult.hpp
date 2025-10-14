// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACTIVITYLISTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETACTIVITYLISTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetActivityListResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetActivityListResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
      DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
      DARABONBA_PTR_TO_JSON(ActivityNameInEnglish, activityNameInEnglish_);
    };
    friend void from_json(const Darabonba::Json& j, GetActivityListResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
      DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
      DARABONBA_PTR_FROM_JSON(ActivityNameInEnglish, activityNameInEnglish_);
    };
    GetActivityListResponseBodyResult() = default ;
    GetActivityListResponseBodyResult(const GetActivityListResponseBodyResult &) = default ;
    GetActivityListResponseBodyResult(GetActivityListResponseBodyResult &&) = default ;
    GetActivityListResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetActivityListResponseBodyResult() = default ;
    GetActivityListResponseBodyResult& operator=(const GetActivityListResponseBodyResult &) = default ;
    GetActivityListResponseBodyResult& operator=(GetActivityListResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityId_ == nullptr
        && return this->activityName_ == nullptr && return this->activityNameInEnglish_ == nullptr; };
    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline string activityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
    inline GetActivityListResponseBodyResult& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


    // activityName Field Functions 
    bool hasActivityName() const { return this->activityName_ != nullptr;};
    void deleteActivityName() { this->activityName_ = nullptr;};
    inline string activityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
    inline GetActivityListResponseBodyResult& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


    // activityNameInEnglish Field Functions 
    bool hasActivityNameInEnglish() const { return this->activityNameInEnglish_ != nullptr;};
    void deleteActivityNameInEnglish() { this->activityNameInEnglish_ = nullptr;};
    inline string activityNameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(activityNameInEnglish_, "") };
    inline GetActivityListResponseBodyResult& setActivityNameInEnglish(string activityNameInEnglish) { DARABONBA_PTR_SET_VALUE(activityNameInEnglish_, activityNameInEnglish) };


  protected:
    std::shared_ptr<string> activityId_ = nullptr;
    std::shared_ptr<string> activityName_ = nullptr;
    std::shared_ptr<string> activityNameInEnglish_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
