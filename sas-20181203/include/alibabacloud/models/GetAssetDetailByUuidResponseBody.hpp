// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETDETAILBYUUIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETASSETDETAILBYUUIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAssetDetailByUuidResponseBodyAssetDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAssetDetailByUuidResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetDetailByUuidResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetDetail, assetDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetDetailByUuidResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetDetail, assetDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAssetDetailByUuidResponseBody() = default ;
    GetAssetDetailByUuidResponseBody(const GetAssetDetailByUuidResponseBody &) = default ;
    GetAssetDetailByUuidResponseBody(GetAssetDetailByUuidResponseBody &&) = default ;
    GetAssetDetailByUuidResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetDetailByUuidResponseBody() = default ;
    GetAssetDetailByUuidResponseBody& operator=(const GetAssetDetailByUuidResponseBody &) = default ;
    GetAssetDetailByUuidResponseBody& operator=(GetAssetDetailByUuidResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetDetail_ == nullptr
        && return this->requestId_ == nullptr; };
    // assetDetail Field Functions 
    bool hasAssetDetail() const { return this->assetDetail_ != nullptr;};
    void deleteAssetDetail() { this->assetDetail_ = nullptr;};
    inline const GetAssetDetailByUuidResponseBodyAssetDetail & assetDetail() const { DARABONBA_PTR_GET_CONST(assetDetail_, GetAssetDetailByUuidResponseBodyAssetDetail) };
    inline GetAssetDetailByUuidResponseBodyAssetDetail assetDetail() { DARABONBA_PTR_GET(assetDetail_, GetAssetDetailByUuidResponseBodyAssetDetail) };
    inline GetAssetDetailByUuidResponseBody& setAssetDetail(const GetAssetDetailByUuidResponseBodyAssetDetail & assetDetail) { DARABONBA_PTR_SET_VALUE(assetDetail_, assetDetail) };
    inline GetAssetDetailByUuidResponseBody& setAssetDetail(GetAssetDetailByUuidResponseBodyAssetDetail && assetDetail) { DARABONBA_PTR_SET_RVALUE(assetDetail_, assetDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAssetDetailByUuidResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the server.
    std::shared_ptr<GetAssetDetailByUuidResponseBodyAssetDetail> assetDetail_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
