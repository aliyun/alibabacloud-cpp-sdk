// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWHITEIPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWHITEIPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class WhiteIpGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WhiteIpGroup& obj) { 
        DARABONBA_PTR_TO_JSON(groupName, groupName_);
        DARABONBA_PTR_TO_JSON(ips, ips_);
        DARABONBA_PTR_TO_JSON(whiteIpType, whiteIpType_);
      };
      friend void from_json(const Darabonba::Json& j, WhiteIpGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(groupName, groupName_);
        DARABONBA_PTR_FROM_JSON(ips, ips_);
        DARABONBA_PTR_FROM_JSON(whiteIpType, whiteIpType_);
      };
      WhiteIpGroup() = default ;
      WhiteIpGroup(const WhiteIpGroup &) = default ;
      WhiteIpGroup(WhiteIpGroup &&) = default ;
      WhiteIpGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WhiteIpGroup() = default ;
      WhiteIpGroup& operator=(const WhiteIpGroup &) = default ;
      WhiteIpGroup& operator=(WhiteIpGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupName_ == nullptr
        && this->ips_ == nullptr && this->whiteIpType_ == nullptr; };
      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline WhiteIpGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // ips Field Functions 
      bool hasIps() const { return this->ips_ != nullptr;};
      void deleteIps() { this->ips_ = nullptr;};
      inline const vector<string> & getIps() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
      inline vector<string> getIps() { DARABONBA_PTR_GET(ips_, vector<string>) };
      inline WhiteIpGroup& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
      inline WhiteIpGroup& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


      // whiteIpType Field Functions 
      bool hasWhiteIpType() const { return this->whiteIpType_ != nullptr;};
      void deleteWhiteIpType() { this->whiteIpType_ = nullptr;};
      inline string getWhiteIpType() const { DARABONBA_PTR_GET_DEFAULT(whiteIpType_, "") };
      inline WhiteIpGroup& setWhiteIpType(string whiteIpType) { DARABONBA_PTR_SET_VALUE(whiteIpType_, whiteIpType) };


    protected:
      // The name of the whitelist group. This parameter is required if the whiteIpGroup parameter is specified.
      shared_ptr<string> groupName_ {};
      // The list of IP addresses in the whitelist group.
      shared_ptr<vector<string>> ips_ {};
      // The type of the IP whitelist. The value is fixed as **PRIVATE_ES**, which indicates the private network internal-facing access whitelist.
      shared_ptr<string> whiteIpType_ {};
    };

    virtual bool empty() const override { return this->esIPWhitelist_ == nullptr
        && this->whiteIpGroup_ == nullptr && this->clientToken_ == nullptr && this->modifyMode_ == nullptr; };
    // esIPWhitelist Field Functions 
    bool hasEsIPWhitelist() const { return this->esIPWhitelist_ != nullptr;};
    void deleteEsIPWhitelist() { this->esIPWhitelist_ = nullptr;};
    inline const vector<string> & getEsIPWhitelist() const { DARABONBA_PTR_GET_CONST(esIPWhitelist_, vector<string>) };
    inline vector<string> getEsIPWhitelist() { DARABONBA_PTR_GET(esIPWhitelist_, vector<string>) };
    inline UpdateWhiteIpsRequest& setEsIPWhitelist(const vector<string> & esIPWhitelist) { DARABONBA_PTR_SET_VALUE(esIPWhitelist_, esIPWhitelist) };
    inline UpdateWhiteIpsRequest& setEsIPWhitelist(vector<string> && esIPWhitelist) { DARABONBA_PTR_SET_RVALUE(esIPWhitelist_, esIPWhitelist) };


    // whiteIpGroup Field Functions 
    bool hasWhiteIpGroup() const { return this->whiteIpGroup_ != nullptr;};
    void deleteWhiteIpGroup() { this->whiteIpGroup_ = nullptr;};
    inline const UpdateWhiteIpsRequest::WhiteIpGroup & getWhiteIpGroup() const { DARABONBA_PTR_GET_CONST(whiteIpGroup_, UpdateWhiteIpsRequest::WhiteIpGroup) };
    inline UpdateWhiteIpsRequest::WhiteIpGroup getWhiteIpGroup() { DARABONBA_PTR_GET(whiteIpGroup_, UpdateWhiteIpsRequest::WhiteIpGroup) };
    inline UpdateWhiteIpsRequest& setWhiteIpGroup(const UpdateWhiteIpsRequest::WhiteIpGroup & whiteIpGroup) { DARABONBA_PTR_SET_VALUE(whiteIpGroup_, whiteIpGroup) };
    inline UpdateWhiteIpsRequest& setWhiteIpGroup(UpdateWhiteIpsRequest::WhiteIpGroup && whiteIpGroup) { DARABONBA_PTR_SET_RVALUE(whiteIpGroup_, whiteIpGroup) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateWhiteIpsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // modifyMode Field Functions 
    bool hasModifyMode() const { return this->modifyMode_ != nullptr;};
    void deleteModifyMode() { this->modifyMode_ = nullptr;};
    inline string getModifyMode() const { DARABONBA_PTR_GET_DEFAULT(modifyMode_, "") };
    inline UpdateWhiteIpsRequest& setModifyMode(string modifyMode) { DARABONBA_PTR_SET_VALUE(modifyMode_, modifyMode) };


  protected:
    // The IP address information in the whitelist.
    shared_ptr<vector<string>> esIPWhitelist_ {};
    // Updates the instance whitelist configuration by using the whitelist group method. Only one whitelist group can be updated at a time.
    // >Notice:  You cannot configure esIPWhitelist and whiteIpGroup at the same time.
    // .
    shared_ptr<UpdateWhiteIpsRequest::WhiteIpGroup> whiteIpGroup_ {};
    // A unique token generated by the client to guarantee the idempotency of the request. The value must be unique across different requests and can contain a maximum of 64 ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The modification mode. Valid values:
    // 
    // - Cover (default): overwrites the IP addresses in the original whitelist with the value of the ips parameter.
    // 
    // - Append: adds the IP addresses specified in the ips parameter to the original whitelist.
    // 
    // - Delete: removes the IP addresses specified in the ips parameter from the original whitelist. At least one IP address must be retained.
    shared_ptr<string> modifyMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
