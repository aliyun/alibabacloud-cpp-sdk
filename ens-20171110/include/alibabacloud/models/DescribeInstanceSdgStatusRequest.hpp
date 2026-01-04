// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESDGSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESDGSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstanceSDGStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSDGStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SDGIds, SDGIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSDGStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SDGIds, SDGIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeInstanceSDGStatusRequest() = default ;
    DescribeInstanceSDGStatusRequest(const DescribeInstanceSDGStatusRequest &) = default ;
    DescribeInstanceSDGStatusRequest(DescribeInstanceSDGStatusRequest &&) = default ;
    DescribeInstanceSDGStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSDGStatusRequest() = default ;
    DescribeInstanceSDGStatusRequest& operator=(const DescribeInstanceSDGStatusRequest &) = default ;
    DescribeInstanceSDGStatusRequest& operator=(DescribeInstanceSDGStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->SDGIds_ == nullptr && this->status_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceSDGStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstanceSDGStatusRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstanceSDGStatusRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // SDGIds Field Functions 
    bool hasSDGIds() const { return this->SDGIds_ != nullptr;};
    void deleteSDGIds() { this->SDGIds_ = nullptr;};
    inline const vector<string> & getSDGIds() const { DARABONBA_PTR_GET_CONST(SDGIds_, vector<string>) };
    inline vector<string> getSDGIds() { DARABONBA_PTR_GET(SDGIds_, vector<string>) };
    inline DescribeInstanceSDGStatusRequest& setSDGIds(const vector<string> & SDGIds) { DARABONBA_PTR_SET_VALUE(SDGIds_, SDGIds) };
    inline DescribeInstanceSDGStatusRequest& setSDGIds(vector<string> && SDGIds) { DARABONBA_PTR_SET_RVALUE(SDGIds_, SDGIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstanceSDGStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the AIC instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The number of the page to return. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The IDs of SDGs that you want to query. By default, all SDGs are queried.
    shared_ptr<vector<string>> SDGIds_ {};
    // The deployment status of the SDG.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
