// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROHIBITEDSOFTWARESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROHIBITEDSOFTWARESHRINKREQUEST_HPP_
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
  class ListProhibitedSoftwareShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProhibitedSoftwareShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(SoftwareIds, softwareIds_);
      DARABONBA_PTR_TO_JSON(TagId, tagIdShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListProhibitedSoftwareShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(SoftwareIds, softwareIds_);
      DARABONBA_PTR_FROM_JSON(TagId, tagIdShrink_);
    };
    ListProhibitedSoftwareShrinkRequest() = default ;
    ListProhibitedSoftwareShrinkRequest(const ListProhibitedSoftwareShrinkRequest &) = default ;
    ListProhibitedSoftwareShrinkRequest(ListProhibitedSoftwareShrinkRequest &&) = default ;
    ListProhibitedSoftwareShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProhibitedSoftwareShrinkRequest() = default ;
    ListProhibitedSoftwareShrinkRequest& operator=(const ListProhibitedSoftwareShrinkRequest &) = default ;
    ListProhibitedSoftwareShrinkRequest& operator=(ListProhibitedSoftwareShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SoftwareIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SoftwareIds& obj) { 
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(SoftwareId, softwareId_);
      };
      friend void from_json(const Darabonba::Json& j, SoftwareIds& obj) { 
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(SoftwareId, softwareId_);
      };
      SoftwareIds() = default ;
      SoftwareIds(const SoftwareIds &) = default ;
      SoftwareIds(SoftwareIds &&) = default ;
      SoftwareIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SoftwareIds() = default ;
      SoftwareIds& operator=(const SoftwareIds &) = default ;
      SoftwareIds& operator=(SoftwareIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->isDefault_ == nullptr
        && this->softwareId_ == nullptr; };
      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline SoftwareIds& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // softwareId Field Functions 
      bool hasSoftwareId() const { return this->softwareId_ != nullptr;};
      void deleteSoftwareId() { this->softwareId_ = nullptr;};
      inline string getSoftwareId() const { DARABONBA_PTR_GET_DEFAULT(softwareId_, "") };
      inline SoftwareIds& setSoftwareId(string softwareId) { DARABONBA_PTR_SET_VALUE(softwareId_, softwareId) };


    protected:
      // Indicates whether the prohibited software is a system built-in prohibited software. Valid values:
      // - **true**: A system built-in prohibited software that is shared across all Alibaba Cloud accounts and cannot be modified or deleted.
      // - **false**: Custom prohibited software under the current Alibaba Cloud account.
      shared_ptr<bool> isDefault_ {};
      // The ID of the prohibited software. You can obtain the value from the following operations:
      // - [ListProhibitedSoftware](~~ListProhibitedSoftware~~): Lists prohibited software.
      // - [CreateProhibitedSoftware](~~CreateProhibitedSoftware~~): Creates custom prohibited software.
      shared_ptr<string> softwareId_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->deviceType_ == nullptr && this->name_ == nullptr && this->pageSize_ == nullptr && this->policyId_ == nullptr && this->processName_ == nullptr
        && this->softwareIds_ == nullptr && this->tagIdShrink_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListProhibitedSoftwareShrinkRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline ListProhibitedSoftwareShrinkRequest& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListProhibitedSoftwareShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListProhibitedSoftwareShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListProhibitedSoftwareShrinkRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline ListProhibitedSoftwareShrinkRequest& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // softwareIds Field Functions 
    bool hasSoftwareIds() const { return this->softwareIds_ != nullptr;};
    void deleteSoftwareIds() { this->softwareIds_ = nullptr;};
    inline const vector<ListProhibitedSoftwareShrinkRequest::SoftwareIds> & getSoftwareIds() const { DARABONBA_PTR_GET_CONST(softwareIds_, vector<ListProhibitedSoftwareShrinkRequest::SoftwareIds>) };
    inline vector<ListProhibitedSoftwareShrinkRequest::SoftwareIds> getSoftwareIds() { DARABONBA_PTR_GET(softwareIds_, vector<ListProhibitedSoftwareShrinkRequest::SoftwareIds>) };
    inline ListProhibitedSoftwareShrinkRequest& setSoftwareIds(const vector<ListProhibitedSoftwareShrinkRequest::SoftwareIds> & softwareIds) { DARABONBA_PTR_SET_VALUE(softwareIds_, softwareIds) };
    inline ListProhibitedSoftwareShrinkRequest& setSoftwareIds(vector<ListProhibitedSoftwareShrinkRequest::SoftwareIds> && softwareIds) { DARABONBA_PTR_SET_RVALUE(softwareIds_, softwareIds) };


    // tagIdShrink Field Functions 
    bool hasTagIdShrink() const { return this->tagIdShrink_ != nullptr;};
    void deleteTagIdShrink() { this->tagIdShrink_ = nullptr;};
    inline string getTagIdShrink() const { DARABONBA_PTR_GET_DEFAULT(tagIdShrink_, "") };
    inline ListProhibitedSoftwareShrinkRequest& setTagIdShrink(string tagIdShrink) { DARABONBA_PTR_SET_VALUE(tagIdShrink_, tagIdShrink) };


  protected:
    // The page number of the current page in a paged query. Valid values: 1 to 10000.
    // 
    // This parameter is required.
    shared_ptr<int64_t> currentPage_ {};
    // The operating system type for which the prohibited software has configured processes.
    shared_ptr<string> deviceType_ {};
    // The name of the prohibited software.
    shared_ptr<string> name_ {};
    // The number of entries per page in a paged query. Valid values: 1 to 500.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the software prohibition policy. You can obtain the value from the following operations:
    // - [ListProhibitedPolicies](~~ListProhibitedPolicies~~): Lists software prohibition policies.
    // - [CreateProhibitedPolicy](~~CreateProhibitedPolicy~~): Creates a software prohibition policy.
    shared_ptr<string> policyId_ {};
    // The process name.
    shared_ptr<string> processName_ {};
    // The collection of prohibited software IDs. Duplicate values are not allowed.
    shared_ptr<vector<ListProhibitedSoftwareShrinkRequest::SoftwareIds>> softwareIds_ {};
    // The unique identifier of the prohibited software tag.
    shared_ptr<string> tagIdShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
