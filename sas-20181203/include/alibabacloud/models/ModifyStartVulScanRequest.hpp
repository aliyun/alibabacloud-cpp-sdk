// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSTARTVULSCANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSTARTVULSCANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyStartVulScanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyStartVulScanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Types, types_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyStartVulScanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Types, types_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    ModifyStartVulScanRequest() = default ;
    ModifyStartVulScanRequest(const ModifyStartVulScanRequest &) = default ;
    ModifyStartVulScanRequest(ModifyStartVulScanRequest &&) = default ;
    ModifyStartVulScanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyStartVulScanRequest() = default ;
    ModifyStartVulScanRequest& operator=(const ModifyStartVulScanRequest &) = default ;
    ModifyStartVulScanRequest& operator=(ModifyStartVulScanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->types_ == nullptr
        && this->uuids_ == nullptr; };
    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline string getTypes() const { DARABONBA_PTR_GET_DEFAULT(types_, "") };
    inline ModifyStartVulScanRequest& setTypes(string types) { DARABONBA_PTR_SET_VALUE(types_, types) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline ModifyStartVulScanRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // Settings for the types of vulnerabilities to detect by using the one-click scan feature. Valid values:
    // - **cve**: Linux software vulnerability.
    // - **sys**: Windows system vulnerability.
    // - **cms**: Web-CMS vulnerability.
    // - **app**: Application vulnerability detected by the web scanner.
    // - **emg**: Emergency vulnerability.
    // - **image**: Container image vulnerability.
    // - **sca**: Application vulnerability detected by software constituency parsing.
    // > If this parameter is left empty, all vulnerability types are detected.
    shared_ptr<string> types_ {};
    // The list of server UUIDs. Separate multiple UUIDs with commas (,).
    // 
    // > You can call the [DescribeCloudCenterInstances](https://help.aliyun.com/document_detail/421726.html) operation to obtain this parameter.
    shared_ptr<string> uuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
