// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKAVAILABLERESOURCEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKAVAILABLERESOURCEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeCloudDiskAvailableResourceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDiskAvailableResourceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportResources, supportResources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudDiskAvailableResourceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportResources, supportResources_);
    };
    DescribeCloudDiskAvailableResourceInfoResponseBody() = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBody(const DescribeCloudDiskAvailableResourceInfoResponseBody &) = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBody(DescribeCloudDiskAvailableResourceInfoResponseBody &&) = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDiskAvailableResourceInfoResponseBody() = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBody& operator=(const DescribeCloudDiskAvailableResourceInfoResponseBody &) = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBody& operator=(DescribeCloudDiskAvailableResourceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->supportResources_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudDiskAvailableResourceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportResources Field Functions 
    bool hasSupportResources() const { return this->supportResources_ != nullptr;};
    void deleteSupportResources() { this->supportResources_ = nullptr;};
    inline const DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources & supportResources() const { DARABONBA_PTR_GET_CONST(supportResources_, DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources) };
    inline DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources supportResources() { DARABONBA_PTR_GET(supportResources_, DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources) };
    inline DescribeCloudDiskAvailableResourceInfoResponseBody& setSupportResources(const DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources & supportResources) { DARABONBA_PTR_SET_VALUE(supportResources_, supportResources) };
    inline DescribeCloudDiskAvailableResourceInfoResponseBody& setSupportResources(DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources && supportResources) { DARABONBA_PTR_SET_RVALUE(supportResources_, supportResources) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The specifications of resources that you can purchase.
    std::shared_ptr<DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources> supportResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
