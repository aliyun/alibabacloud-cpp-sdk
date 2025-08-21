// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBREPORTTOPIPRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBREPORTTOPIPRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebReportTopIpResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebReportTopIpResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AreaId, areaId_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebReportTopIpResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaId, areaId_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeWebReportTopIpResponseBodyDataList() = default ;
    DescribeWebReportTopIpResponseBodyDataList(const DescribeWebReportTopIpResponseBodyDataList &) = default ;
    DescribeWebReportTopIpResponseBodyDataList(DescribeWebReportTopIpResponseBodyDataList &&) = default ;
    DescribeWebReportTopIpResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebReportTopIpResponseBodyDataList() = default ;
    DescribeWebReportTopIpResponseBodyDataList& operator=(const DescribeWebReportTopIpResponseBodyDataList &) = default ;
    DescribeWebReportTopIpResponseBodyDataList& operator=(DescribeWebReportTopIpResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->areaId_ != nullptr
        && this->count_ != nullptr && this->isp_ != nullptr && this->sourceIp_ != nullptr; };
    // areaId Field Functions 
    bool hasAreaId() const { return this->areaId_ != nullptr;};
    void deleteAreaId() { this->areaId_ = nullptr;};
    inline string areaId() const { DARABONBA_PTR_GET_DEFAULT(areaId_, "") };
    inline DescribeWebReportTopIpResponseBodyDataList& setAreaId(string areaId) { DARABONBA_PTR_SET_VALUE(areaId_, areaId) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeWebReportTopIpResponseBodyDataList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeWebReportTopIpResponseBodyDataList& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeWebReportTopIpResponseBodyDataList& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The ID of the location.
    std::shared_ptr<string> areaId_ = nullptr;
    // The number of entries returned.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The Internet service provider (ISP) for the attack. Valid values:
    // 
    // *   **100017**: China Telecom
    // *   **100026**: China Unicom
    // *   **100025**: China Mobile
    // *   **100027**: China Education and Research Network
    // *   **100020**: China Mobile Tietong
    // *   **1000143**: Dr.Peng Telecom & Media Group
    // *   **100080**: Beijing Gehua CATV Network
    // *   **1000139**: National Radio and Television Administration
    // *   **100023**: Oriental Cable Network
    // *   **100063**: Founder Broadband
    // *   **1000337**: China Internet Exchange
    // *   **100021**: 21Vianet Group
    // *   **1000333**: Wasu Media Holding
    // *   **100093**: Wangsu Science & Technology
    // *   **1000401**: Tencent
    // *   **100099**: Baidu
    // *   **1000323**: Alibaba Cloud
    // *   **100098**: Alibaba
    std::shared_ptr<string> isp_ = nullptr;
    // The source IP address.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
