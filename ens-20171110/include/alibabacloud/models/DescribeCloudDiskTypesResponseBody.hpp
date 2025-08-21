// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCloudDiskTypesResponseBodySupportResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeCloudDiskTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDiskTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportResources, supportResources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudDiskTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportResources, supportResources_);
    };
    DescribeCloudDiskTypesResponseBody() = default ;
    DescribeCloudDiskTypesResponseBody(const DescribeCloudDiskTypesResponseBody &) = default ;
    DescribeCloudDiskTypesResponseBody(DescribeCloudDiskTypesResponseBody &&) = default ;
    DescribeCloudDiskTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDiskTypesResponseBody() = default ;
    DescribeCloudDiskTypesResponseBody& operator=(const DescribeCloudDiskTypesResponseBody &) = default ;
    DescribeCloudDiskTypesResponseBody& operator=(DescribeCloudDiskTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->supportResources_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudDiskTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportResources Field Functions 
    bool hasSupportResources() const { return this->supportResources_ != nullptr;};
    void deleteSupportResources() { this->supportResources_ = nullptr;};
    inline const DescribeCloudDiskTypesResponseBodySupportResources & supportResources() const { DARABONBA_PTR_GET_CONST(supportResources_, DescribeCloudDiskTypesResponseBodySupportResources) };
    inline DescribeCloudDiskTypesResponseBodySupportResources supportResources() { DARABONBA_PTR_GET(supportResources_, DescribeCloudDiskTypesResponseBodySupportResources) };
    inline DescribeCloudDiskTypesResponseBody& setSupportResources(const DescribeCloudDiskTypesResponseBodySupportResources & supportResources) { DARABONBA_PTR_SET_VALUE(supportResources_, supportResources) };
    inline DescribeCloudDiskTypesResponseBody& setSupportResources(DescribeCloudDiskTypesResponseBodySupportResources && supportResources) { DARABONBA_PTR_SET_RVALUE(supportResources_, supportResources) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The specifications of resources that you can purchase.
    std::shared_ptr<DescribeCloudDiskTypesResponseBodySupportResources> supportResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
