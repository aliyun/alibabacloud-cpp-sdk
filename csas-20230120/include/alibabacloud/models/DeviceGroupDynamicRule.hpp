// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEVICEGROUPDYNAMICRULE_HPP_
#define ALIBABACLOUD_MODELS_DEVICEGROUPDYNAMICRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class DeviceGroupDynamicRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeviceGroupDynamicRule& obj) { 
      DARABONBA_ANY_TO_JSON(Args, args_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
    };
    friend void from_json(const Darabonba::Json& j, DeviceGroupDynamicRule& obj) { 
      DARABONBA_ANY_FROM_JSON(Args, args_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
    };
    DeviceGroupDynamicRule() = default ;
    DeviceGroupDynamicRule(const DeviceGroupDynamicRule &) = default ;
    DeviceGroupDynamicRule(DeviceGroupDynamicRule &&) = default ;
    DeviceGroupDynamicRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeviceGroupDynamicRule() = default ;
    DeviceGroupDynamicRule& operator=(const DeviceGroupDynamicRule &) = default ;
    DeviceGroupDynamicRule& operator=(DeviceGroupDynamicRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->args_ == nullptr
        && this->key_ == nullptr && this->operator_ == nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline     const Darabonba::Json & getArgs() const { DARABONBA_GET(args_) };
    Darabonba::Json & getArgs() { DARABONBA_GET(args_) };
    inline DeviceGroupDynamicRule& setArgs(const Darabonba::Json & args) { DARABONBA_SET_VALUE(args_, args) };
    inline DeviceGroupDynamicRule& setArgs(Darabonba::Json && args) { DARABONBA_SET_RVALUE(args_, args) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DeviceGroupDynamicRule& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DeviceGroupDynamicRule& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


  protected:
    Darabonba::Json args_ {};
    shared_ptr<string> key_ {};
    shared_ptr<string> operator_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
