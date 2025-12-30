// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIALOGLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDIALOGLOGRESPONSEBODY_HPP_
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
  class GetDialogLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDialogLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cost, cost_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, GetDialogLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cost, cost_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    GetDialogLogResponseBody() = default ;
    GetDialogLogResponseBody(const GetDialogLogResponseBody &) = default ;
    GetDialogLogResponseBody(GetDialogLogResponseBody &&) = default ;
    GetDialogLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDialogLogResponseBody() = default ;
    GetDialogLogResponseBody& operator=(const GetDialogLogResponseBody &) = default ;
    GetDialogLogResponseBody& operator=(GetDialogLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(analysisProcess, analysisProcess_);
        DARABONBA_PTR_TO_JSON(conversationList, conversationList_);
        DARABONBA_PTR_TO_JSON(hitIntentionList, hitIntentionList_);
        DARABONBA_PTR_TO_JSON(intentionList, intentionList_);
        DARABONBA_PTR_TO_JSON(modelCostTime, modelCostTime_);
        DARABONBA_PTR_TO_JSON(recallList, recallList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(analysisProcess, analysisProcess_);
        DARABONBA_PTR_FROM_JSON(conversationList, conversationList_);
        DARABONBA_PTR_FROM_JSON(hitIntentionList, hitIntentionList_);
        DARABONBA_PTR_FROM_JSON(intentionList, intentionList_);
        DARABONBA_PTR_FROM_JSON(modelCostTime, modelCostTime_);
        DARABONBA_PTR_FROM_JSON(recallList, recallList_);
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
      class IntentionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IntentionList& obj) { 
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(intentionName, intentionName_);
          DARABONBA_PTR_TO_JSON(intentionScript, intentionScript_);
        };
        friend void from_json(const Darabonba::Json& j, IntentionList& obj) { 
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(intentionName, intentionName_);
          DARABONBA_PTR_FROM_JSON(intentionScript, intentionScript_);
        };
        IntentionList() = default ;
        IntentionList(const IntentionList &) = default ;
        IntentionList(IntentionList &&) = default ;
        IntentionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IntentionList() = default ;
        IntentionList& operator=(const IntentionList &) = default ;
        IntentionList& operator=(IntentionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->intentionName_ == nullptr && this->intentionScript_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline IntentionList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // intentionName Field Functions 
        bool hasIntentionName() const { return this->intentionName_ != nullptr;};
        void deleteIntentionName() { this->intentionName_ = nullptr;};
        inline string getIntentionName() const { DARABONBA_PTR_GET_DEFAULT(intentionName_, "") };
        inline IntentionList& setIntentionName(string intentionName) { DARABONBA_PTR_SET_VALUE(intentionName_, intentionName) };


        // intentionScript Field Functions 
        bool hasIntentionScript() const { return this->intentionScript_ != nullptr;};
        void deleteIntentionScript() { this->intentionScript_ = nullptr;};
        inline string getIntentionScript() const { DARABONBA_PTR_GET_DEFAULT(intentionScript_, "") };
        inline IntentionList& setIntentionScript(string intentionScript) { DARABONBA_PTR_SET_VALUE(intentionScript_, intentionScript) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> intentionName_ {};
        shared_ptr<string> intentionScript_ {};
      };

      class HitIntentionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HitIntentionList& obj) { 
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(intentionName, intentionName_);
          DARABONBA_PTR_TO_JSON(intentionScript, intentionScript_);
        };
        friend void from_json(const Darabonba::Json& j, HitIntentionList& obj) { 
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(intentionName, intentionName_);
          DARABONBA_PTR_FROM_JSON(intentionScript, intentionScript_);
        };
        HitIntentionList() = default ;
        HitIntentionList(const HitIntentionList &) = default ;
        HitIntentionList(HitIntentionList &&) = default ;
        HitIntentionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HitIntentionList() = default ;
        HitIntentionList& operator=(const HitIntentionList &) = default ;
        HitIntentionList& operator=(HitIntentionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->intentionName_ == nullptr && this->intentionScript_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline HitIntentionList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // intentionName Field Functions 
        bool hasIntentionName() const { return this->intentionName_ != nullptr;};
        void deleteIntentionName() { this->intentionName_ = nullptr;};
        inline string getIntentionName() const { DARABONBA_PTR_GET_DEFAULT(intentionName_, "") };
        inline HitIntentionList& setIntentionName(string intentionName) { DARABONBA_PTR_SET_VALUE(intentionName_, intentionName) };


        // intentionScript Field Functions 
        bool hasIntentionScript() const { return this->intentionScript_ != nullptr;};
        void deleteIntentionScript() { this->intentionScript_ = nullptr;};
        inline string getIntentionScript() const { DARABONBA_PTR_GET_DEFAULT(intentionScript_, "") };
        inline HitIntentionList& setIntentionScript(string intentionScript) { DARABONBA_PTR_SET_VALUE(intentionScript_, intentionScript) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> intentionName_ {};
        shared_ptr<string> intentionScript_ {};
      };

      virtual bool empty() const override { return this->analysisProcess_ == nullptr
        && this->conversationList_ == nullptr && this->hitIntentionList_ == nullptr && this->intentionList_ == nullptr && this->modelCostTime_ == nullptr && this->recallList_ == nullptr; };
      // analysisProcess Field Functions 
      bool hasAnalysisProcess() const { return this->analysisProcess_ != nullptr;};
      void deleteAnalysisProcess() { this->analysisProcess_ = nullptr;};
      inline string getAnalysisProcess() const { DARABONBA_PTR_GET_DEFAULT(analysisProcess_, "") };
      inline Data& setAnalysisProcess(string analysisProcess) { DARABONBA_PTR_SET_VALUE(analysisProcess_, analysisProcess) };


      // conversationList Field Functions 
      bool hasConversationList() const { return this->conversationList_ != nullptr;};
      void deleteConversationList() { this->conversationList_ = nullptr;};
      inline string getConversationList() const { DARABONBA_PTR_GET_DEFAULT(conversationList_, "") };
      inline Data& setConversationList(string conversationList) { DARABONBA_PTR_SET_VALUE(conversationList_, conversationList) };


      // hitIntentionList Field Functions 
      bool hasHitIntentionList() const { return this->hitIntentionList_ != nullptr;};
      void deleteHitIntentionList() { this->hitIntentionList_ = nullptr;};
      inline const vector<Data::HitIntentionList> & getHitIntentionList() const { DARABONBA_PTR_GET_CONST(hitIntentionList_, vector<Data::HitIntentionList>) };
      inline vector<Data::HitIntentionList> getHitIntentionList() { DARABONBA_PTR_GET(hitIntentionList_, vector<Data::HitIntentionList>) };
      inline Data& setHitIntentionList(const vector<Data::HitIntentionList> & hitIntentionList) { DARABONBA_PTR_SET_VALUE(hitIntentionList_, hitIntentionList) };
      inline Data& setHitIntentionList(vector<Data::HitIntentionList> && hitIntentionList) { DARABONBA_PTR_SET_RVALUE(hitIntentionList_, hitIntentionList) };


      // intentionList Field Functions 
      bool hasIntentionList() const { return this->intentionList_ != nullptr;};
      void deleteIntentionList() { this->intentionList_ = nullptr;};
      inline const vector<Data::IntentionList> & getIntentionList() const { DARABONBA_PTR_GET_CONST(intentionList_, vector<Data::IntentionList>) };
      inline vector<Data::IntentionList> getIntentionList() { DARABONBA_PTR_GET(intentionList_, vector<Data::IntentionList>) };
      inline Data& setIntentionList(const vector<Data::IntentionList> & intentionList) { DARABONBA_PTR_SET_VALUE(intentionList_, intentionList) };
      inline Data& setIntentionList(vector<Data::IntentionList> && intentionList) { DARABONBA_PTR_SET_RVALUE(intentionList_, intentionList) };


      // modelCostTime Field Functions 
      bool hasModelCostTime() const { return this->modelCostTime_ != nullptr;};
      void deleteModelCostTime() { this->modelCostTime_ = nullptr;};
      inline int64_t getModelCostTime() const { DARABONBA_PTR_GET_DEFAULT(modelCostTime_, 0L) };
      inline Data& setModelCostTime(int64_t modelCostTime) { DARABONBA_PTR_SET_VALUE(modelCostTime_, modelCostTime) };


      // recallList Field Functions 
      bool hasRecallList() const { return this->recallList_ != nullptr;};
      void deleteRecallList() { this->recallList_ = nullptr;};
      inline string getRecallList() const { DARABONBA_PTR_GET_DEFAULT(recallList_, "") };
      inline Data& setRecallList(string recallList) { DARABONBA_PTR_SET_VALUE(recallList_, recallList) };


    protected:
      shared_ptr<string> analysisProcess_ {};
      shared_ptr<string> conversationList_ {};
      shared_ptr<vector<Data::HitIntentionList>> hitIntentionList_ {};
      shared_ptr<vector<Data::IntentionList>> intentionList_ {};
      shared_ptr<int64_t> modelCostTime_ {};
      shared_ptr<string> recallList_ {};
    };

    virtual bool empty() const override { return this->cost_ == nullptr
        && this->data_ == nullptr && this->dataType_ == nullptr && this->errCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->time_ == nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int64_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
    inline GetDialogLogResponseBody& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDialogLogResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDialogLogResponseBody::Data) };
    inline GetDialogLogResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDialogLogResponseBody::Data) };
    inline GetDialogLogResponseBody& setData(const GetDialogLogResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDialogLogResponseBody& setData(GetDialogLogResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline GetDialogLogResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetDialogLogResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDialogLogResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDialogLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDialogLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetDialogLogResponseBody& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    shared_ptr<int64_t> cost_ {};
    shared_ptr<GetDialogLogResponseBody::Data> data_ {};
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
