// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLDROPTRAFFICTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLDROPTRAFFICTRENDRESPONSEBODY_HPP_
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
  class DescribeNatFirewallDropTrafficTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallDropTrafficTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(DropSessionMax, dropSessionMax_);
      DARABONBA_PTR_TO_JSON(DropSessionMaxTime, dropSessionMaxTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallDropTrafficTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(DropSessionMax, dropSessionMax_);
      DARABONBA_PTR_FROM_JSON(DropSessionMaxTime, dropSessionMaxTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNatFirewallDropTrafficTrendResponseBody() = default ;
    DescribeNatFirewallDropTrafficTrendResponseBody(const DescribeNatFirewallDropTrafficTrendResponseBody &) = default ;
    DescribeNatFirewallDropTrafficTrendResponseBody(DescribeNatFirewallDropTrafficTrendResponseBody &&) = default ;
    DescribeNatFirewallDropTrafficTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallDropTrafficTrendResponseBody() = default ;
    DescribeNatFirewallDropTrafficTrendResponseBody& operator=(const DescribeNatFirewallDropTrafficTrendResponseBody &) = default ;
    DescribeNatFirewallDropTrafficTrendResponseBody& operator=(DescribeNatFirewallDropTrafficTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(DropSession, dropSession_);
        DARABONBA_PTR_TO_JSON(Time, time_);
        DARABONBA_PTR_TO_JSON(TotalSession, totalSession_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(DropSession, dropSession_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
        DARABONBA_PTR_FROM_JSON(TotalSession, totalSession_);
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
      virtual bool empty() const override { return this->dropSession_ == nullptr
        && this->time_ == nullptr && this->totalSession_ == nullptr; };
      // dropSession Field Functions 
      bool hasDropSession() const { return this->dropSession_ != nullptr;};
      void deleteDropSession() { this->dropSession_ = nullptr;};
      inline int64_t getDropSession() const { DARABONBA_PTR_GET_DEFAULT(dropSession_, 0L) };
      inline DataList& setDropSession(int64_t dropSession) { DARABONBA_PTR_SET_VALUE(dropSession_, dropSession) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
      inline DataList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      // totalSession Field Functions 
      bool hasTotalSession() const { return this->totalSession_ != nullptr;};
      void deleteTotalSession() { this->totalSession_ = nullptr;};
      inline int64_t getTotalSession() const { DARABONBA_PTR_GET_DEFAULT(totalSession_, 0L) };
      inline DataList& setTotalSession(int64_t totalSession) { DARABONBA_PTR_SET_VALUE(totalSession_, totalSession) };


    protected:
      shared_ptr<int64_t> dropSession_ {};
      shared_ptr<int64_t> time_ {};
      shared_ptr<int64_t> totalSession_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->dropSessionMax_ == nullptr && this->dropSessionMaxTime_ == nullptr && this->requestId_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeNatFirewallDropTrafficTrendResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeNatFirewallDropTrafficTrendResponseBody::DataList>) };
    inline vector<DescribeNatFirewallDropTrafficTrendResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeNatFirewallDropTrafficTrendResponseBody::DataList>) };
    inline DescribeNatFirewallDropTrafficTrendResponseBody& setDataList(const vector<DescribeNatFirewallDropTrafficTrendResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeNatFirewallDropTrafficTrendResponseBody& setDataList(vector<DescribeNatFirewallDropTrafficTrendResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // dropSessionMax Field Functions 
    bool hasDropSessionMax() const { return this->dropSessionMax_ != nullptr;};
    void deleteDropSessionMax() { this->dropSessionMax_ = nullptr;};
    inline int64_t getDropSessionMax() const { DARABONBA_PTR_GET_DEFAULT(dropSessionMax_, 0L) };
    inline DescribeNatFirewallDropTrafficTrendResponseBody& setDropSessionMax(int64_t dropSessionMax) { DARABONBA_PTR_SET_VALUE(dropSessionMax_, dropSessionMax) };


    // dropSessionMaxTime Field Functions 
    bool hasDropSessionMaxTime() const { return this->dropSessionMaxTime_ != nullptr;};
    void deleteDropSessionMaxTime() { this->dropSessionMaxTime_ = nullptr;};
    inline string getDropSessionMaxTime() const { DARABONBA_PTR_GET_DEFAULT(dropSessionMaxTime_, "") };
    inline DescribeNatFirewallDropTrafficTrendResponseBody& setDropSessionMaxTime(string dropSessionMaxTime) { DARABONBA_PTR_SET_VALUE(dropSessionMaxTime_, dropSessionMaxTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNatFirewallDropTrafficTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeNatFirewallDropTrafficTrendResponseBody::DataList>> dataList_ {};
    shared_ptr<int64_t> dropSessionMax_ {};
    shared_ptr<string> dropSessionMaxTime_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
