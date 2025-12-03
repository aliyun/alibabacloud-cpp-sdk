// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHANGEREQUESTWORKFLOWEXECUTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHANGEREQUESTWORKFLOWEXECUTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListChangeRequestWorkflowExecutionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChangeRequestWorkflowExecutionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(perPage, perPage_);
      DARABONBA_PTR_TO_JSON(releaseStageSn, releaseStageSn_);
      DARABONBA_PTR_TO_JSON(releaseWorkflowSn, releaseWorkflowSn_);
      DARABONBA_PTR_TO_JSON(sort, sort_);
    };
    friend void from_json(const Darabonba::Json& j, ListChangeRequestWorkflowExecutionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(perPage, perPage_);
      DARABONBA_PTR_FROM_JSON(releaseStageSn, releaseStageSn_);
      DARABONBA_PTR_FROM_JSON(releaseWorkflowSn, releaseWorkflowSn_);
      DARABONBA_PTR_FROM_JSON(sort, sort_);
    };
    ListChangeRequestWorkflowExecutionsRequest() = default ;
    ListChangeRequestWorkflowExecutionsRequest(const ListChangeRequestWorkflowExecutionsRequest &) = default ;
    ListChangeRequestWorkflowExecutionsRequest(ListChangeRequestWorkflowExecutionsRequest &&) = default ;
    ListChangeRequestWorkflowExecutionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChangeRequestWorkflowExecutionsRequest() = default ;
    ListChangeRequestWorkflowExecutionsRequest& operator=(const ListChangeRequestWorkflowExecutionsRequest &) = default ;
    ListChangeRequestWorkflowExecutionsRequest& operator=(ListChangeRequestWorkflowExecutionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderBy_ == nullptr
        && return this->organizationId_ == nullptr && return this->page_ == nullptr && return this->perPage_ == nullptr && return this->releaseStageSn_ == nullptr && return this->releaseWorkflowSn_ == nullptr
        && return this->sort_ == nullptr; };
    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListChangeRequestWorkflowExecutionsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListChangeRequestWorkflowExecutionsRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListChangeRequestWorkflowExecutionsRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // perPage Field Functions 
    bool hasPerPage() const { return this->perPage_ != nullptr;};
    void deletePerPage() { this->perPage_ = nullptr;};
    inline int64_t perPage() const { DARABONBA_PTR_GET_DEFAULT(perPage_, 0L) };
    inline ListChangeRequestWorkflowExecutionsRequest& setPerPage(int64_t perPage) { DARABONBA_PTR_SET_VALUE(perPage_, perPage) };


    // releaseStageSn Field Functions 
    bool hasReleaseStageSn() const { return this->releaseStageSn_ != nullptr;};
    void deleteReleaseStageSn() { this->releaseStageSn_ = nullptr;};
    inline string releaseStageSn() const { DARABONBA_PTR_GET_DEFAULT(releaseStageSn_, "") };
    inline ListChangeRequestWorkflowExecutionsRequest& setReleaseStageSn(string releaseStageSn) { DARABONBA_PTR_SET_VALUE(releaseStageSn_, releaseStageSn) };


    // releaseWorkflowSn Field Functions 
    bool hasReleaseWorkflowSn() const { return this->releaseWorkflowSn_ != nullptr;};
    void deleteReleaseWorkflowSn() { this->releaseWorkflowSn_ = nullptr;};
    inline string releaseWorkflowSn() const { DARABONBA_PTR_GET_DEFAULT(releaseWorkflowSn_, "") };
    inline ListChangeRequestWorkflowExecutionsRequest& setReleaseWorkflowSn(string releaseWorkflowSn) { DARABONBA_PTR_SET_VALUE(releaseWorkflowSn_, releaseWorkflowSn) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListChangeRequestWorkflowExecutionsRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


  protected:
    std::shared_ptr<string> orderBy_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<int64_t> page_ = nullptr;
    std::shared_ptr<int64_t> perPage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> releaseStageSn_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> releaseWorkflowSn_ = nullptr;
    std::shared_ptr<string> sort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
