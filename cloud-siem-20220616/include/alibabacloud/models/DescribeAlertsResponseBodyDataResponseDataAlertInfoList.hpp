// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTSRESPONSEBODYDATARESPONSEDATAALERTINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTSRESPONSEBODYDATARESPONSEDATAALERTINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAlertsResponseBodyDataResponseDataAlertInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertsResponseBodyDataResponseDataAlertInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertsResponseBodyDataResponseDataAlertInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribeAlertsResponseBodyDataResponseDataAlertInfoList() = default ;
    DescribeAlertsResponseBodyDataResponseDataAlertInfoList(const DescribeAlertsResponseBodyDataResponseDataAlertInfoList &) = default ;
    DescribeAlertsResponseBodyDataResponseDataAlertInfoList(DescribeAlertsResponseBodyDataResponseDataAlertInfoList &&) = default ;
    DescribeAlertsResponseBodyDataResponseDataAlertInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertsResponseBodyDataResponseDataAlertInfoList() = default ;
    DescribeAlertsResponseBodyDataResponseDataAlertInfoList& operator=(const DescribeAlertsResponseBodyDataResponseDataAlertInfoList &) = default ;
    DescribeAlertsResponseBodyDataResponseDataAlertInfoList& operator=(DescribeAlertsResponseBodyDataResponseDataAlertInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->keyName_ != nullptr && this->values_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeAlertsResponseBodyDataResponseDataAlertInfoList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string keyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline DescribeAlertsResponseBodyDataResponseDataAlertInfoList& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline string values() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
    inline DescribeAlertsResponseBodyDataResponseDataAlertInfoList& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


  protected:
    // The attribute key.
    std::shared_ptr<string> key_ = nullptr;
    // The name of the key.
    std::shared_ptr<string> keyName_ = nullptr;
    // The value of the key.
    std::shared_ptr<string> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
