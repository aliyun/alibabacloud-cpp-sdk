// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINMAX95BPSDATARESPONSEBODYDETAILDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINMAX95BPSDATARESPONSEBODYDETAILDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainMax95BpsDataResponseBodyDetailData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainMax95BpsDataResponseBodyDetailData& obj) { 
      DARABONBA_PTR_TO_JSON(Max95Detail, max95Detail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainMax95BpsDataResponseBodyDetailData& obj) { 
      DARABONBA_PTR_FROM_JSON(Max95Detail, max95Detail_);
    };
    DescribeVodDomainMax95BpsDataResponseBodyDetailData() = default ;
    DescribeVodDomainMax95BpsDataResponseBodyDetailData(const DescribeVodDomainMax95BpsDataResponseBodyDetailData &) = default ;
    DescribeVodDomainMax95BpsDataResponseBodyDetailData(DescribeVodDomainMax95BpsDataResponseBodyDetailData &&) = default ;
    DescribeVodDomainMax95BpsDataResponseBodyDetailData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainMax95BpsDataResponseBodyDetailData() = default ;
    DescribeVodDomainMax95BpsDataResponseBodyDetailData& operator=(const DescribeVodDomainMax95BpsDataResponseBodyDetailData &) = default ;
    DescribeVodDomainMax95BpsDataResponseBodyDetailData& operator=(DescribeVodDomainMax95BpsDataResponseBodyDetailData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->max95Detail_ == nullptr; };
    // max95Detail Field Functions 
    bool hasMax95Detail() const { return this->max95Detail_ != nullptr;};
    void deleteMax95Detail() { this->max95Detail_ = nullptr;};
    inline const vector<Models::DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail> & max95Detail() const { DARABONBA_PTR_GET_CONST(max95Detail_, vector<Models::DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail>) };
    inline vector<Models::DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail> max95Detail() { DARABONBA_PTR_GET(max95Detail_, vector<Models::DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail>) };
    inline DescribeVodDomainMax95BpsDataResponseBodyDetailData& setMax95Detail(const vector<Models::DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail> & max95Detail) { DARABONBA_PTR_SET_VALUE(max95Detail_, max95Detail) };
    inline DescribeVodDomainMax95BpsDataResponseBodyDetailData& setMax95Detail(vector<Models::DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail> && max95Detail) { DARABONBA_PTR_SET_RVALUE(max95Detail_, max95Detail) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail>> max95Detail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
