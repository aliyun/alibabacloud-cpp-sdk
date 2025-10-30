// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVARIABLEBINDDETAILRESPONSEBODYRESULTOBJECTRELATIONRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVARIABLEBINDDETAILRESPONSEBODYRESULTOBJECTRELATIONRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeVariableBindDetailResponseBodyResultObjectRelationRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVariableBindDetailResponseBodyResultObjectRelationRules& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVariableBindDetailResponseBodyResultObjectRelationRules& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    DescribeVariableBindDetailResponseBodyResultObjectRelationRules() = default ;
    DescribeVariableBindDetailResponseBodyResultObjectRelationRules(const DescribeVariableBindDetailResponseBodyResultObjectRelationRules &) = default ;
    DescribeVariableBindDetailResponseBodyResultObjectRelationRules(DescribeVariableBindDetailResponseBodyResultObjectRelationRules &&) = default ;
    DescribeVariableBindDetailResponseBodyResultObjectRelationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVariableBindDetailResponseBodyResultObjectRelationRules() = default ;
    DescribeVariableBindDetailResponseBodyResultObjectRelationRules& operator=(const DescribeVariableBindDetailResponseBodyResultObjectRelationRules &) = default ;
    DescribeVariableBindDetailResponseBodyResultObjectRelationRules& operator=(DescribeVariableBindDetailResponseBodyResultObjectRelationRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeVariableBindDetailResponseBodyResultObjectRelationRules& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeVariableBindDetailResponseBodyResultObjectRelationRules& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Policy rule ID
    std::shared_ptr<string> key_ = nullptr;
    // Policy name
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
