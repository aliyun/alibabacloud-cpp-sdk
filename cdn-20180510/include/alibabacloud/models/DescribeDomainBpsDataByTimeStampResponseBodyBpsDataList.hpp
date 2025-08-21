// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSDATABYTIMESTAMPRESPONSEBODYBPSDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSDATABYTIMESTAMPRESPONSEBODYBPSDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList& obj) { 
      DARABONBA_PTR_TO_JSON(BpsDataModel, bpsDataModel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(BpsDataModel, bpsDataModel_);
    };
    DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList() = default ;
    DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList(const DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList &) = default ;
    DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList(DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList &&) = default ;
    DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList() = default ;
    DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList& operator=(const DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList &) = default ;
    DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList& operator=(DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bpsDataModel_ != nullptr; };
    // bpsDataModel Field Functions 
    bool hasBpsDataModel() const { return this->bpsDataModel_ != nullptr;};
    void deleteBpsDataModel() { this->bpsDataModel_ = nullptr;};
    inline const vector<Models::DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel> & bpsDataModel() const { DARABONBA_PTR_GET_CONST(bpsDataModel_, vector<Models::DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel>) };
    inline vector<Models::DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel> bpsDataModel() { DARABONBA_PTR_GET(bpsDataModel_, vector<Models::DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel>) };
    inline DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList& setBpsDataModel(const vector<Models::DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel> & bpsDataModel) { DARABONBA_PTR_SET_VALUE(bpsDataModel_, bpsDataModel) };
    inline DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList& setBpsDataModel(vector<Models::DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel> && bpsDataModel) { DARABONBA_PTR_SET_RVALUE(bpsDataModel_, bpsDataModel) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel>> bpsDataModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
