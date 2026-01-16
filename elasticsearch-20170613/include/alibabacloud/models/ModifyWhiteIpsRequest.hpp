// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYWHITEIPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYWHITEIPSREQUEST_HPP_
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
  class ModifyWhiteIpsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyWhiteIpsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(modifyMode, modifyMode_);
      DARABONBA_PTR_TO_JSON(networkType, networkType_);
      DARABONBA_PTR_TO_JSON(nodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(whiteIpGroup, whiteIpGroup_);
      DARABONBA_PTR_TO_JSON(whiteIpList, whiteIpList_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyWhiteIpsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(modifyMode, modifyMode_);
      DARABONBA_PTR_FROM_JSON(networkType, networkType_);
      DARABONBA_PTR_FROM_JSON(nodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(whiteIpGroup, whiteIpGroup_);
      DARABONBA_PTR_FROM_JSON(whiteIpList, whiteIpList_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    ModifyWhiteIpsRequest() = default ;
    ModifyWhiteIpsRequest(const ModifyWhiteIpsRequest &) = default ;
    ModifyWhiteIpsRequest(ModifyWhiteIpsRequest &&) = default ;
    ModifyWhiteIpsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyWhiteIpsRequest() = default ;
    ModifyWhiteIpsRequest& operator=(const ModifyWhiteIpsRequest &) = default ;
    ModifyWhiteIpsRequest& operator=(ModifyWhiteIpsRequest &&) = default ;
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
      // The type of the IP address whitelist. Valid values:
      // 
      // *   PRIVATE_KIBANA
      // *   PRIVATE_ES
      // *   PUBLIC_ES
      // *   PUBLIC_KIBANA
      shared_ptr<string> groupName_ {};
      // The returned result.
      shared_ptr<vector<string>> ips_ {};
      // The request ID.
      shared_ptr<string> whiteIpType_ {};
    };

    virtual bool empty() const override { return this->modifyMode_ == nullptr
        && this->networkType_ == nullptr && this->nodeType_ == nullptr && this->whiteIpGroup_ == nullptr && this->whiteIpList_ == nullptr && this->clientToken_ == nullptr; };
    // modifyMode Field Functions 
    bool hasModifyMode() const { return this->modifyMode_ != nullptr;};
    void deleteModifyMode() { this->modifyMode_ = nullptr;};
    inline string getModifyMode() const { DARABONBA_PTR_GET_DEFAULT(modifyMode_, "") };
    inline ModifyWhiteIpsRequest& setModifyMode(string modifyMode) { DARABONBA_PTR_SET_VALUE(modifyMode_, modifyMode) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline ModifyWhiteIpsRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ModifyWhiteIpsRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // whiteIpGroup Field Functions 
    bool hasWhiteIpGroup() const { return this->whiteIpGroup_ != nullptr;};
    void deleteWhiteIpGroup() { this->whiteIpGroup_ = nullptr;};
    inline const ModifyWhiteIpsRequest::WhiteIpGroup & getWhiteIpGroup() const { DARABONBA_PTR_GET_CONST(whiteIpGroup_, ModifyWhiteIpsRequest::WhiteIpGroup) };
    inline ModifyWhiteIpsRequest::WhiteIpGroup getWhiteIpGroup() { DARABONBA_PTR_GET(whiteIpGroup_, ModifyWhiteIpsRequest::WhiteIpGroup) };
    inline ModifyWhiteIpsRequest& setWhiteIpGroup(const ModifyWhiteIpsRequest::WhiteIpGroup & whiteIpGroup) { DARABONBA_PTR_SET_VALUE(whiteIpGroup_, whiteIpGroup) };
    inline ModifyWhiteIpsRequest& setWhiteIpGroup(ModifyWhiteIpsRequest::WhiteIpGroup && whiteIpGroup) { DARABONBA_PTR_SET_RVALUE(whiteIpGroup_, whiteIpGroup) };


    // whiteIpList Field Functions 
    bool hasWhiteIpList() const { return this->whiteIpList_ != nullptr;};
    void deleteWhiteIpList() { this->whiteIpList_ = nullptr;};
    inline const vector<string> & getWhiteIpList() const { DARABONBA_PTR_GET_CONST(whiteIpList_, vector<string>) };
    inline vector<string> getWhiteIpList() { DARABONBA_PTR_GET(whiteIpList_, vector<string>) };
    inline ModifyWhiteIpsRequest& setWhiteIpList(const vector<string> & whiteIpList) { DARABONBA_PTR_SET_VALUE(whiteIpList_, whiteIpList) };
    inline ModifyWhiteIpsRequest& setWhiteIpList(vector<string> && whiteIpList) { DARABONBA_PTR_SET_RVALUE(whiteIpList_, whiteIpList) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyWhiteIpsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The information about the IP address whitelist that you want to update. You can specify only one whitelist.
    // 
    // > You cannot configure both the whiteIpList and whiteIpGroup parameters.
    shared_ptr<string> modifyMode_ {};
    // The IP addresses in the whitelist. This parameter is available if the whiteIpGroup parameter is left empty. The default IP address whitelist is updated based on the value of this parameter.
    // 
    // > You cannot configure both the whiteIpList and whiteIpGroup parameters.
    shared_ptr<string> networkType_ {};
    // The IP addresses in the whitelist. This parameter is available if the whiteIpGroup parameter is left empty. The default IP address whitelist is updated based on the value of this parameter.
    shared_ptr<string> nodeType_ {};
    // The IP addresses in the whitelist. This parameter is required if you configure the whiteIpGroup parameter.
    shared_ptr<ModifyWhiteIpsRequest::WhiteIpGroup> whiteIpGroup_ {};
    // The name of the whitelist. This parameter is required if you configure the whiteIpGroup parameter.
    shared_ptr<vector<string>> whiteIpList_ {};
    // The network type. This parameter is required if you configure the whiteIpList parameter. Valid values:
    // 
    // *   PRIVATE
    // *   PUBLIC
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
