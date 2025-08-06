// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCHECKCHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETCHECKCHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetCheckChannelResponseBodyAudit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SetCheckChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetCheckChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Audit, audit_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetCheckChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Audit, audit_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetCheckChannelResponseBody() = default ;
    SetCheckChannelResponseBody(const SetCheckChannelResponseBody &) = default ;
    SetCheckChannelResponseBody(SetCheckChannelResponseBody &&) = default ;
    SetCheckChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetCheckChannelResponseBody() = default ;
    SetCheckChannelResponseBody& operator=(const SetCheckChannelResponseBody &) = default ;
    SetCheckChannelResponseBody& operator=(SetCheckChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audit_ != nullptr
        && this->requestId_ != nullptr; };
    // audit Field Functions 
    bool hasAudit() const { return this->audit_ != nullptr;};
    void deleteAudit() { this->audit_ = nullptr;};
    inline const SetCheckChannelResponseBodyAudit & audit() const { DARABONBA_PTR_GET_CONST(audit_, SetCheckChannelResponseBodyAudit) };
    inline SetCheckChannelResponseBodyAudit audit() { DARABONBA_PTR_GET(audit_, SetCheckChannelResponseBodyAudit) };
    inline SetCheckChannelResponseBody& setAudit(const SetCheckChannelResponseBodyAudit & audit) { DARABONBA_PTR_SET_VALUE(audit_, audit) };
    inline SetCheckChannelResponseBody& setAudit(SetCheckChannelResponseBodyAudit && audit) { DARABONBA_PTR_SET_RVALUE(audit_, audit) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetCheckChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<SetCheckChannelResponseBodyAudit> audit_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
