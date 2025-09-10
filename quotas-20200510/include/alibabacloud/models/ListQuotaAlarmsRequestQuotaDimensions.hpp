// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAALARMSREQUESTQUOTADIMENSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAALARMSREQUESTQUOTADIMENSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListQuotaAlarmsRequestQuotaDimensions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaAlarmsRequestQuotaDimensions& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotaAlarmsRequestQuotaDimensions& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListQuotaAlarmsRequestQuotaDimensions() = default ;
    ListQuotaAlarmsRequestQuotaDimensions(const ListQuotaAlarmsRequestQuotaDimensions &) = default ;
    ListQuotaAlarmsRequestQuotaDimensions(ListQuotaAlarmsRequestQuotaDimensions &&) = default ;
    ListQuotaAlarmsRequestQuotaDimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaAlarmsRequestQuotaDimensions() = default ;
    ListQuotaAlarmsRequestQuotaDimensions& operator=(const ListQuotaAlarmsRequestQuotaDimensions &) = default ;
    ListQuotaAlarmsRequestQuotaDimensions& operator=(ListQuotaAlarmsRequestQuotaDimensions &&) = default ;
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
    inline ListQuotaAlarmsRequestQuotaDimensions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListQuotaAlarmsRequestQuotaDimensions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the dimension.
    // 
    // > 
    // 
    // *   The value range of N varies based on the number of dimensions that are supported by the related Alibaba Cloud service.
    // 
    // *   This parameter is required if you set the `ProductCode` parameter to `ecs`, `ecs-spec`, `actiontrail`, or `ess`.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the dimension.
    // 
    // > 
    // 
    // *   The value range of N varies based on the number of dimensions that are supported by the related Alibaba Cloud service.
    // 
    // *   This parameter is required if you set the `ProductCode` parameter to `ecs`, `ecs-spec`, `actiontrail`, or `ess`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
