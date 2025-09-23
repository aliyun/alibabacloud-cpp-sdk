// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSCLOUDREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSCLOUDREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCrossCloudRegionResponseBodyCrossCloudRegionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeCrossCloudRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossCloudRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CrossCloudRegionList, crossCloudRegionList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossCloudRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossCloudRegionList, crossCloudRegionList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCrossCloudRegionResponseBody() = default ;
    DescribeCrossCloudRegionResponseBody(const DescribeCrossCloudRegionResponseBody &) = default ;
    DescribeCrossCloudRegionResponseBody(DescribeCrossCloudRegionResponseBody &&) = default ;
    DescribeCrossCloudRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossCloudRegionResponseBody() = default ;
    DescribeCrossCloudRegionResponseBody& operator=(const DescribeCrossCloudRegionResponseBody &) = default ;
    DescribeCrossCloudRegionResponseBody& operator=(DescribeCrossCloudRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->crossCloudRegionList_ != nullptr
        && this->requestId_ != nullptr; };
    // crossCloudRegionList Field Functions 
    bool hasCrossCloudRegionList() const { return this->crossCloudRegionList_ != nullptr;};
    void deleteCrossCloudRegionList() { this->crossCloudRegionList_ = nullptr;};
    inline const vector<DescribeCrossCloudRegionResponseBodyCrossCloudRegionList> & crossCloudRegionList() const { DARABONBA_PTR_GET_CONST(crossCloudRegionList_, vector<DescribeCrossCloudRegionResponseBodyCrossCloudRegionList>) };
    inline vector<DescribeCrossCloudRegionResponseBodyCrossCloudRegionList> crossCloudRegionList() { DARABONBA_PTR_GET(crossCloudRegionList_, vector<DescribeCrossCloudRegionResponseBodyCrossCloudRegionList>) };
    inline DescribeCrossCloudRegionResponseBody& setCrossCloudRegionList(const vector<DescribeCrossCloudRegionResponseBodyCrossCloudRegionList> & crossCloudRegionList) { DARABONBA_PTR_SET_VALUE(crossCloudRegionList_, crossCloudRegionList) };
    inline DescribeCrossCloudRegionResponseBody& setCrossCloudRegionList(vector<DescribeCrossCloudRegionResponseBodyCrossCloudRegionList> && crossCloudRegionList) { DARABONBA_PTR_SET_RVALUE(crossCloudRegionList_, crossCloudRegionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCrossCloudRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeCrossCloudRegionResponseBodyCrossCloudRegionList>> crossCloudRegionList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
