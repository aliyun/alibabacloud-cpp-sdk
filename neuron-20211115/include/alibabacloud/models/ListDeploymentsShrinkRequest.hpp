// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYMENTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYMENTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListDeploymentsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeploymentsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(excludeStatus, excludeStatusShrink_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(serviceGroupId, serviceGroupId_);
      DARABONBA_PTR_TO_JSON(status, statusShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeploymentsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(excludeStatus, excludeStatusShrink_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(serviceGroupId, serviceGroupId_);
      DARABONBA_PTR_FROM_JSON(status, statusShrink_);
    };
    ListDeploymentsShrinkRequest() = default ;
    ListDeploymentsShrinkRequest(const ListDeploymentsShrinkRequest &) = default ;
    ListDeploymentsShrinkRequest(ListDeploymentsShrinkRequest &&) = default ;
    ListDeploymentsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeploymentsShrinkRequest() = default ;
    ListDeploymentsShrinkRequest& operator=(const ListDeploymentsShrinkRequest &) = default ;
    ListDeploymentsShrinkRequest& operator=(ListDeploymentsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->excludeStatusShrink_ == nullptr
        && this->orderBy_ == nullptr && this->orderDirection_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->serviceGroupId_ == nullptr
        && this->statusShrink_ == nullptr; };
    // excludeStatusShrink Field Functions 
    bool hasExcludeStatusShrink() const { return this->excludeStatusShrink_ != nullptr;};
    void deleteExcludeStatusShrink() { this->excludeStatusShrink_ = nullptr;};
    inline string getExcludeStatusShrink() const { DARABONBA_PTR_GET_DEFAULT(excludeStatusShrink_, "") };
    inline ListDeploymentsShrinkRequest& setExcludeStatusShrink(string excludeStatusShrink) { DARABONBA_PTR_SET_VALUE(excludeStatusShrink_, excludeStatusShrink) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListDeploymentsShrinkRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline ListDeploymentsShrinkRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDeploymentsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDeploymentsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // serviceGroupId Field Functions 
    bool hasServiceGroupId() const { return this->serviceGroupId_ != nullptr;};
    void deleteServiceGroupId() { this->serviceGroupId_ = nullptr;};
    inline int64_t getServiceGroupId() const { DARABONBA_PTR_GET_DEFAULT(serviceGroupId_, 0L) };
    inline ListDeploymentsShrinkRequest& setServiceGroupId(int64_t serviceGroupId) { DARABONBA_PTR_SET_VALUE(serviceGroupId_, serviceGroupId) };


    // statusShrink Field Functions 
    bool hasStatusShrink() const { return this->statusShrink_ != nullptr;};
    void deleteStatusShrink() { this->statusShrink_ = nullptr;};
    inline string getStatusShrink() const { DARABONBA_PTR_GET_DEFAULT(statusShrink_, "") };
    inline ListDeploymentsShrinkRequest& setStatusShrink(string statusShrink) { DARABONBA_PTR_SET_VALUE(statusShrink_, statusShrink) };


  protected:
    shared_ptr<string> excludeStatusShrink_ {};
    shared_ptr<string> orderBy_ {};
    shared_ptr<string> orderDirection_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    // This parameter is required.
    shared_ptr<int64_t> serviceGroupId_ {};
    shared_ptr<string> statusShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
