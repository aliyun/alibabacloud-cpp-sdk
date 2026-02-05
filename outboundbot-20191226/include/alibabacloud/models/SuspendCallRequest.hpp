// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUSPENDCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUSPENDCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class SuspendCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SuspendCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalledNumbers, calledNumbers_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, SuspendCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalledNumbers, calledNumbers_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    SuspendCallRequest() = default ;
    SuspendCallRequest(const SuspendCallRequest &) = default ;
    SuspendCallRequest(SuspendCallRequest &&) = default ;
    SuspendCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SuspendCallRequest() = default ;
    SuspendCallRequest& operator=(const SuspendCallRequest &) = default ;
    SuspendCallRequest& operator=(SuspendCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calledNumbers_ == nullptr
        && this->groupId_ == nullptr && this->instanceId_ == nullptr; };
    // calledNumbers Field Functions 
    bool hasCalledNumbers() const { return this->calledNumbers_ != nullptr;};
    void deleteCalledNumbers() { this->calledNumbers_ = nullptr;};
    inline const vector<string> & getCalledNumbers() const { DARABONBA_PTR_GET_CONST(calledNumbers_, vector<string>) };
    inline vector<string> getCalledNumbers() { DARABONBA_PTR_GET(calledNumbers_, vector<string>) };
    inline SuspendCallRequest& setCalledNumbers(const vector<string> & calledNumbers) { DARABONBA_PTR_SET_VALUE(calledNumbers_, calledNumbers) };
    inline SuspendCallRequest& setCalledNumbers(vector<string> && calledNumbers) { DARABONBA_PTR_SET_RVALUE(calledNumbers_, calledNumbers) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline SuspendCallRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SuspendCallRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    shared_ptr<vector<string>> calledNumbers_ {};
    shared_ptr<string> groupId_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
