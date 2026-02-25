// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLESSLCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLESSLCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DisableSSLConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableSSLConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableSSLConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DisableSSLConnectionRequest() = default ;
    DisableSSLConnectionRequest(const DisableSSLConnectionRequest &) = default ;
    DisableSSLConnectionRequest(DisableSSLConnectionRequest &&) = default ;
    DisableSSLConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableSSLConnectionRequest() = default ;
    DisableSSLConnectionRequest& operator=(const DisableSSLConnectionRequest &) = default ;
    DisableSSLConnectionRequest& operator=(DisableSSLConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DisableSSLConnectionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
