// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKCHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKCHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCheckChannelResponseBodyAudit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetCheckChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Audit, audit_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Audit, audit_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCheckChannelResponseBody() = default ;
    GetCheckChannelResponseBody(const GetCheckChannelResponseBody &) = default ;
    GetCheckChannelResponseBody(GetCheckChannelResponseBody &&) = default ;
    GetCheckChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckChannelResponseBody() = default ;
    GetCheckChannelResponseBody& operator=(const GetCheckChannelResponseBody &) = default ;
    GetCheckChannelResponseBody& operator=(GetCheckChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audit_ != nullptr
        && this->requestId_ != nullptr; };
    // audit Field Functions 
    bool hasAudit() const { return this->audit_ != nullptr;};
    void deleteAudit() { this->audit_ = nullptr;};
    inline const GetCheckChannelResponseBodyAudit & audit() const { DARABONBA_PTR_GET_CONST(audit_, GetCheckChannelResponseBodyAudit) };
    inline GetCheckChannelResponseBodyAudit audit() { DARABONBA_PTR_GET(audit_, GetCheckChannelResponseBodyAudit) };
    inline GetCheckChannelResponseBody& setAudit(const GetCheckChannelResponseBodyAudit & audit) { DARABONBA_PTR_SET_VALUE(audit_, audit) };
    inline GetCheckChannelResponseBody& setAudit(GetCheckChannelResponseBodyAudit && audit) { DARABONBA_PTR_SET_RVALUE(audit_, audit) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCheckChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetCheckChannelResponseBodyAudit> audit_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
