// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAvailableResourceResponseBodyImages.hpp>
#include <alibabacloud/models/DescribeAvailableResourceResponseBodySupportResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeAvailableResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportResources, supportResources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportResources, supportResources_);
    };
    DescribeAvailableResourceResponseBody() = default ;
    DescribeAvailableResourceResponseBody(const DescribeAvailableResourceResponseBody &) = default ;
    DescribeAvailableResourceResponseBody(DescribeAvailableResourceResponseBody &&) = default ;
    DescribeAvailableResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceResponseBody() = default ;
    DescribeAvailableResourceResponseBody& operator=(const DescribeAvailableResourceResponseBody &) = default ;
    DescribeAvailableResourceResponseBody& operator=(DescribeAvailableResourceResponseBody &&) = default ;
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
    inline DescribeAvailableResourceResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const DescribeAvailableResourceResponseBodyImages & images() const { DARABONBA_PTR_GET_CONST(images_, DescribeAvailableResourceResponseBodyImages) };
    inline DescribeAvailableResourceResponseBodyImages images() { DARABONBA_PTR_GET(images_, DescribeAvailableResourceResponseBodyImages) };
    inline DescribeAvailableResourceResponseBody& setImages(const DescribeAvailableResourceResponseBodyImages & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline DescribeAvailableResourceResponseBody& setImages(DescribeAvailableResourceResponseBodyImages && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailableResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportResources Field Functions 
    bool hasSupportResources() const { return this->supportResources_ != nullptr;};
    void deleteSupportResources() { this->supportResources_ = nullptr;};
    inline const DescribeAvailableResourceResponseBodySupportResources & supportResources() const { DARABONBA_PTR_GET_CONST(supportResources_, DescribeAvailableResourceResponseBodySupportResources) };
    inline DescribeAvailableResourceResponseBodySupportResources supportResources() { DARABONBA_PTR_GET(supportResources_, DescribeAvailableResourceResponseBodySupportResources) };
    inline DescribeAvailableResourceResponseBody& setSupportResources(const DescribeAvailableResourceResponseBodySupportResources & supportResources) { DARABONBA_PTR_SET_VALUE(supportResources_, supportResources) };
    inline DescribeAvailableResourceResponseBody& setSupportResources(DescribeAvailableResourceResponseBodySupportResources && supportResources) { DARABONBA_PTR_SET_RVALUE(supportResources_, supportResources) };


  protected:
    // The returned service code. 0 indicates that the request was successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The details of the images.
    std::shared_ptr<DescribeAvailableResourceResponseBodyImages> images_ = nullptr;
    // The ID of the request. This is a common parameter. Each request has a unique ID. You can use this ID to troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The specifications of resources that you can purchase.
    std::shared_ptr<DescribeAvailableResourceResponseBodySupportResources> supportResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
