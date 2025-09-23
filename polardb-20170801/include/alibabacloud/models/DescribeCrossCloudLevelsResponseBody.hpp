// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSCLOUDLEVELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSCLOUDLEVELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeCrossCloudLevelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossCloudLevelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CrossCloudLevelList, crossCloudLevelList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossCloudLevelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossCloudLevelList, crossCloudLevelList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCrossCloudLevelsResponseBody() = default ;
    DescribeCrossCloudLevelsResponseBody(const DescribeCrossCloudLevelsResponseBody &) = default ;
    DescribeCrossCloudLevelsResponseBody(DescribeCrossCloudLevelsResponseBody &&) = default ;
    DescribeCrossCloudLevelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossCloudLevelsResponseBody() = default ;
    DescribeCrossCloudLevelsResponseBody& operator=(const DescribeCrossCloudLevelsResponseBody &) = default ;
    DescribeCrossCloudLevelsResponseBody& operator=(DescribeCrossCloudLevelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->crossCloudLevelList_ != nullptr
        && this->requestId_ != nullptr; };
    // crossCloudLevelList Field Functions 
    bool hasCrossCloudLevelList() const { return this->crossCloudLevelList_ != nullptr;};
    void deleteCrossCloudLevelList() { this->crossCloudLevelList_ = nullptr;};
    inline const vector<DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList> & crossCloudLevelList() const { DARABONBA_PTR_GET_CONST(crossCloudLevelList_, vector<DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList>) };
    inline vector<DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList> crossCloudLevelList() { DARABONBA_PTR_GET(crossCloudLevelList_, vector<DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList>) };
    inline DescribeCrossCloudLevelsResponseBody& setCrossCloudLevelList(const vector<DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList> & crossCloudLevelList) { DARABONBA_PTR_SET_VALUE(crossCloudLevelList_, crossCloudLevelList) };
    inline DescribeCrossCloudLevelsResponseBody& setCrossCloudLevelList(vector<DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList> && crossCloudLevelList) { DARABONBA_PTR_SET_RVALUE(crossCloudLevelList_, crossCloudLevelList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCrossCloudLevelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList>> crossCloudLevelList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
