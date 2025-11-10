// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACERESPONSEBODYDATABROKERINFOOPERATIONS_HPP_
#define ALIBABACLOUD_MODELS_GETTRACERESPONSEBODYDATABROKERINFOOPERATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetTraceResponseBodyDataBrokerInfoOperations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceResponseBodyDataBrokerInfoOperations& obj) { 
      DARABONBA_PTR_TO_JSON(operateTime, operateTime_);
      DARABONBA_PTR_TO_JSON(operateType, operateType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceResponseBodyDataBrokerInfoOperations& obj) { 
      DARABONBA_PTR_FROM_JSON(operateTime, operateTime_);
      DARABONBA_PTR_FROM_JSON(operateType, operateType_);
    };
    GetTraceResponseBodyDataBrokerInfoOperations() = default ;
    GetTraceResponseBodyDataBrokerInfoOperations(const GetTraceResponseBodyDataBrokerInfoOperations &) = default ;
    GetTraceResponseBodyDataBrokerInfoOperations(GetTraceResponseBodyDataBrokerInfoOperations &&) = default ;
    GetTraceResponseBodyDataBrokerInfoOperations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceResponseBodyDataBrokerInfoOperations() = default ;
    GetTraceResponseBodyDataBrokerInfoOperations& operator=(const GetTraceResponseBodyDataBrokerInfoOperations &) = default ;
    GetTraceResponseBodyDataBrokerInfoOperations& operator=(GetTraceResponseBodyDataBrokerInfoOperations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operateTime_ == nullptr
        && return this->operateType_ == nullptr; };
    // operateTime Field Functions 
    bool hasOperateTime() const { return this->operateTime_ != nullptr;};
    void deleteOperateTime() { this->operateTime_ = nullptr;};
    inline string operateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, "") };
    inline GetTraceResponseBodyDataBrokerInfoOperations& setOperateTime(string operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string operateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline GetTraceResponseBodyDataBrokerInfoOperations& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


  protected:
    // Operation time.
    std::shared_ptr<string> operateTime_ = nullptr;
    // Operation type.
    std::shared_ptr<string> operateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
