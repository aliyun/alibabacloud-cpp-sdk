// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTAUTOCCSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTAUTOCCSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortAutoCcStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortAutoCcStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PortAutoCcStatus, portAutoCcStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortAutoCcStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PortAutoCcStatus, portAutoCcStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePortAutoCcStatusResponseBody() = default ;
    DescribePortAutoCcStatusResponseBody(const DescribePortAutoCcStatusResponseBody &) = default ;
    DescribePortAutoCcStatusResponseBody(DescribePortAutoCcStatusResponseBody &&) = default ;
    DescribePortAutoCcStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortAutoCcStatusResponseBody() = default ;
    DescribePortAutoCcStatusResponseBody& operator=(const DescribePortAutoCcStatusResponseBody &) = default ;
    DescribePortAutoCcStatusResponseBody& operator=(DescribePortAutoCcStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PortAutoCcStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PortAutoCcStatus& obj) { 
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(Switch, switch_);
        DARABONBA_PTR_TO_JSON(WebMode, webMode_);
        DARABONBA_PTR_TO_JSON(WebSwitch, webSwitch_);
      };
      friend void from_json(const Darabonba::Json& j, PortAutoCcStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(Switch, switch_);
        DARABONBA_PTR_FROM_JSON(WebMode, webMode_);
        DARABONBA_PTR_FROM_JSON(WebSwitch, webSwitch_);
      };
      PortAutoCcStatus() = default ;
      PortAutoCcStatus(const PortAutoCcStatus &) = default ;
      PortAutoCcStatus(PortAutoCcStatus &&) = default ;
      PortAutoCcStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PortAutoCcStatus() = default ;
      PortAutoCcStatus& operator=(const PortAutoCcStatus &) = default ;
      PortAutoCcStatus& operator=(PortAutoCcStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mode_ == nullptr
        && this->switch_ == nullptr && this->webMode_ == nullptr && this->webSwitch_ == nullptr; };
      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline PortAutoCcStatus& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // switch Field Functions 
      bool hasSwitch() const { return this->switch_ != nullptr;};
      void deleteSwitch() { this->switch_ = nullptr;};
      inline string getSwitch() const { DARABONBA_PTR_GET_DEFAULT(switch_, "") };
      inline PortAutoCcStatus& setSwitch(string _switch) { DARABONBA_PTR_SET_VALUE(switch_, _switch) };


      // webMode Field Functions 
      bool hasWebMode() const { return this->webMode_ != nullptr;};
      void deleteWebMode() { this->webMode_ = nullptr;};
      inline string getWebMode() const { DARABONBA_PTR_GET_DEFAULT(webMode_, "") };
      inline PortAutoCcStatus& setWebMode(string webMode) { DARABONBA_PTR_SET_VALUE(webMode_, webMode) };


      // webSwitch Field Functions 
      bool hasWebSwitch() const { return this->webSwitch_ != nullptr;};
      void deleteWebSwitch() { this->webSwitch_ = nullptr;};
      inline string getWebSwitch() const { DARABONBA_PTR_GET_DEFAULT(webSwitch_, "") };
      inline PortAutoCcStatus& setWebSwitch(string webSwitch) { DARABONBA_PTR_SET_VALUE(webSwitch_, webSwitch) };


    protected:
      // The mode of the Intelligent Protection policy. Valid values:
      // 
      // *   **normal**
      // *   **loose**
      // *   **strict**
      shared_ptr<string> mode_ {};
      // The status of the Intelligent Protection policy. Valid values:
      // 
      // *   **on**: enabled
      // *   **off**: disabled
      shared_ptr<string> switch_ {};
      // The protection mode for ports 80 and 443. Valid values:
      // 
      // *   **normal**
      // *   **loose**
      // *   **strict**
      shared_ptr<string> webMode_ {};
      // The status of the Intelligent Protection policy for ports 80 and 443. Valid values:
      // 
      // *   **on**: enabled
      // *   **off**: disabled
      shared_ptr<string> webSwitch_ {};
    };

    virtual bool empty() const override { return this->portAutoCcStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // portAutoCcStatus Field Functions 
    bool hasPortAutoCcStatus() const { return this->portAutoCcStatus_ != nullptr;};
    void deletePortAutoCcStatus() { this->portAutoCcStatus_ = nullptr;};
    inline const vector<DescribePortAutoCcStatusResponseBody::PortAutoCcStatus> & getPortAutoCcStatus() const { DARABONBA_PTR_GET_CONST(portAutoCcStatus_, vector<DescribePortAutoCcStatusResponseBody::PortAutoCcStatus>) };
    inline vector<DescribePortAutoCcStatusResponseBody::PortAutoCcStatus> getPortAutoCcStatus() { DARABONBA_PTR_GET(portAutoCcStatus_, vector<DescribePortAutoCcStatusResponseBody::PortAutoCcStatus>) };
    inline DescribePortAutoCcStatusResponseBody& setPortAutoCcStatus(const vector<DescribePortAutoCcStatusResponseBody::PortAutoCcStatus> & portAutoCcStatus) { DARABONBA_PTR_SET_VALUE(portAutoCcStatus_, portAutoCcStatus) };
    inline DescribePortAutoCcStatusResponseBody& setPortAutoCcStatus(vector<DescribePortAutoCcStatusResponseBody::PortAutoCcStatus> && portAutoCcStatus) { DARABONBA_PTR_SET_RVALUE(portAutoCcStatus_, portAutoCcStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePortAutoCcStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the configurations of the Intelligent Protection policy.
    shared_ptr<vector<DescribePortAutoCcStatusResponseBody::PortAutoCcStatus>> portAutoCcStatus_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
