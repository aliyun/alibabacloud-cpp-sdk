// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKIBANAWHITEIPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKIBANAWHITEIPSREQUEST_HPP_
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
  class UpdateKibanaWhiteIpsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKibanaWhiteIpsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(kibanaIPWhitelist, kibanaIPWhitelist_);
      DARABONBA_PTR_TO_JSON(whiteIpGroup, whiteIpGroup_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(modifyMode, modifyMode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKibanaWhiteIpsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(kibanaIPWhitelist, kibanaIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(whiteIpGroup, whiteIpGroup_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(modifyMode, modifyMode_);
    };
    UpdateKibanaWhiteIpsRequest() = default ;
    UpdateKibanaWhiteIpsRequest(const UpdateKibanaWhiteIpsRequest &) = default ;
    UpdateKibanaWhiteIpsRequest(UpdateKibanaWhiteIpsRequest &&) = default ;
    UpdateKibanaWhiteIpsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKibanaWhiteIpsRequest() = default ;
    UpdateKibanaWhiteIpsRequest& operator=(const UpdateKibanaWhiteIpsRequest &) = default ;
    UpdateKibanaWhiteIpsRequest& operator=(UpdateKibanaWhiteIpsRequest &&) = default ;
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
      // The type of the whitelist. Set the value to PUBLIC_KIBANA. This value indicates a public IP address whitelist.
      shared_ptr<string> groupName_ {};
      // The IP addresses in the whitelist. This parameter is required if you configure the whiteIpGroup parameter.
      shared_ptr<vector<string>> ips_ {};
      // The IP addresses in the whitelist.
      shared_ptr<string> whiteIpType_ {};
    };

    virtual bool empty() const override { return this->kibanaIPWhitelist_ == nullptr
        && this->whiteIpGroup_ == nullptr && this->clientToken_ == nullptr && this->modifyMode_ == nullptr; };
    // kibanaIPWhitelist Field Functions 
    bool hasKibanaIPWhitelist() const { return this->kibanaIPWhitelist_ != nullptr;};
    void deleteKibanaIPWhitelist() { this->kibanaIPWhitelist_ = nullptr;};
    inline const vector<string> & getKibanaIPWhitelist() const { DARABONBA_PTR_GET_CONST(kibanaIPWhitelist_, vector<string>) };
    inline vector<string> getKibanaIPWhitelist() { DARABONBA_PTR_GET(kibanaIPWhitelist_, vector<string>) };
    inline UpdateKibanaWhiteIpsRequest& setKibanaIPWhitelist(const vector<string> & kibanaIPWhitelist) { DARABONBA_PTR_SET_VALUE(kibanaIPWhitelist_, kibanaIPWhitelist) };
    inline UpdateKibanaWhiteIpsRequest& setKibanaIPWhitelist(vector<string> && kibanaIPWhitelist) { DARABONBA_PTR_SET_RVALUE(kibanaIPWhitelist_, kibanaIPWhitelist) };


    // whiteIpGroup Field Functions 
    bool hasWhiteIpGroup() const { return this->whiteIpGroup_ != nullptr;};
    void deleteWhiteIpGroup() { this->whiteIpGroup_ = nullptr;};
    inline const UpdateKibanaWhiteIpsRequest::WhiteIpGroup & getWhiteIpGroup() const { DARABONBA_PTR_GET_CONST(whiteIpGroup_, UpdateKibanaWhiteIpsRequest::WhiteIpGroup) };
    inline UpdateKibanaWhiteIpsRequest::WhiteIpGroup getWhiteIpGroup() { DARABONBA_PTR_GET(whiteIpGroup_, UpdateKibanaWhiteIpsRequest::WhiteIpGroup) };
    inline UpdateKibanaWhiteIpsRequest& setWhiteIpGroup(const UpdateKibanaWhiteIpsRequest::WhiteIpGroup & whiteIpGroup) { DARABONBA_PTR_SET_VALUE(whiteIpGroup_, whiteIpGroup) };
    inline UpdateKibanaWhiteIpsRequest& setWhiteIpGroup(UpdateKibanaWhiteIpsRequest::WhiteIpGroup && whiteIpGroup) { DARABONBA_PTR_SET_RVALUE(whiteIpGroup_, whiteIpGroup) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateKibanaWhiteIpsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // modifyMode Field Functions 
    bool hasModifyMode() const { return this->modifyMode_ != nullptr;};
    void deleteModifyMode() { this->modifyMode_ = nullptr;};
    inline string getModifyMode() const { DARABONBA_PTR_GET_DEFAULT(modifyMode_, "") };
    inline UpdateKibanaWhiteIpsRequest& setModifyMode(string modifyMode) { DARABONBA_PTR_SET_VALUE(modifyMode_, modifyMode) };


  protected:
    // The IP address whitelists. This parameter is available if the whiteIpGroup parameter is left empty. The default IP address whitelist is updated based on the value of this parameter.
    // 
    // You cannot configure both the kibanaIPWhitelist and whiteIpGroup parameters.
    shared_ptr<vector<string>> kibanaIPWhitelist_ {};
    // The name of the whitelist. This parameter is required if you configure the whiteIpGroup parameter.
    shared_ptr<UpdateKibanaWhiteIpsRequest::WhiteIpGroup> whiteIpGroup_ {};
    // The update mode. Valid values:
    // 
    // *   Cover: overwrites the IP addresses in the specified IP address whitelist with the IP addresses specified by using the ips parameter. This is the default value.
    // *   Append: adds the IP addresses specified by using the ips parameter to the specified IP address whitelist.
    // *   Delete: deletes the IP addresses specified by using the ips parameter from the specified IP address whitelist. At least one IP address must be retained for the whitelist.
    shared_ptr<string> clientToken_ {};
    // The body of the request.
    shared_ptr<string> modifyMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
