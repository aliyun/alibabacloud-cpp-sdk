// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESERVEDRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESERVEDRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeReservedResourceResponseBodyImages.hpp>
#include <alibabacloud/models/DescribeReservedResourceResponseBodySupportResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeReservedResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReservedResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportResources, supportResources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReservedResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportResources, supportResources_);
    };
    DescribeReservedResourceResponseBody() = default ;
    DescribeReservedResourceResponseBody(const DescribeReservedResourceResponseBody &) = default ;
    DescribeReservedResourceResponseBody(DescribeReservedResourceResponseBody &&) = default ;
    DescribeReservedResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReservedResourceResponseBody() = default ;
    DescribeReservedResourceResponseBody& operator=(const DescribeReservedResourceResponseBody &) = default ;
    DescribeReservedResourceResponseBody& operator=(DescribeReservedResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->images_ != nullptr && this->requestId_ != nullptr && this->supportResources_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeReservedResourceResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const DescribeReservedResourceResponseBodyImages & images() const { DARABONBA_PTR_GET_CONST(images_, DescribeReservedResourceResponseBodyImages) };
    inline DescribeReservedResourceResponseBodyImages images() { DARABONBA_PTR_GET(images_, DescribeReservedResourceResponseBodyImages) };
    inline DescribeReservedResourceResponseBody& setImages(const DescribeReservedResourceResponseBodyImages & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline DescribeReservedResourceResponseBody& setImages(DescribeReservedResourceResponseBodyImages && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeReservedResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportResources Field Functions 
    bool hasSupportResources() const { return this->supportResources_ != nullptr;};
    void deleteSupportResources() { this->supportResources_ = nullptr;};
    inline const DescribeReservedResourceResponseBodySupportResources & supportResources() const { DARABONBA_PTR_GET_CONST(supportResources_, DescribeReservedResourceResponseBodySupportResources) };
    inline DescribeReservedResourceResponseBodySupportResources supportResources() { DARABONBA_PTR_GET(supportResources_, DescribeReservedResourceResponseBodySupportResources) };
    inline DescribeReservedResourceResponseBody& setSupportResources(const DescribeReservedResourceResponseBodySupportResources & supportResources) { DARABONBA_PTR_SET_VALUE(supportResources_, supportResources) };
    inline DescribeReservedResourceResponseBody& setSupportResources(DescribeReservedResourceResponseBodySupportResources && supportResources) { DARABONBA_PTR_SET_RVALUE(supportResources_, supportResources) };


  protected:
    // The returned service code. 0 indicates that the request was successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The information about the image.
    std::shared_ptr<DescribeReservedResourceResponseBodyImages> images_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resources.
    std::shared_ptr<DescribeReservedResourceResponseBodySupportResources> supportResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
