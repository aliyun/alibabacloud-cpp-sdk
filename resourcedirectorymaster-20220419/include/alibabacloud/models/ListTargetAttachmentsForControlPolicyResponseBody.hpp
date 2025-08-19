// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTARGETATTACHMENTSFORCONTROLPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTARGETATTACHMENTSFORCONTROLPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments.hpp>
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
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->targetAttachments_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTargetAttachmentsForControlPolicyResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTargetAttachmentsForControlPolicyResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTargetAttachmentsForControlPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // targetAttachments Field Functions 
    bool hasTargetAttachments() const { return this->targetAttachments_ != nullptr;};
    void deleteTargetAttachments() { this->targetAttachments_ = nullptr;};
    inline const ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments & targetAttachments() const { DARABONBA_PTR_GET_CONST(targetAttachments_, ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments) };
    inline ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments targetAttachments() { DARABONBA_PTR_GET(targetAttachments_, ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments) };
    inline ListTargetAttachmentsForControlPolicyResponseBody& setTargetAttachments(const ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments & targetAttachments) { DARABONBA_PTR_SET_VALUE(targetAttachments_, targetAttachments) };
    inline ListTargetAttachmentsForControlPolicyResponseBody& setTargetAttachments(ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments && targetAttachments) { DARABONBA_PTR_SET_RVALUE(targetAttachments_, targetAttachments) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTargetAttachmentsForControlPolicyResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the objects to which the access control policy is attached.
    std::shared_ptr<ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments> targetAttachments_ = nullptr;
    // The total number of objects to which the access control policy is attached.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
