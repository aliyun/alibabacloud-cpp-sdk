// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTDELETIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTDELETIONSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetAccountDeletionStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountDeletionStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RdAccountDeletionStatus, rdAccountDeletionStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountDeletionStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RdAccountDeletionStatus, rdAccountDeletionStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccountDeletionStatusResponseBody() = default ;
    GetAccountDeletionStatusResponseBody(const GetAccountDeletionStatusResponseBody &) = default ;
    GetAccountDeletionStatusResponseBody(GetAccountDeletionStatusResponseBody &&) = default ;
    GetAccountDeletionStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountDeletionStatusResponseBody() = default ;
    GetAccountDeletionStatusResponseBody& operator=(const GetAccountDeletionStatusResponseBody &) = default ;
    GetAccountDeletionStatusResponseBody& operator=(GetAccountDeletionStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RdAccountDeletionStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RdAccountDeletionStatus& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DeletionTime, deletionTime_);
        DARABONBA_PTR_TO_JSON(DeletionType, deletionType_);
        DARABONBA_PTR_TO_JSON(FailReasonList, failReasonList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, RdAccountDeletionStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DeletionTime, deletionTime_);
        DARABONBA_PTR_FROM_JSON(DeletionType, deletionType_);
        DARABONBA_PTR_FROM_JSON(FailReasonList, failReasonList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      RdAccountDeletionStatus() = default ;
      RdAccountDeletionStatus(const RdAccountDeletionStatus &) = default ;
      RdAccountDeletionStatus(RdAccountDeletionStatus &&) = default ;
      RdAccountDeletionStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RdAccountDeletionStatus() = default ;
      RdAccountDeletionStatus& operator=(const RdAccountDeletionStatus &) = default ;
      RdAccountDeletionStatus& operator=(RdAccountDeletionStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FailReasonList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FailReasonList& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, FailReasonList& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        FailReasonList() = default ;
        FailReasonList(const FailReasonList &) = default ;
        FailReasonList(FailReasonList &&) = default ;
        FailReasonList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FailReasonList() = default ;
        FailReasonList& operator=(const FailReasonList &) = default ;
        FailReasonList& operator=(FailReasonList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline FailReasonList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline FailReasonList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The description of the check item.
        shared_ptr<string> description_ {};
        // The name of the cloud service to which the check item belongs.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->createTime_ == nullptr && this->deletionTime_ == nullptr && this->deletionType_ == nullptr && this->failReasonList_ == nullptr && this->status_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline RdAccountDeletionStatus& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline RdAccountDeletionStatus& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // deletionTime Field Functions 
      bool hasDeletionTime() const { return this->deletionTime_ != nullptr;};
      void deleteDeletionTime() { this->deletionTime_ = nullptr;};
      inline string getDeletionTime() const { DARABONBA_PTR_GET_DEFAULT(deletionTime_, "") };
      inline RdAccountDeletionStatus& setDeletionTime(string deletionTime) { DARABONBA_PTR_SET_VALUE(deletionTime_, deletionTime) };


      // deletionType Field Functions 
      bool hasDeletionType() const { return this->deletionType_ != nullptr;};
      void deleteDeletionType() { this->deletionType_ = nullptr;};
      inline string getDeletionType() const { DARABONBA_PTR_GET_DEFAULT(deletionType_, "") };
      inline RdAccountDeletionStatus& setDeletionType(string deletionType) { DARABONBA_PTR_SET_VALUE(deletionType_, deletionType) };


      // failReasonList Field Functions 
      bool hasFailReasonList() const { return this->failReasonList_ != nullptr;};
      void deleteFailReasonList() { this->failReasonList_ = nullptr;};
      inline const vector<RdAccountDeletionStatus::FailReasonList> & getFailReasonList() const { DARABONBA_PTR_GET_CONST(failReasonList_, vector<RdAccountDeletionStatus::FailReasonList>) };
      inline vector<RdAccountDeletionStatus::FailReasonList> getFailReasonList() { DARABONBA_PTR_GET(failReasonList_, vector<RdAccountDeletionStatus::FailReasonList>) };
      inline RdAccountDeletionStatus& setFailReasonList(const vector<RdAccountDeletionStatus::FailReasonList> & failReasonList) { DARABONBA_PTR_SET_VALUE(failReasonList_, failReasonList) };
      inline RdAccountDeletionStatus& setFailReasonList(vector<RdAccountDeletionStatus::FailReasonList> && failReasonList) { DARABONBA_PTR_SET_RVALUE(failReasonList_, failReasonList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RdAccountDeletionStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The Alibaba Cloud account ID of the member.
      shared_ptr<string> accountId_ {};
      // The start time of the deletion.
      shared_ptr<string> createTime_ {};
      // The end time of the deletion.
      // 
      // This parameter is required.
      shared_ptr<string> deletionTime_ {};
      // The type of the deletion. Valid values:
      // 
      // *   0: direct deletion. If the member does not have pay-as-you-go resources that are purchased within the previous 30 days, the system directly deletes the member.
      // *   1: deletion with a silence period. If the member has pay-as-you-go resources that are purchased within the previous 30 days, the member enters a silence period of 45 days. The system starts to delete the member until the silence period ends. For more information about the silence period, see [What is the silence period for member deletion?](https://help.aliyun.com/document_detail/446079.html)
      shared_ptr<string> deletionType_ {};
      // The reasons why the member fails to be deleted.
      shared_ptr<vector<RdAccountDeletionStatus::FailReasonList>> failReasonList_ {};
      // The status. Valid values:
      // 
      // *   Success: The member is deleted.
      // *   Checking: A deletion check is being performed for the member.
      // *   Deleting: The member is being deleted.
      // *   CheckFailed: The deletion check for the member fails.
      // *   DeleteFailed: The member fails to be deleted.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->rdAccountDeletionStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // rdAccountDeletionStatus Field Functions 
    bool hasRdAccountDeletionStatus() const { return this->rdAccountDeletionStatus_ != nullptr;};
    void deleteRdAccountDeletionStatus() { this->rdAccountDeletionStatus_ = nullptr;};
    inline const GetAccountDeletionStatusResponseBody::RdAccountDeletionStatus & getRdAccountDeletionStatus() const { DARABONBA_PTR_GET_CONST(rdAccountDeletionStatus_, GetAccountDeletionStatusResponseBody::RdAccountDeletionStatus) };
    inline GetAccountDeletionStatusResponseBody::RdAccountDeletionStatus getRdAccountDeletionStatus() { DARABONBA_PTR_GET(rdAccountDeletionStatus_, GetAccountDeletionStatusResponseBody::RdAccountDeletionStatus) };
    inline GetAccountDeletionStatusResponseBody& setRdAccountDeletionStatus(const GetAccountDeletionStatusResponseBody::RdAccountDeletionStatus & rdAccountDeletionStatus) { DARABONBA_PTR_SET_VALUE(rdAccountDeletionStatus_, rdAccountDeletionStatus) };
    inline GetAccountDeletionStatusResponseBody& setRdAccountDeletionStatus(GetAccountDeletionStatusResponseBody::RdAccountDeletionStatus && rdAccountDeletionStatus) { DARABONBA_PTR_SET_RVALUE(rdAccountDeletionStatus_, rdAccountDeletionStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccountDeletionStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The deletion status of the member.
    shared_ptr<GetAccountDeletionStatusResponseBody::RdAccountDeletionStatus> rdAccountDeletionStatus_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
