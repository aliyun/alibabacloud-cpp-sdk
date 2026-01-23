// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCANRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCANRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListScanRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScanRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScanType, scanType_);
    };
    friend void from_json(const Darabonba::Json& j, ListScanRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScanType, scanType_);
    };
    ListScanRuleRequest() = default ;
    ListScanRuleRequest(const ListScanRuleRequest &) = default ;
    ListScanRuleRequest(ListScanRuleRequest &&) = default ;
    ListScanRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScanRuleRequest() = default ;
    ListScanRuleRequest& operator=(const ListScanRuleRequest &) = default ;
    ListScanRuleRequest& operator=(ListScanRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->scanType_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListScanRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListScanRuleRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListScanRuleRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scanType Field Functions 
    bool hasScanType() const { return this->scanType_ != nullptr;};
    void deleteScanType() { this->scanType_ = nullptr;};
    inline string getScanType() const { DARABONBA_PTR_GET_DEFAULT(scanType_, "") };
    inline ListScanRuleRequest& setScanType(string scanType) { DARABONBA_PTR_SET_VALUE(scanType_, scanType) };


  protected:
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The page number.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The type of the vulnerability. Valid values:
    // 
    // *   `VUL`: Products Cloud Security Scanner.
    // *   `SBOM`: Product Content Analysis.
    // 
    // Default value: `VUL`
    shared_ptr<string> scanType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
