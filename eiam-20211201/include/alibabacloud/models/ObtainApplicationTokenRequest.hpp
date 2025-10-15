// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBTAINAPPLICATIONTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OBTAINAPPLICATIONTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ObtainApplicationTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObtainApplicationTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationTokenId, applicationTokenId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ObtainApplicationTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationTokenId, applicationTokenId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ObtainApplicationTokenRequest() = default ;
    ObtainApplicationTokenRequest(const ObtainApplicationTokenRequest &) = default ;
    ObtainApplicationTokenRequest(ObtainApplicationTokenRequest &&) = default ;
    ObtainApplicationTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObtainApplicationTokenRequest() = default ;
    ObtainApplicationTokenRequest& operator=(const ObtainApplicationTokenRequest &) = default ;
    ObtainApplicationTokenRequest& operator=(ObtainApplicationTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->applicationTokenId_ == nullptr && return this->instanceId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ObtainApplicationTokenRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationTokenId Field Functions 
    bool hasApplicationTokenId() const { return this->applicationTokenId_ != nullptr;};
    void deleteApplicationTokenId() { this->applicationTokenId_ = nullptr;};
    inline string applicationTokenId() const { DARABONBA_PTR_GET_DEFAULT(applicationTokenId_, "") };
    inline ObtainApplicationTokenRequest& setApplicationTokenId(string applicationTokenId) { DARABONBA_PTR_SET_VALUE(applicationTokenId_, applicationTokenId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ObtainApplicationTokenRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // IDaaS的应用资源ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    // IDaaS的应用资源TokenID。
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationTokenId_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
