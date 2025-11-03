// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKMSKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKMSKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeKmsKeysResponseBodyKeys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeKmsKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKmsKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizeStatus, authorizeStatus_);
      DARABONBA_PTR_TO_JSON(Keys, keys_);
      DARABONBA_PTR_TO_JSON(KmsServiceStatus, kmsServiceStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKmsKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizeStatus, authorizeStatus_);
      DARABONBA_PTR_FROM_JSON(Keys, keys_);
      DARABONBA_PTR_FROM_JSON(KmsServiceStatus, kmsServiceStatus_);
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
    virtual bool empty() const override { return this->authorizeStatus_ == nullptr
        && return this->keys_ == nullptr && return this->kmsServiceStatus_ == nullptr && return this->requestId_ == nullptr; };
    // authorizeStatus Field Functions 
    bool hasAuthorizeStatus() const { return this->authorizeStatus_ != nullptr;};
    void deleteAuthorizeStatus() { this->authorizeStatus_ = nullptr;};
    inline string authorizeStatus() const { DARABONBA_PTR_GET_DEFAULT(authorizeStatus_, "") };
    inline DescribeKmsKeysResponseBody& setAuthorizeStatus(string authorizeStatus) { DARABONBA_PTR_SET_VALUE(authorizeStatus_, authorizeStatus) };


    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const vector<DescribeKmsKeysResponseBodyKeys> & keys() const { DARABONBA_PTR_GET_CONST(keys_, vector<DescribeKmsKeysResponseBodyKeys>) };
    inline vector<DescribeKmsKeysResponseBodyKeys> keys() { DARABONBA_PTR_GET(keys_, vector<DescribeKmsKeysResponseBodyKeys>) };
    inline DescribeKmsKeysResponseBody& setKeys(const vector<DescribeKmsKeysResponseBodyKeys> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline DescribeKmsKeysResponseBody& setKeys(vector<DescribeKmsKeysResponseBodyKeys> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


    // kmsServiceStatus Field Functions 
    bool hasKmsServiceStatus() const { return this->kmsServiceStatus_ != nullptr;};
    void deleteKmsServiceStatus() { this->kmsServiceStatus_ = nullptr;};
    inline string kmsServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(kmsServiceStatus_, "") };
    inline DescribeKmsKeysResponseBody& setKmsServiceStatus(string kmsServiceStatus) { DARABONBA_PTR_SET_VALUE(kmsServiceStatus_, kmsServiceStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKmsKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The authorization status.
    // 
    // Valid value:
    // 
    // *   not_authorized
    // *   authorized
    std::shared_ptr<string> authorizeStatus_ = nullptr;
    // Customer master key (CMK)
    std::shared_ptr<vector<DescribeKmsKeysResponseBodyKeys>> keys_ = nullptr;
    // Indicates whether KMS is activated.
    // 
    // Valid value:
    // 
    // *   disabled
    // *   enabled
    std::shared_ptr<string> kmsServiceStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
