// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOWNREQUESTLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOWNREQUESTLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOwnRequestLogResponseBodyLogInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetOwnRequestLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOwnRequestLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(logInfo, logInfo_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOwnRequestLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(logInfo, logInfo_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetOwnRequestLogResponseBody() = default ;
    GetOwnRequestLogResponseBody(const GetOwnRequestLogResponseBody &) = default ;
    GetOwnRequestLogResponseBody(GetOwnRequestLogResponseBody &&) = default ;
    GetOwnRequestLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOwnRequestLogResponseBody() = default ;
    GetOwnRequestLogResponseBody& operator=(const GetOwnRequestLogResponseBody &) = default ;
    GetOwnRequestLogResponseBody& operator=(GetOwnRequestLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logInfo_ == nullptr
        && return this->requestId_ == nullptr; };
    // logInfo Field Functions 
    bool hasLogInfo() const { return this->logInfo_ != nullptr;};
    void deleteLogInfo() { this->logInfo_ = nullptr;};
    inline const GetOwnRequestLogResponseBodyLogInfo & logInfo() const { DARABONBA_PTR_GET_CONST(logInfo_, GetOwnRequestLogResponseBodyLogInfo) };
    inline GetOwnRequestLogResponseBodyLogInfo logInfo() { DARABONBA_PTR_GET(logInfo_, GetOwnRequestLogResponseBodyLogInfo) };
    inline GetOwnRequestLogResponseBody& setLogInfo(const GetOwnRequestLogResponseBodyLogInfo & logInfo) { DARABONBA_PTR_SET_VALUE(logInfo_, logInfo) };
    inline GetOwnRequestLogResponseBody& setLogInfo(GetOwnRequestLogResponseBodyLogInfo && logInfo) { DARABONBA_PTR_SET_RVALUE(logInfo_, logInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOwnRequestLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The detailed information about the log of the API call.
    std::shared_ptr<GetOwnRequestLogResponseBodyLogInfo> logInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
