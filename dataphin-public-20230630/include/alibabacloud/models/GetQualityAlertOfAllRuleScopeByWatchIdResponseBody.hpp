// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYALERTOFALLRULESCOPEBYWATCHIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYALERTOFALLRULESCOPEBYWATCHIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetQualityAlertOfAllRuleScopeByWatchIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityAlertOfAllRuleScopeByWatchIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(QualityAlertInfo, qualityAlertInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityAlertOfAllRuleScopeByWatchIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(QualityAlertInfo, qualityAlertInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQualityAlertOfAllRuleScopeByWatchIdResponseBody() = default ;
    GetQualityAlertOfAllRuleScopeByWatchIdResponseBody(const GetQualityAlertOfAllRuleScopeByWatchIdResponseBody &) = default ;
    GetQualityAlertOfAllRuleScopeByWatchIdResponseBody(GetQualityAlertOfAllRuleScopeByWatchIdResponseBody &&) = default ;
    GetQualityAlertOfAllRuleScopeByWatchIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityAlertOfAllRuleScopeByWatchIdResponseBody() = default ;
    GetQualityAlertOfAllRuleScopeByWatchIdResponseBody& operator=(const GetQualityAlertOfAllRuleScopeByWatchIdResponseBody &) = default ;
    GetQualityAlertOfAllRuleScopeByWatchIdResponseBody& operator=(GetQualityAlertOfAllRuleScopeByWatchIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QualityAlertInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QualityAlertInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AlertDutyChannelList, alertDutyChannelList_);
        DARABONBA_PTR_TO_JSON(AlertDutyList, alertDutyList_);
        DARABONBA_PTR_TO_JSON(AlertQualityOwnerChannelList, alertQualityOwnerChannelList_);
        DARABONBA_PTR_TO_JSON(AlertUserChannelList, alertUserChannelList_);
        DARABONBA_PTR_TO_JSON(AlertUserList, alertUserList_);
        DARABONBA_PTR_TO_JSON(EnableAlertQualityOwner, enableAlertQualityOwner_);
        DARABONBA_PTR_TO_JSON(WatchId, watchId_);
      };
      friend void from_json(const Darabonba::Json& j, QualityAlertInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertDutyChannelList, alertDutyChannelList_);
        DARABONBA_PTR_FROM_JSON(AlertDutyList, alertDutyList_);
        DARABONBA_PTR_FROM_JSON(AlertQualityOwnerChannelList, alertQualityOwnerChannelList_);
        DARABONBA_PTR_FROM_JSON(AlertUserChannelList, alertUserChannelList_);
        DARABONBA_PTR_FROM_JSON(AlertUserList, alertUserList_);
        DARABONBA_PTR_FROM_JSON(EnableAlertQualityOwner, enableAlertQualityOwner_);
        DARABONBA_PTR_FROM_JSON(WatchId, watchId_);
      };
      QualityAlertInfo() = default ;
      QualityAlertInfo(const QualityAlertInfo &) = default ;
      QualityAlertInfo(QualityAlertInfo &&) = default ;
      QualityAlertInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QualityAlertInfo() = default ;
      QualityAlertInfo& operator=(const QualityAlertInfo &) = default ;
      QualityAlertInfo& operator=(QualityAlertInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AlertUserList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlertUserList& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, AlertUserList& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        AlertUserList() = default ;
        AlertUserList(const AlertUserList &) = default ;
        AlertUserList(AlertUserList &&) = default ;
        AlertUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlertUserList() = default ;
        AlertUserList& operator=(const AlertUserList &) = default ;
        AlertUserList& operator=(AlertUserList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline AlertUserList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AlertUserList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
      };

      class AlertDutyList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlertDutyList& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, AlertDutyList& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        AlertDutyList() = default ;
        AlertDutyList(const AlertDutyList &) = default ;
        AlertDutyList(AlertDutyList &&) = default ;
        AlertDutyList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlertDutyList() = default ;
        AlertDutyList& operator=(const AlertDutyList &) = default ;
        AlertDutyList& operator=(AlertDutyList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline AlertDutyList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AlertDutyList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->alertDutyChannelList_ == nullptr
        && this->alertDutyList_ == nullptr && this->alertQualityOwnerChannelList_ == nullptr && this->alertUserChannelList_ == nullptr && this->alertUserList_ == nullptr && this->enableAlertQualityOwner_ == nullptr
        && this->watchId_ == nullptr; };
      // alertDutyChannelList Field Functions 
      bool hasAlertDutyChannelList() const { return this->alertDutyChannelList_ != nullptr;};
      void deleteAlertDutyChannelList() { this->alertDutyChannelList_ = nullptr;};
      inline const vector<string> & getAlertDutyChannelList() const { DARABONBA_PTR_GET_CONST(alertDutyChannelList_, vector<string>) };
      inline vector<string> getAlertDutyChannelList() { DARABONBA_PTR_GET(alertDutyChannelList_, vector<string>) };
      inline QualityAlertInfo& setAlertDutyChannelList(const vector<string> & alertDutyChannelList) { DARABONBA_PTR_SET_VALUE(alertDutyChannelList_, alertDutyChannelList) };
      inline QualityAlertInfo& setAlertDutyChannelList(vector<string> && alertDutyChannelList) { DARABONBA_PTR_SET_RVALUE(alertDutyChannelList_, alertDutyChannelList) };


      // alertDutyList Field Functions 
      bool hasAlertDutyList() const { return this->alertDutyList_ != nullptr;};
      void deleteAlertDutyList() { this->alertDutyList_ = nullptr;};
      inline const vector<QualityAlertInfo::AlertDutyList> & getAlertDutyList() const { DARABONBA_PTR_GET_CONST(alertDutyList_, vector<QualityAlertInfo::AlertDutyList>) };
      inline vector<QualityAlertInfo::AlertDutyList> getAlertDutyList() { DARABONBA_PTR_GET(alertDutyList_, vector<QualityAlertInfo::AlertDutyList>) };
      inline QualityAlertInfo& setAlertDutyList(const vector<QualityAlertInfo::AlertDutyList> & alertDutyList) { DARABONBA_PTR_SET_VALUE(alertDutyList_, alertDutyList) };
      inline QualityAlertInfo& setAlertDutyList(vector<QualityAlertInfo::AlertDutyList> && alertDutyList) { DARABONBA_PTR_SET_RVALUE(alertDutyList_, alertDutyList) };


      // alertQualityOwnerChannelList Field Functions 
      bool hasAlertQualityOwnerChannelList() const { return this->alertQualityOwnerChannelList_ != nullptr;};
      void deleteAlertQualityOwnerChannelList() { this->alertQualityOwnerChannelList_ = nullptr;};
      inline const vector<string> & getAlertQualityOwnerChannelList() const { DARABONBA_PTR_GET_CONST(alertQualityOwnerChannelList_, vector<string>) };
      inline vector<string> getAlertQualityOwnerChannelList() { DARABONBA_PTR_GET(alertQualityOwnerChannelList_, vector<string>) };
      inline QualityAlertInfo& setAlertQualityOwnerChannelList(const vector<string> & alertQualityOwnerChannelList) { DARABONBA_PTR_SET_VALUE(alertQualityOwnerChannelList_, alertQualityOwnerChannelList) };
      inline QualityAlertInfo& setAlertQualityOwnerChannelList(vector<string> && alertQualityOwnerChannelList) { DARABONBA_PTR_SET_RVALUE(alertQualityOwnerChannelList_, alertQualityOwnerChannelList) };


      // alertUserChannelList Field Functions 
      bool hasAlertUserChannelList() const { return this->alertUserChannelList_ != nullptr;};
      void deleteAlertUserChannelList() { this->alertUserChannelList_ = nullptr;};
      inline const vector<string> & getAlertUserChannelList() const { DARABONBA_PTR_GET_CONST(alertUserChannelList_, vector<string>) };
      inline vector<string> getAlertUserChannelList() { DARABONBA_PTR_GET(alertUserChannelList_, vector<string>) };
      inline QualityAlertInfo& setAlertUserChannelList(const vector<string> & alertUserChannelList) { DARABONBA_PTR_SET_VALUE(alertUserChannelList_, alertUserChannelList) };
      inline QualityAlertInfo& setAlertUserChannelList(vector<string> && alertUserChannelList) { DARABONBA_PTR_SET_RVALUE(alertUserChannelList_, alertUserChannelList) };


      // alertUserList Field Functions 
      bool hasAlertUserList() const { return this->alertUserList_ != nullptr;};
      void deleteAlertUserList() { this->alertUserList_ = nullptr;};
      inline const vector<QualityAlertInfo::AlertUserList> & getAlertUserList() const { DARABONBA_PTR_GET_CONST(alertUserList_, vector<QualityAlertInfo::AlertUserList>) };
      inline vector<QualityAlertInfo::AlertUserList> getAlertUserList() { DARABONBA_PTR_GET(alertUserList_, vector<QualityAlertInfo::AlertUserList>) };
      inline QualityAlertInfo& setAlertUserList(const vector<QualityAlertInfo::AlertUserList> & alertUserList) { DARABONBA_PTR_SET_VALUE(alertUserList_, alertUserList) };
      inline QualityAlertInfo& setAlertUserList(vector<QualityAlertInfo::AlertUserList> && alertUserList) { DARABONBA_PTR_SET_RVALUE(alertUserList_, alertUserList) };


      // enableAlertQualityOwner Field Functions 
      bool hasEnableAlertQualityOwner() const { return this->enableAlertQualityOwner_ != nullptr;};
      void deleteEnableAlertQualityOwner() { this->enableAlertQualityOwner_ = nullptr;};
      inline bool getEnableAlertQualityOwner() const { DARABONBA_PTR_GET_DEFAULT(enableAlertQualityOwner_, false) };
      inline QualityAlertInfo& setEnableAlertQualityOwner(bool enableAlertQualityOwner) { DARABONBA_PTR_SET_VALUE(enableAlertQualityOwner_, enableAlertQualityOwner) };


      // watchId Field Functions 
      bool hasWatchId() const { return this->watchId_ != nullptr;};
      void deleteWatchId() { this->watchId_ = nullptr;};
      inline int64_t getWatchId() const { DARABONBA_PTR_GET_DEFAULT(watchId_, 0L) };
      inline QualityAlertInfo& setWatchId(int64_t watchId) { DARABONBA_PTR_SET_VALUE(watchId_, watchId) };


    protected:
      shared_ptr<vector<string>> alertDutyChannelList_ {};
      shared_ptr<vector<QualityAlertInfo::AlertDutyList>> alertDutyList_ {};
      shared_ptr<vector<string>> alertQualityOwnerChannelList_ {};
      shared_ptr<vector<string>> alertUserChannelList_ {};
      shared_ptr<vector<QualityAlertInfo::AlertUserList>> alertUserList_ {};
      shared_ptr<bool> enableAlertQualityOwner_ {};
      shared_ptr<int64_t> watchId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->qualityAlertInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetQualityAlertOfAllRuleScopeByWatchIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetQualityAlertOfAllRuleScopeByWatchIdResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQualityAlertOfAllRuleScopeByWatchIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // qualityAlertInfo Field Functions 
    bool hasQualityAlertInfo() const { return this->qualityAlertInfo_ != nullptr;};
    void deleteQualityAlertInfo() { this->qualityAlertInfo_ = nullptr;};
    inline const GetQualityAlertOfAllRuleScopeByWatchIdResponseBody::QualityAlertInfo & getQualityAlertInfo() const { DARABONBA_PTR_GET_CONST(qualityAlertInfo_, GetQualityAlertOfAllRuleScopeByWatchIdResponseBody::QualityAlertInfo) };
    inline GetQualityAlertOfAllRuleScopeByWatchIdResponseBody::QualityAlertInfo getQualityAlertInfo() { DARABONBA_PTR_GET(qualityAlertInfo_, GetQualityAlertOfAllRuleScopeByWatchIdResponseBody::QualityAlertInfo) };
    inline GetQualityAlertOfAllRuleScopeByWatchIdResponseBody& setQualityAlertInfo(const GetQualityAlertOfAllRuleScopeByWatchIdResponseBody::QualityAlertInfo & qualityAlertInfo) { DARABONBA_PTR_SET_VALUE(qualityAlertInfo_, qualityAlertInfo) };
    inline GetQualityAlertOfAllRuleScopeByWatchIdResponseBody& setQualityAlertInfo(GetQualityAlertOfAllRuleScopeByWatchIdResponseBody::QualityAlertInfo && qualityAlertInfo) { DARABONBA_PTR_SET_RVALUE(qualityAlertInfo_, qualityAlertInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQualityAlertOfAllRuleScopeByWatchIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQualityAlertOfAllRuleScopeByWatchIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<GetQualityAlertOfAllRuleScopeByWatchIdResponseBody::QualityAlertInfo> qualityAlertInfo_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
