// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMMONLOGDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMMONLOGDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCommonLogDetailResponseBodyLogDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetCommonLogDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCommonLogDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(LogDetail, logDetail_);
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(OperatorUid, operatorUid_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, GetCommonLogDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(LogDetail, logDetail_);
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(OperatorUid, operatorUid_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    GetCommonLogDetailResponseBody() = default ;
    GetCommonLogDetailResponseBody(const GetCommonLogDetailResponseBody &) = default ;
    GetCommonLogDetailResponseBody(GetCommonLogDetailResponseBody &&) = default ;
    GetCommonLogDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCommonLogDetailResponseBody() = default ;
    GetCommonLogDetailResponseBody& operator=(const GetCommonLogDetailResponseBody &) = default ;
    GetCommonLogDetailResponseBody& operator=(GetCommonLogDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->clusterId_ == nullptr && return this->logDetail_ == nullptr && return this->logType_ == nullptr && return this->operatorUid_ == nullptr && return this->requestId_ == nullptr
        && return this->uid_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline GetCommonLogDetailResponseBody& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetCommonLogDetailResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // logDetail Field Functions 
    bool hasLogDetail() const { return this->logDetail_ != nullptr;};
    void deleteLogDetail() { this->logDetail_ = nullptr;};
    inline const vector<GetCommonLogDetailResponseBodyLogDetail> & logDetail() const { DARABONBA_PTR_GET_CONST(logDetail_, vector<GetCommonLogDetailResponseBodyLogDetail>) };
    inline vector<GetCommonLogDetailResponseBodyLogDetail> logDetail() { DARABONBA_PTR_GET(logDetail_, vector<GetCommonLogDetailResponseBodyLogDetail>) };
    inline GetCommonLogDetailResponseBody& setLogDetail(const vector<GetCommonLogDetailResponseBodyLogDetail> & logDetail) { DARABONBA_PTR_SET_VALUE(logDetail_, logDetail) };
    inline GetCommonLogDetailResponseBody& setLogDetail(vector<GetCommonLogDetailResponseBodyLogDetail> && logDetail) { DARABONBA_PTR_SET_RVALUE(logDetail_, logDetail) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string logType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline GetCommonLogDetailResponseBody& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // operatorUid Field Functions 
    bool hasOperatorUid() const { return this->operatorUid_ != nullptr;};
    void deleteOperatorUid() { this->operatorUid_ = nullptr;};
    inline string operatorUid() const { DARABONBA_PTR_GET_DEFAULT(operatorUid_, "") };
    inline GetCommonLogDetailResponseBody& setOperatorUid(string operatorUid) { DARABONBA_PTR_SET_VALUE(operatorUid_, operatorUid) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCommonLogDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline GetCommonLogDetailResponseBody& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // The action name.
    std::shared_ptr<string> action_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The information about the logs.
    std::shared_ptr<vector<GetCommonLogDetailResponseBodyLogDetail>> logDetail_ = nullptr;
    // The log type.
    std::shared_ptr<string> logType_ = nullptr;
    // The account ID of the operator.
    std::shared_ptr<string> operatorUid_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
