// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSFERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSFERINFORESPONSEBODY_HPP_
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
  class GetTransferInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTransferInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTransferInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTransferInfoResponseBody() = default ;
    GetTransferInfoResponseBody(const GetTransferInfoResponseBody &) = default ;
    GetTransferInfoResponseBody(GetTransferInfoResponseBody &&) = default ;
    GetTransferInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTransferInfoResponseBody() = default ;
    GetTransferInfoResponseBody& operator=(const GetTransferInfoResponseBody &) = default ;
    GetTransferInfoResponseBody& operator=(GetTransferInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(FlowId, flowId_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
        DARABONBA_PTR_TO_JSON(NewOwner, newOwner_);
        DARABONBA_PTR_TO_JSON(OldOwner, oldOwner_);
        DARABONBA_PTR_TO_JSON(PrivilegeTransferMode, privilegeTransferMode_);
        DARABONBA_PTR_TO_JSON(PrivilegeTransferResultEntries, privilegeTransferResultEntries_);
        DARABONBA_PTR_TO_JSON(ProposalId, proposalId_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(TransferComment, transferComment_);
        DARABONBA_PTR_TO_JSON(TransferStatus, transferStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
        DARABONBA_PTR_FROM_JSON(NewOwner, newOwner_);
        DARABONBA_PTR_FROM_JSON(OldOwner, oldOwner_);
        DARABONBA_PTR_FROM_JSON(PrivilegeTransferMode, privilegeTransferMode_);
        DARABONBA_PTR_FROM_JSON(PrivilegeTransferResultEntries, privilegeTransferResultEntries_);
        DARABONBA_PTR_FROM_JSON(ProposalId, proposalId_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(TransferComment, transferComment_);
        DARABONBA_PTR_FROM_JSON(TransferStatus, transferStatus_);
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
      class PrivilegeTransferResultEntries : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrivilegeTransferResultEntries& obj) { 
          DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
          DARABONBA_PTR_TO_JSON(PrivilegeDisplayName, privilegeDisplayName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, PrivilegeTransferResultEntries& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
          DARABONBA_PTR_FROM_JSON(PrivilegeDisplayName, privilegeDisplayName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        PrivilegeTransferResultEntries() = default ;
        PrivilegeTransferResultEntries(const PrivilegeTransferResultEntries &) = default ;
        PrivilegeTransferResultEntries(PrivilegeTransferResultEntries &&) = default ;
        PrivilegeTransferResultEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrivilegeTransferResultEntries() = default ;
        PrivilegeTransferResultEntries& operator=(const PrivilegeTransferResultEntries &) = default ;
        PrivilegeTransferResultEntries& operator=(PrivilegeTransferResultEntries &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errMsg_ == nullptr
        && this->privilegeDisplayName_ == nullptr && this->status_ == nullptr; };
        // errMsg Field Functions 
        bool hasErrMsg() const { return this->errMsg_ != nullptr;};
        void deleteErrMsg() { this->errMsg_ = nullptr;};
        inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
        inline PrivilegeTransferResultEntries& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


        // privilegeDisplayName Field Functions 
        bool hasPrivilegeDisplayName() const { return this->privilegeDisplayName_ != nullptr;};
        void deletePrivilegeDisplayName() { this->privilegeDisplayName_ = nullptr;};
        inline string getPrivilegeDisplayName() const { DARABONBA_PTR_GET_DEFAULT(privilegeDisplayName_, "") };
        inline PrivilegeTransferResultEntries& setPrivilegeDisplayName(string privilegeDisplayName) { DARABONBA_PTR_SET_VALUE(privilegeDisplayName_, privilegeDisplayName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PrivilegeTransferResultEntries& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> errMsg_ {};
        shared_ptr<string> privilegeDisplayName_ {};
        shared_ptr<string> status_ {};
      };

      class OldOwner : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OldOwner& obj) { 
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, OldOwner& obj) { 
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        OldOwner() = default ;
        OldOwner(const OldOwner &) = default ;
        OldOwner(OldOwner &&) = default ;
        OldOwner(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OldOwner() = default ;
        OldOwner& operator=(const OldOwner &) = default ;
        OldOwner& operator=(OldOwner &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->displayName_ == nullptr
        && this->userId_ == nullptr; };
        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline OldOwner& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline OldOwner& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> displayName_ {};
        shared_ptr<string> userId_ {};
      };

      class NewOwner : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NewOwner& obj) { 
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, NewOwner& obj) { 
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        NewOwner() = default ;
        NewOwner(const NewOwner &) = default ;
        NewOwner(NewOwner &&) = default ;
        NewOwner(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NewOwner() = default ;
        NewOwner& operator=(const NewOwner &) = default ;
        NewOwner& operator=(NewOwner &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->displayName_ == nullptr
        && this->userId_ == nullptr; };
        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline NewOwner& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline NewOwner& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> displayName_ {};
        shared_ptr<string> userId_ {};
      };

      class LastModifier : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LastModifier& obj) { 
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, LastModifier& obj) { 
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        LastModifier() = default ;
        LastModifier(const LastModifier &) = default ;
        LastModifier(LastModifier &&) = default ;
        LastModifier(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LastModifier() = default ;
        LastModifier& operator=(const LastModifier &) = default ;
        LastModifier& operator=(LastModifier &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->displayName_ == nullptr
        && this->userId_ == nullptr; };
        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline LastModifier& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline LastModifier& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> displayName_ {};
        shared_ptr<string> userId_ {};
      };

      class Creator : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Creator& obj) { 
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Creator& obj) { 
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        Creator() = default ;
        Creator(const Creator &) = default ;
        Creator(Creator &&) = default ;
        Creator(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Creator() = default ;
        Creator& operator=(const Creator &) = default ;
        Creator& operator=(Creator &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->displayName_ == nullptr
        && this->userId_ == nullptr; };
        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Creator& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Creator& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> displayName_ {};
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->creator_ == nullptr
        && this->flowId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->lastModifier_ == nullptr && this->newOwner_ == nullptr
        && this->oldOwner_ == nullptr && this->privilegeTransferMode_ == nullptr && this->privilegeTransferResultEntries_ == nullptr && this->proposalId_ == nullptr && this->title_ == nullptr
        && this->transferComment_ == nullptr && this->transferStatus_ == nullptr; };
      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline const Data::Creator & getCreator() const { DARABONBA_PTR_GET_CONST(creator_, Data::Creator) };
      inline Data::Creator getCreator() { DARABONBA_PTR_GET(creator_, Data::Creator) };
      inline Data& setCreator(const Data::Creator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
      inline Data& setCreator(Data::Creator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


      // flowId Field Functions 
      bool hasFlowId() const { return this->flowId_ != nullptr;};
      void deleteFlowId() { this->flowId_ = nullptr;};
      inline int64_t getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, 0L) };
      inline Data& setFlowId(int64_t flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // lastModifier Field Functions 
      bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
      void deleteLastModifier() { this->lastModifier_ = nullptr;};
      inline const Data::LastModifier & getLastModifier() const { DARABONBA_PTR_GET_CONST(lastModifier_, Data::LastModifier) };
      inline Data::LastModifier getLastModifier() { DARABONBA_PTR_GET(lastModifier_, Data::LastModifier) };
      inline Data& setLastModifier(const Data::LastModifier & lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };
      inline Data& setLastModifier(Data::LastModifier && lastModifier) { DARABONBA_PTR_SET_RVALUE(lastModifier_, lastModifier) };


      // newOwner Field Functions 
      bool hasNewOwner() const { return this->newOwner_ != nullptr;};
      void deleteNewOwner() { this->newOwner_ = nullptr;};
      inline const Data::NewOwner & getNewOwner() const { DARABONBA_PTR_GET_CONST(newOwner_, Data::NewOwner) };
      inline Data::NewOwner getNewOwner() { DARABONBA_PTR_GET(newOwner_, Data::NewOwner) };
      inline Data& setNewOwner(const Data::NewOwner & newOwner) { DARABONBA_PTR_SET_VALUE(newOwner_, newOwner) };
      inline Data& setNewOwner(Data::NewOwner && newOwner) { DARABONBA_PTR_SET_RVALUE(newOwner_, newOwner) };


      // oldOwner Field Functions 
      bool hasOldOwner() const { return this->oldOwner_ != nullptr;};
      void deleteOldOwner() { this->oldOwner_ = nullptr;};
      inline const Data::OldOwner & getOldOwner() const { DARABONBA_PTR_GET_CONST(oldOwner_, Data::OldOwner) };
      inline Data::OldOwner getOldOwner() { DARABONBA_PTR_GET(oldOwner_, Data::OldOwner) };
      inline Data& setOldOwner(const Data::OldOwner & oldOwner) { DARABONBA_PTR_SET_VALUE(oldOwner_, oldOwner) };
      inline Data& setOldOwner(Data::OldOwner && oldOwner) { DARABONBA_PTR_SET_RVALUE(oldOwner_, oldOwner) };


      // privilegeTransferMode Field Functions 
      bool hasPrivilegeTransferMode() const { return this->privilegeTransferMode_ != nullptr;};
      void deletePrivilegeTransferMode() { this->privilegeTransferMode_ = nullptr;};
      inline string getPrivilegeTransferMode() const { DARABONBA_PTR_GET_DEFAULT(privilegeTransferMode_, "") };
      inline Data& setPrivilegeTransferMode(string privilegeTransferMode) { DARABONBA_PTR_SET_VALUE(privilegeTransferMode_, privilegeTransferMode) };


      // privilegeTransferResultEntries Field Functions 
      bool hasPrivilegeTransferResultEntries() const { return this->privilegeTransferResultEntries_ != nullptr;};
      void deletePrivilegeTransferResultEntries() { this->privilegeTransferResultEntries_ = nullptr;};
      inline const vector<Data::PrivilegeTransferResultEntries> & getPrivilegeTransferResultEntries() const { DARABONBA_PTR_GET_CONST(privilegeTransferResultEntries_, vector<Data::PrivilegeTransferResultEntries>) };
      inline vector<Data::PrivilegeTransferResultEntries> getPrivilegeTransferResultEntries() { DARABONBA_PTR_GET(privilegeTransferResultEntries_, vector<Data::PrivilegeTransferResultEntries>) };
      inline Data& setPrivilegeTransferResultEntries(const vector<Data::PrivilegeTransferResultEntries> & privilegeTransferResultEntries) { DARABONBA_PTR_SET_VALUE(privilegeTransferResultEntries_, privilegeTransferResultEntries) };
      inline Data& setPrivilegeTransferResultEntries(vector<Data::PrivilegeTransferResultEntries> && privilegeTransferResultEntries) { DARABONBA_PTR_SET_RVALUE(privilegeTransferResultEntries_, privilegeTransferResultEntries) };


      // proposalId Field Functions 
      bool hasProposalId() const { return this->proposalId_ != nullptr;};
      void deleteProposalId() { this->proposalId_ = nullptr;};
      inline int64_t getProposalId() const { DARABONBA_PTR_GET_DEFAULT(proposalId_, 0L) };
      inline Data& setProposalId(int64_t proposalId) { DARABONBA_PTR_SET_VALUE(proposalId_, proposalId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // transferComment Field Functions 
      bool hasTransferComment() const { return this->transferComment_ != nullptr;};
      void deleteTransferComment() { this->transferComment_ = nullptr;};
      inline string getTransferComment() const { DARABONBA_PTR_GET_DEFAULT(transferComment_, "") };
      inline Data& setTransferComment(string transferComment) { DARABONBA_PTR_SET_VALUE(transferComment_, transferComment) };


      // transferStatus Field Functions 
      bool hasTransferStatus() const { return this->transferStatus_ != nullptr;};
      void deleteTransferStatus() { this->transferStatus_ = nullptr;};
      inline string getTransferStatus() const { DARABONBA_PTR_GET_DEFAULT(transferStatus_, "") };
      inline Data& setTransferStatus(string transferStatus) { DARABONBA_PTR_SET_VALUE(transferStatus_, transferStatus) };


    protected:
      shared_ptr<Data::Creator> creator_ {};
      shared_ptr<int64_t> flowId_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<Data::LastModifier> lastModifier_ {};
      shared_ptr<Data::NewOwner> newOwner_ {};
      shared_ptr<Data::OldOwner> oldOwner_ {};
      shared_ptr<string> privilegeTransferMode_ {};
      shared_ptr<vector<Data::PrivilegeTransferResultEntries>> privilegeTransferResultEntries_ {};
      shared_ptr<int64_t> proposalId_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> transferComment_ {};
      shared_ptr<string> transferStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTransferInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTransferInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTransferInfoResponseBody::Data) };
    inline GetTransferInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTransferInfoResponseBody::Data) };
    inline GetTransferInfoResponseBody& setData(const GetTransferInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTransferInfoResponseBody& setData(GetTransferInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetTransferInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTransferInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTransferInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTransferInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetTransferInfoResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
