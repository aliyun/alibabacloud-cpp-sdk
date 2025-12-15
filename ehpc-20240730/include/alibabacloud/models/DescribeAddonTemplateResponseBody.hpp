// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDONTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDONTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAddonTemplateResponseBodyAddon.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class DescribeAddonTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddonTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Addon, addon_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddonTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Addon, addon_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAddonTemplateResponseBody() = default ;
    DescribeAddonTemplateResponseBody(const DescribeAddonTemplateResponseBody &) = default ;
    DescribeAddonTemplateResponseBody(DescribeAddonTemplateResponseBody &&) = default ;
    DescribeAddonTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddonTemplateResponseBody() = default ;
    DescribeAddonTemplateResponseBody& operator=(const DescribeAddonTemplateResponseBody &) = default ;
    DescribeAddonTemplateResponseBody& operator=(DescribeAddonTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addon_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // addon Field Functions 
    bool hasAddon() const { return this->addon_ != nullptr;};
    void deleteAddon() { this->addon_ = nullptr;};
    inline const DescribeAddonTemplateResponseBodyAddon & addon() const { DARABONBA_PTR_GET_CONST(addon_, DescribeAddonTemplateResponseBodyAddon) };
    inline DescribeAddonTemplateResponseBodyAddon addon() { DARABONBA_PTR_GET(addon_, DescribeAddonTemplateResponseBodyAddon) };
    inline DescribeAddonTemplateResponseBody& setAddon(const DescribeAddonTemplateResponseBodyAddon & addon) { DARABONBA_PTR_SET_VALUE(addon_, addon) };
    inline DescribeAddonTemplateResponseBody& setAddon(DescribeAddonTemplateResponseBodyAddon && addon) { DARABONBA_PTR_SET_RVALUE(addon_, addon) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeAddonTemplateResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeAddonTemplateResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAddonTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAddonTemplateResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the addon template.
    std::shared_ptr<DescribeAddonTemplateResponseBodyAddon> addon_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
