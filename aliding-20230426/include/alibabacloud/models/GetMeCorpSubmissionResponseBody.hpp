// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMECORPSUBMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMECORPSUBMISSIONRESPONSEBODY_HPP_
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
  class GetMeCorpSubmissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMeCorpSubmissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetMeCorpSubmissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetMeCorpSubmissionResponseBody() = default ;
    GetMeCorpSubmissionResponseBody(const GetMeCorpSubmissionResponseBody &) = default ;
    GetMeCorpSubmissionResponseBody(GetMeCorpSubmissionResponseBody &&) = default ;
    GetMeCorpSubmissionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMeCorpSubmissionResponseBody() = default ;
    GetMeCorpSubmissionResponseBody& operator=(const GetMeCorpSubmissionResponseBody &) = default ;
    GetMeCorpSubmissionResponseBody& operator=(GetMeCorpSubmissionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Actioner, actioner_);
        DARABONBA_PTR_TO_JSON(ActionerId, actionerId_);
        DARABONBA_PTR_TO_JSON(ActionerName, actionerName_);
        DARABONBA_PTR_TO_JSON(AppType, appType_);
        DARABONBA_PTR_TO_JSON(CreateTimeGMT, createTimeGMT_);
        DARABONBA_PTR_TO_JSON(CurrentActivityInstances, currentActivityInstances_);
        DARABONBA_ANY_TO_JSON(DataMap, dataMap_);
        DARABONBA_PTR_TO_JSON(DataType, dataType_);
        DARABONBA_PTR_TO_JSON(FinishTimeGMT, finishTimeGMT_);
        DARABONBA_PTR_TO_JSON(FormInstanceId, formInstanceId_);
        DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
        DARABONBA_PTR_TO_JSON(InstanceValue, instanceValue_);
        DARABONBA_PTR_TO_JSON(ModifiedTimeGMT, modifiedTimeGMT_);
        DARABONBA_PTR_TO_JSON(OriginatorAvatar, originatorAvatar_);
        DARABONBA_PTR_TO_JSON(OriginatorDisplayName, originatorDisplayName_);
        DARABONBA_PTR_TO_JSON(OriginatorId, originatorId_);
        DARABONBA_PTR_TO_JSON(ProcessApprovedResult, processApprovedResult_);
        DARABONBA_PTR_TO_JSON(ProcessApprovedResultText, processApprovedResultText_);
        DARABONBA_PTR_TO_JSON(ProcessCode, processCode_);
        DARABONBA_PTR_TO_JSON(ProcessId, processId_);
        DARABONBA_PTR_TO_JSON(ProcessInstanceId, processInstanceId_);
        DARABONBA_PTR_TO_JSON(ProcessInstanceStatus, processInstanceStatus_);
        DARABONBA_PTR_TO_JSON(ProcessInstanceStatusText, processInstanceStatusText_);
        DARABONBA_PTR_TO_JSON(ProcessName, processName_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Actioner, actioner_);
        DARABONBA_PTR_FROM_JSON(ActionerId, actionerId_);
        DARABONBA_PTR_FROM_JSON(ActionerName, actionerName_);
        DARABONBA_PTR_FROM_JSON(AppType, appType_);
        DARABONBA_PTR_FROM_JSON(CreateTimeGMT, createTimeGMT_);
        DARABONBA_PTR_FROM_JSON(CurrentActivityInstances, currentActivityInstances_);
        DARABONBA_ANY_FROM_JSON(DataMap, dataMap_);
        DARABONBA_PTR_FROM_JSON(DataType, dataType_);
        DARABONBA_PTR_FROM_JSON(FinishTimeGMT, finishTimeGMT_);
        DARABONBA_PTR_FROM_JSON(FormInstanceId, formInstanceId_);
        DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
        DARABONBA_PTR_FROM_JSON(InstanceValue, instanceValue_);
        DARABONBA_PTR_FROM_JSON(ModifiedTimeGMT, modifiedTimeGMT_);
        DARABONBA_PTR_FROM_JSON(OriginatorAvatar, originatorAvatar_);
        DARABONBA_PTR_FROM_JSON(OriginatorDisplayName, originatorDisplayName_);
        DARABONBA_PTR_FROM_JSON(OriginatorId, originatorId_);
        DARABONBA_PTR_FROM_JSON(ProcessApprovedResult, processApprovedResult_);
        DARABONBA_PTR_FROM_JSON(ProcessApprovedResultText, processApprovedResultText_);
        DARABONBA_PTR_FROM_JSON(ProcessCode, processCode_);
        DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
        DARABONBA_PTR_FROM_JSON(ProcessInstanceId, processInstanceId_);
        DARABONBA_PTR_FROM_JSON(ProcessInstanceStatus, processInstanceStatus_);
        DARABONBA_PTR_FROM_JSON(ProcessInstanceStatusText, processInstanceStatusText_);
        DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CurrentActivityInstances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CurrentActivityInstances& obj) { 
          DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
          DARABONBA_PTR_TO_JSON(ActivityInstanceStatus, activityInstanceStatus_);
          DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
          DARABONBA_PTR_TO_JSON(ActivityNameEn, activityNameEn_);
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, CurrentActivityInstances& obj) { 
          DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
          DARABONBA_PTR_FROM_JSON(ActivityInstanceStatus, activityInstanceStatus_);
          DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
          DARABONBA_PTR_FROM_JSON(ActivityNameEn, activityNameEn_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        CurrentActivityInstances() = default ;
        CurrentActivityInstances(const CurrentActivityInstances &) = default ;
        CurrentActivityInstances(CurrentActivityInstances &&) = default ;
        CurrentActivityInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CurrentActivityInstances() = default ;
        CurrentActivityInstances& operator=(const CurrentActivityInstances &) = default ;
        CurrentActivityInstances& operator=(CurrentActivityInstances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->activityId_ == nullptr
        && this->activityInstanceStatus_ == nullptr && this->activityName_ == nullptr && this->activityNameEn_ == nullptr && this->id_ == nullptr; };
        // activityId Field Functions 
        bool hasActivityId() const { return this->activityId_ != nullptr;};
        void deleteActivityId() { this->activityId_ = nullptr;};
        inline string getActivityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
        inline CurrentActivityInstances& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


        // activityInstanceStatus Field Functions 
        bool hasActivityInstanceStatus() const { return this->activityInstanceStatus_ != nullptr;};
        void deleteActivityInstanceStatus() { this->activityInstanceStatus_ = nullptr;};
        inline string getActivityInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(activityInstanceStatus_, "") };
        inline CurrentActivityInstances& setActivityInstanceStatus(string activityInstanceStatus) { DARABONBA_PTR_SET_VALUE(activityInstanceStatus_, activityInstanceStatus) };


        // activityName Field Functions 
        bool hasActivityName() const { return this->activityName_ != nullptr;};
        void deleteActivityName() { this->activityName_ = nullptr;};
        inline string getActivityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
        inline CurrentActivityInstances& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


        // activityNameEn Field Functions 
        bool hasActivityNameEn() const { return this->activityNameEn_ != nullptr;};
        void deleteActivityNameEn() { this->activityNameEn_ = nullptr;};
        inline string getActivityNameEn() const { DARABONBA_PTR_GET_DEFAULT(activityNameEn_, "") };
        inline CurrentActivityInstances& setActivityNameEn(string activityNameEn) { DARABONBA_PTR_SET_VALUE(activityNameEn_, activityNameEn) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline CurrentActivityInstances& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        shared_ptr<string> activityId_ {};
        shared_ptr<string> activityInstanceStatus_ {};
        shared_ptr<string> activityName_ {};
        shared_ptr<string> activityNameEn_ {};
        shared_ptr<int64_t> id_ {};
      };

      class Actioner : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Actioner& obj) { 
          DARABONBA_PTR_TO_JSON(BuName, buName_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(EmployeeType, employeeType_);
          DARABONBA_PTR_TO_JSON(EmployeeTypeInformation, employeeTypeInformation_);
          DARABONBA_PTR_TO_JSON(HumanResourceGroupWorkNumber, humanResourceGroupWorkNumber_);
          DARABONBA_PTR_TO_JSON(IsSystemAdmin, isSystemAdmin_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NickName, nickName_);
          DARABONBA_PTR_TO_JSON(OrderNumber, orderNumber_);
          DARABONBA_PTR_TO_JSON(PersonalPhoto, personalPhoto_);
          DARABONBA_PTR_TO_JSON(PersonalPhotoUrl, personalPhotoUrl_);
          DARABONBA_PTR_TO_JSON(PinyinNameAll, pinyinNameAll_);
          DARABONBA_PTR_TO_JSON(PinyinNickName, pinyinNickName_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(SuperUserId, superUserId_);
          DARABONBA_PTR_TO_JSON(TbWang, tbWang_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Actioner& obj) { 
          DARABONBA_PTR_FROM_JSON(BuName, buName_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(EmployeeType, employeeType_);
          DARABONBA_PTR_FROM_JSON(EmployeeTypeInformation, employeeTypeInformation_);
          DARABONBA_PTR_FROM_JSON(HumanResourceGroupWorkNumber, humanResourceGroupWorkNumber_);
          DARABONBA_PTR_FROM_JSON(IsSystemAdmin, isSystemAdmin_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NickName, nickName_);
          DARABONBA_PTR_FROM_JSON(OrderNumber, orderNumber_);
          DARABONBA_PTR_FROM_JSON(PersonalPhoto, personalPhoto_);
          DARABONBA_PTR_FROM_JSON(PersonalPhotoUrl, personalPhotoUrl_);
          DARABONBA_PTR_FROM_JSON(PinyinNameAll, pinyinNameAll_);
          DARABONBA_PTR_FROM_JSON(PinyinNickName, pinyinNickName_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(SuperUserId, superUserId_);
          DARABONBA_PTR_FROM_JSON(TbWang, tbWang_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        Actioner() = default ;
        Actioner(const Actioner &) = default ;
        Actioner(Actioner &&) = default ;
        Actioner(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Actioner() = default ;
        Actioner& operator=(const Actioner &) = default ;
        Actioner& operator=(Actioner &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->buName_ == nullptr
        && this->email_ == nullptr && this->employeeType_ == nullptr && this->employeeTypeInformation_ == nullptr && this->humanResourceGroupWorkNumber_ == nullptr && this->isSystemAdmin_ == nullptr
        && this->level_ == nullptr && this->name_ == nullptr && this->nickName_ == nullptr && this->orderNumber_ == nullptr && this->personalPhoto_ == nullptr
        && this->personalPhotoUrl_ == nullptr && this->pinyinNameAll_ == nullptr && this->pinyinNickName_ == nullptr && this->state_ == nullptr && this->superUserId_ == nullptr
        && this->tbWang_ == nullptr && this->userId_ == nullptr; };
        // buName Field Functions 
        bool hasBuName() const { return this->buName_ != nullptr;};
        void deleteBuName() { this->buName_ = nullptr;};
        inline string getBuName() const { DARABONBA_PTR_GET_DEFAULT(buName_, "") };
        inline Actioner& setBuName(string buName) { DARABONBA_PTR_SET_VALUE(buName_, buName) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline Actioner& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // employeeType Field Functions 
        bool hasEmployeeType() const { return this->employeeType_ != nullptr;};
        void deleteEmployeeType() { this->employeeType_ = nullptr;};
        inline string getEmployeeType() const { DARABONBA_PTR_GET_DEFAULT(employeeType_, "") };
        inline Actioner& setEmployeeType(string employeeType) { DARABONBA_PTR_SET_VALUE(employeeType_, employeeType) };


        // employeeTypeInformation Field Functions 
        bool hasEmployeeTypeInformation() const { return this->employeeTypeInformation_ != nullptr;};
        void deleteEmployeeTypeInformation() { this->employeeTypeInformation_ = nullptr;};
        inline string getEmployeeTypeInformation() const { DARABONBA_PTR_GET_DEFAULT(employeeTypeInformation_, "") };
        inline Actioner& setEmployeeTypeInformation(string employeeTypeInformation) { DARABONBA_PTR_SET_VALUE(employeeTypeInformation_, employeeTypeInformation) };


        // humanResourceGroupWorkNumber Field Functions 
        bool hasHumanResourceGroupWorkNumber() const { return this->humanResourceGroupWorkNumber_ != nullptr;};
        void deleteHumanResourceGroupWorkNumber() { this->humanResourceGroupWorkNumber_ = nullptr;};
        inline string getHumanResourceGroupWorkNumber() const { DARABONBA_PTR_GET_DEFAULT(humanResourceGroupWorkNumber_, "") };
        inline Actioner& setHumanResourceGroupWorkNumber(string humanResourceGroupWorkNumber) { DARABONBA_PTR_SET_VALUE(humanResourceGroupWorkNumber_, humanResourceGroupWorkNumber) };


        // isSystemAdmin Field Functions 
        bool hasIsSystemAdmin() const { return this->isSystemAdmin_ != nullptr;};
        void deleteIsSystemAdmin() { this->isSystemAdmin_ = nullptr;};
        inline bool getIsSystemAdmin() const { DARABONBA_PTR_GET_DEFAULT(isSystemAdmin_, false) };
        inline Actioner& setIsSystemAdmin(bool isSystemAdmin) { DARABONBA_PTR_SET_VALUE(isSystemAdmin_, isSystemAdmin) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline Actioner& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Actioner& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nickName Field Functions 
        bool hasNickName() const { return this->nickName_ != nullptr;};
        void deleteNickName() { this->nickName_ = nullptr;};
        inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
        inline Actioner& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


        // orderNumber Field Functions 
        bool hasOrderNumber() const { return this->orderNumber_ != nullptr;};
        void deleteOrderNumber() { this->orderNumber_ = nullptr;};
        inline string getOrderNumber() const { DARABONBA_PTR_GET_DEFAULT(orderNumber_, "") };
        inline Actioner& setOrderNumber(string orderNumber) { DARABONBA_PTR_SET_VALUE(orderNumber_, orderNumber) };


        // personalPhoto Field Functions 
        bool hasPersonalPhoto() const { return this->personalPhoto_ != nullptr;};
        void deletePersonalPhoto() { this->personalPhoto_ = nullptr;};
        inline string getPersonalPhoto() const { DARABONBA_PTR_GET_DEFAULT(personalPhoto_, "") };
        inline Actioner& setPersonalPhoto(string personalPhoto) { DARABONBA_PTR_SET_VALUE(personalPhoto_, personalPhoto) };


        // personalPhotoUrl Field Functions 
        bool hasPersonalPhotoUrl() const { return this->personalPhotoUrl_ != nullptr;};
        void deletePersonalPhotoUrl() { this->personalPhotoUrl_ = nullptr;};
        inline string getPersonalPhotoUrl() const { DARABONBA_PTR_GET_DEFAULT(personalPhotoUrl_, "") };
        inline Actioner& setPersonalPhotoUrl(string personalPhotoUrl) { DARABONBA_PTR_SET_VALUE(personalPhotoUrl_, personalPhotoUrl) };


        // pinyinNameAll Field Functions 
        bool hasPinyinNameAll() const { return this->pinyinNameAll_ != nullptr;};
        void deletePinyinNameAll() { this->pinyinNameAll_ = nullptr;};
        inline string getPinyinNameAll() const { DARABONBA_PTR_GET_DEFAULT(pinyinNameAll_, "") };
        inline Actioner& setPinyinNameAll(string pinyinNameAll) { DARABONBA_PTR_SET_VALUE(pinyinNameAll_, pinyinNameAll) };


        // pinyinNickName Field Functions 
        bool hasPinyinNickName() const { return this->pinyinNickName_ != nullptr;};
        void deletePinyinNickName() { this->pinyinNickName_ = nullptr;};
        inline string getPinyinNickName() const { DARABONBA_PTR_GET_DEFAULT(pinyinNickName_, "") };
        inline Actioner& setPinyinNickName(string pinyinNickName) { DARABONBA_PTR_SET_VALUE(pinyinNickName_, pinyinNickName) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline Actioner& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // superUserId Field Functions 
        bool hasSuperUserId() const { return this->superUserId_ != nullptr;};
        void deleteSuperUserId() { this->superUserId_ = nullptr;};
        inline string getSuperUserId() const { DARABONBA_PTR_GET_DEFAULT(superUserId_, "") };
        inline Actioner& setSuperUserId(string superUserId) { DARABONBA_PTR_SET_VALUE(superUserId_, superUserId) };


        // tbWang Field Functions 
        bool hasTbWang() const { return this->tbWang_ != nullptr;};
        void deleteTbWang() { this->tbWang_ = nullptr;};
        inline string getTbWang() const { DARABONBA_PTR_GET_DEFAULT(tbWang_, "") };
        inline Actioner& setTbWang(string tbWang) { DARABONBA_PTR_SET_VALUE(tbWang_, tbWang) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Actioner& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> buName_ {};
        shared_ptr<string> email_ {};
        shared_ptr<string> employeeType_ {};
        shared_ptr<string> employeeTypeInformation_ {};
        shared_ptr<string> humanResourceGroupWorkNumber_ {};
        shared_ptr<bool> isSystemAdmin_ {};
        shared_ptr<string> level_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> nickName_ {};
        shared_ptr<string> orderNumber_ {};
        shared_ptr<string> personalPhoto_ {};
        shared_ptr<string> personalPhotoUrl_ {};
        shared_ptr<string> pinyinNameAll_ {};
        shared_ptr<string> pinyinNickName_ {};
        shared_ptr<string> state_ {};
        shared_ptr<string> superUserId_ {};
        shared_ptr<string> tbWang_ {};
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->actioner_ == nullptr
        && this->actionerId_ == nullptr && this->actionerName_ == nullptr && this->appType_ == nullptr && this->createTimeGMT_ == nullptr && this->currentActivityInstances_ == nullptr
        && this->dataMap_ == nullptr && this->dataType_ == nullptr && this->finishTimeGMT_ == nullptr && this->formInstanceId_ == nullptr && this->formUuid_ == nullptr
        && this->instanceValue_ == nullptr && this->modifiedTimeGMT_ == nullptr && this->originatorAvatar_ == nullptr && this->originatorDisplayName_ == nullptr && this->originatorId_ == nullptr
        && this->processApprovedResult_ == nullptr && this->processApprovedResultText_ == nullptr && this->processCode_ == nullptr && this->processId_ == nullptr && this->processInstanceId_ == nullptr
        && this->processInstanceStatus_ == nullptr && this->processInstanceStatusText_ == nullptr && this->processName_ == nullptr && this->title_ == nullptr && this->version_ == nullptr; };
      // actioner Field Functions 
      bool hasActioner() const { return this->actioner_ != nullptr;};
      void deleteActioner() { this->actioner_ = nullptr;};
      inline const vector<Data::Actioner> & getActioner() const { DARABONBA_PTR_GET_CONST(actioner_, vector<Data::Actioner>) };
      inline vector<Data::Actioner> getActioner() { DARABONBA_PTR_GET(actioner_, vector<Data::Actioner>) };
      inline Data& setActioner(const vector<Data::Actioner> & actioner) { DARABONBA_PTR_SET_VALUE(actioner_, actioner) };
      inline Data& setActioner(vector<Data::Actioner> && actioner) { DARABONBA_PTR_SET_RVALUE(actioner_, actioner) };


      // actionerId Field Functions 
      bool hasActionerId() const { return this->actionerId_ != nullptr;};
      void deleteActionerId() { this->actionerId_ = nullptr;};
      inline const vector<string> & getActionerId() const { DARABONBA_PTR_GET_CONST(actionerId_, vector<string>) };
      inline vector<string> getActionerId() { DARABONBA_PTR_GET(actionerId_, vector<string>) };
      inline Data& setActionerId(const vector<string> & actionerId) { DARABONBA_PTR_SET_VALUE(actionerId_, actionerId) };
      inline Data& setActionerId(vector<string> && actionerId) { DARABONBA_PTR_SET_RVALUE(actionerId_, actionerId) };


      // actionerName Field Functions 
      bool hasActionerName() const { return this->actionerName_ != nullptr;};
      void deleteActionerName() { this->actionerName_ = nullptr;};
      inline const vector<string> & getActionerName() const { DARABONBA_PTR_GET_CONST(actionerName_, vector<string>) };
      inline vector<string> getActionerName() { DARABONBA_PTR_GET(actionerName_, vector<string>) };
      inline Data& setActionerName(const vector<string> & actionerName) { DARABONBA_PTR_SET_VALUE(actionerName_, actionerName) };
      inline Data& setActionerName(vector<string> && actionerName) { DARABONBA_PTR_SET_RVALUE(actionerName_, actionerName) };


      // appType Field Functions 
      bool hasAppType() const { return this->appType_ != nullptr;};
      void deleteAppType() { this->appType_ = nullptr;};
      inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
      inline Data& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


      // createTimeGMT Field Functions 
      bool hasCreateTimeGMT() const { return this->createTimeGMT_ != nullptr;};
      void deleteCreateTimeGMT() { this->createTimeGMT_ = nullptr;};
      inline string getCreateTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createTimeGMT_, "") };
      inline Data& setCreateTimeGMT(string createTimeGMT) { DARABONBA_PTR_SET_VALUE(createTimeGMT_, createTimeGMT) };


      // currentActivityInstances Field Functions 
      bool hasCurrentActivityInstances() const { return this->currentActivityInstances_ != nullptr;};
      void deleteCurrentActivityInstances() { this->currentActivityInstances_ = nullptr;};
      inline const vector<Data::CurrentActivityInstances> & getCurrentActivityInstances() const { DARABONBA_PTR_GET_CONST(currentActivityInstances_, vector<Data::CurrentActivityInstances>) };
      inline vector<Data::CurrentActivityInstances> getCurrentActivityInstances() { DARABONBA_PTR_GET(currentActivityInstances_, vector<Data::CurrentActivityInstances>) };
      inline Data& setCurrentActivityInstances(const vector<Data::CurrentActivityInstances> & currentActivityInstances) { DARABONBA_PTR_SET_VALUE(currentActivityInstances_, currentActivityInstances) };
      inline Data& setCurrentActivityInstances(vector<Data::CurrentActivityInstances> && currentActivityInstances) { DARABONBA_PTR_SET_RVALUE(currentActivityInstances_, currentActivityInstances) };


      // dataMap Field Functions 
      bool hasDataMap() const { return this->dataMap_ != nullptr;};
      void deleteDataMap() { this->dataMap_ = nullptr;};
      inline       const Darabonba::Json & getDataMap() const { DARABONBA_GET(dataMap_) };
      Darabonba::Json & getDataMap() { DARABONBA_GET(dataMap_) };
      inline Data& setDataMap(const Darabonba::Json & dataMap) { DARABONBA_SET_VALUE(dataMap_, dataMap) };
      inline Data& setDataMap(Darabonba::Json && dataMap) { DARABONBA_SET_RVALUE(dataMap_, dataMap) };


      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
      inline Data& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


      // finishTimeGMT Field Functions 
      bool hasFinishTimeGMT() const { return this->finishTimeGMT_ != nullptr;};
      void deleteFinishTimeGMT() { this->finishTimeGMT_ = nullptr;};
      inline string getFinishTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(finishTimeGMT_, "") };
      inline Data& setFinishTimeGMT(string finishTimeGMT) { DARABONBA_PTR_SET_VALUE(finishTimeGMT_, finishTimeGMT) };


      // formInstanceId Field Functions 
      bool hasFormInstanceId() const { return this->formInstanceId_ != nullptr;};
      void deleteFormInstanceId() { this->formInstanceId_ = nullptr;};
      inline string getFormInstanceId() const { DARABONBA_PTR_GET_DEFAULT(formInstanceId_, "") };
      inline Data& setFormInstanceId(string formInstanceId) { DARABONBA_PTR_SET_VALUE(formInstanceId_, formInstanceId) };


      // formUuid Field Functions 
      bool hasFormUuid() const { return this->formUuid_ != nullptr;};
      void deleteFormUuid() { this->formUuid_ = nullptr;};
      inline string getFormUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
      inline Data& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


      // instanceValue Field Functions 
      bool hasInstanceValue() const { return this->instanceValue_ != nullptr;};
      void deleteInstanceValue() { this->instanceValue_ = nullptr;};
      inline string getInstanceValue() const { DARABONBA_PTR_GET_DEFAULT(instanceValue_, "") };
      inline Data& setInstanceValue(string instanceValue) { DARABONBA_PTR_SET_VALUE(instanceValue_, instanceValue) };


      // modifiedTimeGMT Field Functions 
      bool hasModifiedTimeGMT() const { return this->modifiedTimeGMT_ != nullptr;};
      void deleteModifiedTimeGMT() { this->modifiedTimeGMT_ = nullptr;};
      inline string getModifiedTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimeGMT_, "") };
      inline Data& setModifiedTimeGMT(string modifiedTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedTimeGMT_, modifiedTimeGMT) };


      // originatorAvatar Field Functions 
      bool hasOriginatorAvatar() const { return this->originatorAvatar_ != nullptr;};
      void deleteOriginatorAvatar() { this->originatorAvatar_ = nullptr;};
      inline string getOriginatorAvatar() const { DARABONBA_PTR_GET_DEFAULT(originatorAvatar_, "") };
      inline Data& setOriginatorAvatar(string originatorAvatar) { DARABONBA_PTR_SET_VALUE(originatorAvatar_, originatorAvatar) };


      // originatorDisplayName Field Functions 
      bool hasOriginatorDisplayName() const { return this->originatorDisplayName_ != nullptr;};
      void deleteOriginatorDisplayName() { this->originatorDisplayName_ = nullptr;};
      inline string getOriginatorDisplayName() const { DARABONBA_PTR_GET_DEFAULT(originatorDisplayName_, "") };
      inline Data& setOriginatorDisplayName(string originatorDisplayName) { DARABONBA_PTR_SET_VALUE(originatorDisplayName_, originatorDisplayName) };


      // originatorId Field Functions 
      bool hasOriginatorId() const { return this->originatorId_ != nullptr;};
      void deleteOriginatorId() { this->originatorId_ = nullptr;};
      inline string getOriginatorId() const { DARABONBA_PTR_GET_DEFAULT(originatorId_, "") };
      inline Data& setOriginatorId(string originatorId) { DARABONBA_PTR_SET_VALUE(originatorId_, originatorId) };


      // processApprovedResult Field Functions 
      bool hasProcessApprovedResult() const { return this->processApprovedResult_ != nullptr;};
      void deleteProcessApprovedResult() { this->processApprovedResult_ = nullptr;};
      inline string getProcessApprovedResult() const { DARABONBA_PTR_GET_DEFAULT(processApprovedResult_, "") };
      inline Data& setProcessApprovedResult(string processApprovedResult) { DARABONBA_PTR_SET_VALUE(processApprovedResult_, processApprovedResult) };


      // processApprovedResultText Field Functions 
      bool hasProcessApprovedResultText() const { return this->processApprovedResultText_ != nullptr;};
      void deleteProcessApprovedResultText() { this->processApprovedResultText_ = nullptr;};
      inline string getProcessApprovedResultText() const { DARABONBA_PTR_GET_DEFAULT(processApprovedResultText_, "") };
      inline Data& setProcessApprovedResultText(string processApprovedResultText) { DARABONBA_PTR_SET_VALUE(processApprovedResultText_, processApprovedResultText) };


      // processCode Field Functions 
      bool hasProcessCode() const { return this->processCode_ != nullptr;};
      void deleteProcessCode() { this->processCode_ = nullptr;};
      inline string getProcessCode() const { DARABONBA_PTR_GET_DEFAULT(processCode_, "") };
      inline Data& setProcessCode(string processCode) { DARABONBA_PTR_SET_VALUE(processCode_, processCode) };


      // processId Field Functions 
      bool hasProcessId() const { return this->processId_ != nullptr;};
      void deleteProcessId() { this->processId_ = nullptr;};
      inline int64_t getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, 0L) };
      inline Data& setProcessId(int64_t processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


      // processInstanceId Field Functions 
      bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
      void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
      inline string getProcessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
      inline Data& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


      // processInstanceStatus Field Functions 
      bool hasProcessInstanceStatus() const { return this->processInstanceStatus_ != nullptr;};
      void deleteProcessInstanceStatus() { this->processInstanceStatus_ = nullptr;};
      inline string getProcessInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(processInstanceStatus_, "") };
      inline Data& setProcessInstanceStatus(string processInstanceStatus) { DARABONBA_PTR_SET_VALUE(processInstanceStatus_, processInstanceStatus) };


      // processInstanceStatusText Field Functions 
      bool hasProcessInstanceStatusText() const { return this->processInstanceStatusText_ != nullptr;};
      void deleteProcessInstanceStatusText() { this->processInstanceStatusText_ = nullptr;};
      inline string getProcessInstanceStatusText() const { DARABONBA_PTR_GET_DEFAULT(processInstanceStatusText_, "") };
      inline Data& setProcessInstanceStatusText(string processInstanceStatusText) { DARABONBA_PTR_SET_VALUE(processInstanceStatusText_, processInstanceStatusText) };


      // processName Field Functions 
      bool hasProcessName() const { return this->processName_ != nullptr;};
      void deleteProcessName() { this->processName_ = nullptr;};
      inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
      inline Data& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline Data& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<vector<Data::Actioner>> actioner_ {};
      shared_ptr<vector<string>> actionerId_ {};
      shared_ptr<vector<string>> actionerName_ {};
      shared_ptr<string> appType_ {};
      shared_ptr<string> createTimeGMT_ {};
      shared_ptr<vector<Data::CurrentActivityInstances>> currentActivityInstances_ {};
      Darabonba::Json dataMap_ {};
      shared_ptr<string> dataType_ {};
      shared_ptr<string> finishTimeGMT_ {};
      shared_ptr<string> formInstanceId_ {};
      shared_ptr<string> formUuid_ {};
      shared_ptr<string> instanceValue_ {};
      shared_ptr<string> modifiedTimeGMT_ {};
      shared_ptr<string> originatorAvatar_ {};
      shared_ptr<string> originatorDisplayName_ {};
      shared_ptr<string> originatorId_ {};
      shared_ptr<string> processApprovedResult_ {};
      shared_ptr<string> processApprovedResultText_ {};
      shared_ptr<string> processCode_ {};
      shared_ptr<int64_t> processId_ {};
      shared_ptr<string> processInstanceId_ {};
      shared_ptr<string> processInstanceStatus_ {};
      shared_ptr<string> processInstanceStatusText_ {};
      shared_ptr<string> processName_ {};
      shared_ptr<string> title_ {};
      shared_ptr<int64_t> version_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetMeCorpSubmissionResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetMeCorpSubmissionResponseBody::Data>) };
    inline vector<GetMeCorpSubmissionResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetMeCorpSubmissionResponseBody::Data>) };
    inline GetMeCorpSubmissionResponseBody& setData(const vector<GetMeCorpSubmissionResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMeCorpSubmissionResponseBody& setData(vector<GetMeCorpSubmissionResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetMeCorpSubmissionResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMeCorpSubmissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetMeCorpSubmissionResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetMeCorpSubmissionResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetMeCorpSubmissionResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<vector<GetMeCorpSubmissionResponseBody::Data>> data_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
