// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESNAPSHOTFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETESNAPSHOTFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteSnapshotFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSnapshotFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailureCount, failureCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotDeleteInfoList, snapshotDeleteInfoList_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSnapshotFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailureCount, failureCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotDeleteInfoList, snapshotDeleteInfoList_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
    };
    DeleteSnapshotFilesResponseBody() = default ;
    DeleteSnapshotFilesResponseBody(const DeleteSnapshotFilesResponseBody &) = default ;
    DeleteSnapshotFilesResponseBody(DeleteSnapshotFilesResponseBody &&) = default ;
    DeleteSnapshotFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSnapshotFilesResponseBody() = default ;
    DeleteSnapshotFilesResponseBody& operator=(const DeleteSnapshotFilesResponseBody &) = default ;
    DeleteSnapshotFilesResponseBody& operator=(DeleteSnapshotFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SnapshotDeleteInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SnapshotDeleteInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(SnapshotDeleteInfo, snapshotDeleteInfo_);
      };
      friend void from_json(const Darabonba::Json& j, SnapshotDeleteInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(SnapshotDeleteInfo, snapshotDeleteInfo_);
      };
      SnapshotDeleteInfoList() = default ;
      SnapshotDeleteInfoList(const SnapshotDeleteInfoList &) = default ;
      SnapshotDeleteInfoList(SnapshotDeleteInfoList &&) = default ;
      SnapshotDeleteInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SnapshotDeleteInfoList() = default ;
      SnapshotDeleteInfoList& operator=(const SnapshotDeleteInfoList &) = default ;
      SnapshotDeleteInfoList& operator=(SnapshotDeleteInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SnapshotDeleteInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SnapshotDeleteInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(Message, message_);
        };
        friend void from_json(const Darabonba::Json& j, SnapshotDeleteInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
        };
        SnapshotDeleteInfo() = default ;
        SnapshotDeleteInfo(const SnapshotDeleteInfo &) = default ;
        SnapshotDeleteInfo(SnapshotDeleteInfo &&) = default ;
        SnapshotDeleteInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SnapshotDeleteInfo() = default ;
        SnapshotDeleteInfo& operator=(const SnapshotDeleteInfo &) = default ;
        SnapshotDeleteInfo& operator=(SnapshotDeleteInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTimestamp_ == nullptr
        && this->message_ == nullptr; };
        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline SnapshotDeleteInfo& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline SnapshotDeleteInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        shared_ptr<int64_t> createTimestamp_ {};
        shared_ptr<string> message_ {};
      };

      virtual bool empty() const override { return this->snapshotDeleteInfo_ == nullptr; };
      // snapshotDeleteInfo Field Functions 
      bool hasSnapshotDeleteInfo() const { return this->snapshotDeleteInfo_ != nullptr;};
      void deleteSnapshotDeleteInfo() { this->snapshotDeleteInfo_ = nullptr;};
      inline const vector<SnapshotDeleteInfoList::SnapshotDeleteInfo> & getSnapshotDeleteInfo() const { DARABONBA_PTR_GET_CONST(snapshotDeleteInfo_, vector<SnapshotDeleteInfoList::SnapshotDeleteInfo>) };
      inline vector<SnapshotDeleteInfoList::SnapshotDeleteInfo> getSnapshotDeleteInfo() { DARABONBA_PTR_GET(snapshotDeleteInfo_, vector<SnapshotDeleteInfoList::SnapshotDeleteInfo>) };
      inline SnapshotDeleteInfoList& setSnapshotDeleteInfo(const vector<SnapshotDeleteInfoList::SnapshotDeleteInfo> & snapshotDeleteInfo) { DARABONBA_PTR_SET_VALUE(snapshotDeleteInfo_, snapshotDeleteInfo) };
      inline SnapshotDeleteInfoList& setSnapshotDeleteInfo(vector<SnapshotDeleteInfoList::SnapshotDeleteInfo> && snapshotDeleteInfo) { DARABONBA_PTR_SET_RVALUE(snapshotDeleteInfo_, snapshotDeleteInfo) };


    protected:
      shared_ptr<vector<SnapshotDeleteInfoList::SnapshotDeleteInfo>> snapshotDeleteInfo_ {};
    };

    virtual bool empty() const override { return this->failureCount_ == nullptr
        && this->requestId_ == nullptr && this->snapshotDeleteInfoList_ == nullptr && this->successCount_ == nullptr; };
    // failureCount Field Functions 
    bool hasFailureCount() const { return this->failureCount_ != nullptr;};
    void deleteFailureCount() { this->failureCount_ = nullptr;};
    inline int32_t getFailureCount() const { DARABONBA_PTR_GET_DEFAULT(failureCount_, 0) };
    inline DeleteSnapshotFilesResponseBody& setFailureCount(int32_t failureCount) { DARABONBA_PTR_SET_VALUE(failureCount_, failureCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteSnapshotFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotDeleteInfoList Field Functions 
    bool hasSnapshotDeleteInfoList() const { return this->snapshotDeleteInfoList_ != nullptr;};
    void deleteSnapshotDeleteInfoList() { this->snapshotDeleteInfoList_ = nullptr;};
    inline const DeleteSnapshotFilesResponseBody::SnapshotDeleteInfoList & getSnapshotDeleteInfoList() const { DARABONBA_PTR_GET_CONST(snapshotDeleteInfoList_, DeleteSnapshotFilesResponseBody::SnapshotDeleteInfoList) };
    inline DeleteSnapshotFilesResponseBody::SnapshotDeleteInfoList getSnapshotDeleteInfoList() { DARABONBA_PTR_GET(snapshotDeleteInfoList_, DeleteSnapshotFilesResponseBody::SnapshotDeleteInfoList) };
    inline DeleteSnapshotFilesResponseBody& setSnapshotDeleteInfoList(const DeleteSnapshotFilesResponseBody::SnapshotDeleteInfoList & snapshotDeleteInfoList) { DARABONBA_PTR_SET_VALUE(snapshotDeleteInfoList_, snapshotDeleteInfoList) };
    inline DeleteSnapshotFilesResponseBody& setSnapshotDeleteInfoList(DeleteSnapshotFilesResponseBody::SnapshotDeleteInfoList && snapshotDeleteInfoList) { DARABONBA_PTR_SET_RVALUE(snapshotDeleteInfoList_, snapshotDeleteInfoList) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline DeleteSnapshotFilesResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


  protected:
    // The number of snapshots that failed to be deleted.
    shared_ptr<int32_t> failureCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DeleteSnapshotFilesResponseBody::SnapshotDeleteInfoList> snapshotDeleteInfoList_ {};
    // The number of successful screenshot deletions.
    shared_ptr<int32_t> successCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
