// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRUSTEDORIGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRUSTEDORIGINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetTrustedOriginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrustedOriginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TrustedOriginId, trustedOriginId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrustedOriginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TrustedOriginId, trustedOriginId_);
    };
    GetTrustedOriginRequest() = default ;
    GetTrustedOriginRequest(const GetTrustedOriginRequest &) = default ;
    GetTrustedOriginRequest(GetTrustedOriginRequest &&) = default ;
    GetTrustedOriginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrustedOriginRequest() = default ;
    GetTrustedOriginRequest& operator=(const GetTrustedOriginRequest &) = default ;
    GetTrustedOriginRequest& operator=(GetTrustedOriginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->trustedOriginId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetTrustedOriginRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // trustedOriginId Field Functions 
    bool hasTrustedOriginId() const { return this->trustedOriginId_ != nullptr;};
    void deleteTrustedOriginId() { this->trustedOriginId_ = nullptr;};
    inline string getTrustedOriginId() const { DARABONBA_PTR_GET_DEFAULT(trustedOriginId_, "") };
    inline GetTrustedOriginRequest& setTrustedOriginId(string trustedOriginId) { DARABONBA_PTR_SET_VALUE(trustedOriginId_, trustedOriginId) };


  protected:
    // The ID of the IDaaS EIAM instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the trusted origin.
    // 
    // This parameter is required.
    shared_ptr<string> trustedOriginId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
