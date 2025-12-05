// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DescribeKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
    };
    DescribeKeyRequest() = default ;
    DescribeKeyRequest(const DescribeKeyRequest &) = default ;
    DescribeKeyRequest(DescribeKeyRequest &&) = default ;
    DescribeKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKeyRequest() = default ;
    DescribeKeyRequest& operator=(const DescribeKeyRequest &) = default ;
    DescribeKeyRequest& operator=(DescribeKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyId_ == nullptr; };
    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline DescribeKeyRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


  protected:
    // The ID of the CMK. The ID must be globally unique.
    // 
    // You can also set this parameter to an alias that is bound to the CMK. For more information, see [Overview of aliases](https://help.aliyun.com/document_detail/68522.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> keyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
