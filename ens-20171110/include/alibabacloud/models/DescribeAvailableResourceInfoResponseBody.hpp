// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAvailableResourceInfoResponseBodyImages.hpp>
#include <alibabacloud/models/DescribeAvailableResourceInfoResponseBodySupportResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeAvailableResourceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportResources, supportResources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportResources, supportResources_);
    };
    DescribeAvailableResourceInfoResponseBody() = default ;
    DescribeAvailableResourceInfoResponseBody(const DescribeAvailableResourceInfoResponseBody &) = default ;
    DescribeAvailableResourceInfoResponseBody(DescribeAvailableResourceInfoResponseBody &&) = default ;
    DescribeAvailableResourceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceInfoResponseBody() = default ;
    DescribeAvailableResourceInfoResponseBody& operator=(const DescribeAvailableResourceInfoResponseBody &) = default ;
    DescribeAvailableResourceInfoResponseBody& operator=(DescribeAvailableResourceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->images_ == nullptr
        && return this->requestId_ == nullptr && return this->supportResources_ == nullptr; };
    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const DescribeAvailableResourceInfoResponseBodyImages & images() const { DARABONBA_PTR_GET_CONST(images_, DescribeAvailableResourceInfoResponseBodyImages) };
    inline DescribeAvailableResourceInfoResponseBodyImages images() { DARABONBA_PTR_GET(images_, DescribeAvailableResourceInfoResponseBodyImages) };
    inline DescribeAvailableResourceInfoResponseBody& setImages(const DescribeAvailableResourceInfoResponseBodyImages & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline DescribeAvailableResourceInfoResponseBody& setImages(DescribeAvailableResourceInfoResponseBodyImages && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailableResourceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportResources Field Functions 
    bool hasSupportResources() const { return this->supportResources_ != nullptr;};
    void deleteSupportResources() { this->supportResources_ = nullptr;};
    inline const DescribeAvailableResourceInfoResponseBodySupportResources & supportResources() const { DARABONBA_PTR_GET_CONST(supportResources_, DescribeAvailableResourceInfoResponseBodySupportResources) };
    inline DescribeAvailableResourceInfoResponseBodySupportResources supportResources() { DARABONBA_PTR_GET(supportResources_, DescribeAvailableResourceInfoResponseBodySupportResources) };
    inline DescribeAvailableResourceInfoResponseBody& setSupportResources(const DescribeAvailableResourceInfoResponseBodySupportResources & supportResources) { DARABONBA_PTR_SET_VALUE(supportResources_, supportResources) };
    inline DescribeAvailableResourceInfoResponseBody& setSupportResources(DescribeAvailableResourceInfoResponseBodySupportResources && supportResources) { DARABONBA_PTR_SET_RVALUE(supportResources_, supportResources) };


  protected:
    // The information about the image.
    std::shared_ptr<DescribeAvailableResourceInfoResponseBodyImages> images_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The specifications of resources that you can purchase.
    std::shared_ptr<DescribeAvailableResourceInfoResponseBodySupportResources> supportResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
