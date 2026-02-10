// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBackupPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(MachineRemark, machineRemark_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(MachineRemark, machineRemark_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeBackupPoliciesRequest() = default ;
    DescribeBackupPoliciesRequest(const DescribeBackupPoliciesRequest &) = default ;
    DescribeBackupPoliciesRequest(DescribeBackupPoliciesRequest &&) = default ;
    DescribeBackupPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPoliciesRequest() = default ;
    DescribeBackupPoliciesRequest& operator=(const DescribeBackupPoliciesRequest &) = default ;
    DescribeBackupPoliciesRequest& operator=(DescribeBackupPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->machineRemark_ == nullptr && this->name_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeBackupPoliciesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // machineRemark Field Functions 
    bool hasMachineRemark() const { return this->machineRemark_ != nullptr;};
    void deleteMachineRemark() { this->machineRemark_ = nullptr;};
    inline string getMachineRemark() const { DARABONBA_PTR_GET_DEFAULT(machineRemark_, "") };
    inline DescribeBackupPoliciesRequest& setMachineRemark(string machineRemark) { DARABONBA_PTR_SET_VALUE(machineRemark_, machineRemark) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeBackupPoliciesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupPoliciesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeBackupPoliciesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The number of the page to return. Default value: 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The information that you want to use to identify the servers protected by the anti-ransomware policy. You can enter the IP address or ID of a server.
    shared_ptr<string> machineRemark_ {};
    // The name of the anti-ransomware policy that you want to query.
    shared_ptr<string> name_ {};
    // The number of entries to return on each page. Default value: 10.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The status of the anti-ransomware policy. Valid values:
    // 
    // *   **enabled**: The anti-ransomware policy is manually enabled.
    // *   **disabled**: The anti-ransomware policy is manually disabled. After an anti-ransomware policy is disabled, the data backup task that is running based on the policy stops.
    // *   **closed**: The anti-ransomware policy automatically stops because the anti-ransomware capacity is insufficient.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
