// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDISPOSALTOOLSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDISPOSALTOOLSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetDisposalToolStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDisposalToolStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDisposalToolStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
    };
    GetDisposalToolStatusRequest() = default ;
    GetDisposalToolStatusRequest(const GetDisposalToolStatusRequest &) = default ;
    GetDisposalToolStatusRequest(GetDisposalToolStatusRequest &&) = default ;
    GetDisposalToolStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDisposalToolStatusRequest() = default ;
    GetDisposalToolStatusRequest& operator=(const GetDisposalToolStatusRequest &) = default ;
    GetDisposalToolStatusRequest& operator=(GetDisposalToolStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authType_ == nullptr; };
    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline GetDisposalToolStatusRequest& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


  protected:
    shared_ptr<string> authType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
