// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPROVISIONEXTERNALAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEPROVISIONEXTERNALAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class DeprovisionExternalApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeprovisionExternalApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
    };
    friend void from_json(const Darabonba::Json& j, DeprovisionExternalApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
    };
    DeprovisionExternalApplicationRequest() = default ;
    DeprovisionExternalApplicationRequest(const DeprovisionExternalApplicationRequest &) = default ;
    DeprovisionExternalApplicationRequest(DeprovisionExternalApplicationRequest &&) = default ;
    DeprovisionExternalApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeprovisionExternalApplicationRequest() = default ;
    DeprovisionExternalApplicationRequest& operator=(const DeprovisionExternalApplicationRequest &) = default ;
    DeprovisionExternalApplicationRequest& operator=(DeprovisionExternalApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeprovisionExternalApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
