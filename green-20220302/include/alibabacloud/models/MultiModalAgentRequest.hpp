// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTIMODALAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MULTIMODALAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class MultiModalAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultiModalAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppID, appID_);
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
    };
    friend void from_json(const Darabonba::Json& j, MultiModalAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppID, appID_);
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
    };
    MultiModalAgentRequest() = default ;
    MultiModalAgentRequest(const MultiModalAgentRequest &) = default ;
    MultiModalAgentRequest(MultiModalAgentRequest &&) = default ;
    MultiModalAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultiModalAgentRequest() = default ;
    MultiModalAgentRequest& operator=(const MultiModalAgentRequest &) = default ;
    MultiModalAgentRequest& operator=(MultiModalAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appID_ == nullptr
        && this->serviceParameters_ == nullptr; };
    // appID Field Functions 
    bool hasAppID() const { return this->appID_ != nullptr;};
    void deleteAppID() { this->appID_ = nullptr;};
    inline string getAppID() const { DARABONBA_PTR_GET_DEFAULT(appID_, "") };
    inline MultiModalAgentRequest& setAppID(string appID) { DARABONBA_PTR_SET_VALUE(appID_, appID) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline string getServiceParameters() const { DARABONBA_PTR_GET_DEFAULT(serviceParameters_, "") };
    inline MultiModalAgentRequest& setServiceParameters(string serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };


  protected:
    shared_ptr<string> appID_ {};
    shared_ptr<string> serviceParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
