// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBREPORTTOPIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBREPORTTOPIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebReportTopIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebReportTopIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebReportTopIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeWebReportTopIpResponseBody() = default ;
    DescribeWebReportTopIpResponseBody(const DescribeWebReportTopIpResponseBody &) = default ;
    DescribeWebReportTopIpResponseBody(DescribeWebReportTopIpResponseBody &&) = default ;
    DescribeWebReportTopIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebReportTopIpResponseBody() = default ;
    DescribeWebReportTopIpResponseBody& operator=(const DescribeWebReportTopIpResponseBody &) = default ;
    DescribeWebReportTopIpResponseBody& operator=(DescribeWebReportTopIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(AreaId, areaId_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Isp, isp_);
        DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(AreaId, areaId_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Isp, isp_);
        DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      };
      DataList() = default ;
      DataList(const DataList &) = default ;
      DataList(DataList &&) = default ;
      DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataList() = default ;
      DataList& operator=(const DataList &) = default ;
      DataList& operator=(DataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->areaId_ == nullptr
        && this->count_ == nullptr && this->isp_ == nullptr && this->sourceIp_ == nullptr; };
      // areaId Field Functions 
      bool hasAreaId() const { return this->areaId_ != nullptr;};
      void deleteAreaId() { this->areaId_ = nullptr;};
      inline string getAreaId() const { DARABONBA_PTR_GET_DEFAULT(areaId_, "") };
      inline DataList& setAreaId(string areaId) { DARABONBA_PTR_SET_VALUE(areaId_, areaId) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline DataList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
      inline DataList& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


      // sourceIp Field Functions 
      bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
      void deleteSourceIp() { this->sourceIp_ = nullptr;};
      inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
      inline DataList& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    protected:
      // The ID of the location.
      shared_ptr<string> areaId_ {};
      // The number of entries returned.
      shared_ptr<int64_t> count_ {};
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
      shared_ptr<string> isp_ {};
      // The source IP address.
      shared_ptr<string> sourceIp_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->requestId_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeWebReportTopIpResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeWebReportTopIpResponseBody::DataList>) };
    inline vector<DescribeWebReportTopIpResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeWebReportTopIpResponseBody::DataList>) };
    inline DescribeWebReportTopIpResponseBody& setDataList(const vector<DescribeWebReportTopIpResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeWebReportTopIpResponseBody& setDataList(vector<DescribeWebReportTopIpResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebReportTopIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the IP addresses.
    shared_ptr<vector<DescribeWebReportTopIpResponseBody::DataList>> dataList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
