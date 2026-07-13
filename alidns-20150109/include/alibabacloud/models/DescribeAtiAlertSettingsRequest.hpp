// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATIALERTSETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATIALERTSETTINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeAtiAlertSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAtiAlertSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAtiAlertSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
    };
    DescribeAtiAlertSettingsRequest() = default ;
    DescribeAtiAlertSettingsRequest(const DescribeAtiAlertSettingsRequest &) = default ;
    DescribeAtiAlertSettingsRequest(DescribeAtiAlertSettingsRequest &&) = default ;
    DescribeAtiAlertSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAtiAlertSettingsRequest() = default ;
    DescribeAtiAlertSettingsRequest& operator=(const DescribeAtiAlertSettingsRequest &) = default ;
    DescribeAtiAlertSettingsRequest& operator=(DescribeAtiAlertSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeAtiAlertSettingsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The token that ensures the idempotence of the request. Generate a unique value from your client. The ClientToken value can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
