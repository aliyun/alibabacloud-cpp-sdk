// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCANRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSCANRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetScanRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScanRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScanRuleId, scanRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, GetScanRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScanRuleId, scanRuleId_);
    };
    GetScanRuleRequest() = default ;
    GetScanRuleRequest(const GetScanRuleRequest &) = default ;
    GetScanRuleRequest(GetScanRuleRequest &&) = default ;
    GetScanRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScanRuleRequest() = default ;
    GetScanRuleRequest& operator=(const GetScanRuleRequest &) = default ;
    GetScanRuleRequest& operator=(GetScanRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->scanRuleId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetScanRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scanRuleId Field Functions 
    bool hasScanRuleId() const { return this->scanRuleId_ != nullptr;};
    void deleteScanRuleId() { this->scanRuleId_ = nullptr;};
    inline string getScanRuleId() const { DARABONBA_PTR_GET_DEFAULT(scanRuleId_, "") };
    inline GetScanRuleRequest& setScanRuleId(string scanRuleId) { DARABONBA_PTR_SET_VALUE(scanRuleId_, scanRuleId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The scan rule ID.
    // 
    // This parameter is required.
    shared_ptr<string> scanRuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
