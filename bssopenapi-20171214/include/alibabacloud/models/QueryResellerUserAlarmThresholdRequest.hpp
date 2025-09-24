// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRESELLERUSERALARMTHRESHOLDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRESELLERUSERALARMTHRESHOLDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryResellerUserAlarmThresholdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryResellerUserAlarmThresholdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmType, alarmType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryResellerUserAlarmThresholdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmType, alarmType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    QueryResellerUserAlarmThresholdRequest() = default ;
    QueryResellerUserAlarmThresholdRequest(const QueryResellerUserAlarmThresholdRequest &) = default ;
    QueryResellerUserAlarmThresholdRequest(QueryResellerUserAlarmThresholdRequest &&) = default ;
    QueryResellerUserAlarmThresholdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryResellerUserAlarmThresholdRequest() = default ;
    QueryResellerUserAlarmThresholdRequest& operator=(const QueryResellerUserAlarmThresholdRequest &) = default ;
    QueryResellerUserAlarmThresholdRequest& operator=(QueryResellerUserAlarmThresholdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmType_ != nullptr
        && this->ownerId_ != nullptr; };
    // alarmType Field Functions 
    bool hasAlarmType() const { return this->alarmType_ != nullptr;};
    void deleteAlarmType() { this->alarmType_ = nullptr;};
    inline string alarmType() const { DARABONBA_PTR_GET_DEFAULT(alarmType_, "") };
    inline QueryResellerUserAlarmThresholdRequest& setAlarmType(string alarmType) { DARABONBA_PTR_SET_VALUE(alarmType_, alarmType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryResellerUserAlarmThresholdRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    std::shared_ptr<string> alarmType_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
