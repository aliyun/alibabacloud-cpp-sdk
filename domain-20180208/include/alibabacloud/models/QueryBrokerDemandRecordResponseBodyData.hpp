// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBROKERDEMANDRECORDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYBROKERDEMANDRECORDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryBrokerDemandRecordResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBrokerDemandRecordResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BrokerDemandRecord, brokerDemandRecord_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBrokerDemandRecordResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BrokerDemandRecord, brokerDemandRecord_);
    };
    QueryBrokerDemandRecordResponseBodyData() = default ;
    QueryBrokerDemandRecordResponseBodyData(const QueryBrokerDemandRecordResponseBodyData &) = default ;
    QueryBrokerDemandRecordResponseBodyData(QueryBrokerDemandRecordResponseBodyData &&) = default ;
    QueryBrokerDemandRecordResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBrokerDemandRecordResponseBodyData() = default ;
    QueryBrokerDemandRecordResponseBodyData& operator=(const QueryBrokerDemandRecordResponseBodyData &) = default ;
    QueryBrokerDemandRecordResponseBodyData& operator=(QueryBrokerDemandRecordResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->brokerDemandRecord_ == nullptr; };
    // brokerDemandRecord Field Functions 
    bool hasBrokerDemandRecord() const { return this->brokerDemandRecord_ != nullptr;};
    void deleteBrokerDemandRecord() { this->brokerDemandRecord_ = nullptr;};
    inline const vector<Models::QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord> & brokerDemandRecord() const { DARABONBA_PTR_GET_CONST(brokerDemandRecord_, vector<Models::QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord>) };
    inline vector<Models::QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord> brokerDemandRecord() { DARABONBA_PTR_GET(brokerDemandRecord_, vector<Models::QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord>) };
    inline QueryBrokerDemandRecordResponseBodyData& setBrokerDemandRecord(const vector<Models::QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord> & brokerDemandRecord) { DARABONBA_PTR_SET_VALUE(brokerDemandRecord_, brokerDemandRecord) };
    inline QueryBrokerDemandRecordResponseBodyData& setBrokerDemandRecord(vector<Models::QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord> && brokerDemandRecord) { DARABONBA_PTR_SET_RVALUE(brokerDemandRecord_, brokerDemandRecord) };


  protected:
    std::shared_ptr<vector<Models::QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord>> brokerDemandRecord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
