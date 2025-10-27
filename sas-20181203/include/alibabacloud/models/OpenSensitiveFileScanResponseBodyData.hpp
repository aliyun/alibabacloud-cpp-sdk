// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSENSITIVEFILESCANRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_OPENSENSITIVEFILESCANRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OpenSensitiveFileScanResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenSensitiveFileScanResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SwitchOn, switchOn_);
    };
    friend void from_json(const Darabonba::Json& j, OpenSensitiveFileScanResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SwitchOn, switchOn_);
    };
    OpenSensitiveFileScanResponseBodyData() = default ;
    OpenSensitiveFileScanResponseBodyData(const OpenSensitiveFileScanResponseBodyData &) = default ;
    OpenSensitiveFileScanResponseBodyData(OpenSensitiveFileScanResponseBodyData &&) = default ;
    OpenSensitiveFileScanResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenSensitiveFileScanResponseBodyData() = default ;
    OpenSensitiveFileScanResponseBodyData& operator=(const OpenSensitiveFileScanResponseBodyData &) = default ;
    OpenSensitiveFileScanResponseBodyData& operator=(OpenSensitiveFileScanResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->switchOn_ == nullptr; };
    // switchOn Field Functions 
    bool hasSwitchOn() const { return this->switchOn_ != nullptr;};
    void deleteSwitchOn() { this->switchOn_ = nullptr;};
    inline string switchOn() const { DARABONBA_PTR_GET_DEFAULT(switchOn_, "") };
    inline OpenSensitiveFileScanResponseBodyData& setSwitchOn(string switchOn) { DARABONBA_PTR_SET_VALUE(switchOn_, switchOn) };


  protected:
    // Indicates whether sensitive file scan is enabled or disabled. Valid values:
    // 
    // *   **on**: enabled
    // *   **off**: disabled
    std::shared_ptr<string> switchOn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
