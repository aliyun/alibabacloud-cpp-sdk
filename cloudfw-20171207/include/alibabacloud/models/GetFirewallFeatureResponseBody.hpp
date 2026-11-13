// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFIREWALLFEATURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFIREWALLFEATURERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class GetFirewallFeatureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFirewallFeatureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFirewallFeatureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFirewallFeatureResponseBody() = default ;
    GetFirewallFeatureResponseBody(const GetFirewallFeatureResponseBody &) = default ;
    GetFirewallFeatureResponseBody(GetFirewallFeatureResponseBody &&) = default ;
    GetFirewallFeatureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFirewallFeatureResponseBody() = default ;
    GetFirewallFeatureResponseBody& operator=(const GetFirewallFeatureResponseBody &) = default ;
    GetFirewallFeatureResponseBody& operator=(GetFirewallFeatureResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Features : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Features& obj) { 
        DARABONBA_PTR_TO_JSON(FeatureName, featureName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Features& obj) { 
        DARABONBA_PTR_FROM_JSON(FeatureName, featureName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Features() = default ;
      Features(const Features &) = default ;
      Features(Features &&) = default ;
      Features(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Features() = default ;
      Features& operator=(const Features &) = default ;
      Features& operator=(Features &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->featureName_ == nullptr
        && this->status_ == nullptr; };
      // featureName Field Functions 
      bool hasFeatureName() const { return this->featureName_ != nullptr;};
      void deleteFeatureName() { this->featureName_ = nullptr;};
      inline string getFeatureName() const { DARABONBA_PTR_GET_DEFAULT(featureName_, "") };
      inline Features& setFeatureName(string featureName) { DARABONBA_PTR_SET_VALUE(featureName_, featureName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Features& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The feature name. Valid values:
      // - **ApplicationControl**: Application control.
      // - **WebFilter**: Web filtering.
      shared_ptr<string> featureName_ {};
      // The activation status of the feature. Valid values:
      // - **Enable**: Enabled.
      // - **Disable**: Disabled.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->features_ == nullptr
        && this->requestId_ == nullptr; };
    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const vector<GetFirewallFeatureResponseBody::Features> & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, vector<GetFirewallFeatureResponseBody::Features>) };
    inline vector<GetFirewallFeatureResponseBody::Features> getFeatures() { DARABONBA_PTR_GET(features_, vector<GetFirewallFeatureResponseBody::Features>) };
    inline GetFirewallFeatureResponseBody& setFeatures(const vector<GetFirewallFeatureResponseBody::Features> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline GetFirewallFeatureResponseBody& setFeatures(vector<GetFirewallFeatureResponseBody::Features> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFirewallFeatureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of firewall feature statuses. This list always returns the statuses of application control and web filtering.
    shared_ptr<vector<GetFirewallFeatureResponseBody::Features>> features_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
