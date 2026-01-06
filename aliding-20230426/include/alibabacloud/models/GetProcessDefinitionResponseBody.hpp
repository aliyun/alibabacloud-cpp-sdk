// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROCESSDEFINITIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROCESSDEFINITIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetProcessDefinitionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProcessDefinitionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(formUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(originator, originator_);
      DARABONBA_PTR_TO_JSON(outResult, outResult_);
      DARABONBA_PTR_TO_JSON(owners, owners_);
      DARABONBA_PTR_TO_JSON(processId, processId_);
      DARABONBA_PTR_TO_JSON(processInstanceId, processInstanceId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tasks, tasks_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_ANY_TO_JSON(variables, variables_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetProcessDefinitionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(formUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(originator, originator_);
      DARABONBA_PTR_FROM_JSON(outResult, outResult_);
      DARABONBA_PTR_FROM_JSON(owners, owners_);
      DARABONBA_PTR_FROM_JSON(processId, processId_);
      DARABONBA_PTR_FROM_JSON(processInstanceId, processInstanceId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_ANY_FROM_JSON(variables, variables_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetProcessDefinitionResponseBody() = default ;
    GetProcessDefinitionResponseBody(const GetProcessDefinitionResponseBody &) = default ;
    GetProcessDefinitionResponseBody(GetProcessDefinitionResponseBody &&) = default ;
    GetProcessDefinitionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProcessDefinitionResponseBody() = default ;
    GetProcessDefinitionResponseBody& operator=(const GetProcessDefinitionResponseBody &) = default ;
    GetProcessDefinitionResponseBody& operator=(GetProcessDefinitionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(ActionerId, actionerId_);
        DARABONBA_PTR_TO_JSON(Activity, activity_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionerId, actionerId_);
        DARABONBA_PTR_FROM_JSON(Activity, activity_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      Tasks() = default ;
      Tasks(const Tasks &) = default ;
      Tasks(Tasks &&) = default ;
      Tasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tasks() = default ;
      Tasks& operator=(const Tasks &) = default ;
      Tasks& operator=(Tasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Activity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Activity& obj) { 
          DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
          DARABONBA_PTR_TO_JSON(ActivityInstanceStatus, activityInstanceStatus_);
          DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
          DARABONBA_PTR_TO_JSON(ActivityNameInEnglish, activityNameInEnglish_);
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, Activity& obj) { 
          DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
          DARABONBA_PTR_FROM_JSON(ActivityInstanceStatus, activityInstanceStatus_);
          DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
          DARABONBA_PTR_FROM_JSON(ActivityNameInEnglish, activityNameInEnglish_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        Activity() = default ;
        Activity(const Activity &) = default ;
        Activity(Activity &&) = default ;
        Activity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Activity() = default ;
        Activity& operator=(const Activity &) = default ;
        Activity& operator=(Activity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->activityId_ == nullptr
        && this->activityInstanceStatus_ == nullptr && this->activityName_ == nullptr && this->activityNameInEnglish_ == nullptr && this->id_ == nullptr; };
        // activityId Field Functions 
        bool hasActivityId() const { return this->activityId_ != nullptr;};
        void deleteActivityId() { this->activityId_ = nullptr;};
        inline string getActivityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
        inline Activity& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


        // activityInstanceStatus Field Functions 
        bool hasActivityInstanceStatus() const { return this->activityInstanceStatus_ != nullptr;};
        void deleteActivityInstanceStatus() { this->activityInstanceStatus_ = nullptr;};
        inline string getActivityInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(activityInstanceStatus_, "") };
        inline Activity& setActivityInstanceStatus(string activityInstanceStatus) { DARABONBA_PTR_SET_VALUE(activityInstanceStatus_, activityInstanceStatus) };


        // activityName Field Functions 
        bool hasActivityName() const { return this->activityName_ != nullptr;};
        void deleteActivityName() { this->activityName_ = nullptr;};
        inline string getActivityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
        inline Activity& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


        // activityNameInEnglish Field Functions 
        bool hasActivityNameInEnglish() const { return this->activityNameInEnglish_ != nullptr;};
        void deleteActivityNameInEnglish() { this->activityNameInEnglish_ = nullptr;};
        inline string getActivityNameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(activityNameInEnglish_, "") };
        inline Activity& setActivityNameInEnglish(string activityNameInEnglish) { DARABONBA_PTR_SET_VALUE(activityNameInEnglish_, activityNameInEnglish) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Activity& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        shared_ptr<string> activityId_ {};
        shared_ptr<string> activityInstanceStatus_ {};
        shared_ptr<string> activityName_ {};
        shared_ptr<string> activityNameInEnglish_ {};
        shared_ptr<int64_t> id_ {};
      };

      virtual bool empty() const override { return this->actionerId_ == nullptr
        && this->activity_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr; };
      // actionerId Field Functions 
      bool hasActionerId() const { return this->actionerId_ != nullptr;};
      void deleteActionerId() { this->actionerId_ = nullptr;};
      inline string getActionerId() const { DARABONBA_PTR_GET_DEFAULT(actionerId_, "") };
      inline Tasks& setActionerId(string actionerId) { DARABONBA_PTR_SET_VALUE(actionerId_, actionerId) };


      // activity Field Functions 
      bool hasActivity() const { return this->activity_ != nullptr;};
      void deleteActivity() { this->activity_ = nullptr;};
      inline const Tasks::Activity & getActivity() const { DARABONBA_PTR_GET_CONST(activity_, Tasks::Activity) };
      inline Tasks::Activity getActivity() { DARABONBA_PTR_GET(activity_, Tasks::Activity) };
      inline Tasks& setActivity(const Tasks::Activity & activity) { DARABONBA_PTR_SET_VALUE(activity_, activity) };
      inline Tasks& setActivity(Tasks::Activity && activity) { DARABONBA_PTR_SET_RVALUE(activity_, activity) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Tasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Tasks& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<string> actionerId_ {};
      shared_ptr<Tasks::Activity> activity_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int64_t> taskId_ {};
    };

    class Owners : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Owners& obj) { 
        DARABONBA_PTR_TO_JSON(DepartmentDescription, departmentDescription_);
        DARABONBA_PTR_TO_JSON(DisplayEnName, displayEnName_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(MasterDataDepartments, masterDataDepartments_);
        DARABONBA_PTR_TO_JSON(OrderNumber, orderNumber_);
        DARABONBA_PTR_TO_JSON(PersonalPhoto, personalPhoto_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TbWang, tbWang_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Owners& obj) { 
        DARABONBA_PTR_FROM_JSON(DepartmentDescription, departmentDescription_);
        DARABONBA_PTR_FROM_JSON(DisplayEnName, displayEnName_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(MasterDataDepartments, masterDataDepartments_);
        DARABONBA_PTR_FROM_JSON(OrderNumber, orderNumber_);
        DARABONBA_PTR_FROM_JSON(PersonalPhoto, personalPhoto_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TbWang, tbWang_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
      };
      Owners() = default ;
      Owners(const Owners &) = default ;
      Owners(Owners &&) = default ;
      Owners(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Owners() = default ;
      Owners& operator=(const Owners &) = default ;
      Owners& operator=(Owners &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MasterDataDepartments : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MasterDataDepartments& obj) { 
          DARABONBA_PTR_TO_JSON(DeptName, deptName_);
          DARABONBA_PTR_TO_JSON(DeptNameInEnglish, deptNameInEnglish_);
          DARABONBA_PTR_TO_JSON(DeptNo, deptNo_);
          DARABONBA_PTR_TO_JSON(DeptPath, deptPath_);
          DARABONBA_PTR_TO_JSON(HumanSourceGroupOrderNumber, humanSourceGroupOrderNumber_);
          DARABONBA_PTR_TO_JSON(HumanSourceGroupWorkNo, humanSourceGroupWorkNo_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(MasterWorkNo, masterWorkNo_);
        };
        friend void from_json(const Darabonba::Json& j, MasterDataDepartments& obj) { 
          DARABONBA_PTR_FROM_JSON(DeptName, deptName_);
          DARABONBA_PTR_FROM_JSON(DeptNameInEnglish, deptNameInEnglish_);
          DARABONBA_PTR_FROM_JSON(DeptNo, deptNo_);
          DARABONBA_PTR_FROM_JSON(DeptPath, deptPath_);
          DARABONBA_PTR_FROM_JSON(HumanSourceGroupOrderNumber, humanSourceGroupOrderNumber_);
          DARABONBA_PTR_FROM_JSON(HumanSourceGroupWorkNo, humanSourceGroupWorkNo_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(MasterWorkNo, masterWorkNo_);
        };
        MasterDataDepartments() = default ;
        MasterDataDepartments(const MasterDataDepartments &) = default ;
        MasterDataDepartments(MasterDataDepartments &&) = default ;
        MasterDataDepartments(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MasterDataDepartments() = default ;
        MasterDataDepartments& operator=(const MasterDataDepartments &) = default ;
        MasterDataDepartments& operator=(MasterDataDepartments &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deptName_ == nullptr
        && this->deptNameInEnglish_ == nullptr && this->deptNo_ == nullptr && this->deptPath_ == nullptr && this->humanSourceGroupOrderNumber_ == nullptr && this->humanSourceGroupWorkNo_ == nullptr
        && this->id_ == nullptr && this->masterWorkNo_ == nullptr; };
        // deptName Field Functions 
        bool hasDeptName() const { return this->deptName_ != nullptr;};
        void deleteDeptName() { this->deptName_ = nullptr;};
        inline string getDeptName() const { DARABONBA_PTR_GET_DEFAULT(deptName_, "") };
        inline MasterDataDepartments& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


        // deptNameInEnglish Field Functions 
        bool hasDeptNameInEnglish() const { return this->deptNameInEnglish_ != nullptr;};
        void deleteDeptNameInEnglish() { this->deptNameInEnglish_ = nullptr;};
        inline string getDeptNameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(deptNameInEnglish_, "") };
        inline MasterDataDepartments& setDeptNameInEnglish(string deptNameInEnglish) { DARABONBA_PTR_SET_VALUE(deptNameInEnglish_, deptNameInEnglish) };


        // deptNo Field Functions 
        bool hasDeptNo() const { return this->deptNo_ != nullptr;};
        void deleteDeptNo() { this->deptNo_ = nullptr;};
        inline string getDeptNo() const { DARABONBA_PTR_GET_DEFAULT(deptNo_, "") };
        inline MasterDataDepartments& setDeptNo(string deptNo) { DARABONBA_PTR_SET_VALUE(deptNo_, deptNo) };


        // deptPath Field Functions 
        bool hasDeptPath() const { return this->deptPath_ != nullptr;};
        void deleteDeptPath() { this->deptPath_ = nullptr;};
        inline string getDeptPath() const { DARABONBA_PTR_GET_DEFAULT(deptPath_, "") };
        inline MasterDataDepartments& setDeptPath(string deptPath) { DARABONBA_PTR_SET_VALUE(deptPath_, deptPath) };


        // humanSourceGroupOrderNumber Field Functions 
        bool hasHumanSourceGroupOrderNumber() const { return this->humanSourceGroupOrderNumber_ != nullptr;};
        void deleteHumanSourceGroupOrderNumber() { this->humanSourceGroupOrderNumber_ = nullptr;};
        inline string getHumanSourceGroupOrderNumber() const { DARABONBA_PTR_GET_DEFAULT(humanSourceGroupOrderNumber_, "") };
        inline MasterDataDepartments& setHumanSourceGroupOrderNumber(string humanSourceGroupOrderNumber) { DARABONBA_PTR_SET_VALUE(humanSourceGroupOrderNumber_, humanSourceGroupOrderNumber) };


        // humanSourceGroupWorkNo Field Functions 
        bool hasHumanSourceGroupWorkNo() const { return this->humanSourceGroupWorkNo_ != nullptr;};
        void deleteHumanSourceGroupWorkNo() { this->humanSourceGroupWorkNo_ = nullptr;};
        inline string getHumanSourceGroupWorkNo() const { DARABONBA_PTR_GET_DEFAULT(humanSourceGroupWorkNo_, "") };
        inline MasterDataDepartments& setHumanSourceGroupWorkNo(string humanSourceGroupWorkNo) { DARABONBA_PTR_SET_VALUE(humanSourceGroupWorkNo_, humanSourceGroupWorkNo) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline MasterDataDepartments& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // masterWorkNo Field Functions 
        bool hasMasterWorkNo() const { return this->masterWorkNo_ != nullptr;};
        void deleteMasterWorkNo() { this->masterWorkNo_ = nullptr;};
        inline string getMasterWorkNo() const { DARABONBA_PTR_GET_DEFAULT(masterWorkNo_, "") };
        inline MasterDataDepartments& setMasterWorkNo(string masterWorkNo) { DARABONBA_PTR_SET_VALUE(masterWorkNo_, masterWorkNo) };


      protected:
        shared_ptr<string> deptName_ {};
        shared_ptr<string> deptNameInEnglish_ {};
        shared_ptr<string> deptNo_ {};
        shared_ptr<string> deptPath_ {};
        shared_ptr<string> humanSourceGroupOrderNumber_ {};
        shared_ptr<string> humanSourceGroupWorkNo_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> masterWorkNo_ {};
      };

      virtual bool empty() const override { return this->departmentDescription_ == nullptr
        && this->displayEnName_ == nullptr && this->displayName_ == nullptr && this->masterDataDepartments_ == nullptr && this->orderNumber_ == nullptr && this->personalPhoto_ == nullptr
        && this->status_ == nullptr && this->tbWang_ == nullptr && this->userId_ == nullptr && this->userInfo_ == nullptr; };
      // departmentDescription Field Functions 
      bool hasDepartmentDescription() const { return this->departmentDescription_ != nullptr;};
      void deleteDepartmentDescription() { this->departmentDescription_ = nullptr;};
      inline string getDepartmentDescription() const { DARABONBA_PTR_GET_DEFAULT(departmentDescription_, "") };
      inline Owners& setDepartmentDescription(string departmentDescription) { DARABONBA_PTR_SET_VALUE(departmentDescription_, departmentDescription) };


      // displayEnName Field Functions 
      bool hasDisplayEnName() const { return this->displayEnName_ != nullptr;};
      void deleteDisplayEnName() { this->displayEnName_ = nullptr;};
      inline string getDisplayEnName() const { DARABONBA_PTR_GET_DEFAULT(displayEnName_, "") };
      inline Owners& setDisplayEnName(string displayEnName) { DARABONBA_PTR_SET_VALUE(displayEnName_, displayEnName) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Owners& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // masterDataDepartments Field Functions 
      bool hasMasterDataDepartments() const { return this->masterDataDepartments_ != nullptr;};
      void deleteMasterDataDepartments() { this->masterDataDepartments_ = nullptr;};
      inline const vector<Owners::MasterDataDepartments> & getMasterDataDepartments() const { DARABONBA_PTR_GET_CONST(masterDataDepartments_, vector<Owners::MasterDataDepartments>) };
      inline vector<Owners::MasterDataDepartments> getMasterDataDepartments() { DARABONBA_PTR_GET(masterDataDepartments_, vector<Owners::MasterDataDepartments>) };
      inline Owners& setMasterDataDepartments(const vector<Owners::MasterDataDepartments> & masterDataDepartments) { DARABONBA_PTR_SET_VALUE(masterDataDepartments_, masterDataDepartments) };
      inline Owners& setMasterDataDepartments(vector<Owners::MasterDataDepartments> && masterDataDepartments) { DARABONBA_PTR_SET_RVALUE(masterDataDepartments_, masterDataDepartments) };


      // orderNumber Field Functions 
      bool hasOrderNumber() const { return this->orderNumber_ != nullptr;};
      void deleteOrderNumber() { this->orderNumber_ = nullptr;};
      inline string getOrderNumber() const { DARABONBA_PTR_GET_DEFAULT(orderNumber_, "") };
      inline Owners& setOrderNumber(string orderNumber) { DARABONBA_PTR_SET_VALUE(orderNumber_, orderNumber) };


      // personalPhoto Field Functions 
      bool hasPersonalPhoto() const { return this->personalPhoto_ != nullptr;};
      void deletePersonalPhoto() { this->personalPhoto_ = nullptr;};
      inline string getPersonalPhoto() const { DARABONBA_PTR_GET_DEFAULT(personalPhoto_, "") };
      inline Owners& setPersonalPhoto(string personalPhoto) { DARABONBA_PTR_SET_VALUE(personalPhoto_, personalPhoto) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Owners& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tbWang Field Functions 
      bool hasTbWang() const { return this->tbWang_ != nullptr;};
      void deleteTbWang() { this->tbWang_ = nullptr;};
      inline string getTbWang() const { DARABONBA_PTR_GET_DEFAULT(tbWang_, "") };
      inline Owners& setTbWang(string tbWang) { DARABONBA_PTR_SET_VALUE(tbWang_, tbWang) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Owners& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userInfo Field Functions 
      bool hasUserInfo() const { return this->userInfo_ != nullptr;};
      void deleteUserInfo() { this->userInfo_ = nullptr;};
      inline string getUserInfo() const { DARABONBA_PTR_GET_DEFAULT(userInfo_, "") };
      inline Owners& setUserInfo(string userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };


    protected:
      shared_ptr<string> departmentDescription_ {};
      shared_ptr<string> displayEnName_ {};
      shared_ptr<string> displayName_ {};
      shared_ptr<vector<Owners::MasterDataDepartments>> masterDataDepartments_ {};
      shared_ptr<string> orderNumber_ {};
      shared_ptr<string> personalPhoto_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> tbWang_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userInfo_ {};
    };

    class Originator : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Originator& obj) { 
        DARABONBA_PTR_TO_JSON(DepartmentDescription, departmentDescription_);
        DARABONBA_PTR_TO_JSON(DisplayEnName, displayEnName_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(MasterDataDepartments, masterDataDepartments_);
        DARABONBA_PTR_TO_JSON(OrderNumber, orderNumber_);
        DARABONBA_PTR_TO_JSON(PersonalPhoto, personalPhoto_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TbWang, tbWang_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Originator& obj) { 
        DARABONBA_PTR_FROM_JSON(DepartmentDescription, departmentDescription_);
        DARABONBA_PTR_FROM_JSON(DisplayEnName, displayEnName_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(MasterDataDepartments, masterDataDepartments_);
        DARABONBA_PTR_FROM_JSON(OrderNumber, orderNumber_);
        DARABONBA_PTR_FROM_JSON(PersonalPhoto, personalPhoto_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TbWang, tbWang_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
      };
      Originator() = default ;
      Originator(const Originator &) = default ;
      Originator(Originator &&) = default ;
      Originator(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Originator() = default ;
      Originator& operator=(const Originator &) = default ;
      Originator& operator=(Originator &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MasterDataDepartments : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MasterDataDepartments& obj) { 
          DARABONBA_PTR_TO_JSON(DeptName, deptName_);
          DARABONBA_PTR_TO_JSON(DeptNameInEnglish, deptNameInEnglish_);
          DARABONBA_PTR_TO_JSON(DeptNo, deptNo_);
          DARABONBA_PTR_TO_JSON(DeptPath, deptPath_);
          DARABONBA_PTR_TO_JSON(HumanSourceGroupOrderNumber, humanSourceGroupOrderNumber_);
          DARABONBA_PTR_TO_JSON(HumanSourceGroupWorkNo, humanSourceGroupWorkNo_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(MasterWorkNo, masterWorkNo_);
        };
        friend void from_json(const Darabonba::Json& j, MasterDataDepartments& obj) { 
          DARABONBA_PTR_FROM_JSON(DeptName, deptName_);
          DARABONBA_PTR_FROM_JSON(DeptNameInEnglish, deptNameInEnglish_);
          DARABONBA_PTR_FROM_JSON(DeptNo, deptNo_);
          DARABONBA_PTR_FROM_JSON(DeptPath, deptPath_);
          DARABONBA_PTR_FROM_JSON(HumanSourceGroupOrderNumber, humanSourceGroupOrderNumber_);
          DARABONBA_PTR_FROM_JSON(HumanSourceGroupWorkNo, humanSourceGroupWorkNo_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(MasterWorkNo, masterWorkNo_);
        };
        MasterDataDepartments() = default ;
        MasterDataDepartments(const MasterDataDepartments &) = default ;
        MasterDataDepartments(MasterDataDepartments &&) = default ;
        MasterDataDepartments(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MasterDataDepartments() = default ;
        MasterDataDepartments& operator=(const MasterDataDepartments &) = default ;
        MasterDataDepartments& operator=(MasterDataDepartments &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deptName_ == nullptr
        && this->deptNameInEnglish_ == nullptr && this->deptNo_ == nullptr && this->deptPath_ == nullptr && this->humanSourceGroupOrderNumber_ == nullptr && this->humanSourceGroupWorkNo_ == nullptr
        && this->id_ == nullptr && this->masterWorkNo_ == nullptr; };
        // deptName Field Functions 
        bool hasDeptName() const { return this->deptName_ != nullptr;};
        void deleteDeptName() { this->deptName_ = nullptr;};
        inline string getDeptName() const { DARABONBA_PTR_GET_DEFAULT(deptName_, "") };
        inline MasterDataDepartments& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


        // deptNameInEnglish Field Functions 
        bool hasDeptNameInEnglish() const { return this->deptNameInEnglish_ != nullptr;};
        void deleteDeptNameInEnglish() { this->deptNameInEnglish_ = nullptr;};
        inline string getDeptNameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(deptNameInEnglish_, "") };
        inline MasterDataDepartments& setDeptNameInEnglish(string deptNameInEnglish) { DARABONBA_PTR_SET_VALUE(deptNameInEnglish_, deptNameInEnglish) };


        // deptNo Field Functions 
        bool hasDeptNo() const { return this->deptNo_ != nullptr;};
        void deleteDeptNo() { this->deptNo_ = nullptr;};
        inline string getDeptNo() const { DARABONBA_PTR_GET_DEFAULT(deptNo_, "") };
        inline MasterDataDepartments& setDeptNo(string deptNo) { DARABONBA_PTR_SET_VALUE(deptNo_, deptNo) };


        // deptPath Field Functions 
        bool hasDeptPath() const { return this->deptPath_ != nullptr;};
        void deleteDeptPath() { this->deptPath_ = nullptr;};
        inline string getDeptPath() const { DARABONBA_PTR_GET_DEFAULT(deptPath_, "") };
        inline MasterDataDepartments& setDeptPath(string deptPath) { DARABONBA_PTR_SET_VALUE(deptPath_, deptPath) };


        // humanSourceGroupOrderNumber Field Functions 
        bool hasHumanSourceGroupOrderNumber() const { return this->humanSourceGroupOrderNumber_ != nullptr;};
        void deleteHumanSourceGroupOrderNumber() { this->humanSourceGroupOrderNumber_ = nullptr;};
        inline string getHumanSourceGroupOrderNumber() const { DARABONBA_PTR_GET_DEFAULT(humanSourceGroupOrderNumber_, "") };
        inline MasterDataDepartments& setHumanSourceGroupOrderNumber(string humanSourceGroupOrderNumber) { DARABONBA_PTR_SET_VALUE(humanSourceGroupOrderNumber_, humanSourceGroupOrderNumber) };


        // humanSourceGroupWorkNo Field Functions 
        bool hasHumanSourceGroupWorkNo() const { return this->humanSourceGroupWorkNo_ != nullptr;};
        void deleteHumanSourceGroupWorkNo() { this->humanSourceGroupWorkNo_ = nullptr;};
        inline string getHumanSourceGroupWorkNo() const { DARABONBA_PTR_GET_DEFAULT(humanSourceGroupWorkNo_, "") };
        inline MasterDataDepartments& setHumanSourceGroupWorkNo(string humanSourceGroupWorkNo) { DARABONBA_PTR_SET_VALUE(humanSourceGroupWorkNo_, humanSourceGroupWorkNo) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline MasterDataDepartments& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // masterWorkNo Field Functions 
        bool hasMasterWorkNo() const { return this->masterWorkNo_ != nullptr;};
        void deleteMasterWorkNo() { this->masterWorkNo_ = nullptr;};
        inline string getMasterWorkNo() const { DARABONBA_PTR_GET_DEFAULT(masterWorkNo_, "") };
        inline MasterDataDepartments& setMasterWorkNo(string masterWorkNo) { DARABONBA_PTR_SET_VALUE(masterWorkNo_, masterWorkNo) };


      protected:
        shared_ptr<string> deptName_ {};
        shared_ptr<string> deptNameInEnglish_ {};
        shared_ptr<string> deptNo_ {};
        shared_ptr<string> deptPath_ {};
        shared_ptr<string> humanSourceGroupOrderNumber_ {};
        shared_ptr<string> humanSourceGroupWorkNo_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> masterWorkNo_ {};
      };

      virtual bool empty() const override { return this->departmentDescription_ == nullptr
        && this->displayEnName_ == nullptr && this->displayName_ == nullptr && this->masterDataDepartments_ == nullptr && this->orderNumber_ == nullptr && this->personalPhoto_ == nullptr
        && this->status_ == nullptr && this->tbWang_ == nullptr && this->userId_ == nullptr && this->userInfo_ == nullptr; };
      // departmentDescription Field Functions 
      bool hasDepartmentDescription() const { return this->departmentDescription_ != nullptr;};
      void deleteDepartmentDescription() { this->departmentDescription_ = nullptr;};
      inline string getDepartmentDescription() const { DARABONBA_PTR_GET_DEFAULT(departmentDescription_, "") };
      inline Originator& setDepartmentDescription(string departmentDescription) { DARABONBA_PTR_SET_VALUE(departmentDescription_, departmentDescription) };


      // displayEnName Field Functions 
      bool hasDisplayEnName() const { return this->displayEnName_ != nullptr;};
      void deleteDisplayEnName() { this->displayEnName_ = nullptr;};
      inline string getDisplayEnName() const { DARABONBA_PTR_GET_DEFAULT(displayEnName_, "") };
      inline Originator& setDisplayEnName(string displayEnName) { DARABONBA_PTR_SET_VALUE(displayEnName_, displayEnName) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Originator& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // masterDataDepartments Field Functions 
      bool hasMasterDataDepartments() const { return this->masterDataDepartments_ != nullptr;};
      void deleteMasterDataDepartments() { this->masterDataDepartments_ = nullptr;};
      inline const vector<Originator::MasterDataDepartments> & getMasterDataDepartments() const { DARABONBA_PTR_GET_CONST(masterDataDepartments_, vector<Originator::MasterDataDepartments>) };
      inline vector<Originator::MasterDataDepartments> getMasterDataDepartments() { DARABONBA_PTR_GET(masterDataDepartments_, vector<Originator::MasterDataDepartments>) };
      inline Originator& setMasterDataDepartments(const vector<Originator::MasterDataDepartments> & masterDataDepartments) { DARABONBA_PTR_SET_VALUE(masterDataDepartments_, masterDataDepartments) };
      inline Originator& setMasterDataDepartments(vector<Originator::MasterDataDepartments> && masterDataDepartments) { DARABONBA_PTR_SET_RVALUE(masterDataDepartments_, masterDataDepartments) };


      // orderNumber Field Functions 
      bool hasOrderNumber() const { return this->orderNumber_ != nullptr;};
      void deleteOrderNumber() { this->orderNumber_ = nullptr;};
      inline string getOrderNumber() const { DARABONBA_PTR_GET_DEFAULT(orderNumber_, "") };
      inline Originator& setOrderNumber(string orderNumber) { DARABONBA_PTR_SET_VALUE(orderNumber_, orderNumber) };


      // personalPhoto Field Functions 
      bool hasPersonalPhoto() const { return this->personalPhoto_ != nullptr;};
      void deletePersonalPhoto() { this->personalPhoto_ = nullptr;};
      inline string getPersonalPhoto() const { DARABONBA_PTR_GET_DEFAULT(personalPhoto_, "") };
      inline Originator& setPersonalPhoto(string personalPhoto) { DARABONBA_PTR_SET_VALUE(personalPhoto_, personalPhoto) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Originator& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tbWang Field Functions 
      bool hasTbWang() const { return this->tbWang_ != nullptr;};
      void deleteTbWang() { this->tbWang_ = nullptr;};
      inline string getTbWang() const { DARABONBA_PTR_GET_DEFAULT(tbWang_, "") };
      inline Originator& setTbWang(string tbWang) { DARABONBA_PTR_SET_VALUE(tbWang_, tbWang) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Originator& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userInfo Field Functions 
      bool hasUserInfo() const { return this->userInfo_ != nullptr;};
      void deleteUserInfo() { this->userInfo_ = nullptr;};
      inline string getUserInfo() const { DARABONBA_PTR_GET_DEFAULT(userInfo_, "") };
      inline Originator& setUserInfo(string userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };


    protected:
      shared_ptr<string> departmentDescription_ {};
      shared_ptr<string> displayEnName_ {};
      shared_ptr<string> displayName_ {};
      shared_ptr<vector<Originator::MasterDataDepartments>> masterDataDepartments_ {};
      shared_ptr<string> orderNumber_ {};
      shared_ptr<string> personalPhoto_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> tbWang_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userInfo_ {};
    };

    virtual bool empty() const override { return this->formUuid_ == nullptr
        && this->originator_ == nullptr && this->outResult_ == nullptr && this->owners_ == nullptr && this->processId_ == nullptr && this->processInstanceId_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr && this->tasks_ == nullptr && this->title_ == nullptr && this->variables_ == nullptr
        && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string getFormUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline GetProcessDefinitionResponseBody& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // originator Field Functions 
    bool hasOriginator() const { return this->originator_ != nullptr;};
    void deleteOriginator() { this->originator_ = nullptr;};
    inline const GetProcessDefinitionResponseBody::Originator & getOriginator() const { DARABONBA_PTR_GET_CONST(originator_, GetProcessDefinitionResponseBody::Originator) };
    inline GetProcessDefinitionResponseBody::Originator getOriginator() { DARABONBA_PTR_GET(originator_, GetProcessDefinitionResponseBody::Originator) };
    inline GetProcessDefinitionResponseBody& setOriginator(const GetProcessDefinitionResponseBody::Originator & originator) { DARABONBA_PTR_SET_VALUE(originator_, originator) };
    inline GetProcessDefinitionResponseBody& setOriginator(GetProcessDefinitionResponseBody::Originator && originator) { DARABONBA_PTR_SET_RVALUE(originator_, originator) };


    // outResult Field Functions 
    bool hasOutResult() const { return this->outResult_ != nullptr;};
    void deleteOutResult() { this->outResult_ = nullptr;};
    inline string getOutResult() const { DARABONBA_PTR_GET_DEFAULT(outResult_, "") };
    inline GetProcessDefinitionResponseBody& setOutResult(string outResult) { DARABONBA_PTR_SET_VALUE(outResult_, outResult) };


    // owners Field Functions 
    bool hasOwners() const { return this->owners_ != nullptr;};
    void deleteOwners() { this->owners_ = nullptr;};
    inline const vector<GetProcessDefinitionResponseBody::Owners> & getOwners() const { DARABONBA_PTR_GET_CONST(owners_, vector<GetProcessDefinitionResponseBody::Owners>) };
    inline vector<GetProcessDefinitionResponseBody::Owners> getOwners() { DARABONBA_PTR_GET(owners_, vector<GetProcessDefinitionResponseBody::Owners>) };
    inline GetProcessDefinitionResponseBody& setOwners(const vector<GetProcessDefinitionResponseBody::Owners> & owners) { DARABONBA_PTR_SET_VALUE(owners_, owners) };
    inline GetProcessDefinitionResponseBody& setOwners(vector<GetProcessDefinitionResponseBody::Owners> && owners) { DARABONBA_PTR_SET_RVALUE(owners_, owners) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline GetProcessDefinitionResponseBody& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // processInstanceId Field Functions 
    bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
    void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
    inline string getProcessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
    inline GetProcessDefinitionResponseBody& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProcessDefinitionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetProcessDefinitionResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<GetProcessDefinitionResponseBody::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<GetProcessDefinitionResponseBody::Tasks>) };
    inline vector<GetProcessDefinitionResponseBody::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<GetProcessDefinitionResponseBody::Tasks>) };
    inline GetProcessDefinitionResponseBody& setTasks(const vector<GetProcessDefinitionResponseBody::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline GetProcessDefinitionResponseBody& setTasks(vector<GetProcessDefinitionResponseBody::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetProcessDefinitionResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline     const Darabonba::Json & getVariables() const { DARABONBA_GET(variables_) };
    Darabonba::Json & getVariables() { DARABONBA_GET(variables_) };
    inline GetProcessDefinitionResponseBody& setVariables(const Darabonba::Json & variables) { DARABONBA_SET_VALUE(variables_, variables) };
    inline GetProcessDefinitionResponseBody& setVariables(Darabonba::Json && variables) { DARABONBA_SET_RVALUE(variables_, variables) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetProcessDefinitionResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetProcessDefinitionResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> formUuid_ {};
    shared_ptr<GetProcessDefinitionResponseBody::Originator> originator_ {};
    shared_ptr<string> outResult_ {};
    shared_ptr<vector<GetProcessDefinitionResponseBody::Owners>> owners_ {};
    shared_ptr<string> processId_ {};
    shared_ptr<string> processInstanceId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<vector<GetProcessDefinitionResponseBody::Tasks>> tasks_ {};
    shared_ptr<string> title_ {};
    Darabonba::Json variables_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
