// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODSTATISRESPONSEBODYCDNDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODSTATISRESPONSEBODYCDNDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodStatisResponseBodyCdnData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodStatisResponseBodyCdnData& obj) { 
      DARABONBA_PTR_TO_JSON(Bps, bps_);
      DARABONBA_PTR_TO_JSON(Traffic, traffic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodStatisResponseBodyCdnData& obj) { 
      DARABONBA_PTR_FROM_JSON(Bps, bps_);
      DARABONBA_PTR_FROM_JSON(Traffic, traffic_);
    };
    DescribeVodStatisResponseBodyCdnData() = default ;
    DescribeVodStatisResponseBodyCdnData(const DescribeVodStatisResponseBodyCdnData &) = default ;
    DescribeVodStatisResponseBodyCdnData(DescribeVodStatisResponseBodyCdnData &&) = default ;
    DescribeVodStatisResponseBodyCdnData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodStatisResponseBodyCdnData() = default ;
    DescribeVodStatisResponseBodyCdnData& operator=(const DescribeVodStatisResponseBodyCdnData &) = default ;
    DescribeVodStatisResponseBodyCdnData& operator=(DescribeVodStatisResponseBodyCdnData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bps_ != nullptr
        && this->traffic_ != nullptr; };
    // bps Field Functions 
    bool hasBps() const { return this->bps_ != nullptr;};
    void deleteBps() { this->bps_ = nullptr;};
    inline float bps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0.0) };
    inline DescribeVodStatisResponseBodyCdnData& setBps(float bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // traffic Field Functions 
    bool hasTraffic() const { return this->traffic_ != nullptr;};
    void deleteTraffic() { this->traffic_ = nullptr;};
    inline int64_t traffic() const { DARABONBA_PTR_GET_DEFAULT(traffic_, 0L) };
    inline DescribeVodStatisResponseBodyCdnData& setTraffic(int64_t traffic) { DARABONBA_PTR_SET_VALUE(traffic_, traffic) };


  protected:
    std::shared_ptr<float> bps_ = nullptr;
    std::shared_ptr<int64_t> traffic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
