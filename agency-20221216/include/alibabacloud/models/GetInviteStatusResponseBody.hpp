// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINVITESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINVITESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetInviteStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInviteStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetInviteStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetInviteStatusResponseBody() = default ;
    GetInviteStatusResponseBody(const GetInviteStatusResponseBody &) = default ;
    GetInviteStatusResponseBody(GetInviteStatusResponseBody &&) = default ;
    GetInviteStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInviteStatusResponseBody() = default ;
    GetInviteStatusResponseBody& operator=(const GetInviteStatusResponseBody &) = default ;
    GetInviteStatusResponseBody& operator=(GetInviteStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(InviteStatus, inviteStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(InviteStatus, inviteStatus_);
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
      class InviteStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InviteStatus& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(InviteStatusList, inviteStatusList_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, InviteStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(InviteStatusList, inviteStatusList_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
        };
        InviteStatus() = default ;
        InviteStatus(const InviteStatus &) = default ;
        InviteStatus(InviteStatus &&) = default ;
        InviteStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InviteStatus() = default ;
        InviteStatus& operator=(const InviteStatus &) = default ;
        InviteStatus& operator=(InviteStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InviteStatusList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InviteStatusList& obj) { 
            DARABONBA_PTR_TO_JSON(AssociationSuccessTime, associationSuccessTime_);
            DARABONBA_PTR_TO_JSON(Cid, cid_);
            DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_TO_JSON(ParentId, parentId_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(SubAccountType, subAccountType_);
            DARABONBA_PTR_TO_JSON(Uid, uid_);
          };
          friend void from_json(const Darabonba::Json& j, InviteStatusList& obj) { 
            DARABONBA_PTR_FROM_JSON(AssociationSuccessTime, associationSuccessTime_);
            DARABONBA_PTR_FROM_JSON(Cid, cid_);
            DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(SubAccountType, subAccountType_);
            DARABONBA_PTR_FROM_JSON(Uid, uid_);
          };
          InviteStatusList() = default ;
          InviteStatusList(const InviteStatusList &) = default ;
          InviteStatusList(InviteStatusList &&) = default ;
          InviteStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InviteStatusList() = default ;
          InviteStatusList& operator=(const InviteStatusList &) = default ;
          InviteStatusList& operator=(InviteStatusList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->associationSuccessTime_ == nullptr
        && this->cid_ == nullptr && this->gmtCreate_ == nullptr && this->parentId_ == nullptr && this->status_ == nullptr && this->subAccountType_ == nullptr
        && this->uid_ == nullptr; };
          // associationSuccessTime Field Functions 
          bool hasAssociationSuccessTime() const { return this->associationSuccessTime_ != nullptr;};
          void deleteAssociationSuccessTime() { this->associationSuccessTime_ = nullptr;};
          inline string getAssociationSuccessTime() const { DARABONBA_PTR_GET_DEFAULT(associationSuccessTime_, "") };
          inline InviteStatusList& setAssociationSuccessTime(string associationSuccessTime) { DARABONBA_PTR_SET_VALUE(associationSuccessTime_, associationSuccessTime) };


          // cid Field Functions 
          bool hasCid() const { return this->cid_ != nullptr;};
          void deleteCid() { this->cid_ = nullptr;};
          inline int64_t getCid() const { DARABONBA_PTR_GET_DEFAULT(cid_, 0L) };
          inline InviteStatusList& setCid(int64_t cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


          // gmtCreate Field Functions 
          bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
          void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
          inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
          inline InviteStatusList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


          // parentId Field Functions 
          bool hasParentId() const { return this->parentId_ != nullptr;};
          void deleteParentId() { this->parentId_ = nullptr;};
          inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
          inline InviteStatusList& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
          inline InviteStatusList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // subAccountType Field Functions 
          bool hasSubAccountType() const { return this->subAccountType_ != nullptr;};
          void deleteSubAccountType() { this->subAccountType_ = nullptr;};
          inline string getSubAccountType() const { DARABONBA_PTR_GET_DEFAULT(subAccountType_, "") };
          inline InviteStatusList& setSubAccountType(string subAccountType) { DARABONBA_PTR_SET_VALUE(subAccountType_, subAccountType) };


          // uid Field Functions 
          bool hasUid() const { return this->uid_ != nullptr;};
          void deleteUid() { this->uid_ = nullptr;};
          inline int64_t getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
          inline InviteStatusList& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


        protected:
          // The time that Distribution Customer successfully associated with Distributor.</br>
          // This value will be empty if there is no existing association.
          shared_ptr<string> associationSuccessTime_ {};
          // Distribution Customer\\"s CID
          shared_ptr<int64_t> cid_ {};
          // The time of email been sent out.
          shared_ptr<string> gmtCreate_ {};
          // The parent organization ID.
          shared_ptr<string> parentId_ {};
          // Invitation Status:
          // * 0 No visit on registration URL
          // * 1 Successful Registration
          // * 2 Unsuccessful Registration
          // * 3 Registration URL have been visited, but no submitted sheet/ticket.
          shared_ptr<int32_t> status_ {};
          // Account Type:
          // - 1 Agency\\"s End User
          // - 2 Reseller\\"s End User
          // - 5 T2 Reseller Partner
          shared_ptr<string> subAccountType_ {};
          // Distribution Customer\\"s UID
          shared_ptr<int64_t> uid_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->inviteStatusList_ == nullptr && this->message_ == nullptr && this->success_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline InviteStatus& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // inviteStatusList Field Functions 
        bool hasInviteStatusList() const { return this->inviteStatusList_ != nullptr;};
        void deleteInviteStatusList() { this->inviteStatusList_ = nullptr;};
        inline const InviteStatus::InviteStatusList & getInviteStatusList() const { DARABONBA_PTR_GET_CONST(inviteStatusList_, InviteStatus::InviteStatusList) };
        inline InviteStatus::InviteStatusList getInviteStatusList() { DARABONBA_PTR_GET(inviteStatusList_, InviteStatus::InviteStatusList) };
        inline InviteStatus& setInviteStatusList(const InviteStatus::InviteStatusList & inviteStatusList) { DARABONBA_PTR_SET_VALUE(inviteStatusList_, inviteStatusList) };
        inline InviteStatus& setInviteStatusList(InviteStatus::InviteStatusList && inviteStatusList) { DARABONBA_PTR_SET_RVALUE(inviteStatusList_, inviteStatusList) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline InviteStatus& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline InviteStatus& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        // Result Code. Value Range:
        // *   200 OK
        // *   1109 system error
        shared_ptr<string> code_ {};
        // List of Invitation Status result
        shared_ptr<InviteStatus::InviteStatusList> inviteStatusList_ {};
        // The message returned.
        shared_ptr<string> message_ {};
        // Candidate Value: True/False, which indicates whether the current API call itself is successful. It does not guarantee the success of subsequent business operations.
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->inviteStatus_ == nullptr; };
      // inviteStatus Field Functions 
      bool hasInviteStatus() const { return this->inviteStatus_ != nullptr;};
      void deleteInviteStatus() { this->inviteStatus_ = nullptr;};
      inline const vector<Data::InviteStatus> & getInviteStatus() const { DARABONBA_PTR_GET_CONST(inviteStatus_, vector<Data::InviteStatus>) };
      inline vector<Data::InviteStatus> getInviteStatus() { DARABONBA_PTR_GET(inviteStatus_, vector<Data::InviteStatus>) };
      inline Data& setInviteStatus(const vector<Data::InviteStatus> & inviteStatus) { DARABONBA_PTR_SET_VALUE(inviteStatus_, inviteStatus) };
      inline Data& setInviteStatus(vector<Data::InviteStatus> && inviteStatus) { DARABONBA_PTR_SET_RVALUE(inviteStatus_, inviteStatus) };


    protected:
      shared_ptr<vector<Data::InviteStatus>> inviteStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInviteStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetInviteStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetInviteStatusResponseBody::Data) };
    inline GetInviteStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetInviteStatusResponseBody::Data) };
    inline GetInviteStatusResponseBody& setData(const GetInviteStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetInviteStatusResponseBody& setData(GetInviteStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInviteStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInviteStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetInviteStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Status Code. Error Code:
    // 
    // - 3057 InviteId is empty
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetInviteStatusResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // Request ID, Alibaba Cloud will track errors with this.
    shared_ptr<string> requestId_ {};
    // Candidate Value: True/False, which indicates whether the current API call itself is successful. It does not guarantee the success of subsequent business operations.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
