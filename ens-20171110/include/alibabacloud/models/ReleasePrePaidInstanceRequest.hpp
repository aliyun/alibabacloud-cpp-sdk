// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEPREPAIDINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASEPREPAIDINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ReleasePrePaidInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleasePrePaidInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ReleasePrePaidInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ReleasePrePaidInstanceRequest() = default ;
    ReleasePrePaidInstanceRequest(const ReleasePrePaidInstanceRequest &) = default ;
    ReleasePrePaidInstanceRequest(ReleasePrePaidInstanceRequest &&) = default ;
    ReleasePrePaidInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleasePrePaidInstanceRequest() = default ;
    ReleasePrePaidInstanceRequest& operator=(const ReleasePrePaidInstanceRequest &) = default ;
    ReleasePrePaidInstanceRequest& operator=(ReleasePrePaidInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ReleasePrePaidInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The ID of the instance to be deleted. You can specify only one instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
