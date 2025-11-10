// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREQUESTLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREQUESTLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRequestLogResponseBodyLogInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetRequestLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRequestLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(logInfo, logInfo_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRequestLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(logInfo, logInfo_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetRequestLogResponseBody() = default ;
    GetRequestLogResponseBody(const GetRequestLogResponseBody &) = default ;
    GetRequestLogResponseBody(GetRequestLogResponseBody &&) = default ;
    GetRequestLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRequestLogResponseBody() = default ;
    GetRequestLogResponseBody& operator=(const GetRequestLogResponseBody &) = default ;
    GetRequestLogResponseBody& operator=(GetRequestLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logInfo_ == nullptr
        && return this->requestId_ == nullptr; };
    // logInfo Field Functions 
    bool hasLogInfo() const { return this->logInfo_ != nullptr;};
    void deleteLogInfo() { this->logInfo_ = nullptr;};
    inline const GetRequestLogResponseBodyLogInfo & logInfo() const { DARABONBA_PTR_GET_CONST(logInfo_, GetRequestLogResponseBodyLogInfo) };
    inline GetRequestLogResponseBodyLogInfo logInfo() { DARABONBA_PTR_GET(logInfo_, GetRequestLogResponseBodyLogInfo) };
    inline GetRequestLogResponseBody& setLogInfo(const GetRequestLogResponseBodyLogInfo & logInfo) { DARABONBA_PTR_SET_VALUE(logInfo_, logInfo) };
    inline GetRequestLogResponseBody& setLogInfo(GetRequestLogResponseBodyLogInfo && logInfo) { DARABONBA_PTR_SET_RVALUE(logInfo_, logInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRequestLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The detailed information about the log of the API call.
    std::shared_ptr<GetRequestLogResponseBodyLogInfo> logInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
