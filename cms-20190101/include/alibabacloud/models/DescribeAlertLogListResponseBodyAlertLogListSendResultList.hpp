// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTLOGLISTRESPONSEBODYALERTLOGLISTSENDRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTLOGLISTRESPONSEBODYALERTLOGLISTSENDRESULTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertLogListResponseBodyAlertLogListSendResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertLogListResponseBodyAlertLogListSendResultList& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertLogListResponseBodyAlertLogListSendResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeAlertLogListResponseBodyAlertLogListSendResultList() = default ;
    DescribeAlertLogListResponseBodyAlertLogListSendResultList(const DescribeAlertLogListResponseBodyAlertLogListSendResultList &) = default ;
    DescribeAlertLogListResponseBodyAlertLogListSendResultList(DescribeAlertLogListResponseBodyAlertLogListSendResultList &&) = default ;
    DescribeAlertLogListResponseBodyAlertLogListSendResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertLogListResponseBodyAlertLogListSendResultList() = default ;
    DescribeAlertLogListResponseBodyAlertLogListSendResultList& operator=(const DescribeAlertLogListResponseBodyAlertLogListSendResultList &) = default ;
    DescribeAlertLogListResponseBodyAlertLogListSendResultList& operator=(DescribeAlertLogListResponseBodyAlertLogListSendResultList &&) = default ;
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
    inline DescribeAlertLogListResponseBodyAlertLogListSendResultList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline DescribeAlertLogListResponseBodyAlertLogListSendResultList& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline DescribeAlertLogListResponseBodyAlertLogListSendResultList& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The category of the alert notification method. Valid values:
    // 
    // *   MAIL: email
    // *   ALIIM: TradeManager
    // *   SMS: text message
    // *   CALL: phone call
    // *   DING: DingTalk chatbot
    // *   Merged: alert merging
    std::shared_ptr<string> key_ = nullptr;
    // The notification object corresponding to the alert notification method.
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
