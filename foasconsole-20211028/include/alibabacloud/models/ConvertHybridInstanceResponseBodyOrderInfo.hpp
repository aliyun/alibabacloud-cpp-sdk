// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERTHYBRIDINSTANCERESPONSEBODYORDERINFO_HPP_
#define ALIBABACLOUD_MODELS_CONVERTHYBRIDINSTANCERESPONSEBODYORDERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class ConvertHybridInstanceResponseBodyOrderInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConvertHybridInstanceResponseBodyOrderInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticInstanceId, elasticInstanceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, ConvertHybridInstanceResponseBodyOrderInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticInstanceId, elasticInstanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
    };
    ConvertHybridInstanceResponseBodyOrderInfo() = default ;
    ConvertHybridInstanceResponseBodyOrderInfo(const ConvertHybridInstanceResponseBodyOrderInfo &) = default ;
    ConvertHybridInstanceResponseBodyOrderInfo(ConvertHybridInstanceResponseBodyOrderInfo &&) = default ;
    ConvertHybridInstanceResponseBodyOrderInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConvertHybridInstanceResponseBodyOrderInfo() = default ;
    ConvertHybridInstanceResponseBodyOrderInfo& operator=(const ConvertHybridInstanceResponseBodyOrderInfo &) = default ;
    ConvertHybridInstanceResponseBodyOrderInfo& operator=(ConvertHybridInstanceResponseBodyOrderInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elasticInstanceId_ == nullptr
        && return this->instanceId_ == nullptr && return this->orderId_ == nullptr; };
    // elasticInstanceId Field Functions 
    bool hasElasticInstanceId() const { return this->elasticInstanceId_ != nullptr;};
    void deleteElasticInstanceId() { this->elasticInstanceId_ = nullptr;};
    inline string elasticInstanceId() const { DARABONBA_PTR_GET_DEFAULT(elasticInstanceId_, "") };
    inline ConvertHybridInstanceResponseBodyOrderInfo& setElasticInstanceId(string elasticInstanceId) { DARABONBA_PTR_SET_VALUE(elasticInstanceId_, elasticInstanceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ConvertHybridInstanceResponseBodyOrderInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline ConvertHybridInstanceResponseBodyOrderInfo& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    std::shared_ptr<string> elasticInstanceId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
