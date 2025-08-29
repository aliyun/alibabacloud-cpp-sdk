// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAFFICCONTROLTASKTRAFFICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRAFFICCONTROLTASKTRAFFICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetTrafficControlTaskTrafficRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrafficControlTaskTrafficRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrafficControlTaskTrafficRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetTrafficControlTaskTrafficRequest() = default ;
    GetTrafficControlTaskTrafficRequest(const GetTrafficControlTaskTrafficRequest &) = default ;
    GetTrafficControlTaskTrafficRequest(GetTrafficControlTaskTrafficRequest &&) = default ;
    GetTrafficControlTaskTrafficRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrafficControlTaskTrafficRequest() = default ;
    GetTrafficControlTaskTrafficRequest& operator=(const GetTrafficControlTaskTrafficRequest &) = default ;
    GetTrafficControlTaskTrafficRequest& operator=(GetTrafficControlTaskTrafficRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->environment_ != nullptr
        && this->instanceId_ != nullptr; };
    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline string environment() const { DARABONBA_PTR_GET_DEFAULT(environment_, "") };
    inline GetTrafficControlTaskTrafficRequest& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetTrafficControlTaskTrafficRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> environment_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
