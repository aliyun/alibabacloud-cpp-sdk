// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFULLPROCESSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFULLPROCESSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFullProcessListResponseBodyFullProcessList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeFullProcessListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFullProcessListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_ANY_TO_JSON(ConfigList, configList_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(FullProcessList, fullProcessList_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFullProcessListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_ANY_FROM_JSON(ConfigList, configList_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(FullProcessList, fullProcessList_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeFullProcessListResponseBody() = default ;
    DescribeFullProcessListResponseBody(const DescribeFullProcessListResponseBody &) = default ;
    DescribeFullProcessListResponseBody(DescribeFullProcessListResponseBody &&) = default ;
    DescribeFullProcessListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFullProcessListResponseBody() = default ;
    DescribeFullProcessListResponseBody& operator=(const DescribeFullProcessListResponseBody &) = default ;
    DescribeFullProcessListResponseBody& operator=(DescribeFullProcessListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->configList_ == nullptr && return this->dtsJobId_ == nullptr && return this->dynamicMessage_ == nullptr && return this->errCode_ == nullptr && return this->errMessage_ == nullptr
        && return this->fullProcessList_ == nullptr && return this->httpStatusCode_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeFullProcessListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline     const Darabonba::Json & configList() const { DARABONBA_GET(configList_) };
    Darabonba::Json & configList() { DARABONBA_GET(configList_) };
    inline DescribeFullProcessListResponseBody& setConfigList(const Darabonba::Json & configList) { DARABONBA_SET_VALUE(configList_, configList) };
    inline DescribeFullProcessListResponseBody& setConfigList(Darabonba::Json & configList) { DARABONBA_SET_RVALUE(configList_, configList) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline DescribeFullProcessListResponseBody& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string dynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeFullProcessListResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeFullProcessListResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeFullProcessListResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // fullProcessList Field Functions 
    bool hasFullProcessList() const { return this->fullProcessList_ != nullptr;};
    void deleteFullProcessList() { this->fullProcessList_ = nullptr;};
    inline const vector<DescribeFullProcessListResponseBodyFullProcessList> & fullProcessList() const { DARABONBA_PTR_GET_CONST(fullProcessList_, vector<DescribeFullProcessListResponseBodyFullProcessList>) };
    inline vector<DescribeFullProcessListResponseBodyFullProcessList> fullProcessList() { DARABONBA_PTR_GET(fullProcessList_, vector<DescribeFullProcessListResponseBodyFullProcessList>) };
    inline DescribeFullProcessListResponseBody& setFullProcessList(const vector<DescribeFullProcessListResponseBodyFullProcessList> & fullProcessList) { DARABONBA_PTR_SET_VALUE(fullProcessList_, fullProcessList) };
    inline DescribeFullProcessListResponseBody& setFullProcessList(vector<DescribeFullProcessListResponseBodyFullProcessList> && fullProcessList) { DARABONBA_PTR_SET_RVALUE(fullProcessList_, fullProcessList) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeFullProcessListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFullProcessListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeFullProcessListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    std::shared_ptr<string> code_ = nullptr;
    // The throttling configuration. Valid values:
    // 
    // *   **dts.datamove.blaster.qps.max**: The rate at which queries are made to the source database per second.
    // *   **dts.datamove.source.rps.max**: the number of rows that are fully synchronized or migrated per second.
    // *   **dts.datamove.source.bps.max**: the amount of data processed per second for full synchronization or migration. Unit: Byte/s.
    // 
    // > 
    // 
    // *   When you set the **JobCode** parameter to **03**, you need to specify the **EnableLimit** parameter as **true**. Otherwise, the configuration cannot take effect.
    // 
    // *   When you set the **JobCode** parameter to **04** or **07**, you only need to specify the **dts.datamove.source.rps.max** and **dts.datamove.source.bps.max** parameters.
    // *   A value of \\*\\*-1\\*\\* indicates no rate limit.
    Darabonba::Json configList_ = nullptr;
    // The ID of the data migration, data synchronization, or change tracking task.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The dynamic part in the error message. This parameter is used to replace the \\*\\*%s\\*\\* variable in the **ErrMessage** parameter.
    // 
    // >  The request parameter **DtsJobId** is invalid if **The Value of Input Parameter %s is not valid** is returned for **ErrMessage** and **DtsJobId** is returned for **DynamicMessage**.
    std::shared_ptr<string> dynamicMessage_ = nullptr;
    // The error code returned when the request failed.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message returned when the request failed.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The details of the GA instances.
    std::shared_ptr<vector<DescribeFullProcessListResponseBodyFullProcessList>> fullProcessList_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
