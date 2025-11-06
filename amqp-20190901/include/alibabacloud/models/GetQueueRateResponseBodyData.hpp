// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUEUERATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETQUEUERATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetQueueRateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueueRateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(InQps, inQps_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OutQps, outQps_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueueRateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(InQps, inQps_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OutQps, outQps_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
    };
    GetQueueRateResponseBodyData() = default ;
    GetQueueRateResponseBodyData(const GetQueueRateResponseBodyData &) = default ;
    GetQueueRateResponseBodyData(GetQueueRateResponseBodyData &&) = default ;
    GetQueueRateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueueRateResponseBodyData() = default ;
    GetQueueRateResponseBodyData& operator=(const GetQueueRateResponseBodyData &) = default ;
    GetQueueRateResponseBodyData& operator=(GetQueueRateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inQps_ == nullptr
        && return this->instanceId_ == nullptr && return this->outQps_ == nullptr && return this->queueName_ == nullptr && return this->vhostName_ == nullptr; };
    // inQps Field Functions 
    bool hasInQps() const { return this->inQps_ != nullptr;};
    void deleteInQps() { this->inQps_ = nullptr;};
    inline int64_t inQps() const { DARABONBA_PTR_GET_DEFAULT(inQps_, 0L) };
    inline GetQueueRateResponseBodyData& setInQps(int64_t inQps) { DARABONBA_PTR_SET_VALUE(inQps_, inQps) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetQueueRateResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // outQps Field Functions 
    bool hasOutQps() const { return this->outQps_ != nullptr;};
    void deleteOutQps() { this->outQps_ = nullptr;};
    inline int64_t outQps() const { DARABONBA_PTR_GET_DEFAULT(outQps_, 0L) };
    inline GetQueueRateResponseBodyData& setOutQps(int64_t outQps) { DARABONBA_PTR_SET_VALUE(outQps_, outQps) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline GetQueueRateResponseBodyData& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline GetQueueRateResponseBodyData& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    std::shared_ptr<int64_t> inQps_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> outQps_ = nullptr;
    std::shared_ptr<string> queueName_ = nullptr;
    std::shared_ptr<string> vhostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
