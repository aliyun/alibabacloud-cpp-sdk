// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUOTAALARMREQUESTQUOTADIMENSIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUOTAALARMREQUESTQUOTADIMENSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class CreateQuotaAlarmRequestQuotaDimensions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQuotaAlarmRequestQuotaDimensions& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQuotaAlarmRequestQuotaDimensions& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateQuotaAlarmRequestQuotaDimensions() = default ;
    CreateQuotaAlarmRequestQuotaDimensions(const CreateQuotaAlarmRequestQuotaDimensions &) = default ;
    CreateQuotaAlarmRequestQuotaDimensions(CreateQuotaAlarmRequestQuotaDimensions &&) = default ;
    CreateQuotaAlarmRequestQuotaDimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQuotaAlarmRequestQuotaDimensions() = default ;
    CreateQuotaAlarmRequestQuotaDimensions& operator=(const CreateQuotaAlarmRequestQuotaDimensions &) = default ;
    CreateQuotaAlarmRequestQuotaDimensions& operator=(CreateQuotaAlarmRequestQuotaDimensions &&) = default ;
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
    inline CreateQuotaAlarmRequestQuotaDimensions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateQuotaAlarmRequestQuotaDimensions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the dimension.
    // 
    // >  You must configure `Dimensions.N.Key` and `Dimensions.N.Value` at the same time. The value range of N varies based on the number of dimensions that are supported by the related Alibaba Cloud service. You can call the [ListProductQuotaDimensions](https://help.aliyun.com/document_detail/440553.html) operation to query the dimensions that are supported by an Alibaba Cloud service. The number of items in the returned array is N.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the dimension.
    // 
    // >  You must configure `Dimensions.N.Key` and `Dimensions.N.Value` at the same time. The value range of N varies based on the number of dimensions that are supported by the related Alibaba Cloud service. You can call the [ListProductQuotaDimensions](https://help.aliyun.com/document_detail/440553.html) operation to query the dimensions that are supported by an Alibaba Cloud service. The number of items in the returned array is N.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
