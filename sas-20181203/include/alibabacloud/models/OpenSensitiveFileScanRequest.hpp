// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSENSITIVEFILESCANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPENSENSITIVEFILESCANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OpenSensitiveFileScanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenSensitiveFileScanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SwitchOn, switchOn_);
    };
    friend void from_json(const Darabonba::Json& j, OpenSensitiveFileScanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SwitchOn, switchOn_);
    };
    OpenSensitiveFileScanRequest() = default ;
    OpenSensitiveFileScanRequest(const OpenSensitiveFileScanRequest &) = default ;
    OpenSensitiveFileScanRequest(OpenSensitiveFileScanRequest &&) = default ;
    OpenSensitiveFileScanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenSensitiveFileScanRequest() = default ;
    OpenSensitiveFileScanRequest& operator=(const OpenSensitiveFileScanRequest &) = default ;
    OpenSensitiveFileScanRequest& operator=(OpenSensitiveFileScanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->switchOn_ == nullptr; };
    // switchOn Field Functions 
    bool hasSwitchOn() const { return this->switchOn_ != nullptr;};
    void deleteSwitchOn() { this->switchOn_ = nullptr;};
    inline string getSwitchOn() const { DARABONBA_PTR_GET_DEFAULT(switchOn_, "") };
    inline OpenSensitiveFileScanRequest& setSwitchOn(string switchOn) { DARABONBA_PTR_SET_VALUE(switchOn_, switchOn) };


  protected:
    // Specifies whether to enable or disable sensitive file scan. Valid values:
    // 
    // *   **on**: enables sensitive file scan
    // *   **off**: disables sensitive file scan
    shared_ptr<string> switchOn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
