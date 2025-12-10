// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICYATTACHMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICYATTACHMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPolicyAttachmentsResponseBodyPolicyAttachments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListPolicyAttachmentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicyAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyAttachments, policyAttachments_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicyAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyAttachments, policyAttachments_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPolicyAttachmentsResponseBody() = default ;
    ListPolicyAttachmentsResponseBody(const ListPolicyAttachmentsResponseBody &) = default ;
    ListPolicyAttachmentsResponseBody(ListPolicyAttachmentsResponseBody &&) = default ;
    ListPolicyAttachmentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicyAttachmentsResponseBody() = default ;
    ListPolicyAttachmentsResponseBody& operator=(const ListPolicyAttachmentsResponseBody &) = default ;
    ListPolicyAttachmentsResponseBody& operator=(ListPolicyAttachmentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->policyAttachments_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPolicyAttachmentsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPolicyAttachmentsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyAttachments Field Functions 
    bool hasPolicyAttachments() const { return this->policyAttachments_ != nullptr;};
    void deletePolicyAttachments() { this->policyAttachments_ = nullptr;};
    inline const ListPolicyAttachmentsResponseBodyPolicyAttachments & policyAttachments() const { DARABONBA_PTR_GET_CONST(policyAttachments_, ListPolicyAttachmentsResponseBodyPolicyAttachments) };
    inline ListPolicyAttachmentsResponseBodyPolicyAttachments policyAttachments() { DARABONBA_PTR_GET(policyAttachments_, ListPolicyAttachmentsResponseBodyPolicyAttachments) };
    inline ListPolicyAttachmentsResponseBody& setPolicyAttachments(const ListPolicyAttachmentsResponseBodyPolicyAttachments & policyAttachments) { DARABONBA_PTR_SET_VALUE(policyAttachments_, policyAttachments) };
    inline ListPolicyAttachmentsResponseBody& setPolicyAttachments(ListPolicyAttachmentsResponseBodyPolicyAttachments && policyAttachments) { DARABONBA_PTR_SET_RVALUE(policyAttachments_, policyAttachments) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPolicyAttachmentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPolicyAttachmentsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The information about the permission policies.
    std::shared_ptr<ListPolicyAttachmentsResponseBodyPolicyAttachments> policyAttachments_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
