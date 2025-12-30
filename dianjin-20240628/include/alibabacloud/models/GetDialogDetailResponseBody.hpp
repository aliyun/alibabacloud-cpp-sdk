// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIALOGDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDIALOGDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetDialogDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDialogDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cost, cost_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, GetDialogDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cost, cost_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    GetDialogDetailResponseBody() = default ;
    GetDialogDetailResponseBody(const GetDialogDetailResponseBody &) = default ;
    GetDialogDetailResponseBody(GetDialogDetailResponseBody &&) = default ;
    GetDialogDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDialogDetailResponseBody() = default ;
    GetDialogDetailResponseBody& operator=(const GetDialogDetailResponseBody &) = default ;
    GetDialogDetailResponseBody& operator=(GetDialogDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(dialogueList, dialogueList_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(totalDialogTurns, totalDialogTurns_);
        DARABONBA_PTR_TO_JSON(validDialogTurns, validDialogTurns_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(dialogueList, dialogueList_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(totalDialogTurns, totalDialogTurns_);
        DARABONBA_PTR_FROM_JSON(validDialogTurns, validDialogTurns_);
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
      class DialogueList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DialogueList& obj) { 
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(customerId, customerId_);
          DARABONBA_PTR_TO_JSON(customerServiceId, customerServiceId_);
          DARABONBA_PTR_TO_JSON(customerServiceType, customerServiceType_);
          DARABONBA_PTR_TO_JSON(hangUpDialog, hangUpDialog_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(intentCode, intentCode_);
          DARABONBA_PTR_TO_JSON(intentName, intentName_);
          DARABONBA_PTR_TO_JSON(role, role_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, DialogueList& obj) { 
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(customerId, customerId_);
          DARABONBA_PTR_FROM_JSON(customerServiceId, customerServiceId_);
          DARABONBA_PTR_FROM_JSON(customerServiceType, customerServiceType_);
          DARABONBA_PTR_FROM_JSON(hangUpDialog, hangUpDialog_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(intentCode, intentCode_);
          DARABONBA_PTR_FROM_JSON(intentName, intentName_);
          DARABONBA_PTR_FROM_JSON(role, role_);
          DARABONBA_PTR_FROM_JSON(type, type_);
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
        virtual bool empty() const override { return this->content_ == nullptr
        && this->customerId_ == nullptr && this->customerServiceId_ == nullptr && this->customerServiceType_ == nullptr && this->hangUpDialog_ == nullptr && this->id_ == nullptr
        && this->intentCode_ == nullptr && this->intentName_ == nullptr && this->role_ == nullptr && this->type_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline DialogueList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // customerId Field Functions 
        bool hasCustomerId() const { return this->customerId_ != nullptr;};
        void deleteCustomerId() { this->customerId_ = nullptr;};
        inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
        inline DialogueList& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


        // customerServiceId Field Functions 
        bool hasCustomerServiceId() const { return this->customerServiceId_ != nullptr;};
        void deleteCustomerServiceId() { this->customerServiceId_ = nullptr;};
        inline string getCustomerServiceId() const { DARABONBA_PTR_GET_DEFAULT(customerServiceId_, "") };
        inline DialogueList& setCustomerServiceId(string customerServiceId) { DARABONBA_PTR_SET_VALUE(customerServiceId_, customerServiceId) };


        // customerServiceType Field Functions 
        bool hasCustomerServiceType() const { return this->customerServiceType_ != nullptr;};
        void deleteCustomerServiceType() { this->customerServiceType_ = nullptr;};
        inline string getCustomerServiceType() const { DARABONBA_PTR_GET_DEFAULT(customerServiceType_, "") };
        inline DialogueList& setCustomerServiceType(string customerServiceType) { DARABONBA_PTR_SET_VALUE(customerServiceType_, customerServiceType) };


        // hangUpDialog Field Functions 
        bool hasHangUpDialog() const { return this->hangUpDialog_ != nullptr;};
        void deleteHangUpDialog() { this->hangUpDialog_ = nullptr;};
        inline bool getHangUpDialog() const { DARABONBA_PTR_GET_DEFAULT(hangUpDialog_, false) };
        inline DialogueList& setHangUpDialog(bool hangUpDialog) { DARABONBA_PTR_SET_VALUE(hangUpDialog_, hangUpDialog) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline DialogueList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // intentCode Field Functions 
        bool hasIntentCode() const { return this->intentCode_ != nullptr;};
        void deleteIntentCode() { this->intentCode_ = nullptr;};
        inline string getIntentCode() const { DARABONBA_PTR_GET_DEFAULT(intentCode_, "") };
        inline DialogueList& setIntentCode(string intentCode) { DARABONBA_PTR_SET_VALUE(intentCode_, intentCode) };


        // intentName Field Functions 
        bool hasIntentName() const { return this->intentName_ != nullptr;};
        void deleteIntentName() { this->intentName_ = nullptr;};
        inline string getIntentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
        inline DialogueList& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline DialogueList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DialogueList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> content_ {};
        shared_ptr<string> customerId_ {};
        shared_ptr<string> customerServiceId_ {};
        shared_ptr<string> customerServiceType_ {};
        shared_ptr<bool> hangUpDialog_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> intentCode_ {};
        shared_ptr<string> intentName_ {};
        shared_ptr<string> role_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->dialogueList_ == nullptr
        && this->gmtCreate_ == nullptr && this->status_ == nullptr && this->totalDialogTurns_ == nullptr && this->validDialogTurns_ == nullptr; };
      // dialogueList Field Functions 
      bool hasDialogueList() const { return this->dialogueList_ != nullptr;};
      void deleteDialogueList() { this->dialogueList_ = nullptr;};
      inline const vector<Data::DialogueList> & getDialogueList() const { DARABONBA_PTR_GET_CONST(dialogueList_, vector<Data::DialogueList>) };
      inline vector<Data::DialogueList> getDialogueList() { DARABONBA_PTR_GET(dialogueList_, vector<Data::DialogueList>) };
      inline Data& setDialogueList(const vector<Data::DialogueList> & dialogueList) { DARABONBA_PTR_SET_VALUE(dialogueList_, dialogueList) };
      inline Data& setDialogueList(vector<Data::DialogueList> && dialogueList) { DARABONBA_PTR_SET_RVALUE(dialogueList_, dialogueList) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalDialogTurns Field Functions 
      bool hasTotalDialogTurns() const { return this->totalDialogTurns_ != nullptr;};
      void deleteTotalDialogTurns() { this->totalDialogTurns_ = nullptr;};
      inline int32_t getTotalDialogTurns() const { DARABONBA_PTR_GET_DEFAULT(totalDialogTurns_, 0) };
      inline Data& setTotalDialogTurns(int32_t totalDialogTurns) { DARABONBA_PTR_SET_VALUE(totalDialogTurns_, totalDialogTurns) };


      // validDialogTurns Field Functions 
      bool hasValidDialogTurns() const { return this->validDialogTurns_ != nullptr;};
      void deleteValidDialogTurns() { this->validDialogTurns_ = nullptr;};
      inline int32_t getValidDialogTurns() const { DARABONBA_PTR_GET_DEFAULT(validDialogTurns_, 0) };
      inline Data& setValidDialogTurns(int32_t validDialogTurns) { DARABONBA_PTR_SET_VALUE(validDialogTurns_, validDialogTurns) };


    protected:
      shared_ptr<vector<Data::DialogueList>> dialogueList_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int32_t> totalDialogTurns_ {};
      shared_ptr<int32_t> validDialogTurns_ {};
    };

    virtual bool empty() const override { return this->cost_ == nullptr
        && this->data_ == nullptr && this->dataType_ == nullptr && this->errCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->time_ == nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int64_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
    inline GetDialogDetailResponseBody& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDialogDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDialogDetailResponseBody::Data) };
    inline GetDialogDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDialogDetailResponseBody::Data) };
    inline GetDialogDetailResponseBody& setData(const GetDialogDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDialogDetailResponseBody& setData(GetDialogDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline GetDialogDetailResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetDialogDetailResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDialogDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDialogDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDialogDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetDialogDetailResponseBody& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    shared_ptr<int64_t> cost_ {};
    shared_ptr<GetDialogDetailResponseBody::Data> data_ {};
    shared_ptr<string> dataType_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> time_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
