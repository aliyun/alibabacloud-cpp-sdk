// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINPVUVDATARESPONSEBODYPVUVDATAINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINPVUVDATARESPONSEBODYPVUVDATAINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos& obj) { 
      DARABONBA_PTR_TO_JSON(PvUvDataInfo, pvUvDataInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(PvUvDataInfo, pvUvDataInfo_);
    };
    DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos() = default ;
    DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos(const DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos &) = default ;
    DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos(DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos &&) = default ;
    DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos() = default ;
    DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos& operator=(const DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos &) = default ;
    DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos& operator=(DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pvUvDataInfo_ != nullptr; };
    // pvUvDataInfo Field Functions 
    bool hasPvUvDataInfo() const { return this->pvUvDataInfo_ != nullptr;};
    void deletePvUvDataInfo() { this->pvUvDataInfo_ = nullptr;};
    inline const vector<Models::DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo> & pvUvDataInfo() const { DARABONBA_PTR_GET_CONST(pvUvDataInfo_, vector<Models::DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo>) };
    inline vector<Models::DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo> pvUvDataInfo() { DARABONBA_PTR_GET(pvUvDataInfo_, vector<Models::DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo>) };
    inline DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos& setPvUvDataInfo(const vector<Models::DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo> & pvUvDataInfo) { DARABONBA_PTR_SET_VALUE(pvUvDataInfo_, pvUvDataInfo) };
    inline DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos& setPvUvDataInfo(vector<Models::DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo> && pvUvDataInfo) { DARABONBA_PTR_SET_RVALUE(pvUvDataInfo_, pvUvDataInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo>> pvUvDataInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
