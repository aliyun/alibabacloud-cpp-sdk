// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKEYVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKEYVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DescribeKeyVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKeyVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeyVersionId, keyVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKeyVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(KeyVersionId, keyVersionId_);
    };
    DescribeKeyVersionRequest() = default ;
    DescribeKeyVersionRequest(const DescribeKeyVersionRequest &) = default ;
    DescribeKeyVersionRequest(DescribeKeyVersionRequest &&) = default ;
    DescribeKeyVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKeyVersionRequest() = default ;
    DescribeKeyVersionRequest& operator=(const DescribeKeyVersionRequest &) = default ;
    DescribeKeyVersionRequest& operator=(DescribeKeyVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyId_ == nullptr
        && return this->keyVersionId_ == nullptr; };
    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline DescribeKeyVersionRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keyVersionId Field Functions 
    bool hasKeyVersionId() const { return this->keyVersionId_ != nullptr;};
    void deleteKeyVersionId() { this->keyVersionId_ = nullptr;};
    inline string keyVersionId() const { DARABONBA_PTR_GET_DEFAULT(keyVersionId_, "") };
    inline DescribeKeyVersionRequest& setKeyVersionId(string keyVersionId) { DARABONBA_PTR_SET_VALUE(keyVersionId_, keyVersionId) };


  protected:
    // The globally unique ID of the CMK.
    // 
    // You can also set this parameter to an alias that is bound to the CMK. For more information, see [Alias overview](https://help.aliyun.com/document_detail/68522.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> keyId_ = nullptr;
    // The globally unique ID of the CMK version.
    // 
    // You can call the [ListKeyVersions](https://help.aliyun.com/document_detail/133966.html) operation to query the versions of the CMK.
    // 
    // This parameter is required.
    std::shared_ptr<string> keyVersionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
