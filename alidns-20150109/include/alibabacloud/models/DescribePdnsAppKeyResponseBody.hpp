// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSAPPKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSAPPKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsAppKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsAppKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsAppKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePdnsAppKeyResponseBody() = default ;
    DescribePdnsAppKeyResponseBody(const DescribePdnsAppKeyResponseBody &) = default ;
    DescribePdnsAppKeyResponseBody(DescribePdnsAppKeyResponseBody &&) = default ;
    DescribePdnsAppKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsAppKeyResponseBody() = default ;
    DescribePdnsAppKeyResponseBody& operator=(const DescribePdnsAppKeyResponseBody &) = default ;
    DescribePdnsAppKeyResponseBody& operator=(DescribePdnsAppKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppKey : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppKey& obj) { 
        DARABONBA_PTR_TO_JSON(AppKeyId, appKeyId_);
        DARABONBA_PTR_TO_JSON(AppKeySecret, appKeySecret_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, AppKey& obj) { 
        DARABONBA_PTR_FROM_JSON(AppKeyId, appKeyId_);
        DARABONBA_PTR_FROM_JSON(AppKeySecret, appKeySecret_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      AppKey() = default ;
      AppKey(const AppKey &) = default ;
      AppKey(AppKey &&) = default ;
      AppKey(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppKey() = default ;
      AppKey& operator=(const AppKey &) = default ;
      AppKey& operator=(AppKey &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appKeyId_ == nullptr
        && this->appKeySecret_ == nullptr && this->createDate_ == nullptr && this->createTimestamp_ == nullptr && this->remark_ == nullptr && this->state_ == nullptr; };
      // appKeyId Field Functions 
      bool hasAppKeyId() const { return this->appKeyId_ != nullptr;};
      void deleteAppKeyId() { this->appKeyId_ = nullptr;};
      inline string getAppKeyId() const { DARABONBA_PTR_GET_DEFAULT(appKeyId_, "") };
      inline AppKey& setAppKeyId(string appKeyId) { DARABONBA_PTR_SET_VALUE(appKeyId_, appKeyId) };


      // appKeySecret Field Functions 
      bool hasAppKeySecret() const { return this->appKeySecret_ != nullptr;};
      void deleteAppKeySecret() { this->appKeySecret_ = nullptr;};
      inline string getAppKeySecret() const { DARABONBA_PTR_GET_DEFAULT(appKeySecret_, "") };
      inline AppKey& setAppKeySecret(string appKeySecret) { DARABONBA_PTR_SET_VALUE(appKeySecret_, appKeySecret) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline AppKey& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline AppKey& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline AppKey& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline AppKey& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      shared_ptr<string> appKeyId_ {};
      shared_ptr<string> appKeySecret_ {};
      shared_ptr<string> createDate_ {};
      shared_ptr<int64_t> createTimestamp_ {};
      shared_ptr<string> remark_ {};
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->appKey_ == nullptr
        && this->requestId_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline const DescribePdnsAppKeyResponseBody::AppKey & getAppKey() const { DARABONBA_PTR_GET_CONST(appKey_, DescribePdnsAppKeyResponseBody::AppKey) };
    inline DescribePdnsAppKeyResponseBody::AppKey getAppKey() { DARABONBA_PTR_GET(appKey_, DescribePdnsAppKeyResponseBody::AppKey) };
    inline DescribePdnsAppKeyResponseBody& setAppKey(const DescribePdnsAppKeyResponseBody::AppKey & appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };
    inline DescribePdnsAppKeyResponseBody& setAppKey(DescribePdnsAppKeyResponseBody::AppKey && appKey) { DARABONBA_PTR_SET_RVALUE(appKey_, appKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePdnsAppKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribePdnsAppKeyResponseBody::AppKey> appKey_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
