// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEDATATOPRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEDATATOPRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetQueryOptimizeDataTopResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueryOptimizeDataTopResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueryOptimizeDataTopResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetQueryOptimizeDataTopResponseBodyDataList() = default ;
    GetQueryOptimizeDataTopResponseBodyDataList(const GetQueryOptimizeDataTopResponseBodyDataList &) = default ;
    GetQueryOptimizeDataTopResponseBodyDataList(GetQueryOptimizeDataTopResponseBodyDataList &&) = default ;
    GetQueryOptimizeDataTopResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueryOptimizeDataTopResponseBodyDataList() = default ;
    GetQueryOptimizeDataTopResponseBodyDataList& operator=(const GetQueryOptimizeDataTopResponseBodyDataList &) = default ;
    GetQueryOptimizeDataTopResponseBodyDataList& operator=(GetQueryOptimizeDataTopResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->type_ == nullptr && return this->value_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetQueryOptimizeDataTopResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetQueryOptimizeDataTopResponseBodyDataList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline double value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline GetQueryOptimizeDataTopResponseBodyDataList& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The metric name. Valid values:
    // 
    // * **sqlExecuteCount**: the number of slow SQL executions.
    // * **optimizedSqlExecuteCount**: the number of slow SQL executions that need to be optimized.
    std::shared_ptr<string> type_ = nullptr;
    // The metric value.
    std::shared_ptr<double> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
