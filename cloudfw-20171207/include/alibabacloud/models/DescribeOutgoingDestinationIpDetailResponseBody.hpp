// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONIPDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONIPDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOutgoingDestinationIPDetailResponseBodyAssetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingDestinationIPDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDestinationIPDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetList, assetList_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
      DARABONBA_PTR_TO_JSON(LocationName, locationName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDestinationIPDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetList, assetList_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
      DARABONBA_PTR_FROM_JSON(LocationName, locationName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeOutgoingDestinationIPDetailResponseBody() = default ;
    DescribeOutgoingDestinationIPDetailResponseBody(const DescribeOutgoingDestinationIPDetailResponseBody &) = default ;
    DescribeOutgoingDestinationIPDetailResponseBody(DescribeOutgoingDestinationIPDetailResponseBody &&) = default ;
    DescribeOutgoingDestinationIPDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDestinationIPDetailResponseBody() = default ;
    DescribeOutgoingDestinationIPDetailResponseBody& operator=(const DescribeOutgoingDestinationIPDetailResponseBody &) = default ;
    DescribeOutgoingDestinationIPDetailResponseBody& operator=(DescribeOutgoingDestinationIPDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetList_ == nullptr
        && return this->ispName_ == nullptr && return this->locationName_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // assetList Field Functions 
    bool hasAssetList() const { return this->assetList_ != nullptr;};
    void deleteAssetList() { this->assetList_ = nullptr;};
    inline const vector<DescribeOutgoingDestinationIPDetailResponseBodyAssetList> & assetList() const { DARABONBA_PTR_GET_CONST(assetList_, vector<DescribeOutgoingDestinationIPDetailResponseBodyAssetList>) };
    inline vector<DescribeOutgoingDestinationIPDetailResponseBodyAssetList> assetList() { DARABONBA_PTR_GET(assetList_, vector<DescribeOutgoingDestinationIPDetailResponseBodyAssetList>) };
    inline DescribeOutgoingDestinationIPDetailResponseBody& setAssetList(const vector<DescribeOutgoingDestinationIPDetailResponseBodyAssetList> & assetList) { DARABONBA_PTR_SET_VALUE(assetList_, assetList) };
    inline DescribeOutgoingDestinationIPDetailResponseBody& setAssetList(vector<DescribeOutgoingDestinationIPDetailResponseBodyAssetList> && assetList) { DARABONBA_PTR_SET_RVALUE(assetList_, assetList) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string ispName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline DescribeOutgoingDestinationIPDetailResponseBody& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


    // locationName Field Functions 
    bool hasLocationName() const { return this->locationName_ != nullptr;};
    void deleteLocationName() { this->locationName_ = nullptr;};
    inline string locationName() const { DARABONBA_PTR_GET_DEFAULT(locationName_, "") };
    inline DescribeOutgoingDestinationIPDetailResponseBody& setLocationName(string locationName) { DARABONBA_PTR_SET_VALUE(locationName_, locationName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOutgoingDestinationIPDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeOutgoingDestinationIPDetailResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<DescribeOutgoingDestinationIPDetailResponseBodyAssetList>> assetList_ = nullptr;
    std::shared_ptr<string> ispName_ = nullptr;
    std::shared_ptr<string> locationName_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
