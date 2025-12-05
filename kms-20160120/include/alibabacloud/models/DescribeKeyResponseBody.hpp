// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeKeyResponseBodyKeyMetadata.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DescribeKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KeyMetadata, keyMetadata_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyMetadata, keyMetadata_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeKeyResponseBody() = default ;
    DescribeKeyResponseBody(const DescribeKeyResponseBody &) = default ;
    DescribeKeyResponseBody(DescribeKeyResponseBody &&) = default ;
    DescribeKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKeyResponseBody() = default ;
    DescribeKeyResponseBody& operator=(const DescribeKeyResponseBody &) = default ;
    DescribeKeyResponseBody& operator=(DescribeKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyMetadata_ == nullptr
        && return this->requestId_ == nullptr; };
    // keyMetadata Field Functions 
    bool hasKeyMetadata() const { return this->keyMetadata_ != nullptr;};
    void deleteKeyMetadata() { this->keyMetadata_ = nullptr;};
    inline const DescribeKeyResponseBodyKeyMetadata & keyMetadata() const { DARABONBA_PTR_GET_CONST(keyMetadata_, DescribeKeyResponseBodyKeyMetadata) };
    inline DescribeKeyResponseBodyKeyMetadata keyMetadata() { DARABONBA_PTR_GET(keyMetadata_, DescribeKeyResponseBodyKeyMetadata) };
    inline DescribeKeyResponseBody& setKeyMetadata(const DescribeKeyResponseBodyKeyMetadata & keyMetadata) { DARABONBA_PTR_SET_VALUE(keyMetadata_, keyMetadata) };
    inline DescribeKeyResponseBody& setKeyMetadata(DescribeKeyResponseBodyKeyMetadata && keyMetadata) { DARABONBA_PTR_SET_RVALUE(keyMetadata_, keyMetadata) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The metadata of the CMK.
    std::shared_ptr<DescribeKeyResponseBodyKeyMetadata> keyMetadata_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
