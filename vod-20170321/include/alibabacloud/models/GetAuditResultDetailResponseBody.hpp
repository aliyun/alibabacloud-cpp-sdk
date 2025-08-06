// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUDITRESULTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUDITRESULTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAuditResultDetailResponseBodyAIAuditResultDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAuditResultDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuditResultDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIAuditResultDetail, AIAuditResultDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuditResultDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIAuditResultDetail, AIAuditResultDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAuditResultDetailResponseBody() = default ;
    GetAuditResultDetailResponseBody(const GetAuditResultDetailResponseBody &) = default ;
    GetAuditResultDetailResponseBody(GetAuditResultDetailResponseBody &&) = default ;
    GetAuditResultDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuditResultDetailResponseBody() = default ;
    GetAuditResultDetailResponseBody& operator=(const GetAuditResultDetailResponseBody &) = default ;
    GetAuditResultDetailResponseBody& operator=(GetAuditResultDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIAuditResultDetail_ != nullptr
        && this->requestId_ != nullptr; };
    // AIAuditResultDetail Field Functions 
    bool hasAIAuditResultDetail() const { return this->AIAuditResultDetail_ != nullptr;};
    void deleteAIAuditResultDetail() { this->AIAuditResultDetail_ = nullptr;};
    inline const GetAuditResultDetailResponseBodyAIAuditResultDetail & AIAuditResultDetail() const { DARABONBA_PTR_GET_CONST(AIAuditResultDetail_, GetAuditResultDetailResponseBodyAIAuditResultDetail) };
    inline GetAuditResultDetailResponseBodyAIAuditResultDetail AIAuditResultDetail() { DARABONBA_PTR_GET(AIAuditResultDetail_, GetAuditResultDetailResponseBodyAIAuditResultDetail) };
    inline GetAuditResultDetailResponseBody& setAIAuditResultDetail(const GetAuditResultDetailResponseBodyAIAuditResultDetail & AIAuditResultDetail) { DARABONBA_PTR_SET_VALUE(AIAuditResultDetail_, AIAuditResultDetail) };
    inline GetAuditResultDetailResponseBody& setAIAuditResultDetail(GetAuditResultDetailResponseBodyAIAuditResultDetail && AIAuditResultDetail) { DARABONBA_PTR_SET_RVALUE(AIAuditResultDetail_, AIAuditResultDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuditResultDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetAuditResultDetailResponseBodyAIAuditResultDetail> AIAuditResultDetail_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
