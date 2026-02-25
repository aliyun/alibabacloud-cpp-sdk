// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ISOLATELEADERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ISOLATELEADERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class IsolateLeaderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IsolateLeaderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsolateLeader, isolateLeader_);
    };
    friend void from_json(const Darabonba::Json& j, IsolateLeaderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsolateLeader, isolateLeader_);
    };
    IsolateLeaderRequest() = default ;
    IsolateLeaderRequest(const IsolateLeaderRequest &) = default ;
    IsolateLeaderRequest(IsolateLeaderRequest &&) = default ;
    IsolateLeaderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IsolateLeaderRequest() = default ;
    IsolateLeaderRequest& operator=(const IsolateLeaderRequest &) = default ;
    IsolateLeaderRequest& operator=(IsolateLeaderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->isolateLeader_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline IsolateLeaderRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isolateLeader Field Functions 
    bool hasIsolateLeader() const { return this->isolateLeader_ != nullptr;};
    void deleteIsolateLeader() { this->isolateLeader_ = nullptr;};
    inline bool getIsolateLeader() const { DARABONBA_PTR_GET_DEFAULT(isolateLeader_, false) };
    inline IsolateLeaderRequest& setIsolateLeader(bool isolateLeader) { DARABONBA_PTR_SET_VALUE(isolateLeader_, isolateLeader) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> isolateLeader_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
