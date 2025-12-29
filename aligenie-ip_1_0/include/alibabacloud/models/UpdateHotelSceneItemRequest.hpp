// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHOTELSCENEITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHOTELSCENEITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class UpdateHotelSceneItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHotelSceneItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(UpdateHotelSceneOperateReq, updateHotelSceneOperateReq_);
      DARABONBA_PTR_TO_JSON(UpdateHotelSceneReq, updateHotelSceneReq_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHotelSceneItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(UpdateHotelSceneOperateReq, updateHotelSceneOperateReq_);
      DARABONBA_PTR_FROM_JSON(UpdateHotelSceneReq, updateHotelSceneReq_);
    };
    UpdateHotelSceneItemRequest() = default ;
    UpdateHotelSceneItemRequest(const UpdateHotelSceneItemRequest &) = default ;
    UpdateHotelSceneItemRequest(UpdateHotelSceneItemRequest &&) = default ;
    UpdateHotelSceneItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHotelSceneItemRequest() = default ;
    UpdateHotelSceneItemRequest& operator=(const UpdateHotelSceneItemRequest &) = default ;
    UpdateHotelSceneItemRequest& operator=(UpdateHotelSceneItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateHotelSceneReq : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateHotelSceneReq& obj) { 
        DARABONBA_PTR_TO_JSON(BeyondLimitReply, beyondLimitReply_);
        DARABONBA_PTR_TO_JSON(DeliveryMethod, deliveryMethod_);
        DARABONBA_PTR_TO_JSON(DialogueList, dialogueList_);
        DARABONBA_PTR_TO_JSON(Icon, icon_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LimitNumber, limitNumber_);
        DARABONBA_PTR_TO_JSON(LimitSwitch, limitSwitch_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PaymentMethod, paymentMethod_);
        DARABONBA_PTR_TO_JSON(Price, price_);
        DARABONBA_PTR_TO_JSON(RobotName, robotName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateHotelSceneReq& obj) { 
        DARABONBA_PTR_FROM_JSON(BeyondLimitReply, beyondLimitReply_);
        DARABONBA_PTR_FROM_JSON(DeliveryMethod, deliveryMethod_);
        DARABONBA_PTR_FROM_JSON(DialogueList, dialogueList_);
        DARABONBA_PTR_FROM_JSON(Icon, icon_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LimitNumber, limitNumber_);
        DARABONBA_PTR_FROM_JSON(LimitSwitch, limitSwitch_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PaymentMethod, paymentMethod_);
        DARABONBA_PTR_FROM_JSON(Price, price_);
        DARABONBA_PTR_FROM_JSON(RobotName, robotName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      UpdateHotelSceneReq() = default ;
      UpdateHotelSceneReq(const UpdateHotelSceneReq &) = default ;
      UpdateHotelSceneReq(UpdateHotelSceneReq &&) = default ;
      UpdateHotelSceneReq(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateHotelSceneReq() = default ;
      UpdateHotelSceneReq& operator=(const UpdateHotelSceneReq &) = default ;
      UpdateHotelSceneReq& operator=(UpdateHotelSceneReq &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DialogueList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DialogueList& obj) { 
          DARABONBA_PTR_TO_JSON(DialogueId, dialogueId_);
          DARABONBA_PTR_TO_JSON(NoAnswer, noAnswer_);
          DARABONBA_PTR_TO_JSON(NoAnswerTemplate, noAnswerTemplate_);
          DARABONBA_PTR_TO_JSON(Process, process_);
          DARABONBA_PTR_TO_JSON(Question, question_);
          DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
          DARABONBA_PTR_TO_JSON(YesAnswer, yesAnswer_);
          DARABONBA_PTR_TO_JSON(YesAnswerTemplate, yesAnswerTemplate_);
        };
        friend void from_json(const Darabonba::Json& j, DialogueList& obj) { 
          DARABONBA_PTR_FROM_JSON(DialogueId, dialogueId_);
          DARABONBA_PTR_FROM_JSON(NoAnswer, noAnswer_);
          DARABONBA_PTR_FROM_JSON(NoAnswerTemplate, noAnswerTemplate_);
          DARABONBA_PTR_FROM_JSON(Process, process_);
          DARABONBA_PTR_FROM_JSON(Question, question_);
          DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
          DARABONBA_PTR_FROM_JSON(YesAnswer, yesAnswer_);
          DARABONBA_PTR_FROM_JSON(YesAnswerTemplate, yesAnswerTemplate_);
        };
        DialogueList() = default ;
        DialogueList(const DialogueList &) = default ;
        DialogueList(DialogueList &&) = default ;
        DialogueList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DialogueList() = default ;
        DialogueList& operator=(const DialogueList &) = default ;
        DialogueList& operator=(DialogueList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dialogueId_ == nullptr
        && this->noAnswer_ == nullptr && this->noAnswerTemplate_ == nullptr && this->process_ == nullptr && this->question_ == nullptr && this->serviceId_ == nullptr
        && this->yesAnswer_ == nullptr && this->yesAnswerTemplate_ == nullptr; };
        // dialogueId Field Functions 
        bool hasDialogueId() const { return this->dialogueId_ != nullptr;};
        void deleteDialogueId() { this->dialogueId_ = nullptr;};
        inline string getDialogueId() const { DARABONBA_PTR_GET_DEFAULT(dialogueId_, "") };
        inline DialogueList& setDialogueId(string dialogueId) { DARABONBA_PTR_SET_VALUE(dialogueId_, dialogueId) };


        // noAnswer Field Functions 
        bool hasNoAnswer() const { return this->noAnswer_ != nullptr;};
        void deleteNoAnswer() { this->noAnswer_ = nullptr;};
        inline string getNoAnswer() const { DARABONBA_PTR_GET_DEFAULT(noAnswer_, "") };
        inline DialogueList& setNoAnswer(string noAnswer) { DARABONBA_PTR_SET_VALUE(noAnswer_, noAnswer) };


        // noAnswerTemplate Field Functions 
        bool hasNoAnswerTemplate() const { return this->noAnswerTemplate_ != nullptr;};
        void deleteNoAnswerTemplate() { this->noAnswerTemplate_ = nullptr;};
        inline string getNoAnswerTemplate() const { DARABONBA_PTR_GET_DEFAULT(noAnswerTemplate_, "") };
        inline DialogueList& setNoAnswerTemplate(string noAnswerTemplate) { DARABONBA_PTR_SET_VALUE(noAnswerTemplate_, noAnswerTemplate) };


        // process Field Functions 
        bool hasProcess() const { return this->process_ != nullptr;};
        void deleteProcess() { this->process_ = nullptr;};
        inline int32_t getProcess() const { DARABONBA_PTR_GET_DEFAULT(process_, 0) };
        inline DialogueList& setProcess(int32_t process) { DARABONBA_PTR_SET_VALUE(process_, process) };


        // question Field Functions 
        bool hasQuestion() const { return this->question_ != nullptr;};
        void deleteQuestion() { this->question_ = nullptr;};
        inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
        inline DialogueList& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


        // serviceId Field Functions 
        bool hasServiceId() const { return this->serviceId_ != nullptr;};
        void deleteServiceId() { this->serviceId_ = nullptr;};
        inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
        inline DialogueList& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


        // yesAnswer Field Functions 
        bool hasYesAnswer() const { return this->yesAnswer_ != nullptr;};
        void deleteYesAnswer() { this->yesAnswer_ = nullptr;};
        inline string getYesAnswer() const { DARABONBA_PTR_GET_DEFAULT(yesAnswer_, "") };
        inline DialogueList& setYesAnswer(string yesAnswer) { DARABONBA_PTR_SET_VALUE(yesAnswer_, yesAnswer) };


        // yesAnswerTemplate Field Functions 
        bool hasYesAnswerTemplate() const { return this->yesAnswerTemplate_ != nullptr;};
        void deleteYesAnswerTemplate() { this->yesAnswerTemplate_ = nullptr;};
        inline string getYesAnswerTemplate() const { DARABONBA_PTR_GET_DEFAULT(yesAnswerTemplate_, "") };
        inline DialogueList& setYesAnswerTemplate(string yesAnswerTemplate) { DARABONBA_PTR_SET_VALUE(yesAnswerTemplate_, yesAnswerTemplate) };


      protected:
        shared_ptr<string> dialogueId_ {};
        shared_ptr<string> noAnswer_ {};
        shared_ptr<string> noAnswerTemplate_ {};
        shared_ptr<int32_t> process_ {};
        shared_ptr<string> question_ {};
        // itemId
        shared_ptr<string> serviceId_ {};
        shared_ptr<string> yesAnswer_ {};
        shared_ptr<string> yesAnswerTemplate_ {};
      };

      virtual bool empty() const override { return this->beyondLimitReply_ == nullptr
        && this->deliveryMethod_ == nullptr && this->dialogueList_ == nullptr && this->icon_ == nullptr && this->id_ == nullptr && this->limitNumber_ == nullptr
        && this->limitSwitch_ == nullptr && this->name_ == nullptr && this->paymentMethod_ == nullptr && this->price_ == nullptr && this->robotName_ == nullptr
        && this->status_ == nullptr; };
      // beyondLimitReply Field Functions 
      bool hasBeyondLimitReply() const { return this->beyondLimitReply_ != nullptr;};
      void deleteBeyondLimitReply() { this->beyondLimitReply_ = nullptr;};
      inline string getBeyondLimitReply() const { DARABONBA_PTR_GET_DEFAULT(beyondLimitReply_, "") };
      inline UpdateHotelSceneReq& setBeyondLimitReply(string beyondLimitReply) { DARABONBA_PTR_SET_VALUE(beyondLimitReply_, beyondLimitReply) };


      // deliveryMethod Field Functions 
      bool hasDeliveryMethod() const { return this->deliveryMethod_ != nullptr;};
      void deleteDeliveryMethod() { this->deliveryMethod_ = nullptr;};
      inline string getDeliveryMethod() const { DARABONBA_PTR_GET_DEFAULT(deliveryMethod_, "") };
      inline UpdateHotelSceneReq& setDeliveryMethod(string deliveryMethod) { DARABONBA_PTR_SET_VALUE(deliveryMethod_, deliveryMethod) };


      // dialogueList Field Functions 
      bool hasDialogueList() const { return this->dialogueList_ != nullptr;};
      void deleteDialogueList() { this->dialogueList_ = nullptr;};
      inline const vector<UpdateHotelSceneReq::DialogueList> & getDialogueList() const { DARABONBA_PTR_GET_CONST(dialogueList_, vector<UpdateHotelSceneReq::DialogueList>) };
      inline vector<UpdateHotelSceneReq::DialogueList> getDialogueList() { DARABONBA_PTR_GET(dialogueList_, vector<UpdateHotelSceneReq::DialogueList>) };
      inline UpdateHotelSceneReq& setDialogueList(const vector<UpdateHotelSceneReq::DialogueList> & dialogueList) { DARABONBA_PTR_SET_VALUE(dialogueList_, dialogueList) };
      inline UpdateHotelSceneReq& setDialogueList(vector<UpdateHotelSceneReq::DialogueList> && dialogueList) { DARABONBA_PTR_SET_RVALUE(dialogueList_, dialogueList) };


      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
      inline UpdateHotelSceneReq& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline UpdateHotelSceneReq& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // limitNumber Field Functions 
      bool hasLimitNumber() const { return this->limitNumber_ != nullptr;};
      void deleteLimitNumber() { this->limitNumber_ = nullptr;};
      inline int64_t getLimitNumber() const { DARABONBA_PTR_GET_DEFAULT(limitNumber_, 0L) };
      inline UpdateHotelSceneReq& setLimitNumber(int64_t limitNumber) { DARABONBA_PTR_SET_VALUE(limitNumber_, limitNumber) };


      // limitSwitch Field Functions 
      bool hasLimitSwitch() const { return this->limitSwitch_ != nullptr;};
      void deleteLimitSwitch() { this->limitSwitch_ = nullptr;};
      inline int32_t getLimitSwitch() const { DARABONBA_PTR_GET_DEFAULT(limitSwitch_, 0) };
      inline UpdateHotelSceneReq& setLimitSwitch(int32_t limitSwitch) { DARABONBA_PTR_SET_VALUE(limitSwitch_, limitSwitch) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UpdateHotelSceneReq& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // paymentMethod Field Functions 
      bool hasPaymentMethod() const { return this->paymentMethod_ != nullptr;};
      void deletePaymentMethod() { this->paymentMethod_ = nullptr;};
      inline string getPaymentMethod() const { DARABONBA_PTR_GET_DEFAULT(paymentMethod_, "") };
      inline UpdateHotelSceneReq& setPaymentMethod(string paymentMethod) { DARABONBA_PTR_SET_VALUE(paymentMethod_, paymentMethod) };


      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
      inline UpdateHotelSceneReq& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


      // robotName Field Functions 
      bool hasRobotName() const { return this->robotName_ != nullptr;};
      void deleteRobotName() { this->robotName_ = nullptr;};
      inline string getRobotName() const { DARABONBA_PTR_GET_DEFAULT(robotName_, "") };
      inline UpdateHotelSceneReq& setRobotName(string robotName) { DARABONBA_PTR_SET_VALUE(robotName_, robotName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline UpdateHotelSceneReq& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> beyondLimitReply_ {};
      shared_ptr<string> deliveryMethod_ {};
      // This parameter is required.
      shared_ptr<vector<UpdateHotelSceneReq::DialogueList>> dialogueList_ {};
      // icon
      // 
      // This parameter is required.
      shared_ptr<string> icon_ {};
      // itemID
      shared_ptr<int64_t> id_ {};
      shared_ptr<int64_t> limitNumber_ {};
      shared_ptr<int32_t> limitSwitch_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> paymentMethod_ {};
      // This parameter is required.
      shared_ptr<int64_t> price_ {};
      shared_ptr<string> robotName_ {};
      // This parameter is required.
      shared_ptr<string> status_ {};
    };

    class UpdateHotelSceneOperateReq : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateHotelSceneOperateReq& obj) { 
        DARABONBA_PTR_TO_JSON(IsUseTemplateAnswer, isUseTemplateAnswer_);
        DARABONBA_PTR_TO_JSON(OperateType, operateType_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateHotelSceneOperateReq& obj) { 
        DARABONBA_PTR_FROM_JSON(IsUseTemplateAnswer, isUseTemplateAnswer_);
        DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
      };
      UpdateHotelSceneOperateReq() = default ;
      UpdateHotelSceneOperateReq(const UpdateHotelSceneOperateReq &) = default ;
      UpdateHotelSceneOperateReq(UpdateHotelSceneOperateReq &&) = default ;
      UpdateHotelSceneOperateReq(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateHotelSceneOperateReq() = default ;
      UpdateHotelSceneOperateReq& operator=(const UpdateHotelSceneOperateReq &) = default ;
      UpdateHotelSceneOperateReq& operator=(UpdateHotelSceneOperateReq &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->isUseTemplateAnswer_ == nullptr
        && this->operateType_ == nullptr; };
      // isUseTemplateAnswer Field Functions 
      bool hasIsUseTemplateAnswer() const { return this->isUseTemplateAnswer_ != nullptr;};
      void deleteIsUseTemplateAnswer() { this->isUseTemplateAnswer_ = nullptr;};
      inline bool getIsUseTemplateAnswer() const { DARABONBA_PTR_GET_DEFAULT(isUseTemplateAnswer_, false) };
      inline UpdateHotelSceneOperateReq& setIsUseTemplateAnswer(bool isUseTemplateAnswer) { DARABONBA_PTR_SET_VALUE(isUseTemplateAnswer_, isUseTemplateAnswer) };


      // operateType Field Functions 
      bool hasOperateType() const { return this->operateType_ != nullptr;};
      void deleteOperateType() { this->operateType_ = nullptr;};
      inline string getOperateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
      inline UpdateHotelSceneOperateReq& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    protected:
      // This parameter is required.
      shared_ptr<bool> isUseTemplateAnswer_ {};
      // This parameter is required.
      shared_ptr<string> operateType_ {};
    };

    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->updateHotelSceneOperateReq_ == nullptr && this->updateHotelSceneReq_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline UpdateHotelSceneItemRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // updateHotelSceneOperateReq Field Functions 
    bool hasUpdateHotelSceneOperateReq() const { return this->updateHotelSceneOperateReq_ != nullptr;};
    void deleteUpdateHotelSceneOperateReq() { this->updateHotelSceneOperateReq_ = nullptr;};
    inline const UpdateHotelSceneItemRequest::UpdateHotelSceneOperateReq & getUpdateHotelSceneOperateReq() const { DARABONBA_PTR_GET_CONST(updateHotelSceneOperateReq_, UpdateHotelSceneItemRequest::UpdateHotelSceneOperateReq) };
    inline UpdateHotelSceneItemRequest::UpdateHotelSceneOperateReq getUpdateHotelSceneOperateReq() { DARABONBA_PTR_GET(updateHotelSceneOperateReq_, UpdateHotelSceneItemRequest::UpdateHotelSceneOperateReq) };
    inline UpdateHotelSceneItemRequest& setUpdateHotelSceneOperateReq(const UpdateHotelSceneItemRequest::UpdateHotelSceneOperateReq & updateHotelSceneOperateReq) { DARABONBA_PTR_SET_VALUE(updateHotelSceneOperateReq_, updateHotelSceneOperateReq) };
    inline UpdateHotelSceneItemRequest& setUpdateHotelSceneOperateReq(UpdateHotelSceneItemRequest::UpdateHotelSceneOperateReq && updateHotelSceneOperateReq) { DARABONBA_PTR_SET_RVALUE(updateHotelSceneOperateReq_, updateHotelSceneOperateReq) };


    // updateHotelSceneReq Field Functions 
    bool hasUpdateHotelSceneReq() const { return this->updateHotelSceneReq_ != nullptr;};
    void deleteUpdateHotelSceneReq() { this->updateHotelSceneReq_ = nullptr;};
    inline const UpdateHotelSceneItemRequest::UpdateHotelSceneReq & getUpdateHotelSceneReq() const { DARABONBA_PTR_GET_CONST(updateHotelSceneReq_, UpdateHotelSceneItemRequest::UpdateHotelSceneReq) };
    inline UpdateHotelSceneItemRequest::UpdateHotelSceneReq getUpdateHotelSceneReq() { DARABONBA_PTR_GET(updateHotelSceneReq_, UpdateHotelSceneItemRequest::UpdateHotelSceneReq) };
    inline UpdateHotelSceneItemRequest& setUpdateHotelSceneReq(const UpdateHotelSceneItemRequest::UpdateHotelSceneReq & updateHotelSceneReq) { DARABONBA_PTR_SET_VALUE(updateHotelSceneReq_, updateHotelSceneReq) };
    inline UpdateHotelSceneItemRequest& setUpdateHotelSceneReq(UpdateHotelSceneItemRequest::UpdateHotelSceneReq && updateHotelSceneReq) { DARABONBA_PTR_SET_RVALUE(updateHotelSceneReq_, updateHotelSceneReq) };


  protected:
    // hotelID
    // 
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // updateHotelSceneReq
    // 
    // This parameter is required.
    shared_ptr<UpdateHotelSceneItemRequest::UpdateHotelSceneOperateReq> updateHotelSceneOperateReq_ {};
    // UpdateHotelSceneReq
    // 
    // This parameter is required.
    shared_ptr<UpdateHotelSceneItemRequest::UpdateHotelSceneReq> updateHotelSceneReq_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
