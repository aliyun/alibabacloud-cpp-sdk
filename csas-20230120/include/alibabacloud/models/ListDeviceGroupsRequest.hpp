// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICEGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListDeviceGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DeviceGroupIds, deviceGroupIds_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DeviceGroupIds, deviceGroupIds_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListDeviceGroupsRequest() = default ;
    ListDeviceGroupsRequest(const ListDeviceGroupsRequest &) = default ;
    ListDeviceGroupsRequest(ListDeviceGroupsRequest &&) = default ;
    ListDeviceGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceGroupsRequest() = default ;
    ListDeviceGroupsRequest& operator=(const ListDeviceGroupsRequest &) = default ;
    ListDeviceGroupsRequest& operator=(ListDeviceGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->deviceGroupIds_ == nullptr && this->name_ == nullptr && this->pageSize_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListDeviceGroupsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // deviceGroupIds Field Functions 
    bool hasDeviceGroupIds() const { return this->deviceGroupIds_ != nullptr;};
    void deleteDeviceGroupIds() { this->deviceGroupIds_ = nullptr;};
    inline const vector<string> & getDeviceGroupIds() const { DARABONBA_PTR_GET_CONST(deviceGroupIds_, vector<string>) };
    inline vector<string> getDeviceGroupIds() { DARABONBA_PTR_GET(deviceGroupIds_, vector<string>) };
    inline ListDeviceGroupsRequest& setDeviceGroupIds(const vector<string> & deviceGroupIds) { DARABONBA_PTR_SET_VALUE(deviceGroupIds_, deviceGroupIds) };
    inline ListDeviceGroupsRequest& setDeviceGroupIds(vector<string> && deviceGroupIds) { DARABONBA_PTR_SET_RVALUE(deviceGroupIds_, deviceGroupIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDeviceGroupsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDeviceGroupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The number of the page to return in a paged query. Valid values: 1 to 10000.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The collection of device group IDs. Duplicate values are not allowed.
    shared_ptr<vector<string>> deviceGroupIds_ {};
    // The device label name. The name can be up to 128 characters in length and can contain Chinese characters, uppercase and lowercase letters, digits, periods (.), underscores (_), and hyphens (-).
    shared_ptr<string> name_ {};
    // The number of entries to return on each page in a paged query. Valid values: 1 to 500.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
