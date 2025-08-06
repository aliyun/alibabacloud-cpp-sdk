// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAutoProvisioningGroupResponseBodyLaunchResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateAutoProvisioningGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoProvisioningGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoProvisioningGroupId, autoProvisioningGroupId_);
      DARABONBA_PTR_TO_JSON(LaunchResults, launchResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoProvisioningGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoProvisioningGroupId, autoProvisioningGroupId_);
      DARABONBA_PTR_FROM_JSON(LaunchResults, launchResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAutoProvisioningGroupResponseBody() = default ;
    CreateAutoProvisioningGroupResponseBody(const CreateAutoProvisioningGroupResponseBody &) = default ;
    CreateAutoProvisioningGroupResponseBody(CreateAutoProvisioningGroupResponseBody &&) = default ;
    CreateAutoProvisioningGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoProvisioningGroupResponseBody() = default ;
    CreateAutoProvisioningGroupResponseBody& operator=(const CreateAutoProvisioningGroupResponseBody &) = default ;
    CreateAutoProvisioningGroupResponseBody& operator=(CreateAutoProvisioningGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoProvisioningGroupId_ != nullptr
        && this->launchResults_ != nullptr && this->requestId_ != nullptr; };
    // autoProvisioningGroupId Field Functions 
    bool hasAutoProvisioningGroupId() const { return this->autoProvisioningGroupId_ != nullptr;};
    void deleteAutoProvisioningGroupId() { this->autoProvisioningGroupId_ = nullptr;};
    inline string autoProvisioningGroupId() const { DARABONBA_PTR_GET_DEFAULT(autoProvisioningGroupId_, "") };
    inline CreateAutoProvisioningGroupResponseBody& setAutoProvisioningGroupId(string autoProvisioningGroupId) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupId_, autoProvisioningGroupId) };


    // launchResults Field Functions 
    bool hasLaunchResults() const { return this->launchResults_ != nullptr;};
    void deleteLaunchResults() { this->launchResults_ = nullptr;};
    inline const CreateAutoProvisioningGroupResponseBodyLaunchResults & launchResults() const { DARABONBA_PTR_GET_CONST(launchResults_, CreateAutoProvisioningGroupResponseBodyLaunchResults) };
    inline CreateAutoProvisioningGroupResponseBodyLaunchResults launchResults() { DARABONBA_PTR_GET(launchResults_, CreateAutoProvisioningGroupResponseBodyLaunchResults) };
    inline CreateAutoProvisioningGroupResponseBody& setLaunchResults(const CreateAutoProvisioningGroupResponseBodyLaunchResults & launchResults) { DARABONBA_PTR_SET_VALUE(launchResults_, launchResults) };
    inline CreateAutoProvisioningGroupResponseBody& setLaunchResults(CreateAutoProvisioningGroupResponseBodyLaunchResults && launchResults) { DARABONBA_PTR_SET_RVALUE(launchResults_, launchResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAutoProvisioningGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the auto provisioning group.
    std::shared_ptr<string> autoProvisioningGroupId_ = nullptr;
    // The instances created by the auto provisioning group. The values of the parameters in this array are returned only when AutoProvisioningGroupType is set to `instant`.
    std::shared_ptr<CreateAutoProvisioningGroupResponseBodyLaunchResults> launchResults_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
