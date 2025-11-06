// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCEPREIVEWRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_INSTANCEPREIVEWRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InstancePreivewResponseBodyDataInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class InstancePreivewResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstancePreivewResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ExchangeNum, exchangeNum_);
      DARABONBA_PTR_TO_JSON(InstanceNum, instanceNum_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(QueueNum, queueNum_);
      DARABONBA_PTR_TO_JSON(VhostNum, vhostNum_);
    };
    friend void from_json(const Darabonba::Json& j, InstancePreivewResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ExchangeNum, exchangeNum_);
      DARABONBA_PTR_FROM_JSON(InstanceNum, instanceNum_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(QueueNum, queueNum_);
      DARABONBA_PTR_FROM_JSON(VhostNum, vhostNum_);
    };
    InstancePreivewResponseBodyData() = default ;
    InstancePreivewResponseBodyData(const InstancePreivewResponseBodyData &) = default ;
    InstancePreivewResponseBodyData(InstancePreivewResponseBodyData &&) = default ;
    InstancePreivewResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstancePreivewResponseBodyData() = default ;
    InstancePreivewResponseBodyData& operator=(const InstancePreivewResponseBodyData &) = default ;
    InstancePreivewResponseBodyData& operator=(InstancePreivewResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exchangeNum_ == nullptr
        && return this->instanceNum_ == nullptr && return this->instances_ == nullptr && return this->queueNum_ == nullptr && return this->vhostNum_ == nullptr; };
    // exchangeNum Field Functions 
    bool hasExchangeNum() const { return this->exchangeNum_ != nullptr;};
    void deleteExchangeNum() { this->exchangeNum_ = nullptr;};
    inline int32_t exchangeNum() const { DARABONBA_PTR_GET_DEFAULT(exchangeNum_, 0) };
    inline InstancePreivewResponseBodyData& setExchangeNum(int32_t exchangeNum) { DARABONBA_PTR_SET_VALUE(exchangeNum_, exchangeNum) };


    // instanceNum Field Functions 
    bool hasInstanceNum() const { return this->instanceNum_ != nullptr;};
    void deleteInstanceNum() { this->instanceNum_ = nullptr;};
    inline int32_t instanceNum() const { DARABONBA_PTR_GET_DEFAULT(instanceNum_, 0) };
    inline InstancePreivewResponseBodyData& setInstanceNum(int32_t instanceNum) { DARABONBA_PTR_SET_VALUE(instanceNum_, instanceNum) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const Models::InstancePreivewResponseBodyDataInstances & instances() const { DARABONBA_PTR_GET_CONST(instances_, Models::InstancePreivewResponseBodyDataInstances) };
    inline Models::InstancePreivewResponseBodyDataInstances instances() { DARABONBA_PTR_GET(instances_, Models::InstancePreivewResponseBodyDataInstances) };
    inline InstancePreivewResponseBodyData& setInstances(const Models::InstancePreivewResponseBodyDataInstances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline InstancePreivewResponseBodyData& setInstances(Models::InstancePreivewResponseBodyDataInstances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // queueNum Field Functions 
    bool hasQueueNum() const { return this->queueNum_ != nullptr;};
    void deleteQueueNum() { this->queueNum_ = nullptr;};
    inline int32_t queueNum() const { DARABONBA_PTR_GET_DEFAULT(queueNum_, 0) };
    inline InstancePreivewResponseBodyData& setQueueNum(int32_t queueNum) { DARABONBA_PTR_SET_VALUE(queueNum_, queueNum) };


    // vhostNum Field Functions 
    bool hasVhostNum() const { return this->vhostNum_ != nullptr;};
    void deleteVhostNum() { this->vhostNum_ = nullptr;};
    inline int32_t vhostNum() const { DARABONBA_PTR_GET_DEFAULT(vhostNum_, 0) };
    inline InstancePreivewResponseBodyData& setVhostNum(int32_t vhostNum) { DARABONBA_PTR_SET_VALUE(vhostNum_, vhostNum) };


  protected:
    std::shared_ptr<int32_t> exchangeNum_ = nullptr;
    std::shared_ptr<int32_t> instanceNum_ = nullptr;
    std::shared_ptr<Models::InstancePreivewResponseBodyDataInstances> instances_ = nullptr;
    std::shared_ptr<int32_t> queueNum_ = nullptr;
    std::shared_ptr<int32_t> vhostNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
