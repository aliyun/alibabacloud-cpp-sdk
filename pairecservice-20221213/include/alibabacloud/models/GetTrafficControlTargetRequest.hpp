// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAFFICCONTROLTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRAFFICCONTROLTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetTrafficControlTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrafficControlTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrafficControlTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetTrafficControlTargetRequest() = default ;
    GetTrafficControlTargetRequest(const GetTrafficControlTargetRequest &) = default ;
    GetTrafficControlTargetRequest(GetTrafficControlTargetRequest &&) = default ;
    GetTrafficControlTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrafficControlTargetRequest() = default ;
    GetTrafficControlTargetRequest& operator=(const GetTrafficControlTargetRequest &) = default ;
    GetTrafficControlTargetRequest& operator=(GetTrafficControlTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetTrafficControlTargetRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
