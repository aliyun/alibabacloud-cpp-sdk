// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRAFFICCONTROLTASKTRAFFICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRAFFICCONTROLTASKTRAFFICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateTrafficControlTaskTrafficRequestTraffics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class UpdateTrafficControlTaskTrafficRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTrafficControlTaskTrafficRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Traffics, traffics_);
      DARABONBA_PTR_TO_JSON(new-param-3, newParam3_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTrafficControlTaskTrafficRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Traffics, traffics_);
      DARABONBA_PTR_FROM_JSON(new-param-3, newParam3_);
    };
    UpdateTrafficControlTaskTrafficRequest() = default ;
    UpdateTrafficControlTaskTrafficRequest(const UpdateTrafficControlTaskTrafficRequest &) = default ;
    UpdateTrafficControlTaskTrafficRequest(UpdateTrafficControlTaskTrafficRequest &&) = default ;
    UpdateTrafficControlTaskTrafficRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTrafficControlTaskTrafficRequest() = default ;
    UpdateTrafficControlTaskTrafficRequest& operator=(const UpdateTrafficControlTaskTrafficRequest &) = default ;
    UpdateTrafficControlTaskTrafficRequest& operator=(UpdateTrafficControlTaskTrafficRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->environment_ != nullptr
        && this->instanceId_ != nullptr && this->traffics_ != nullptr && this->newParam3_ != nullptr; };
    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline string environment() const { DARABONBA_PTR_GET_DEFAULT(environment_, "") };
    inline UpdateTrafficControlTaskTrafficRequest& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateTrafficControlTaskTrafficRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // traffics Field Functions 
    bool hasTraffics() const { return this->traffics_ != nullptr;};
    void deleteTraffics() { this->traffics_ = nullptr;};
    inline const vector<UpdateTrafficControlTaskTrafficRequestTraffics> & traffics() const { DARABONBA_PTR_GET_CONST(traffics_, vector<UpdateTrafficControlTaskTrafficRequestTraffics>) };
    inline vector<UpdateTrafficControlTaskTrafficRequestTraffics> traffics() { DARABONBA_PTR_GET(traffics_, vector<UpdateTrafficControlTaskTrafficRequestTraffics>) };
    inline UpdateTrafficControlTaskTrafficRequest& setTraffics(const vector<UpdateTrafficControlTaskTrafficRequestTraffics> & traffics) { DARABONBA_PTR_SET_VALUE(traffics_, traffics) };
    inline UpdateTrafficControlTaskTrafficRequest& setTraffics(vector<UpdateTrafficControlTaskTrafficRequestTraffics> && traffics) { DARABONBA_PTR_SET_RVALUE(traffics_, traffics) };


    // newParam3 Field Functions 
    bool hasNewParam3() const { return this->newParam3_ != nullptr;};
    void deleteNewParam3() { this->newParam3_ = nullptr;};
    inline string newParam3() const { DARABONBA_PTR_GET_DEFAULT(newParam3_, "") };
    inline UpdateTrafficControlTaskTrafficRequest& setNewParam3(string newParam3) { DARABONBA_PTR_SET_VALUE(newParam3_, newParam3) };


  protected:
    std::shared_ptr<string> environment_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<vector<UpdateTrafficControlTaskTrafficRequestTraffics>> traffics_ = nullptr;
    std::shared_ptr<string> newParam3_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
