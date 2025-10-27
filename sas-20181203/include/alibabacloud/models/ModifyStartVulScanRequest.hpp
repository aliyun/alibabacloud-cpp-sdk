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
        && return this->uuids_ == nullptr; };
    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline string types() const { DARABONBA_PTR_GET_DEFAULT(types_, "") };
    inline ModifyStartVulScanRequest& setTypes(string types) { DARABONBA_PTR_SET_VALUE(types_, types) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string uuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline ModifyStartVulScanRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The types of vulnerabilities that can be detected. Valid values:
    // 
    // *   **cve**: Linux software vulnerabilities
    // *   **sys**: Windows system vulnerabilities
    // *   **cms**: Web-CMS vulnerabilities
    // *   **app**: application vulnerabilities
    // *   **emg**: urgent vulnerabilities
    // *   **image**: container image vulnerabilities
    // *   **sca**: vulnerabilities that are detected based on software component analysis
    // 
    // > If you leave this parameter empty, all types of vulnerabilities can be detected.
    std::shared_ptr<string> types_ = nullptr;
    // The UUIDs of servers.
    std::shared_ptr<string> uuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
