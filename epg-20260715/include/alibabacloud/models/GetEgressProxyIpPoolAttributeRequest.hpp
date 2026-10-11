// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEGRESSPROXYIPPOOLATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEGRESSPROXYIPPOOLATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class GetEgressProxyIpPoolAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEgressProxyIpPoolAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EgressProxyIpPoolId, egressProxyIpPoolId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEgressProxyIpPoolAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EgressProxyIpPoolId, egressProxyIpPoolId_);
    };
    GetEgressProxyIpPoolAttributeRequest() = default ;
    GetEgressProxyIpPoolAttributeRequest(const GetEgressProxyIpPoolAttributeRequest &) = default ;
    GetEgressProxyIpPoolAttributeRequest(GetEgressProxyIpPoolAttributeRequest &&) = default ;
    GetEgressProxyIpPoolAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEgressProxyIpPoolAttributeRequest() = default ;
    GetEgressProxyIpPoolAttributeRequest& operator=(const GetEgressProxyIpPoolAttributeRequest &) = default ;
    GetEgressProxyIpPoolAttributeRequest& operator=(GetEgressProxyIpPoolAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->egressProxyIpPoolId_ == nullptr; };
    // egressProxyIpPoolId Field Functions 
    bool hasEgressProxyIpPoolId() const { return this->egressProxyIpPoolId_ != nullptr;};
    void deleteEgressProxyIpPoolId() { this->egressProxyIpPoolId_ = nullptr;};
    inline string getEgressProxyIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyIpPoolId_, "") };
    inline GetEgressProxyIpPoolAttributeRequest& setEgressProxyIpPoolId(string egressProxyIpPoolId) { DARABONBA_PTR_SET_VALUE(egressProxyIpPoolId_, egressProxyIpPoolId) };


  protected:
    // This parameter is required.
    shared_ptr<string> egressProxyIpPoolId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
