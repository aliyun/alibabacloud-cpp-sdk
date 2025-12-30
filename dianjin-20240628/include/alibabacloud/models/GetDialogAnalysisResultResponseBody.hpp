// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIALOGANALYSISRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDIALOGANALYSISRESULTRESPONSEBODY_HPP_
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
  class GetDialogAnalysisResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDialogAnalysisResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cost, cost_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, GetDialogAnalysisResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cost, cost_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    GetDialogAnalysisResultResponseBody() = default ;
    GetDialogAnalysisResultResponseBody(const GetDialogAnalysisResultResponseBody &) = default ;
    GetDialogAnalysisResultResponseBody(GetDialogAnalysisResultResponseBody &&) = default ;
    GetDialogAnalysisResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDialogAnalysisResultResponseBody() = default ;
    GetDialogAnalysisResultResponseBody& operator=(const GetDialogAnalysisResultResponseBody &) = default ;
    GetDialogAnalysisResultResponseBody& operator=(GetDialogAnalysisResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(dialogAnalysisRespList, dialogAnalysisRespList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(dialogAnalysisRespList, dialogAnalysisRespList_);
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
      class DialogAnalysisRespList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DialogAnalysisRespList& obj) { 
          DARABONBA_PTR_TO_JSON(analysisResp, analysisResp_);
          DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(ossUrl, ossUrl_);
          DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DialogAnalysisRespList& obj) { 
          DARABONBA_PTR_FROM_JSON(analysisResp, analysisResp_);
          DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(ossUrl, ossUrl_);
          DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        DialogAnalysisRespList() = default ;
        DialogAnalysisRespList(const DialogAnalysisRespList &) = default ;
        DialogAnalysisRespList(DialogAnalysisRespList &&) = default ;
        DialogAnalysisRespList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DialogAnalysisRespList() = default ;
        DialogAnalysisRespList& operator=(const DialogAnalysisRespList &) = default ;
        DialogAnalysisRespList& operator=(DialogAnalysisRespList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AnalysisResp : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AnalysisResp& obj) { 
            DARABONBA_PTR_TO_JSON(dialogExecPlan, dialogExecPlan_);
            DARABONBA_PTR_TO_JSON(dialogLabels, dialogLabels_);
            DARABONBA_ANY_TO_JSON(dialogOpenAnalysis, dialogOpenAnalysis_);
            DARABONBA_ANY_TO_JSON(dialogProcessAnalysis, dialogProcessAnalysis_);
            DARABONBA_PTR_TO_JSON(dialogSop, dialogSop_);
            DARABONBA_PTR_TO_JSON(dialogSummary, dialogSummary_);
          };
          friend void from_json(const Darabonba::Json& j, AnalysisResp& obj) { 
            DARABONBA_PTR_FROM_JSON(dialogExecPlan, dialogExecPlan_);
            DARABONBA_PTR_FROM_JSON(dialogLabels, dialogLabels_);
            DARABONBA_ANY_FROM_JSON(dialogOpenAnalysis, dialogOpenAnalysis_);
            DARABONBA_ANY_FROM_JSON(dialogProcessAnalysis, dialogProcessAnalysis_);
            DARABONBA_PTR_FROM_JSON(dialogSop, dialogSop_);
            DARABONBA_PTR_FROM_JSON(dialogSummary, dialogSummary_);
          };
          AnalysisResp() = default ;
          AnalysisResp(const AnalysisResp &) = default ;
          AnalysisResp(AnalysisResp &&) = default ;
          AnalysisResp(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AnalysisResp() = default ;
          AnalysisResp& operator=(const AnalysisResp &) = default ;
          AnalysisResp& operator=(AnalysisResp &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DialogLabels : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DialogLabels& obj) { 
              DARABONBA_PTR_TO_JSON(name, name_);
              DARABONBA_PTR_TO_JSON(value, value_);
            };
            friend void from_json(const Darabonba::Json& j, DialogLabels& obj) { 
              DARABONBA_PTR_FROM_JSON(name, name_);
              DARABONBA_PTR_FROM_JSON(value, value_);
            };
            DialogLabels() = default ;
            DialogLabels(const DialogLabels &) = default ;
            DialogLabels(DialogLabels &&) = default ;
            DialogLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DialogLabels() = default ;
            DialogLabels& operator=(const DialogLabels &) = default ;
            DialogLabels& operator=(DialogLabels &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline DialogLabels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline DialogLabels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> name_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->dialogExecPlan_ == nullptr
        && this->dialogLabels_ == nullptr && this->dialogOpenAnalysis_ == nullptr && this->dialogProcessAnalysis_ == nullptr && this->dialogSop_ == nullptr && this->dialogSummary_ == nullptr; };
          // dialogExecPlan Field Functions 
          bool hasDialogExecPlan() const { return this->dialogExecPlan_ != nullptr;};
          void deleteDialogExecPlan() { this->dialogExecPlan_ = nullptr;};
          inline string getDialogExecPlan() const { DARABONBA_PTR_GET_DEFAULT(dialogExecPlan_, "") };
          inline AnalysisResp& setDialogExecPlan(string dialogExecPlan) { DARABONBA_PTR_SET_VALUE(dialogExecPlan_, dialogExecPlan) };


          // dialogLabels Field Functions 
          bool hasDialogLabels() const { return this->dialogLabels_ != nullptr;};
          void deleteDialogLabels() { this->dialogLabels_ = nullptr;};
          inline const vector<AnalysisResp::DialogLabels> & getDialogLabels() const { DARABONBA_PTR_GET_CONST(dialogLabels_, vector<AnalysisResp::DialogLabels>) };
          inline vector<AnalysisResp::DialogLabels> getDialogLabels() { DARABONBA_PTR_GET(dialogLabels_, vector<AnalysisResp::DialogLabels>) };
          inline AnalysisResp& setDialogLabels(const vector<AnalysisResp::DialogLabels> & dialogLabels) { DARABONBA_PTR_SET_VALUE(dialogLabels_, dialogLabels) };
          inline AnalysisResp& setDialogLabels(vector<AnalysisResp::DialogLabels> && dialogLabels) { DARABONBA_PTR_SET_RVALUE(dialogLabels_, dialogLabels) };


          // dialogOpenAnalysis Field Functions 
          bool hasDialogOpenAnalysis() const { return this->dialogOpenAnalysis_ != nullptr;};
          void deleteDialogOpenAnalysis() { this->dialogOpenAnalysis_ = nullptr;};
          inline           const Darabonba::Json & getDialogOpenAnalysis() const { DARABONBA_GET(dialogOpenAnalysis_) };
          Darabonba::Json & getDialogOpenAnalysis() { DARABONBA_GET(dialogOpenAnalysis_) };
          inline AnalysisResp& setDialogOpenAnalysis(const Darabonba::Json & dialogOpenAnalysis) { DARABONBA_SET_VALUE(dialogOpenAnalysis_, dialogOpenAnalysis) };
          inline AnalysisResp& setDialogOpenAnalysis(Darabonba::Json && dialogOpenAnalysis) { DARABONBA_SET_RVALUE(dialogOpenAnalysis_, dialogOpenAnalysis) };


          // dialogProcessAnalysis Field Functions 
          bool hasDialogProcessAnalysis() const { return this->dialogProcessAnalysis_ != nullptr;};
          void deleteDialogProcessAnalysis() { this->dialogProcessAnalysis_ = nullptr;};
          inline           const Darabonba::Json & getDialogProcessAnalysis() const { DARABONBA_GET(dialogProcessAnalysis_) };
          Darabonba::Json & getDialogProcessAnalysis() { DARABONBA_GET(dialogProcessAnalysis_) };
          inline AnalysisResp& setDialogProcessAnalysis(const Darabonba::Json & dialogProcessAnalysis) { DARABONBA_SET_VALUE(dialogProcessAnalysis_, dialogProcessAnalysis) };
          inline AnalysisResp& setDialogProcessAnalysis(Darabonba::Json && dialogProcessAnalysis) { DARABONBA_SET_RVALUE(dialogProcessAnalysis_, dialogProcessAnalysis) };


          // dialogSop Field Functions 
          bool hasDialogSop() const { return this->dialogSop_ != nullptr;};
          void deleteDialogSop() { this->dialogSop_ = nullptr;};
          inline string getDialogSop() const { DARABONBA_PTR_GET_DEFAULT(dialogSop_, "") };
          inline AnalysisResp& setDialogSop(string dialogSop) { DARABONBA_PTR_SET_VALUE(dialogSop_, dialogSop) };


          // dialogSummary Field Functions 
          bool hasDialogSummary() const { return this->dialogSummary_ != nullptr;};
          void deleteDialogSummary() { this->dialogSummary_ = nullptr;};
          inline string getDialogSummary() const { DARABONBA_PTR_GET_DEFAULT(dialogSummary_, "") };
          inline AnalysisResp& setDialogSummary(string dialogSummary) { DARABONBA_PTR_SET_VALUE(dialogSummary_, dialogSummary) };


        protected:
          shared_ptr<string> dialogExecPlan_ {};
          shared_ptr<vector<AnalysisResp::DialogLabels>> dialogLabels_ {};
          Darabonba::Json dialogOpenAnalysis_ {};
          Darabonba::Json dialogProcessAnalysis_ {};
          shared_ptr<string> dialogSop_ {};
          shared_ptr<string> dialogSummary_ {};
        };

        virtual bool empty() const override { return this->analysisResp_ == nullptr
        && this->gmtCreate_ == nullptr && this->ossUrl_ == nullptr && this->sessionId_ == nullptr && this->status_ == nullptr; };
        // analysisResp Field Functions 
        bool hasAnalysisResp() const { return this->analysisResp_ != nullptr;};
        void deleteAnalysisResp() { this->analysisResp_ = nullptr;};
        inline const DialogAnalysisRespList::AnalysisResp & getAnalysisResp() const { DARABONBA_PTR_GET_CONST(analysisResp_, DialogAnalysisRespList::AnalysisResp) };
        inline DialogAnalysisRespList::AnalysisResp getAnalysisResp() { DARABONBA_PTR_GET(analysisResp_, DialogAnalysisRespList::AnalysisResp) };
        inline DialogAnalysisRespList& setAnalysisResp(const DialogAnalysisRespList::AnalysisResp & analysisResp) { DARABONBA_PTR_SET_VALUE(analysisResp_, analysisResp) };
        inline DialogAnalysisRespList& setAnalysisResp(DialogAnalysisRespList::AnalysisResp && analysisResp) { DARABONBA_PTR_SET_RVALUE(analysisResp_, analysisResp) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline DialogAnalysisRespList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // ossUrl Field Functions 
        bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
        void deleteOssUrl() { this->ossUrl_ = nullptr;};
        inline string getOssUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
        inline DialogAnalysisRespList& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


        // sessionId Field Functions 
        bool hasSessionId() const { return this->sessionId_ != nullptr;};
        void deleteSessionId() { this->sessionId_ = nullptr;};
        inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
        inline DialogAnalysisRespList& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DialogAnalysisRespList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<DialogAnalysisRespList::AnalysisResp> analysisResp_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> ossUrl_ {};
        shared_ptr<string> sessionId_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->dialogAnalysisRespList_ == nullptr; };
      // dialogAnalysisRespList Field Functions 
      bool hasDialogAnalysisRespList() const { return this->dialogAnalysisRespList_ != nullptr;};
      void deleteDialogAnalysisRespList() { this->dialogAnalysisRespList_ = nullptr;};
      inline const vector<Data::DialogAnalysisRespList> & getDialogAnalysisRespList() const { DARABONBA_PTR_GET_CONST(dialogAnalysisRespList_, vector<Data::DialogAnalysisRespList>) };
      inline vector<Data::DialogAnalysisRespList> getDialogAnalysisRespList() { DARABONBA_PTR_GET(dialogAnalysisRespList_, vector<Data::DialogAnalysisRespList>) };
      inline Data& setDialogAnalysisRespList(const vector<Data::DialogAnalysisRespList> & dialogAnalysisRespList) { DARABONBA_PTR_SET_VALUE(dialogAnalysisRespList_, dialogAnalysisRespList) };
      inline Data& setDialogAnalysisRespList(vector<Data::DialogAnalysisRespList> && dialogAnalysisRespList) { DARABONBA_PTR_SET_RVALUE(dialogAnalysisRespList_, dialogAnalysisRespList) };


    protected:
      shared_ptr<vector<Data::DialogAnalysisRespList>> dialogAnalysisRespList_ {};
    };

    virtual bool empty() const override { return this->cost_ == nullptr
        && this->data_ == nullptr && this->dataType_ == nullptr && this->errCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->time_ == nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int64_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
    inline GetDialogAnalysisResultResponseBody& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDialogAnalysisResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDialogAnalysisResultResponseBody::Data) };
    inline GetDialogAnalysisResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDialogAnalysisResultResponseBody::Data) };
    inline GetDialogAnalysisResultResponseBody& setData(const GetDialogAnalysisResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDialogAnalysisResultResponseBody& setData(GetDialogAnalysisResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline GetDialogAnalysisResultResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetDialogAnalysisResultResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDialogAnalysisResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDialogAnalysisResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDialogAnalysisResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetDialogAnalysisResultResponseBody& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    shared_ptr<int64_t> cost_ {};
    shared_ptr<GetDialogAnalysisResultResponseBody::Data> data_ {};
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
