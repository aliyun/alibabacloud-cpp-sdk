// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORNAMESPACELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORNAMESPACELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHybridMonitorNamespaceListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridMonitorNamespaceListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ShowTaskStatistic, showTaskStatistic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridMonitorNamespaceListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ShowTaskStatistic, showTaskStatistic_);
    };
    DescribeHybridMonitorNamespaceListRequest() = default ;
    DescribeHybridMonitorNamespaceListRequest(const DescribeHybridMonitorNamespaceListRequest &) = default ;
    DescribeHybridMonitorNamespaceListRequest(DescribeHybridMonitorNamespaceListRequest &&) = default ;
    DescribeHybridMonitorNamespaceListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridMonitorNamespaceListRequest() = default ;
    DescribeHybridMonitorNamespaceListRequest& operator=(const DescribeHybridMonitorNamespaceListRequest &) = default ;
    DescribeHybridMonitorNamespaceListRequest& operator=(DescribeHybridMonitorNamespaceListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && return this->namespace_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr && return this->showTaskStatistic_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DescribeHybridMonitorNamespaceListRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeHybridMonitorNamespaceListRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHybridMonitorNamespaceListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHybridMonitorNamespaceListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeHybridMonitorNamespaceListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // showTaskStatistic Field Functions 
    bool hasShowTaskStatistic() const { return this->showTaskStatistic_ != nullptr;};
    void deleteShowTaskStatistic() { this->showTaskStatistic_ = nullptr;};
    inline bool showTaskStatistic() const { DARABONBA_PTR_GET_DEFAULT(showTaskStatistic_, false) };
    inline DescribeHybridMonitorNamespaceListRequest& setShowTaskStatistic(bool showTaskStatistic) { DARABONBA_PTR_SET_VALUE(showTaskStatistic_, showTaskStatistic) };


  protected:
    // The search keyword.
    std::shared_ptr<string> keyword_ = nullptr;
    // The name of the namespace.
    // 
    // The name can contain letters, digits, and hyphens (-).
    std::shared_ptr<string> namespace_ = nullptr;
    // The page number.
    // 
    // Page numbers start from 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    // 
    // Page numbers start from 1. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to return the configuration details of metric import tasks for Alibaba Cloud services and the number of metric import tasks for third-party services. Valid values:
    // 
    // *   true
    // *   false (default)
    std::shared_ptr<bool> showTaskStatistic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
