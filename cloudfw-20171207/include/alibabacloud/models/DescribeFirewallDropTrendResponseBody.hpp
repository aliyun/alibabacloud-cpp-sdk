// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIREWALLDROPTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIREWALLDROPTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeFirewallDropTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFirewallDropTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(MaxDropSession, maxDropSession_);
      DARABONBA_PTR_TO_JSON(MaxDropTime, maxDropTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFirewallDropTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(MaxDropSession, maxDropSession_);
      DARABONBA_PTR_FROM_JSON(MaxDropTime, maxDropTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFirewallDropTrendResponseBody() = default ;
    DescribeFirewallDropTrendResponseBody(const DescribeFirewallDropTrendResponseBody &) = default ;
    DescribeFirewallDropTrendResponseBody(DescribeFirewallDropTrendResponseBody &&) = default ;
    DescribeFirewallDropTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFirewallDropTrendResponseBody() = default ;
    DescribeFirewallDropTrendResponseBody& operator=(const DescribeFirewallDropTrendResponseBody &) = default ;
    DescribeFirewallDropTrendResponseBody& operator=(DescribeFirewallDropTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(InternetDropSession, internetDropSession_);
        DARABONBA_PTR_TO_JSON(NatDropSession, natDropSession_);
        DARABONBA_PTR_TO_JSON(Time, time_);
        DARABONBA_PTR_TO_JSON(TotalDropSession, totalDropSession_);
        DARABONBA_PTR_TO_JSON(VpcDropSession, vpcDropSession_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(InternetDropSession, internetDropSession_);
        DARABONBA_PTR_FROM_JSON(NatDropSession, natDropSession_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
        DARABONBA_PTR_FROM_JSON(TotalDropSession, totalDropSession_);
        DARABONBA_PTR_FROM_JSON(VpcDropSession, vpcDropSession_);
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
      virtual bool empty() const override { return this->internetDropSession_ == nullptr
        && this->natDropSession_ == nullptr && this->time_ == nullptr && this->totalDropSession_ == nullptr && this->vpcDropSession_ == nullptr; };
      // internetDropSession Field Functions 
      bool hasInternetDropSession() const { return this->internetDropSession_ != nullptr;};
      void deleteInternetDropSession() { this->internetDropSession_ = nullptr;};
      inline int64_t getInternetDropSession() const { DARABONBA_PTR_GET_DEFAULT(internetDropSession_, 0L) };
      inline DataList& setInternetDropSession(int64_t internetDropSession) { DARABONBA_PTR_SET_VALUE(internetDropSession_, internetDropSession) };


      // natDropSession Field Functions 
      bool hasNatDropSession() const { return this->natDropSession_ != nullptr;};
      void deleteNatDropSession() { this->natDropSession_ = nullptr;};
      inline int64_t getNatDropSession() const { DARABONBA_PTR_GET_DEFAULT(natDropSession_, 0L) };
      inline DataList& setNatDropSession(int64_t natDropSession) { DARABONBA_PTR_SET_VALUE(natDropSession_, natDropSession) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
      inline DataList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      // totalDropSession Field Functions 
      bool hasTotalDropSession() const { return this->totalDropSession_ != nullptr;};
      void deleteTotalDropSession() { this->totalDropSession_ = nullptr;};
      inline int64_t getTotalDropSession() const { DARABONBA_PTR_GET_DEFAULT(totalDropSession_, 0L) };
      inline DataList& setTotalDropSession(int64_t totalDropSession) { DARABONBA_PTR_SET_VALUE(totalDropSession_, totalDropSession) };


      // vpcDropSession Field Functions 
      bool hasVpcDropSession() const { return this->vpcDropSession_ != nullptr;};
      void deleteVpcDropSession() { this->vpcDropSession_ = nullptr;};
      inline int64_t getVpcDropSession() const { DARABONBA_PTR_GET_DEFAULT(vpcDropSession_, 0L) };
      inline DataList& setVpcDropSession(int64_t vpcDropSession) { DARABONBA_PTR_SET_VALUE(vpcDropSession_, vpcDropSession) };


    protected:
      // The number of sessions blocked by the Internet firewall.
      shared_ptr<int64_t> internetDropSession_ {};
      // The number of sessions blocked by the NAT firewall.
      shared_ptr<int64_t> natDropSession_ {};
      // The time when the traffic occurred. The value is a UNIX timestamp in seconds.
      // 
      // If the data at this point in time has not been processed, the values of other fields are -1.
      shared_ptr<int64_t> time_ {};
      // The total number of sessions blocked by the firewall.
      shared_ptr<int64_t> totalDropSession_ {};
      // The number of sessions blocked by the VPC firewall.
      shared_ptr<int64_t> vpcDropSession_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->maxDropSession_ == nullptr && this->maxDropTime_ == nullptr && this->requestId_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeFirewallDropTrendResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeFirewallDropTrendResponseBody::DataList>) };
    inline vector<DescribeFirewallDropTrendResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeFirewallDropTrendResponseBody::DataList>) };
    inline DescribeFirewallDropTrendResponseBody& setDataList(const vector<DescribeFirewallDropTrendResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeFirewallDropTrendResponseBody& setDataList(vector<DescribeFirewallDropTrendResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // maxDropSession Field Functions 
    bool hasMaxDropSession() const { return this->maxDropSession_ != nullptr;};
    void deleteMaxDropSession() { this->maxDropSession_ = nullptr;};
    inline int64_t getMaxDropSession() const { DARABONBA_PTR_GET_DEFAULT(maxDropSession_, 0L) };
    inline DescribeFirewallDropTrendResponseBody& setMaxDropSession(int64_t maxDropSession) { DARABONBA_PTR_SET_VALUE(maxDropSession_, maxDropSession) };


    // maxDropTime Field Functions 
    bool hasMaxDropTime() const { return this->maxDropTime_ != nullptr;};
    void deleteMaxDropTime() { this->maxDropTime_ = nullptr;};
    inline int64_t getMaxDropTime() const { DARABONBA_PTR_GET_DEFAULT(maxDropTime_, 0L) };
    inline DescribeFirewallDropTrendResponseBody& setMaxDropTime(int64_t maxDropTime) { DARABONBA_PTR_SET_VALUE(maxDropTime_, maxDropTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFirewallDropTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data list.
    shared_ptr<vector<DescribeFirewallDropTrendResponseBody::DataList>> dataList_ {};
    // The maximum number of total blocked sessions.
    shared_ptr<int64_t> maxDropSession_ {};
    // The time when the maximum number of total blocked sessions occurred. The value is a UNIX timestamp in seconds, such as 1672502400.
    shared_ptr<int64_t> maxDropTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
