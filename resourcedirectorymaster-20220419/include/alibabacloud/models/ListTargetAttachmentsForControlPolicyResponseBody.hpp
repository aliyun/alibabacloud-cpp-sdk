// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTARGETATTACHMENTSFORCONTROLPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTARGETATTACHMENTSFORCONTROLPOLICYRESPONSEBODY_HPP_
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
  class ListTargetAttachmentsForControlPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTargetAttachmentsForControlPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TargetAttachments, targetAttachments_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTargetAttachmentsForControlPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TargetAttachments, targetAttachments_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTargetAttachmentsForControlPolicyResponseBody() = default ;
    ListTargetAttachmentsForControlPolicyResponseBody(const ListTargetAttachmentsForControlPolicyResponseBody &) = default ;
    ListTargetAttachmentsForControlPolicyResponseBody(ListTargetAttachmentsForControlPolicyResponseBody &&) = default ;
    ListTargetAttachmentsForControlPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTargetAttachmentsForControlPolicyResponseBody() = default ;
    ListTargetAttachmentsForControlPolicyResponseBody& operator=(const ListTargetAttachmentsForControlPolicyResponseBody &) = default ;
    ListTargetAttachmentsForControlPolicyResponseBody& operator=(ListTargetAttachmentsForControlPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TargetAttachments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TargetAttachments& obj) { 
        DARABONBA_PTR_TO_JSON(TargetAttachment, targetAttachment_);
      };
      friend void from_json(const Darabonba::Json& j, TargetAttachments& obj) { 
        DARABONBA_PTR_FROM_JSON(TargetAttachment, targetAttachment_);
      };
      TargetAttachments() = default ;
      TargetAttachments(const TargetAttachments &) = default ;
      TargetAttachments(TargetAttachments &&) = default ;
      TargetAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TargetAttachments() = default ;
      TargetAttachments& operator=(const TargetAttachments &) = default ;
      TargetAttachments& operator=(TargetAttachments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TargetAttachment : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TargetAttachment& obj) { 
          DARABONBA_PTR_TO_JSON(AttachDate, attachDate_);
          DARABONBA_PTR_TO_JSON(TargetId, targetId_);
          DARABONBA_PTR_TO_JSON(TargetName, targetName_);
          DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        };
        friend void from_json(const Darabonba::Json& j, TargetAttachment& obj) { 
          DARABONBA_PTR_FROM_JSON(AttachDate, attachDate_);
          DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
          DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
          DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        };
        TargetAttachment() = default ;
        TargetAttachment(const TargetAttachment &) = default ;
        TargetAttachment(TargetAttachment &&) = default ;
        TargetAttachment(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TargetAttachment() = default ;
        TargetAttachment& operator=(const TargetAttachment &) = default ;
        TargetAttachment& operator=(TargetAttachment &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attachDate_ == nullptr
        && this->targetId_ == nullptr && this->targetName_ == nullptr && this->targetType_ == nullptr; };
        // attachDate Field Functions 
        bool hasAttachDate() const { return this->attachDate_ != nullptr;};
        void deleteAttachDate() { this->attachDate_ = nullptr;};
        inline string getAttachDate() const { DARABONBA_PTR_GET_DEFAULT(attachDate_, "") };
        inline TargetAttachment& setAttachDate(string attachDate) { DARABONBA_PTR_SET_VALUE(attachDate_, attachDate) };


        // targetId Field Functions 
        bool hasTargetId() const { return this->targetId_ != nullptr;};
        void deleteTargetId() { this->targetId_ = nullptr;};
        inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
        inline TargetAttachment& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


        // targetName Field Functions 
        bool hasTargetName() const { return this->targetName_ != nullptr;};
        void deleteTargetName() { this->targetName_ = nullptr;};
        inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
        inline TargetAttachment& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


        // targetType Field Functions 
        bool hasTargetType() const { return this->targetType_ != nullptr;};
        void deleteTargetType() { this->targetType_ = nullptr;};
        inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
        inline TargetAttachment& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      protected:
        // The time when the access control policy was attached to the object.
        shared_ptr<string> attachDate_ {};
        // The ID of the object.
        shared_ptr<string> targetId_ {};
        // The name of the object.
        shared_ptr<string> targetName_ {};
        // The type of the object. Valid values:
        // 
        // *   Root: Root folder
        // *   Folder: subfolder of the Root folder
        // *   Account: member
        shared_ptr<string> targetType_ {};
      };

      virtual bool empty() const override { return this->targetAttachment_ == nullptr; };
      // targetAttachment Field Functions 
      bool hasTargetAttachment() const { return this->targetAttachment_ != nullptr;};
      void deleteTargetAttachment() { this->targetAttachment_ = nullptr;};
      inline const vector<TargetAttachments::TargetAttachment> & getTargetAttachment() const { DARABONBA_PTR_GET_CONST(targetAttachment_, vector<TargetAttachments::TargetAttachment>) };
      inline vector<TargetAttachments::TargetAttachment> getTargetAttachment() { DARABONBA_PTR_GET(targetAttachment_, vector<TargetAttachments::TargetAttachment>) };
      inline TargetAttachments& setTargetAttachment(const vector<TargetAttachments::TargetAttachment> & targetAttachment) { DARABONBA_PTR_SET_VALUE(targetAttachment_, targetAttachment) };
      inline TargetAttachments& setTargetAttachment(vector<TargetAttachments::TargetAttachment> && targetAttachment) { DARABONBA_PTR_SET_RVALUE(targetAttachment_, targetAttachment) };


    protected:
      shared_ptr<vector<TargetAttachments::TargetAttachment>> targetAttachment_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->targetAttachments_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTargetAttachmentsForControlPolicyResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTargetAttachmentsForControlPolicyResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTargetAttachmentsForControlPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // targetAttachments Field Functions 
    bool hasTargetAttachments() const { return this->targetAttachments_ != nullptr;};
    void deleteTargetAttachments() { this->targetAttachments_ = nullptr;};
    inline const ListTargetAttachmentsForControlPolicyResponseBody::TargetAttachments & getTargetAttachments() const { DARABONBA_PTR_GET_CONST(targetAttachments_, ListTargetAttachmentsForControlPolicyResponseBody::TargetAttachments) };
    inline ListTargetAttachmentsForControlPolicyResponseBody::TargetAttachments getTargetAttachments() { DARABONBA_PTR_GET(targetAttachments_, ListTargetAttachmentsForControlPolicyResponseBody::TargetAttachments) };
    inline ListTargetAttachmentsForControlPolicyResponseBody& setTargetAttachments(const ListTargetAttachmentsForControlPolicyResponseBody::TargetAttachments & targetAttachments) { DARABONBA_PTR_SET_VALUE(targetAttachments_, targetAttachments) };
    inline ListTargetAttachmentsForControlPolicyResponseBody& setTargetAttachments(ListTargetAttachmentsForControlPolicyResponseBody::TargetAttachments && targetAttachments) { DARABONBA_PTR_SET_RVALUE(targetAttachments_, targetAttachments) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTargetAttachmentsForControlPolicyResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the objects to which the access control policy is attached.
    shared_ptr<ListTargetAttachmentsForControlPolicyResponseBody::TargetAttachments> targetAttachments_ {};
    // The total number of objects to which the access control policy is attached.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
