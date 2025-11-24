// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEDETAILGATEWAYSTATUSRECORDVALUE_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEDETAILGATEWAYSTATUSRECORDVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpgradeDetailGatewayStatusRecordValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeDetailGatewayStatusRecordValue& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeDetailGatewayStatusRecordValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    UpgradeDetailGatewayStatusRecordValue() = default ;
    UpgradeDetailGatewayStatusRecordValue(const UpgradeDetailGatewayStatusRecordValue &) = default ;
    UpgradeDetailGatewayStatusRecordValue(UpgradeDetailGatewayStatusRecordValue &&) = default ;
    UpgradeDetailGatewayStatusRecordValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeDetailGatewayStatusRecordValue() = default ;
    UpgradeDetailGatewayStatusRecordValue& operator=(const UpgradeDetailGatewayStatusRecordValue &) = default ;
    UpgradeDetailGatewayStatusRecordValue& operator=(UpgradeDetailGatewayStatusRecordValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr
        && return this->message_ == nullptr && return this->version_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpgradeDetailGatewayStatusRecordValue& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpgradeDetailGatewayStatusRecordValue& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UpgradeDetailGatewayStatusRecordValue& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The upgrade status of the ingress gateway. Valid values:
    // 
    // *   `upgrading`: The ingress gateway is being upgraded.
    // *   `pending`: The ingress gateway waits to be upgraded.
    // *   `finished`: The ingress gateway upgrade is complete.
    // *   `notStart`: The ingress gateway upgrade does not start.
    // *   `failed`: The ingress gateway upgrade fails.
    // *   `unknown`: The upgrade status of the ingress gateway is unknown.
    std::shared_ptr<string> status_ = nullptr;
    // Additional status information of the ingress gateway.
    std::shared_ptr<string> message_ = nullptr;
    // The version of the ingress gateway.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
