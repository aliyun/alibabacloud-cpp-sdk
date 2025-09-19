// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETDETAILBYUUIDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETDETAILBYUUIDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAssetDetailByUuidsResponseBodyAssetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAssetDetailByUuidsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAssetDetailByUuidsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetList, assetList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAssetDetailByUuidsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetList, assetList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAssetDetailByUuidsResponseBody() = default ;
    DescribeAssetDetailByUuidsResponseBody(const DescribeAssetDetailByUuidsResponseBody &) = default ;
    DescribeAssetDetailByUuidsResponseBody(DescribeAssetDetailByUuidsResponseBody &&) = default ;
    DescribeAssetDetailByUuidsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAssetDetailByUuidsResponseBody() = default ;
    DescribeAssetDetailByUuidsResponseBody& operator=(const DescribeAssetDetailByUuidsResponseBody &) = default ;
    DescribeAssetDetailByUuidsResponseBody& operator=(DescribeAssetDetailByUuidsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assetList_ != nullptr
        && this->requestId_ != nullptr; };
    // assetList Field Functions 
    bool hasAssetList() const { return this->assetList_ != nullptr;};
    void deleteAssetList() { this->assetList_ = nullptr;};
    inline const vector<DescribeAssetDetailByUuidsResponseBodyAssetList> & assetList() const { DARABONBA_PTR_GET_CONST(assetList_, vector<DescribeAssetDetailByUuidsResponseBodyAssetList>) };
    inline vector<DescribeAssetDetailByUuidsResponseBodyAssetList> assetList() { DARABONBA_PTR_GET(assetList_, vector<DescribeAssetDetailByUuidsResponseBodyAssetList>) };
    inline DescribeAssetDetailByUuidsResponseBody& setAssetList(const vector<DescribeAssetDetailByUuidsResponseBodyAssetList> & assetList) { DARABONBA_PTR_SET_VALUE(assetList_, assetList) };
    inline DescribeAssetDetailByUuidsResponseBody& setAssetList(vector<DescribeAssetDetailByUuidsResponseBodyAssetList> && assetList) { DARABONBA_PTR_SET_RVALUE(assetList_, assetList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAssetDetailByUuidsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the details of the instances.
    std::shared_ptr<vector<DescribeAssetDetailByUuidsResponseBodyAssetList>> assetList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
