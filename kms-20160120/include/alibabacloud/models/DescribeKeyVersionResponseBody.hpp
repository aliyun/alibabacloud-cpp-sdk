// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKEYVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKEYVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeKeyVersionResponseBodyKeyVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DescribeKeyVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKeyVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KeyVersion, keyVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKeyVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyVersion, keyVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeKeyVersionResponseBody() = default ;
    DescribeKeyVersionResponseBody(const DescribeKeyVersionResponseBody &) = default ;
    DescribeKeyVersionResponseBody(DescribeKeyVersionResponseBody &&) = default ;
    DescribeKeyVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKeyVersionResponseBody() = default ;
    DescribeKeyVersionResponseBody& operator=(const DescribeKeyVersionResponseBody &) = default ;
    DescribeKeyVersionResponseBody& operator=(DescribeKeyVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyVersion_ == nullptr
        && return this->requestId_ == nullptr; };
    // keyVersion Field Functions 
    bool hasKeyVersion() const { return this->keyVersion_ != nullptr;};
    void deleteKeyVersion() { this->keyVersion_ = nullptr;};
    inline const DescribeKeyVersionResponseBodyKeyVersion & keyVersion() const { DARABONBA_PTR_GET_CONST(keyVersion_, DescribeKeyVersionResponseBodyKeyVersion) };
    inline DescribeKeyVersionResponseBodyKeyVersion keyVersion() { DARABONBA_PTR_GET(keyVersion_, DescribeKeyVersionResponseBodyKeyVersion) };
    inline DescribeKeyVersionResponseBody& setKeyVersion(const DescribeKeyVersionResponseBodyKeyVersion & keyVersion) { DARABONBA_PTR_SET_VALUE(keyVersion_, keyVersion) };
    inline DescribeKeyVersionResponseBody& setKeyVersion(DescribeKeyVersionResponseBodyKeyVersion && keyVersion) { DARABONBA_PTR_SET_RVALUE(keyVersion_, keyVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKeyVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The metadata of the CMK version.
    std::shared_ptr<DescribeKeyVersionResponseBodyKeyVersion> keyVersion_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
