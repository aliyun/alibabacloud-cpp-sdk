// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKMSKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKMSKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeKmsKeysResponseBodyKmsKeys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeKmsKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKmsKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KmsKeys, kmsKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKmsKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KmsKeys, kmsKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeKmsKeysResponseBody() = default ;
    DescribeKmsKeysResponseBody(const DescribeKmsKeysResponseBody &) = default ;
    DescribeKmsKeysResponseBody(DescribeKmsKeysResponseBody &&) = default ;
    DescribeKmsKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKmsKeysResponseBody() = default ;
    DescribeKmsKeysResponseBody& operator=(const DescribeKmsKeysResponseBody &) = default ;
    DescribeKmsKeysResponseBody& operator=(DescribeKmsKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->kmsKeys_ != nullptr
        && this->requestId_ != nullptr; };
    // kmsKeys Field Functions 
    bool hasKmsKeys() const { return this->kmsKeys_ != nullptr;};
    void deleteKmsKeys() { this->kmsKeys_ = nullptr;};
    inline const DescribeKmsKeysResponseBodyKmsKeys & kmsKeys() const { DARABONBA_PTR_GET_CONST(kmsKeys_, DescribeKmsKeysResponseBodyKmsKeys) };
    inline DescribeKmsKeysResponseBodyKmsKeys kmsKeys() { DARABONBA_PTR_GET(kmsKeys_, DescribeKmsKeysResponseBodyKmsKeys) };
    inline DescribeKmsKeysResponseBody& setKmsKeys(const DescribeKmsKeysResponseBodyKmsKeys & kmsKeys) { DARABONBA_PTR_SET_VALUE(kmsKeys_, kmsKeys) };
    inline DescribeKmsKeysResponseBody& setKmsKeys(DescribeKmsKeysResponseBodyKmsKeys && kmsKeys) { DARABONBA_PTR_SET_RVALUE(kmsKeys_, kmsKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKmsKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried KMS keys.
    std::shared_ptr<DescribeKmsKeysResponseBodyKmsKeys> kmsKeys_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
