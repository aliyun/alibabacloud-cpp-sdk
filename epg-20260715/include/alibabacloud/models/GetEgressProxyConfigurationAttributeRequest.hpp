// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEGRESSPROXYCONFIGURATIONATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEGRESSPROXYCONFIGURATIONATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class GetEgressProxyConfigurationAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEgressProxyConfigurationAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EgressProxyConfigurationId, egressProxyConfigurationId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEgressProxyConfigurationAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EgressProxyConfigurationId, egressProxyConfigurationId_);
    };
    GetEgressProxyConfigurationAttributeRequest() = default ;
    GetEgressProxyConfigurationAttributeRequest(const GetEgressProxyConfigurationAttributeRequest &) = default ;
    GetEgressProxyConfigurationAttributeRequest(GetEgressProxyConfigurationAttributeRequest &&) = default ;
    GetEgressProxyConfigurationAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEgressProxyConfigurationAttributeRequest() = default ;
    GetEgressProxyConfigurationAttributeRequest& operator=(const GetEgressProxyConfigurationAttributeRequest &) = default ;
    GetEgressProxyConfigurationAttributeRequest& operator=(GetEgressProxyConfigurationAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->egressProxyConfigurationId_ == nullptr; };
    // egressProxyConfigurationId Field Functions 
    bool hasEgressProxyConfigurationId() const { return this->egressProxyConfigurationId_ != nullptr;};
    void deleteEgressProxyConfigurationId() { this->egressProxyConfigurationId_ = nullptr;};
    inline string getEgressProxyConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyConfigurationId_, "") };
    inline GetEgressProxyConfigurationAttributeRequest& setEgressProxyConfigurationId(string egressProxyConfigurationId) { DARABONBA_PTR_SET_VALUE(egressProxyConfigurationId_, egressProxyConfigurationId) };


  protected:
    // The ID of the egress proxy configuration.
    // 
    // This parameter is required.
    shared_ptr<string> egressProxyConfigurationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
