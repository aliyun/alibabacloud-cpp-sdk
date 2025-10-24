// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTOPNMETRICREQUESTFILTERCONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTOPNMETRICREQUESTFILTERCONDITIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSecurityEventTopNMetricRequestFilterConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventTopNMetricRequestFilterConditions& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(OpValue, opValue_);
      DARABONBA_ANY_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventTopNMetricRequestFilterConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(OpValue, opValue_);
      DARABONBA_ANY_FROM_JSON(Values, values_);
    };
    DescribeSecurityEventTopNMetricRequestFilterConditions() = default ;
    DescribeSecurityEventTopNMetricRequestFilterConditions(const DescribeSecurityEventTopNMetricRequestFilterConditions &) = default ;
    DescribeSecurityEventTopNMetricRequestFilterConditions(DescribeSecurityEventTopNMetricRequestFilterConditions &&) = default ;
    DescribeSecurityEventTopNMetricRequestFilterConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventTopNMetricRequestFilterConditions() = default ;
    DescribeSecurityEventTopNMetricRequestFilterConditions& operator=(const DescribeSecurityEventTopNMetricRequestFilterConditions &) = default ;
    DescribeSecurityEventTopNMetricRequestFilterConditions& operator=(DescribeSecurityEventTopNMetricRequestFilterConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->opValue_ == nullptr && return this->values_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeSecurityEventTopNMetricRequestFilterConditions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // opValue Field Functions 
    bool hasOpValue() const { return this->opValue_ != nullptr;};
    void deleteOpValue() { this->opValue_ = nullptr;};
    inline string opValue() const { DARABONBA_PTR_GET_DEFAULT(opValue_, "") };
    inline DescribeSecurityEventTopNMetricRequestFilterConditions& setOpValue(string opValue) { DARABONBA_PTR_SET_VALUE(opValue_, opValue) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline     const Darabonba::Json & values() const { DARABONBA_GET(values_) };
    Darabonba::Json & values() { DARABONBA_GET(values_) };
    inline DescribeSecurityEventTopNMetricRequestFilterConditions& setValues(const Darabonba::Json & values) { DARABONBA_SET_VALUE(values_, values) };
    inline DescribeSecurityEventTopNMetricRequestFilterConditions& setValues(Darabonba::Json & values) { DARABONBA_SET_RVALUE(values_, values) };


  protected:
    // The field name. This operation supports all fields. For more information, see the **Supported field names** section below.
    std::shared_ptr<string> key_ = nullptr;
    // The operator. For more information, see the **Supported operators** section below.
    std::shared_ptr<string> opValue_ = nullptr;
    // The field content.
    Darabonba::Json values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
