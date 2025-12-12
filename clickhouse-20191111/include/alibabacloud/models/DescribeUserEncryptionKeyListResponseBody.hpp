// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERENCRYPTIONKEYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERENCRYPTIONKEYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserEncryptionKeyListResponseBodyKmsKeys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeUserEncryptionKeyListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserEncryptionKeyListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KmsKeys, kmsKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserEncryptionKeyListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KmsKeys, kmsKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserEncryptionKeyListResponseBody() = default ;
    DescribeUserEncryptionKeyListResponseBody(const DescribeUserEncryptionKeyListResponseBody &) = default ;
    DescribeUserEncryptionKeyListResponseBody(DescribeUserEncryptionKeyListResponseBody &&) = default ;
    DescribeUserEncryptionKeyListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserEncryptionKeyListResponseBody() = default ;
    DescribeUserEncryptionKeyListResponseBody& operator=(const DescribeUserEncryptionKeyListResponseBody &) = default ;
    DescribeUserEncryptionKeyListResponseBody& operator=(DescribeUserEncryptionKeyListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kmsKeys_ == nullptr
        && return this->requestId_ == nullptr; };
    // kmsKeys Field Functions 
    bool hasKmsKeys() const { return this->kmsKeys_ != nullptr;};
    void deleteKmsKeys() { this->kmsKeys_ = nullptr;};
    inline const vector<DescribeUserEncryptionKeyListResponseBodyKmsKeys> & kmsKeys() const { DARABONBA_PTR_GET_CONST(kmsKeys_, vector<DescribeUserEncryptionKeyListResponseBodyKmsKeys>) };
    inline vector<DescribeUserEncryptionKeyListResponseBodyKmsKeys> kmsKeys() { DARABONBA_PTR_GET(kmsKeys_, vector<DescribeUserEncryptionKeyListResponseBodyKmsKeys>) };
    inline DescribeUserEncryptionKeyListResponseBody& setKmsKeys(const vector<DescribeUserEncryptionKeyListResponseBodyKmsKeys> & kmsKeys) { DARABONBA_PTR_SET_VALUE(kmsKeys_, kmsKeys) };
    inline DescribeUserEncryptionKeyListResponseBody& setKmsKeys(vector<DescribeUserEncryptionKeyListResponseBodyKmsKeys> && kmsKeys) { DARABONBA_PTR_SET_RVALUE(kmsKeys_, kmsKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserEncryptionKeyListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeUserEncryptionKeyListResponseBodyKmsKeys>> kmsKeys_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
