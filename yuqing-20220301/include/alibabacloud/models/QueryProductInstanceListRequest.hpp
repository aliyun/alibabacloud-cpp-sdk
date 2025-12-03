// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPRODUCTINSTANCELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPRODUCTINSTANCELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yuqing20220301
{
namespace Models
{
  class QueryProductInstanceListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryProductInstanceListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appCode, appCode_);
      DARABONBA_PTR_TO_JSON(fromTime, fromTime_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(tenantUid, tenantUid_);
      DARABONBA_PTR_TO_JSON(toTime, toTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryProductInstanceListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appCode, appCode_);
      DARABONBA_PTR_FROM_JSON(fromTime, fromTime_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(tenantUid, tenantUid_);
      DARABONBA_PTR_FROM_JSON(toTime, toTime_);
    };
    QueryProductInstanceListRequest() = default ;
    QueryProductInstanceListRequest(const QueryProductInstanceListRequest &) = default ;
    QueryProductInstanceListRequest(QueryProductInstanceListRequest &&) = default ;
    QueryProductInstanceListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryProductInstanceListRequest() = default ;
    QueryProductInstanceListRequest& operator=(const QueryProductInstanceListRequest &) = default ;
    QueryProductInstanceListRequest& operator=(QueryProductInstanceListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && return this->fromTime_ == nullptr && return this->requestId_ == nullptr && return this->tenantUid_ == nullptr && return this->toTime_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline QueryProductInstanceListRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // fromTime Field Functions 
    bool hasFromTime() const { return this->fromTime_ != nullptr;};
    void deleteFromTime() { this->fromTime_ = nullptr;};
    inline int64_t fromTime() const { DARABONBA_PTR_GET_DEFAULT(fromTime_, 0L) };
    inline QueryProductInstanceListRequest& setFromTime(int64_t fromTime) { DARABONBA_PTR_SET_VALUE(fromTime_, fromTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryProductInstanceListRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tenantUid Field Functions 
    bool hasTenantUid() const { return this->tenantUid_ != nullptr;};
    void deleteTenantUid() { this->tenantUid_ = nullptr;};
    inline string tenantUid() const { DARABONBA_PTR_GET_DEFAULT(tenantUid_, "") };
    inline QueryProductInstanceListRequest& setTenantUid(string tenantUid) { DARABONBA_PTR_SET_VALUE(tenantUid_, tenantUid) };


    // toTime Field Functions 
    bool hasToTime() const { return this->toTime_ != nullptr;};
    void deleteToTime() { this->toTime_ = nullptr;};
    inline int64_t toTime() const { DARABONBA_PTR_GET_DEFAULT(toTime_, 0L) };
    inline QueryProductInstanceListRequest& setToTime(int64_t toTime) { DARABONBA_PTR_SET_VALUE(toTime_, toTime) };


  protected:
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<int64_t> fromTime_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> tenantUid_ = nullptr;
    std::shared_ptr<int64_t> toTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yuqing20220301
#endif
