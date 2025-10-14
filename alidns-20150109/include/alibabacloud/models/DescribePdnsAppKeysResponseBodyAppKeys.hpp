// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSAPPKEYSRESPONSEBODYAPPKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSAPPKEYSRESPONSEBODYAPPKEYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsAppKeysResponseBodyAppKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsAppKeysResponseBodyAppKeys& obj) { 
      DARABONBA_PTR_TO_JSON(AppKeyId, appKeyId_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsAppKeysResponseBodyAppKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKeyId, appKeyId_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    DescribePdnsAppKeysResponseBodyAppKeys() = default ;
    DescribePdnsAppKeysResponseBodyAppKeys(const DescribePdnsAppKeysResponseBodyAppKeys &) = default ;
    DescribePdnsAppKeysResponseBodyAppKeys(DescribePdnsAppKeysResponseBodyAppKeys &&) = default ;
    DescribePdnsAppKeysResponseBodyAppKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsAppKeysResponseBodyAppKeys() = default ;
    DescribePdnsAppKeysResponseBodyAppKeys& operator=(const DescribePdnsAppKeysResponseBodyAppKeys &) = default ;
    DescribePdnsAppKeysResponseBodyAppKeys& operator=(DescribePdnsAppKeysResponseBodyAppKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKeyId_ == nullptr
        && return this->createDate_ == nullptr && return this->createTimestamp_ == nullptr && return this->remark_ == nullptr && return this->state_ == nullptr; };
    // appKeyId Field Functions 
    bool hasAppKeyId() const { return this->appKeyId_ != nullptr;};
    void deleteAppKeyId() { this->appKeyId_ = nullptr;};
    inline string appKeyId() const { DARABONBA_PTR_GET_DEFAULT(appKeyId_, "") };
    inline DescribePdnsAppKeysResponseBodyAppKeys& setAppKeyId(string appKeyId) { DARABONBA_PTR_SET_VALUE(appKeyId_, appKeyId) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline DescribePdnsAppKeysResponseBodyAppKeys& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribePdnsAppKeysResponseBodyAppKeys& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribePdnsAppKeysResponseBodyAppKeys& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribePdnsAppKeysResponseBodyAppKeys& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<string> appKeyId_ = nullptr;
    std::shared_ptr<string> createDate_ = nullptr;
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
