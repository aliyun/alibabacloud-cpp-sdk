// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobsRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobsRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobsRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeMigrationJobsRequestTag() = default ;
    DescribeMigrationJobsRequestTag(const DescribeMigrationJobsRequestTag &) = default ;
    DescribeMigrationJobsRequestTag(DescribeMigrationJobsRequestTag &&) = default ;
    DescribeMigrationJobsRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobsRequestTag() = default ;
    DescribeMigrationJobsRequestTag& operator=(const DescribeMigrationJobsRequestTag &) = default ;
    DescribeMigrationJobsRequestTag& operator=(DescribeMigrationJobsRequestTag &&) = default ;
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
    inline DescribeMigrationJobsRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeMigrationJobsRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key. You can call the [ListTagResources](https://help.aliyun.com/document_detail/191187.html) operation to query the tag key.
    // 
    // > 
    // *   N specifies the serial number of the tag. For example, Tag.1.Key specifies the key of the first tag and Tag.2.Key specifies the key of the second tag. You can specify 1 to 20 tag keys at a time.
    // *   This parameter cannot be an empty string.
    // 
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value. You can call the [ListTagResources](https://help.aliyun.com/document_detail/191187.html) operation to query the tag value.
    // 
    // > 
    // *   N specifies the serial number of the tag. For example, Tag.1.Value specifies the value of the first tag and Tag.2.Value specifies the value of the second tag. You can specify 1 to 20 tag values at a time.
    // *   This parameter can be an empty string.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
