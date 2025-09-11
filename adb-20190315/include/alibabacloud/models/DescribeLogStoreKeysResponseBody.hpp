// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGSTOREKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGSTOREKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLogStoreKeysResponseBodyLogStoreKeys.hpp>
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
    virtual bool empty() const override { this->logStoreKeys_ != nullptr
        && this->requestId_ != nullptr; };
    // logStoreKeys Field Functions 
    bool hasLogStoreKeys() const { return this->logStoreKeys_ != nullptr;};
    void deleteLogStoreKeys() { this->logStoreKeys_ = nullptr;};
    inline const DescribeLogStoreKeysResponseBodyLogStoreKeys & logStoreKeys() const { DARABONBA_PTR_GET_CONST(logStoreKeys_, DescribeLogStoreKeysResponseBodyLogStoreKeys) };
    inline DescribeLogStoreKeysResponseBodyLogStoreKeys logStoreKeys() { DARABONBA_PTR_GET(logStoreKeys_, DescribeLogStoreKeysResponseBodyLogStoreKeys) };
    inline DescribeLogStoreKeysResponseBody& setLogStoreKeys(const DescribeLogStoreKeysResponseBodyLogStoreKeys & logStoreKeys) { DARABONBA_PTR_SET_VALUE(logStoreKeys_, logStoreKeys) };
    inline DescribeLogStoreKeysResponseBody& setLogStoreKeys(DescribeLogStoreKeysResponseBodyLogStoreKeys && logStoreKeys) { DARABONBA_PTR_SET_RVALUE(logStoreKeys_, logStoreKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogStoreKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried log keywords.
    std::shared_ptr<DescribeLogStoreKeysResponseBodyLogStoreKeys> logStoreKeys_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
