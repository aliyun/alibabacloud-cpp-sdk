// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGSTOREKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGSTOREKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeLogStoreKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogStoreKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogStoreKeys, logStoreKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogStoreKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogStoreKeys, logStoreKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLogStoreKeysResponseBody() = default ;
    DescribeLogStoreKeysResponseBody(const DescribeLogStoreKeysResponseBody &) = default ;
    DescribeLogStoreKeysResponseBody(DescribeLogStoreKeysResponseBody &&) = default ;
    DescribeLogStoreKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogStoreKeysResponseBody() = default ;
    DescribeLogStoreKeysResponseBody& operator=(const DescribeLogStoreKeysResponseBody &) = default ;
    DescribeLogStoreKeysResponseBody& operator=(DescribeLogStoreKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogStoreKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogStoreKeys& obj) { 
        DARABONBA_PTR_TO_JSON(LogStoreKey, logStoreKey_);
      };
      friend void from_json(const Darabonba::Json& j, LogStoreKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(LogStoreKey, logStoreKey_);
      };
      LogStoreKeys() = default ;
      LogStoreKeys(const LogStoreKeys &) = default ;
      LogStoreKeys(LogStoreKeys &&) = default ;
      LogStoreKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogStoreKeys() = default ;
      LogStoreKeys& operator=(const LogStoreKeys &) = default ;
      LogStoreKeys& operator=(LogStoreKeys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->logStoreKey_ == nullptr; };
      // logStoreKey Field Functions 
      bool hasLogStoreKey() const { return this->logStoreKey_ != nullptr;};
      void deleteLogStoreKey() { this->logStoreKey_ = nullptr;};
      inline const vector<string> & getLogStoreKey() const { DARABONBA_PTR_GET_CONST(logStoreKey_, vector<string>) };
      inline vector<string> getLogStoreKey() { DARABONBA_PTR_GET(logStoreKey_, vector<string>) };
      inline LogStoreKeys& setLogStoreKey(const vector<string> & logStoreKey) { DARABONBA_PTR_SET_VALUE(logStoreKey_, logStoreKey) };
      inline LogStoreKeys& setLogStoreKey(vector<string> && logStoreKey) { DARABONBA_PTR_SET_RVALUE(logStoreKey_, logStoreKey) };


    protected:
      shared_ptr<vector<string>> logStoreKey_ {};
    };

    virtual bool empty() const override { return this->logStoreKeys_ == nullptr
        && this->requestId_ == nullptr; };
    // logStoreKeys Field Functions 
    bool hasLogStoreKeys() const { return this->logStoreKeys_ != nullptr;};
    void deleteLogStoreKeys() { this->logStoreKeys_ = nullptr;};
    inline const DescribeLogStoreKeysResponseBody::LogStoreKeys & getLogStoreKeys() const { DARABONBA_PTR_GET_CONST(logStoreKeys_, DescribeLogStoreKeysResponseBody::LogStoreKeys) };
    inline DescribeLogStoreKeysResponseBody::LogStoreKeys getLogStoreKeys() { DARABONBA_PTR_GET(logStoreKeys_, DescribeLogStoreKeysResponseBody::LogStoreKeys) };
    inline DescribeLogStoreKeysResponseBody& setLogStoreKeys(const DescribeLogStoreKeysResponseBody::LogStoreKeys & logStoreKeys) { DARABONBA_PTR_SET_VALUE(logStoreKeys_, logStoreKeys) };
    inline DescribeLogStoreKeysResponseBody& setLogStoreKeys(DescribeLogStoreKeysResponseBody::LogStoreKeys && logStoreKeys) { DARABONBA_PTR_SET_RVALUE(logStoreKeys_, logStoreKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogStoreKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeLogStoreKeysResponseBody::LogStoreKeys> logStoreKeys_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
