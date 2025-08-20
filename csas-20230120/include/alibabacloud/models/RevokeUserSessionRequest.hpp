// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEUSERSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKEUSERSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class RevokeUserSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeUserSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalIds, externalIds_);
      DARABONBA_PTR_TO_JSON(IdpId, idpId_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeUserSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalIds, externalIds_);
      DARABONBA_PTR_FROM_JSON(IdpId, idpId_);
    };
    RevokeUserSessionRequest() = default ;
    RevokeUserSessionRequest(const RevokeUserSessionRequest &) = default ;
    RevokeUserSessionRequest(RevokeUserSessionRequest &&) = default ;
    RevokeUserSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeUserSessionRequest() = default ;
    RevokeUserSessionRequest& operator=(const RevokeUserSessionRequest &) = default ;
    RevokeUserSessionRequest& operator=(RevokeUserSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->externalIds_ != nullptr
        && this->idpId_ != nullptr; };
    // externalIds Field Functions 
    bool hasExternalIds() const { return this->externalIds_ != nullptr;};
    void deleteExternalIds() { this->externalIds_ = nullptr;};
    inline string externalIds() const { DARABONBA_PTR_GET_DEFAULT(externalIds_, "") };
    inline RevokeUserSessionRequest& setExternalIds(string externalIds) { DARABONBA_PTR_SET_VALUE(externalIds_, externalIds) };


    // idpId Field Functions 
    bool hasIdpId() const { return this->idpId_ != nullptr;};
    void deleteIdpId() { this->idpId_ = nullptr;};
    inline string idpId() const { DARABONBA_PTR_GET_DEFAULT(idpId_, "") };
    inline RevokeUserSessionRequest& setIdpId(string idpId) { DARABONBA_PTR_SET_VALUE(idpId_, idpId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> externalIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> idpId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
