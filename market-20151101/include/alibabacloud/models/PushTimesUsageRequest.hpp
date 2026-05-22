// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHTIMESUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHTIMESUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class PushTimesUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushTimesUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Times, times_);
    };
    friend void from_json(const Darabonba::Json& j, PushTimesUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Times, times_);
    };
    PushTimesUsageRequest() = default ;
    PushTimesUsageRequest(const PushTimesUsageRequest &) = default ;
    PushTimesUsageRequest(PushTimesUsageRequest &&) = default ;
    PushTimesUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushTimesUsageRequest() = default ;
    PushTimesUsageRequest& operator=(const PushTimesUsageRequest &) = default ;
    PushTimesUsageRequest& operator=(PushTimesUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->instanceId_ == nullptr && this->times_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline PushTimesUsageRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline PushTimesUsageRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int64_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0L) };
    inline PushTimesUsageRequest& setTimes(int64_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<int64_t> times_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
