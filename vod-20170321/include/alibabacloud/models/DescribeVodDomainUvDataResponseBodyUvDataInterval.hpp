// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINUVDATARESPONSEBODYUVDATAINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINUVDATARESPONSEBODYUVDATAINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainUvDataResponseBodyUvDataInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainUvDataResponseBodyUvDataInterval& obj) { 
      DARABONBA_PTR_TO_JSON(UvDataInterval, uvDataInterval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainUvDataResponseBodyUvDataInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(UvDataInterval, uvDataInterval_);
    };
    DescribeVodDomainUvDataResponseBodyUvDataInterval() = default ;
    DescribeVodDomainUvDataResponseBodyUvDataInterval(const DescribeVodDomainUvDataResponseBodyUvDataInterval &) = default ;
    DescribeVodDomainUvDataResponseBodyUvDataInterval(DescribeVodDomainUvDataResponseBodyUvDataInterval &&) = default ;
    DescribeVodDomainUvDataResponseBodyUvDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainUvDataResponseBodyUvDataInterval() = default ;
    DescribeVodDomainUvDataResponseBodyUvDataInterval& operator=(const DescribeVodDomainUvDataResponseBodyUvDataInterval &) = default ;
    DescribeVodDomainUvDataResponseBodyUvDataInterval& operator=(DescribeVodDomainUvDataResponseBodyUvDataInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->uvDataInterval_ != nullptr; };
    // uvDataInterval Field Functions 
    bool hasUvDataInterval() const { return this->uvDataInterval_ != nullptr;};
    void deleteUvDataInterval() { this->uvDataInterval_ = nullptr;};
    inline const vector<Models::DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval> & uvDataInterval() const { DARABONBA_PTR_GET_CONST(uvDataInterval_, vector<Models::DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval>) };
    inline vector<Models::DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval> uvDataInterval() { DARABONBA_PTR_GET(uvDataInterval_, vector<Models::DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval>) };
    inline DescribeVodDomainUvDataResponseBodyUvDataInterval& setUvDataInterval(const vector<Models::DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval> & uvDataInterval) { DARABONBA_PTR_SET_VALUE(uvDataInterval_, uvDataInterval) };
    inline DescribeVodDomainUvDataResponseBodyUvDataInterval& setUvDataInterval(vector<Models::DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval> && uvDataInterval) { DARABONBA_PTR_SET_RVALUE(uvDataInterval_, uvDataInterval) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval>> uvDataInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
