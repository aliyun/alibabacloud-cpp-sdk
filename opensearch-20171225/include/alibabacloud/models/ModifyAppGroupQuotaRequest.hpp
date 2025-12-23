// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPGROUPQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPGROUPQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Quota.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ModifyAppGroupQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppGroupQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppGroupQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    ModifyAppGroupQuotaRequest() = default ;
    ModifyAppGroupQuotaRequest(const ModifyAppGroupQuotaRequest &) = default ;
    ModifyAppGroupQuotaRequest(ModifyAppGroupQuotaRequest &&) = default ;
    ModifyAppGroupQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppGroupQuotaRequest() = default ;
    ModifyAppGroupQuotaRequest& operator=(const ModifyAppGroupQuotaRequest &) = default ;
    ModifyAppGroupQuotaRequest& operator=(ModifyAppGroupQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->clientToken_ == nullptr && return this->dryRun_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Quota & body() const { DARABONBA_PTR_GET_CONST(body_, Quota) };
    inline Quota body() { DARABONBA_PTR_GET(body_, Quota) };
    inline ModifyAppGroupQuotaRequest& setBody(const Quota & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModifyAppGroupQuotaRequest& setBody(Quota && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyAppGroupQuotaRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyAppGroupQuotaRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The request body.
    std::shared_ptr<Quota> body_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to check the validity of input parameters. Default value: false.
    // 
    // Valid values:
    // 
    // *   **true**: checks only the validity of input parameters.
    // *   **false**: checks the validity of input parameters and creates an attribution configuration.
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
