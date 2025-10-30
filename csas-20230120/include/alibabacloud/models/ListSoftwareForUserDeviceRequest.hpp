// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOFTWAREFORUSERDEVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSOFTWAREFORUSERDEVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListSoftwareForUserDeviceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSoftwareForUserDeviceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DeviceTag, deviceTag_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListSoftwareForUserDeviceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DeviceTag, deviceTag_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListSoftwareForUserDeviceRequest() = default ;
    ListSoftwareForUserDeviceRequest(const ListSoftwareForUserDeviceRequest &) = default ;
    ListSoftwareForUserDeviceRequest(ListSoftwareForUserDeviceRequest &&) = default ;
    ListSoftwareForUserDeviceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSoftwareForUserDeviceRequest() = default ;
    ListSoftwareForUserDeviceRequest& operator=(const ListSoftwareForUserDeviceRequest &) = default ;
    ListSoftwareForUserDeviceRequest& operator=(ListSoftwareForUserDeviceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->deviceTag_ == nullptr && return this->pageSize_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListSoftwareForUserDeviceRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // deviceTag Field Functions 
    bool hasDeviceTag() const { return this->deviceTag_ != nullptr;};
    void deleteDeviceTag() { this->deviceTag_ = nullptr;};
    inline string deviceTag() const { DARABONBA_PTR_GET_DEFAULT(deviceTag_, "") };
    inline ListSoftwareForUserDeviceRequest& setDeviceTag(string deviceTag) { DARABONBA_PTR_SET_VALUE(deviceTag_, deviceTag) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListSoftwareForUserDeviceRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deviceTag_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
