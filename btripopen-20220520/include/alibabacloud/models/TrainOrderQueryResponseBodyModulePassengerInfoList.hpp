// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERQUERYRESPONSEBODYMODULEPASSENGERINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERQUERYRESPONSEBODYMODULEPASSENGERINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderQueryResponseBodyModulePassengerInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderQueryResponseBodyModulePassengerInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_TO_JSON(cost_center_number, costCenterNumber_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_id, projectId_);
      DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
      DARABONBA_PTR_TO_JSON(thirdpart_project_id, thirdpartProjectId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
      DARABONBA_PTR_TO_JSON(user_type, userType_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderQueryResponseBodyModulePassengerInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_FROM_JSON(cost_center_number, costCenterNumber_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_id, projectId_);
      DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
      DARABONBA_PTR_FROM_JSON(thirdpart_project_id, thirdpartProjectId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
      DARABONBA_PTR_FROM_JSON(user_type, userType_);
    };
    TrainOrderQueryResponseBodyModulePassengerInfoList() = default ;
    TrainOrderQueryResponseBodyModulePassengerInfoList(const TrainOrderQueryResponseBodyModulePassengerInfoList &) = default ;
    TrainOrderQueryResponseBodyModulePassengerInfoList(TrainOrderQueryResponseBodyModulePassengerInfoList &&) = default ;
    TrainOrderQueryResponseBodyModulePassengerInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderQueryResponseBodyModulePassengerInfoList() = default ;
    TrainOrderQueryResponseBodyModulePassengerInfoList& operator=(const TrainOrderQueryResponseBodyModulePassengerInfoList &) = default ;
    TrainOrderQueryResponseBodyModulePassengerInfoList& operator=(TrainOrderQueryResponseBodyModulePassengerInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCenterId_ != nullptr
        && this->costCenterName_ != nullptr && this->costCenterNumber_ != nullptr && this->projectCode_ != nullptr && this->projectId_ != nullptr && this->projectTitle_ != nullptr
        && this->thirdpartProjectId_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr && this->userType_ != nullptr; };
    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline int64_t costCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
    inline TrainOrderQueryResponseBodyModulePassengerInfoList& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // costCenterName Field Functions 
    bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
    void deleteCostCenterName() { this->costCenterName_ = nullptr;};
    inline string costCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
    inline TrainOrderQueryResponseBodyModulePassengerInfoList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


    // costCenterNumber Field Functions 
    bool hasCostCenterNumber() const { return this->costCenterNumber_ != nullptr;};
    void deleteCostCenterNumber() { this->costCenterNumber_ = nullptr;};
    inline string costCenterNumber() const { DARABONBA_PTR_GET_DEFAULT(costCenterNumber_, "") };
    inline TrainOrderQueryResponseBodyModulePassengerInfoList& setCostCenterNumber(string costCenterNumber) { DARABONBA_PTR_SET_VALUE(costCenterNumber_, costCenterNumber) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline TrainOrderQueryResponseBodyModulePassengerInfoList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline TrainOrderQueryResponseBodyModulePassengerInfoList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectTitle Field Functions 
    bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
    void deleteProjectTitle() { this->projectTitle_ = nullptr;};
    inline string projectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
    inline TrainOrderQueryResponseBodyModulePassengerInfoList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


    // thirdpartProjectId Field Functions 
    bool hasThirdpartProjectId() const { return this->thirdpartProjectId_ != nullptr;};
    void deleteThirdpartProjectId() { this->thirdpartProjectId_ = nullptr;};
    inline string thirdpartProjectId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartProjectId_, "") };
    inline TrainOrderQueryResponseBodyModulePassengerInfoList& setThirdpartProjectId(string thirdpartProjectId) { DARABONBA_PTR_SET_VALUE(thirdpartProjectId_, thirdpartProjectId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline TrainOrderQueryResponseBodyModulePassengerInfoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline TrainOrderQueryResponseBodyModulePassengerInfoList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline int32_t userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
    inline TrainOrderQueryResponseBodyModulePassengerInfoList& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    std::shared_ptr<int64_t> costCenterId_ = nullptr;
    std::shared_ptr<string> costCenterName_ = nullptr;
    std::shared_ptr<string> costCenterNumber_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> projectTitle_ = nullptr;
    std::shared_ptr<string> thirdpartProjectId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
    std::shared_ptr<int32_t> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
