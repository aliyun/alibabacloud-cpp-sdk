// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBGROUPRESPONSEBODYJOBGROUPPROGRESSCATEGORIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBGROUPRESPONSEBODYJOBGROUPPROGRESSCATEGORIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeJobGroupResponseBodyJobGroupProgressCategories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobGroupResponseBodyJobGroupProgressCategories& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobGroupResponseBodyJobGroupProgressCategories& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeJobGroupResponseBodyJobGroupProgressCategories() = default ;
    DescribeJobGroupResponseBodyJobGroupProgressCategories(const DescribeJobGroupResponseBodyJobGroupProgressCategories &) = default ;
    DescribeJobGroupResponseBodyJobGroupProgressCategories(DescribeJobGroupResponseBodyJobGroupProgressCategories &&) = default ;
    DescribeJobGroupResponseBodyJobGroupProgressCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobGroupResponseBodyJobGroupProgressCategories() = default ;
    DescribeJobGroupResponseBodyJobGroupProgressCategories& operator=(const DescribeJobGroupResponseBodyJobGroupProgressCategories &) = default ;
    DescribeJobGroupResponseBodyJobGroupProgressCategories& operator=(DescribeJobGroupResponseBodyJobGroupProgressCategories &&) = default ;
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
    inline DescribeJobGroupResponseBodyJobGroupProgressCategories& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeJobGroupResponseBodyJobGroupProgressCategories& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
