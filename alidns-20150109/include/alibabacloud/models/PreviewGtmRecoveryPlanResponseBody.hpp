// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWGTMRECOVERYPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWGTMRECOVERYPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PreviewGtmRecoveryPlanResponseBodyPreviews.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class PreviewGtmRecoveryPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewGtmRecoveryPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Previews, previews_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewGtmRecoveryPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Previews, previews_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    PreviewGtmRecoveryPlanResponseBody() = default ;
    PreviewGtmRecoveryPlanResponseBody(const PreviewGtmRecoveryPlanResponseBody &) = default ;
    PreviewGtmRecoveryPlanResponseBody(PreviewGtmRecoveryPlanResponseBody &&) = default ;
    PreviewGtmRecoveryPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewGtmRecoveryPlanResponseBody() = default ;
    PreviewGtmRecoveryPlanResponseBody& operator=(const PreviewGtmRecoveryPlanResponseBody &) = default ;
    PreviewGtmRecoveryPlanResponseBody& operator=(PreviewGtmRecoveryPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->previews_ == nullptr && return this->requestId_ == nullptr && return this->totalItems_ == nullptr && return this->totalPages_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline PreviewGtmRecoveryPlanResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline PreviewGtmRecoveryPlanResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // previews Field Functions 
    bool hasPreviews() const { return this->previews_ != nullptr;};
    void deletePreviews() { this->previews_ = nullptr;};
    inline const PreviewGtmRecoveryPlanResponseBodyPreviews & previews() const { DARABONBA_PTR_GET_CONST(previews_, PreviewGtmRecoveryPlanResponseBodyPreviews) };
    inline PreviewGtmRecoveryPlanResponseBodyPreviews previews() { DARABONBA_PTR_GET(previews_, PreviewGtmRecoveryPlanResponseBodyPreviews) };
    inline PreviewGtmRecoveryPlanResponseBody& setPreviews(const PreviewGtmRecoveryPlanResponseBodyPreviews & previews) { DARABONBA_PTR_SET_VALUE(previews_, previews) };
    inline PreviewGtmRecoveryPlanResponseBody& setPreviews(PreviewGtmRecoveryPlanResponseBodyPreviews && previews) { DARABONBA_PTR_SET_RVALUE(previews_, previews) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreviewGtmRecoveryPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t totalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline PreviewGtmRecoveryPlanResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t totalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline PreviewGtmRecoveryPlanResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The returned preview information of the disaster recovery plan.
    std::shared_ptr<PreviewGtmRecoveryPlanResponseBodyPreviews> previews_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned on all pages.
    std::shared_ptr<int32_t> totalItems_ = nullptr;
    // The total number of pages returned.
    std::shared_ptr<int32_t> totalPages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
