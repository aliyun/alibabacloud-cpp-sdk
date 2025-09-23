// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSCLOUDREGIONMAPPINGTOALIYUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSCLOUDREGIONMAPPINGTOALIYUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCrossCloudRegionMappingToAliyunResponseBodyCrossCloudRegionMappingList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeCrossCloudRegionMappingToAliyunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossCloudRegionMappingToAliyunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CrossCloudRegionMappingList, crossCloudRegionMappingList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossCloudRegionMappingToAliyunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossCloudRegionMappingList, crossCloudRegionMappingList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCrossCloudRegionMappingToAliyunResponseBody() = default ;
    DescribeCrossCloudRegionMappingToAliyunResponseBody(const DescribeCrossCloudRegionMappingToAliyunResponseBody &) = default ;
    DescribeCrossCloudRegionMappingToAliyunResponseBody(DescribeCrossCloudRegionMappingToAliyunResponseBody &&) = default ;
    DescribeCrossCloudRegionMappingToAliyunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossCloudRegionMappingToAliyunResponseBody() = default ;
    DescribeCrossCloudRegionMappingToAliyunResponseBody& operator=(const DescribeCrossCloudRegionMappingToAliyunResponseBody &) = default ;
    DescribeCrossCloudRegionMappingToAliyunResponseBody& operator=(DescribeCrossCloudRegionMappingToAliyunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->crossCloudRegionMappingList_ != nullptr
        && this->requestId_ != nullptr; };
    // crossCloudRegionMappingList Field Functions 
    bool hasCrossCloudRegionMappingList() const { return this->crossCloudRegionMappingList_ != nullptr;};
    void deleteCrossCloudRegionMappingList() { this->crossCloudRegionMappingList_ = nullptr;};
    inline const vector<DescribeCrossCloudRegionMappingToAliyunResponseBodyCrossCloudRegionMappingList> & crossCloudRegionMappingList() const { DARABONBA_PTR_GET_CONST(crossCloudRegionMappingList_, vector<DescribeCrossCloudRegionMappingToAliyunResponseBodyCrossCloudRegionMappingList>) };
    inline vector<DescribeCrossCloudRegionMappingToAliyunResponseBodyCrossCloudRegionMappingList> crossCloudRegionMappingList() { DARABONBA_PTR_GET(crossCloudRegionMappingList_, vector<DescribeCrossCloudRegionMappingToAliyunResponseBodyCrossCloudRegionMappingList>) };
    inline DescribeCrossCloudRegionMappingToAliyunResponseBody& setCrossCloudRegionMappingList(const vector<DescribeCrossCloudRegionMappingToAliyunResponseBodyCrossCloudRegionMappingList> & crossCloudRegionMappingList) { DARABONBA_PTR_SET_VALUE(crossCloudRegionMappingList_, crossCloudRegionMappingList) };
    inline DescribeCrossCloudRegionMappingToAliyunResponseBody& setCrossCloudRegionMappingList(vector<DescribeCrossCloudRegionMappingToAliyunResponseBodyCrossCloudRegionMappingList> && crossCloudRegionMappingList) { DARABONBA_PTR_SET_RVALUE(crossCloudRegionMappingList_, crossCloudRegionMappingList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCrossCloudRegionMappingToAliyunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeCrossCloudRegionMappingToAliyunResponseBodyCrossCloudRegionMappingList>> crossCloudRegionMappingList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
