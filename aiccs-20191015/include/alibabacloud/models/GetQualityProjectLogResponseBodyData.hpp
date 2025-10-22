// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYPROJECTLOGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYPROJECTLOGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetQualityProjectLogResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityProjectLogResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ActionData, actionData_);
      DARABONBA_PTR_TO_JSON(ActionTime, actionTime_);
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(ProjectCreateTime, projectCreateTime_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityProjectLogResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionData, actionData_);
      DARABONBA_PTR_FROM_JSON(ActionTime, actionTime_);
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(ProjectCreateTime, projectCreateTime_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetQualityProjectLogResponseBodyData() = default ;
    GetQualityProjectLogResponseBodyData(const GetQualityProjectLogResponseBodyData &) = default ;
    GetQualityProjectLogResponseBodyData(GetQualityProjectLogResponseBodyData &&) = default ;
    GetQualityProjectLogResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityProjectLogResponseBodyData() = default ;
    GetQualityProjectLogResponseBodyData& operator=(const GetQualityProjectLogResponseBodyData &) = default ;
    GetQualityProjectLogResponseBodyData& operator=(GetQualityProjectLogResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionData_ == nullptr
        && return this->actionTime_ == nullptr && return this->actionType_ == nullptr && return this->projectCreateTime_ == nullptr && return this->projectId_ == nullptr; };
    // actionData Field Functions 
    bool hasActionData() const { return this->actionData_ != nullptr;};
    void deleteActionData() { this->actionData_ = nullptr;};
    inline string actionData() const { DARABONBA_PTR_GET_DEFAULT(actionData_, "") };
    inline GetQualityProjectLogResponseBodyData& setActionData(string actionData) { DARABONBA_PTR_SET_VALUE(actionData_, actionData) };


    // actionTime Field Functions 
    bool hasActionTime() const { return this->actionTime_ != nullptr;};
    void deleteActionTime() { this->actionTime_ = nullptr;};
    inline string actionTime() const { DARABONBA_PTR_GET_DEFAULT(actionTime_, "") };
    inline GetQualityProjectLogResponseBodyData& setActionTime(string actionTime) { DARABONBA_PTR_SET_VALUE(actionTime_, actionTime) };


    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline GetQualityProjectLogResponseBodyData& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // projectCreateTime Field Functions 
    bool hasProjectCreateTime() const { return this->projectCreateTime_ != nullptr;};
    void deleteProjectCreateTime() { this->projectCreateTime_ = nullptr;};
    inline string projectCreateTime() const { DARABONBA_PTR_GET_DEFAULT(projectCreateTime_, "") };
    inline GetQualityProjectLogResponseBodyData& setProjectCreateTime(string projectCreateTime) { DARABONBA_PTR_SET_VALUE(projectCreateTime_, projectCreateTime) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetQualityProjectLogResponseBodyData& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    std::shared_ptr<string> actionData_ = nullptr;
    std::shared_ptr<string> actionTime_ = nullptr;
    std::shared_ptr<string> actionType_ = nullptr;
    std::shared_ptr<string> projectCreateTime_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
