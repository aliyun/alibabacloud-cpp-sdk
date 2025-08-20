// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATESCRATCHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATESCRATCHESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTemplateScratchesResponseBodyTemplateScratches.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListTemplateScratchesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplateScratchesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateScratches, templateScratches_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplateScratchesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateScratches, templateScratches_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTemplateScratchesResponseBody() = default ;
    ListTemplateScratchesResponseBody(const ListTemplateScratchesResponseBody &) = default ;
    ListTemplateScratchesResponseBody(ListTemplateScratchesResponseBody &&) = default ;
    ListTemplateScratchesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplateScratchesResponseBody() = default ;
    ListTemplateScratchesResponseBody& operator=(const ListTemplateScratchesResponseBody &) = default ;
    ListTemplateScratchesResponseBody& operator=(ListTemplateScratchesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->templateScratches_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTemplateScratchesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTemplateScratchesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTemplateScratchesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateScratches Field Functions 
    bool hasTemplateScratches() const { return this->templateScratches_ != nullptr;};
    void deleteTemplateScratches() { this->templateScratches_ = nullptr;};
    inline const vector<ListTemplateScratchesResponseBodyTemplateScratches> & templateScratches() const { DARABONBA_PTR_GET_CONST(templateScratches_, vector<ListTemplateScratchesResponseBodyTemplateScratches>) };
    inline vector<ListTemplateScratchesResponseBodyTemplateScratches> templateScratches() { DARABONBA_PTR_GET(templateScratches_, vector<ListTemplateScratchesResponseBodyTemplateScratches>) };
    inline ListTemplateScratchesResponseBody& setTemplateScratches(const vector<ListTemplateScratchesResponseBodyTemplateScratches> & templateScratches) { DARABONBA_PTR_SET_VALUE(templateScratches_, templateScratches) };
    inline ListTemplateScratchesResponseBody& setTemplateScratches(vector<ListTemplateScratchesResponseBodyTemplateScratches> && templateScratches) { DARABONBA_PTR_SET_RVALUE(templateScratches_, templateScratches) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTemplateScratchesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource scenarios.
    std::shared_ptr<vector<ListTemplateScratchesResponseBodyTemplateScratches>> templateScratches_ = nullptr;
    // The total number of scenarios.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
