// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDOMAINDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDOMAINDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOutgoingDomainDetailResponseBodyAssetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingDomainDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationNameList, applicationNameList_);
      DARABONBA_PTR_TO_JSON(AssetList, assetList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationNameList, applicationNameList_);
      DARABONBA_PTR_FROM_JSON(AssetList, assetList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeOutgoingDomainDetailResponseBody() = default ;
    DescribeOutgoingDomainDetailResponseBody(const DescribeOutgoingDomainDetailResponseBody &) = default ;
    DescribeOutgoingDomainDetailResponseBody(DescribeOutgoingDomainDetailResponseBody &&) = default ;
    DescribeOutgoingDomainDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDomainDetailResponseBody() = default ;
    DescribeOutgoingDomainDetailResponseBody& operator=(const DescribeOutgoingDomainDetailResponseBody &) = default ;
    DescribeOutgoingDomainDetailResponseBody& operator=(DescribeOutgoingDomainDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationNameList_ == nullptr
        && return this->assetList_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // applicationNameList Field Functions 
    bool hasApplicationNameList() const { return this->applicationNameList_ != nullptr;};
    void deleteApplicationNameList() { this->applicationNameList_ = nullptr;};
    inline const vector<string> & applicationNameList() const { DARABONBA_PTR_GET_CONST(applicationNameList_, vector<string>) };
    inline vector<string> applicationNameList() { DARABONBA_PTR_GET(applicationNameList_, vector<string>) };
    inline DescribeOutgoingDomainDetailResponseBody& setApplicationNameList(const vector<string> & applicationNameList) { DARABONBA_PTR_SET_VALUE(applicationNameList_, applicationNameList) };
    inline DescribeOutgoingDomainDetailResponseBody& setApplicationNameList(vector<string> && applicationNameList) { DARABONBA_PTR_SET_RVALUE(applicationNameList_, applicationNameList) };


    // assetList Field Functions 
    bool hasAssetList() const { return this->assetList_ != nullptr;};
    void deleteAssetList() { this->assetList_ = nullptr;};
    inline const vector<DescribeOutgoingDomainDetailResponseBodyAssetList> & assetList() const { DARABONBA_PTR_GET_CONST(assetList_, vector<DescribeOutgoingDomainDetailResponseBodyAssetList>) };
    inline vector<DescribeOutgoingDomainDetailResponseBodyAssetList> assetList() { DARABONBA_PTR_GET(assetList_, vector<DescribeOutgoingDomainDetailResponseBodyAssetList>) };
    inline DescribeOutgoingDomainDetailResponseBody& setAssetList(const vector<DescribeOutgoingDomainDetailResponseBodyAssetList> & assetList) { DARABONBA_PTR_SET_VALUE(assetList_, assetList) };
    inline DescribeOutgoingDomainDetailResponseBody& setAssetList(vector<DescribeOutgoingDomainDetailResponseBodyAssetList> && assetList) { DARABONBA_PTR_SET_RVALUE(assetList_, assetList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOutgoingDomainDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeOutgoingDomainDetailResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<string>> applicationNameList_ = nullptr;
    std::shared_ptr<vector<DescribeOutgoingDomainDetailResponseBodyAssetList>> assetList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
