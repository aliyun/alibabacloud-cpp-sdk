// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISTILLATIONTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDISTILLATIONTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DistillationTemplateSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIModelGallery20250630
{
namespace Models
{
  class ListDistillationTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDistillationTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DistillationTemplates, distillationTemplates_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDistillationTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DistillationTemplates, distillationTemplates_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDistillationTemplatesResponseBody() = default ;
    ListDistillationTemplatesResponseBody(const ListDistillationTemplatesResponseBody &) = default ;
    ListDistillationTemplatesResponseBody(ListDistillationTemplatesResponseBody &&) = default ;
    ListDistillationTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDistillationTemplatesResponseBody() = default ;
    ListDistillationTemplatesResponseBody& operator=(const ListDistillationTemplatesResponseBody &) = default ;
    ListDistillationTemplatesResponseBody& operator=(ListDistillationTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->distillationTemplates_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // distillationTemplates Field Functions 
    bool hasDistillationTemplates() const { return this->distillationTemplates_ != nullptr;};
    void deleteDistillationTemplates() { this->distillationTemplates_ = nullptr;};
    inline const vector<DistillationTemplateSummary> & getDistillationTemplates() const { DARABONBA_PTR_GET_CONST(distillationTemplates_, vector<DistillationTemplateSummary>) };
    inline vector<DistillationTemplateSummary> getDistillationTemplates() { DARABONBA_PTR_GET(distillationTemplates_, vector<DistillationTemplateSummary>) };
    inline ListDistillationTemplatesResponseBody& setDistillationTemplates(const vector<DistillationTemplateSummary> & distillationTemplates) { DARABONBA_PTR_SET_VALUE(distillationTemplates_, distillationTemplates) };
    inline ListDistillationTemplatesResponseBody& setDistillationTemplates(vector<DistillationTemplateSummary> && distillationTemplates) { DARABONBA_PTR_SET_RVALUE(distillationTemplates_, distillationTemplates) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDistillationTemplatesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDistillationTemplatesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDistillationTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDistillationTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of distillation template summaries, sorted by OrderNumber in ascending order.
    shared_ptr<vector<DistillationTemplateSummary>> distillationTemplates_ {};
    // The page number, which echoes the PageNumber value in the request.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page, which echoes the PageSize value in the request.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of templates that match the filter conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIModelGallery20250630
#endif
