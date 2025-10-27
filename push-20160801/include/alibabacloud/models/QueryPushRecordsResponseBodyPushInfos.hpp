// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUSHRECORDSRESPONSEBODYPUSHINFOS_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUSHRECORDSRESPONSEBODYPUSHINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryPushRecordsResponseBodyPushInfosPushInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryPushRecordsResponseBodyPushInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPushRecordsResponseBodyPushInfos& obj) { 
      DARABONBA_PTR_TO_JSON(PushInfo, pushInfo_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPushRecordsResponseBodyPushInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(PushInfo, pushInfo_);
    };
    QueryPushRecordsResponseBodyPushInfos() = default ;
    QueryPushRecordsResponseBodyPushInfos(const QueryPushRecordsResponseBodyPushInfos &) = default ;
    QueryPushRecordsResponseBodyPushInfos(QueryPushRecordsResponseBodyPushInfos &&) = default ;
    QueryPushRecordsResponseBodyPushInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPushRecordsResponseBodyPushInfos() = default ;
    QueryPushRecordsResponseBodyPushInfos& operator=(const QueryPushRecordsResponseBodyPushInfos &) = default ;
    QueryPushRecordsResponseBodyPushInfos& operator=(QueryPushRecordsResponseBodyPushInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pushInfo_ == nullptr; };
    // pushInfo Field Functions 
    bool hasPushInfo() const { return this->pushInfo_ != nullptr;};
    void deletePushInfo() { this->pushInfo_ = nullptr;};
    inline const vector<Models::QueryPushRecordsResponseBodyPushInfosPushInfo> & pushInfo() const { DARABONBA_PTR_GET_CONST(pushInfo_, vector<Models::QueryPushRecordsResponseBodyPushInfosPushInfo>) };
    inline vector<Models::QueryPushRecordsResponseBodyPushInfosPushInfo> pushInfo() { DARABONBA_PTR_GET(pushInfo_, vector<Models::QueryPushRecordsResponseBodyPushInfosPushInfo>) };
    inline QueryPushRecordsResponseBodyPushInfos& setPushInfo(const vector<Models::QueryPushRecordsResponseBodyPushInfosPushInfo> & pushInfo) { DARABONBA_PTR_SET_VALUE(pushInfo_, pushInfo) };
    inline QueryPushRecordsResponseBodyPushInfos& setPushInfo(vector<Models::QueryPushRecordsResponseBodyPushInfosPushInfo> && pushInfo) { DARABONBA_PTR_SET_RVALUE(pushInfo_, pushInfo) };


  protected:
    std::shared_ptr<vector<Models::QueryPushRecordsResponseBodyPushInfosPushInfo>> pushInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
