// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSREQUESTTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSREQUESTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeFlowLogsRequestTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowLogsRequestTags& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowLogsRequestTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeFlowLogsRequestTags() = default ;
    DescribeFlowLogsRequestTags(const DescribeFlowLogsRequestTags &) = default ;
    DescribeFlowLogsRequestTags(DescribeFlowLogsRequestTags &&) = default ;
    DescribeFlowLogsRequestTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowLogsRequestTags() = default ;
    DescribeFlowLogsRequestTags& operator=(const DescribeFlowLogsRequestTags &) = default ;
    DescribeFlowLogsRequestTags& operator=(DescribeFlowLogsRequestTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeFlowLogsRequestTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeFlowLogsRequestTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the tag. Up to 20 tag keys are supported. If you need to pass this value, it cannot be an empty string.
    // 
    // A tag key can have up to 128 characters and cannot start with `aliyun` or `acs:`. It also cannot contain `http://` or `https://`.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the tag. Up to 20 tag values are supported. If you need to pass this value, it can be an empty string.
    // 
    // A tag value can have up to 128 characters and cannot start with `aliyun` or `acs:`. It also cannot contain `http://` or `https://`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
