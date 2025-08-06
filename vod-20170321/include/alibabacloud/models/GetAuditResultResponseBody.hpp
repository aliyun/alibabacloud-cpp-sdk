// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUDITRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUDITRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAuditResultResponseBodyAIAuditResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAuditResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuditResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIAuditResult, AIAuditResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuditResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIAuditResult, AIAuditResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAuditResultResponseBody() = default ;
    GetAuditResultResponseBody(const GetAuditResultResponseBody &) = default ;
    GetAuditResultResponseBody(GetAuditResultResponseBody &&) = default ;
    GetAuditResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuditResultResponseBody() = default ;
    GetAuditResultResponseBody& operator=(const GetAuditResultResponseBody &) = default ;
    GetAuditResultResponseBody& operator=(GetAuditResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIAuditResult_ != nullptr
        && this->requestId_ != nullptr; };
    // AIAuditResult Field Functions 
    bool hasAIAuditResult() const { return this->AIAuditResult_ != nullptr;};
    void deleteAIAuditResult() { this->AIAuditResult_ = nullptr;};
    inline const GetAuditResultResponseBodyAIAuditResult & AIAuditResult() const { DARABONBA_PTR_GET_CONST(AIAuditResult_, GetAuditResultResponseBodyAIAuditResult) };
    inline GetAuditResultResponseBodyAIAuditResult AIAuditResult() { DARABONBA_PTR_GET(AIAuditResult_, GetAuditResultResponseBodyAIAuditResult) };
    inline GetAuditResultResponseBody& setAIAuditResult(const GetAuditResultResponseBodyAIAuditResult & AIAuditResult) { DARABONBA_PTR_SET_VALUE(AIAuditResult_, AIAuditResult) };
    inline GetAuditResultResponseBody& setAIAuditResult(GetAuditResultResponseBodyAIAuditResult && AIAuditResult) { DARABONBA_PTR_SET_RVALUE(AIAuditResult_, AIAuditResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuditResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetAuditResultResponseBodyAIAuditResult> AIAuditResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
