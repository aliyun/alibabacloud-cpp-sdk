// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINPVUVDATARESPONSEBODYPVUVDATAINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINPVUVDATARESPONSEBODYPVUVDATAINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos& obj) { 
      DARABONBA_PTR_TO_JSON(PvUvDataInfo, pvUvDataInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(PvUvDataInfo, pvUvDataInfo_);
    };
    DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos() = default ;
    DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos(const DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos &) = default ;
    DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos(DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos &&) = default ;
    DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos() = default ;
    DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos& operator=(const DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos &) = default ;
    DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos& operator=(DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pvUvDataInfo_ == nullptr; };
    // pvUvDataInfo Field Functions 
    bool hasPvUvDataInfo() const { return this->pvUvDataInfo_ != nullptr;};
    void deletePvUvDataInfo() { this->pvUvDataInfo_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo> & pvUvDataInfo() const { DARABONBA_PTR_GET_CONST(pvUvDataInfo_, vector<Models::DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo>) };
    inline vector<Models::DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo> pvUvDataInfo() { DARABONBA_PTR_GET(pvUvDataInfo_, vector<Models::DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo>) };
    inline DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos& setPvUvDataInfo(const vector<Models::DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo> & pvUvDataInfo) { DARABONBA_PTR_SET_VALUE(pvUvDataInfo_, pvUvDataInfo) };
    inline DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos& setPvUvDataInfo(vector<Models::DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo> && pvUvDataInfo) { DARABONBA_PTR_SET_RVALUE(pvUvDataInfo_, pvUvDataInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo>> pvUvDataInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
