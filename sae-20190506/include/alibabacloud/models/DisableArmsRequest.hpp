// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEARMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEARMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DisableArmsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableArmsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableArmsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
    };
    DisableArmsRequest() = default ;
    DisableArmsRequest(const DisableArmsRequest &) = default ;
    DisableArmsRequest(DisableArmsRequest &&) = default ;
    DisableArmsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableArmsRequest() = default ;
    DisableArmsRequest& operator=(const DisableArmsRequest &) = default ;
    DisableArmsRequest& operator=(DisableArmsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DisableArmsRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
