// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOTATASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOTATASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListOtaTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOtaTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(OtaType, otaType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListOtaTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(OtaType, otaType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListOtaTaskRequest() = default ;
    ListOtaTaskRequest(const ListOtaTaskRequest &) = default ;
    ListOtaTaskRequest(ListOtaTaskRequest &&) = default ;
    ListOtaTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOtaTaskRequest() = default ;
    ListOtaTaskRequest& operator=(const ListOtaTaskRequest &) = default ;
    ListOtaTaskRequest& operator=(ListOtaTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appInstanceGroupId_ != nullptr
        && this->otaType_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline ListOtaTaskRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // otaType Field Functions 
    bool hasOtaType() const { return this->otaType_ != nullptr;};
    void deleteOtaType() { this->otaType_ = nullptr;};
    inline string otaType() const { DARABONBA_PTR_GET_DEFAULT(otaType_, "") };
    inline ListOtaTaskRequest& setOtaType(string otaType) { DARABONBA_PTR_SET_VALUE(otaType_, otaType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListOtaTaskRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOtaTaskRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the delivery group.
    // 
    // This parameter is required.
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    // The type of the OTA update task.
    // 
    // Valid values:
    // 
    // *   Fota: update of the system components of Alibaba Cloud Workspace
    // 
    // This parameter is required.
    std::shared_ptr<string> otaType_ = nullptr;
    // The page number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Valid values: 1 to 100.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
