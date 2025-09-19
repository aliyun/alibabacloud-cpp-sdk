// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETDETAILBYUUIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETDETAILBYUUIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAssetDetailByUuidResponseBodyAssetDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAssetDetailByUuidResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAssetDetailByUuidResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetDetail, assetDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAssetDetailByUuidResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetDetail, assetDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAssetDetailByUuidResponseBody() = default ;
    DescribeAssetDetailByUuidResponseBody(const DescribeAssetDetailByUuidResponseBody &) = default ;
    DescribeAssetDetailByUuidResponseBody(DescribeAssetDetailByUuidResponseBody &&) = default ;
    DescribeAssetDetailByUuidResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAssetDetailByUuidResponseBody() = default ;
    DescribeAssetDetailByUuidResponseBody& operator=(const DescribeAssetDetailByUuidResponseBody &) = default ;
    DescribeAssetDetailByUuidResponseBody& operator=(DescribeAssetDetailByUuidResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assetDetail_ != nullptr
        && this->requestId_ != nullptr; };
    // assetDetail Field Functions 
    bool hasAssetDetail() const { return this->assetDetail_ != nullptr;};
    void deleteAssetDetail() { this->assetDetail_ = nullptr;};
    inline const DescribeAssetDetailByUuidResponseBodyAssetDetail & assetDetail() const { DARABONBA_PTR_GET_CONST(assetDetail_, DescribeAssetDetailByUuidResponseBodyAssetDetail) };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail assetDetail() { DARABONBA_PTR_GET(assetDetail_, DescribeAssetDetailByUuidResponseBodyAssetDetail) };
    inline DescribeAssetDetailByUuidResponseBody& setAssetDetail(const DescribeAssetDetailByUuidResponseBodyAssetDetail & assetDetail) { DARABONBA_PTR_SET_VALUE(assetDetail_, assetDetail) };
    inline DescribeAssetDetailByUuidResponseBody& setAssetDetail(DescribeAssetDetailByUuidResponseBodyAssetDetail && assetDetail) { DARABONBA_PTR_SET_RVALUE(assetDetail_, assetDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAssetDetailByUuidResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the server.
    std::shared_ptr<DescribeAssetDetailByUuidResponseBodyAssetDetail> assetDetail_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
