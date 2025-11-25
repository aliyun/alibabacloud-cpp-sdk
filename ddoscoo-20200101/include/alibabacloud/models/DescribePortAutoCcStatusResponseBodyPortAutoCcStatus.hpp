// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTAUTOCCSTATUSRESPONSEBODYPORTAUTOCCSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTAUTOCCSTATUSRESPONSEBODYPORTAUTOCCSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortAutoCcStatusResponseBodyPortAutoCcStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortAutoCcStatusResponseBodyPortAutoCcStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Switch, switch_);
      DARABONBA_PTR_TO_JSON(WebMode, webMode_);
      DARABONBA_PTR_TO_JSON(WebSwitch, webSwitch_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortAutoCcStatusResponseBodyPortAutoCcStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Switch, switch_);
      DARABONBA_PTR_FROM_JSON(WebMode, webMode_);
      DARABONBA_PTR_FROM_JSON(WebSwitch, webSwitch_);
    };
    DescribePortAutoCcStatusResponseBodyPortAutoCcStatus() = default ;
    DescribePortAutoCcStatusResponseBodyPortAutoCcStatus(const DescribePortAutoCcStatusResponseBodyPortAutoCcStatus &) = default ;
    DescribePortAutoCcStatusResponseBodyPortAutoCcStatus(DescribePortAutoCcStatusResponseBodyPortAutoCcStatus &&) = default ;
    DescribePortAutoCcStatusResponseBodyPortAutoCcStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortAutoCcStatusResponseBodyPortAutoCcStatus() = default ;
    DescribePortAutoCcStatusResponseBodyPortAutoCcStatus& operator=(const DescribePortAutoCcStatusResponseBodyPortAutoCcStatus &) = default ;
    DescribePortAutoCcStatusResponseBodyPortAutoCcStatus& operator=(DescribePortAutoCcStatusResponseBodyPortAutoCcStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mode_ == nullptr
        && return this->switch_ == nullptr && return this->webMode_ == nullptr && return this->webSwitch_ == nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribePortAutoCcStatusResponseBodyPortAutoCcStatus& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // switch Field Functions 
    bool hasSwitch() const { return this->switch_ != nullptr;};
    void deleteSwitch() { this->switch_ = nullptr;};
    inline string _switch() const { DARABONBA_PTR_GET_DEFAULT(switch_, "") };
    inline DescribePortAutoCcStatusResponseBodyPortAutoCcStatus& setSwitch(string _switch) { DARABONBA_PTR_SET_VALUE(switch_, _switch) };


    // webMode Field Functions 
    bool hasWebMode() const { return this->webMode_ != nullptr;};
    void deleteWebMode() { this->webMode_ = nullptr;};
    inline string webMode() const { DARABONBA_PTR_GET_DEFAULT(webMode_, "") };
    inline DescribePortAutoCcStatusResponseBodyPortAutoCcStatus& setWebMode(string webMode) { DARABONBA_PTR_SET_VALUE(webMode_, webMode) };


    // webSwitch Field Functions 
    bool hasWebSwitch() const { return this->webSwitch_ != nullptr;};
    void deleteWebSwitch() { this->webSwitch_ = nullptr;};
    inline string webSwitch() const { DARABONBA_PTR_GET_DEFAULT(webSwitch_, "") };
    inline DescribePortAutoCcStatusResponseBodyPortAutoCcStatus& setWebSwitch(string webSwitch) { DARABONBA_PTR_SET_VALUE(webSwitch_, webSwitch) };


  protected:
    // The mode of the Intelligent Protection policy. Valid values:
    // 
    // *   **normal**
    // *   **loose**
    // *   **strict**
    std::shared_ptr<string> mode_ = nullptr;
    // The status of the Intelligent Protection policy. Valid values:
    // 
    // *   **on**: enabled
    // *   **off**: disabled
    std::shared_ptr<string> switch_ = nullptr;
    // The protection mode for ports 80 and 443. Valid values:
    // 
    // *   **normal**
    // *   **loose**
    // *   **strict**
    std::shared_ptr<string> webMode_ = nullptr;
    // The status of the Intelligent Protection policy for ports 80 and 443. Valid values:
    // 
    // *   **on**: enabled
    // *   **off**: disabled
    std::shared_ptr<string> webSwitch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
