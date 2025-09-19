// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAFFECTEDASSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAFFECTEDASSETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAffectedAssetsResponseBodyAssetList.hpp>
#include <alibabacloud/models/DescribeAffectedAssetsResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAffectedAssetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAffectedAssetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetList, assetList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAffectedAssetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetList, assetList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAffectedAssetsResponseBody() = default ;
    DescribeAffectedAssetsResponseBody(const DescribeAffectedAssetsResponseBody &) = default ;
    DescribeAffectedAssetsResponseBody(DescribeAffectedAssetsResponseBody &&) = default ;
    DescribeAffectedAssetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAffectedAssetsResponseBody() = default ;
    DescribeAffectedAssetsResponseBody& operator=(const DescribeAffectedAssetsResponseBody &) = default ;
    DescribeAffectedAssetsResponseBody& operator=(DescribeAffectedAssetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assetList_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // assetList Field Functions 
    bool hasAssetList() const { return this->assetList_ != nullptr;};
    void deleteAssetList() { this->assetList_ = nullptr;};
    inline const vector<DescribeAffectedAssetsResponseBodyAssetList> & assetList() const { DARABONBA_PTR_GET_CONST(assetList_, vector<DescribeAffectedAssetsResponseBodyAssetList>) };
    inline vector<DescribeAffectedAssetsResponseBodyAssetList> assetList() { DARABONBA_PTR_GET(assetList_, vector<DescribeAffectedAssetsResponseBodyAssetList>) };
    inline DescribeAffectedAssetsResponseBody& setAssetList(const vector<DescribeAffectedAssetsResponseBodyAssetList> & assetList) { DARABONBA_PTR_SET_VALUE(assetList_, assetList) };
    inline DescribeAffectedAssetsResponseBody& setAssetList(vector<DescribeAffectedAssetsResponseBodyAssetList> && assetList) { DARABONBA_PTR_SET_RVALUE(assetList_, assetList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeAffectedAssetsResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeAffectedAssetsResponseBodyPageInfo) };
    inline DescribeAffectedAssetsResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeAffectedAssetsResponseBodyPageInfo) };
    inline DescribeAffectedAssetsResponseBody& setPageInfo(const DescribeAffectedAssetsResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeAffectedAssetsResponseBody& setPageInfo(DescribeAffectedAssetsResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAffectedAssetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the affected servers.
    std::shared_ptr<vector<DescribeAffectedAssetsResponseBodyAssetList>> assetList_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeAffectedAssetsResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
