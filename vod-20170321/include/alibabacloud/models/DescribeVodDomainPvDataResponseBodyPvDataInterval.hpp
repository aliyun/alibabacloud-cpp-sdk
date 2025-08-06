// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINPVDATARESPONSEBODYPVDATAINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINPVDATARESPONSEBODYPVDATAINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainPvDataResponseBodyPvDataIntervalPvDataInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainPvDataResponseBodyPvDataInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainPvDataResponseBodyPvDataInterval& obj) { 
      DARABONBA_PTR_TO_JSON(PvDataInterval, pvDataInterval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainPvDataResponseBodyPvDataInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(PvDataInterval, pvDataInterval_);
    };
    DescribeVodDomainPvDataResponseBodyPvDataInterval() = default ;
    DescribeVodDomainPvDataResponseBodyPvDataInterval(const DescribeVodDomainPvDataResponseBodyPvDataInterval &) = default ;
    DescribeVodDomainPvDataResponseBodyPvDataInterval(DescribeVodDomainPvDataResponseBodyPvDataInterval &&) = default ;
    DescribeVodDomainPvDataResponseBodyPvDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainPvDataResponseBodyPvDataInterval() = default ;
    DescribeVodDomainPvDataResponseBodyPvDataInterval& operator=(const DescribeVodDomainPvDataResponseBodyPvDataInterval &) = default ;
    DescribeVodDomainPvDataResponseBodyPvDataInterval& operator=(DescribeVodDomainPvDataResponseBodyPvDataInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pvDataInterval_ != nullptr; };
    // pvDataInterval Field Functions 
    bool hasPvDataInterval() const { return this->pvDataInterval_ != nullptr;};
    void deletePvDataInterval() { this->pvDataInterval_ = nullptr;};
    inline const vector<Models::DescribeVodDomainPvDataResponseBodyPvDataIntervalPvDataInterval> & pvDataInterval() const { DARABONBA_PTR_GET_CONST(pvDataInterval_, vector<Models::DescribeVodDomainPvDataResponseBodyPvDataIntervalPvDataInterval>) };
    inline vector<Models::DescribeVodDomainPvDataResponseBodyPvDataIntervalPvDataInterval> pvDataInterval() { DARABONBA_PTR_GET(pvDataInterval_, vector<Models::DescribeVodDomainPvDataResponseBodyPvDataIntervalPvDataInterval>) };
    inline DescribeVodDomainPvDataResponseBodyPvDataInterval& setPvDataInterval(const vector<Models::DescribeVodDomainPvDataResponseBodyPvDataIntervalPvDataInterval> & pvDataInterval) { DARABONBA_PTR_SET_VALUE(pvDataInterval_, pvDataInterval) };
    inline DescribeVodDomainPvDataResponseBodyPvDataInterval& setPvDataInterval(vector<Models::DescribeVodDomainPvDataResponseBodyPvDataIntervalPvDataInterval> && pvDataInterval) { DARABONBA_PTR_SET_RVALUE(pvDataInterval_, pvDataInterval) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainPvDataResponseBodyPvDataIntervalPvDataInterval>> pvDataInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
