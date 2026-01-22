// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPROVISIONAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEPROVISIONAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class DeprovisionApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeprovisionApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
    };
    friend void from_json(const Darabonba::Json& j, DeprovisionApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
    };
    DeprovisionApplicationRequest() = default ;
    DeprovisionApplicationRequest(const DeprovisionApplicationRequest &) = default ;
    DeprovisionApplicationRequest(DeprovisionApplicationRequest &&) = default ;
    DeprovisionApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeprovisionApplicationRequest() = default ;
    DeprovisionApplicationRequest& operator=(const DeprovisionApplicationRequest &) = default ;
    DeprovisionApplicationRequest& operator=(DeprovisionApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeprovisionApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
