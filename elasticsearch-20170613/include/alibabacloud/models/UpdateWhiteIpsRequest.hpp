// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWHITEIPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWHITEIPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateWhiteIpsRequestWhiteIpGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateWhiteIpsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWhiteIpsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(esIPWhitelist, esIPWhitelist_);
      DARABONBA_PTR_TO_JSON(whiteIpGroup, whiteIpGroup_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(modifyMode, modifyMode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWhiteIpsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(esIPWhitelist, esIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(whiteIpGroup, whiteIpGroup_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(modifyMode, modifyMode_);
    };
    UpdateWhiteIpsRequest() = default ;
    UpdateWhiteIpsRequest(const UpdateWhiteIpsRequest &) = default ;
    UpdateWhiteIpsRequest(UpdateWhiteIpsRequest &&) = default ;
    UpdateWhiteIpsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWhiteIpsRequest() = default ;
    UpdateWhiteIpsRequest& operator=(const UpdateWhiteIpsRequest &) = default ;
    UpdateWhiteIpsRequest& operator=(UpdateWhiteIpsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->esIPWhitelist_ != nullptr
        && this->whiteIpGroup_ != nullptr && this->clientToken_ != nullptr && this->modifyMode_ != nullptr; };
    // esIPWhitelist Field Functions 
    bool hasEsIPWhitelist() const { return this->esIPWhitelist_ != nullptr;};
    void deleteEsIPWhitelist() { this->esIPWhitelist_ = nullptr;};
    inline const vector<string> & esIPWhitelist() const { DARABONBA_PTR_GET_CONST(esIPWhitelist_, vector<string>) };
    inline vector<string> esIPWhitelist() { DARABONBA_PTR_GET(esIPWhitelist_, vector<string>) };
    inline UpdateWhiteIpsRequest& setEsIPWhitelist(const vector<string> & esIPWhitelist) { DARABONBA_PTR_SET_VALUE(esIPWhitelist_, esIPWhitelist) };
    inline UpdateWhiteIpsRequest& setEsIPWhitelist(vector<string> && esIPWhitelist) { DARABONBA_PTR_SET_RVALUE(esIPWhitelist_, esIPWhitelist) };


    // whiteIpGroup Field Functions 
    bool hasWhiteIpGroup() const { return this->whiteIpGroup_ != nullptr;};
    void deleteWhiteIpGroup() { this->whiteIpGroup_ = nullptr;};
    inline const UpdateWhiteIpsRequestWhiteIpGroup & whiteIpGroup() const { DARABONBA_PTR_GET_CONST(whiteIpGroup_, UpdateWhiteIpsRequestWhiteIpGroup) };
    inline UpdateWhiteIpsRequestWhiteIpGroup whiteIpGroup() { DARABONBA_PTR_GET(whiteIpGroup_, UpdateWhiteIpsRequestWhiteIpGroup) };
    inline UpdateWhiteIpsRequest& setWhiteIpGroup(const UpdateWhiteIpsRequestWhiteIpGroup & whiteIpGroup) { DARABONBA_PTR_SET_VALUE(whiteIpGroup_, whiteIpGroup) };
    inline UpdateWhiteIpsRequest& setWhiteIpGroup(UpdateWhiteIpsRequestWhiteIpGroup && whiteIpGroup) { DARABONBA_PTR_SET_RVALUE(whiteIpGroup_, whiteIpGroup) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateWhiteIpsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // modifyMode Field Functions 
    bool hasModifyMode() const { return this->modifyMode_ != nullptr;};
    void deleteModifyMode() { this->modifyMode_ = nullptr;};
    inline string modifyMode() const { DARABONBA_PTR_GET_DEFAULT(modifyMode_, "") };
    inline UpdateWhiteIpsRequest& setModifyMode(string modifyMode) { DARABONBA_PTR_SET_VALUE(modifyMode_, modifyMode) };


  protected:
    // The name of the whitelist. This parameter is required if you configure the whiteIpGroup parameter.
    std::shared_ptr<vector<string>> esIPWhitelist_ = nullptr;
    // The IP addresses in the whitelist. This parameter is required if you configure the whiteIpGroup parameter.
    std::shared_ptr<UpdateWhiteIpsRequestWhiteIpGroup> whiteIpGroup_ = nullptr;
    // The IP addresses in the whitelist.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The IP addresses in the whitelist. This parameter is available if the whiteIpGroup parameter is left empty. The default IP address whitelist is updated based on the value of this parameter.
    // 
    // >  You cannot configure both the esIPWhitelist and whiteIpGroup parameters.
    std::shared_ptr<string> modifyMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
