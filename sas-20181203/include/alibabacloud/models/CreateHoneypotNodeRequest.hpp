// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHONEYPOTNODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHONEYPOTNODEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateHoneypotNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHoneypotNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowHoneypotAccessInternet, allowHoneypotAccessInternet_);
      DARABONBA_PTR_TO_JSON(AvailableProbeNum, availableProbeNum_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(SecurityGroupProbeIpList, securityGroupProbeIpList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHoneypotNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowHoneypotAccessInternet, allowHoneypotAccessInternet_);
      DARABONBA_PTR_FROM_JSON(AvailableProbeNum, availableProbeNum_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupProbeIpList, securityGroupProbeIpList_);
    };
    CreateHoneypotNodeRequest() = default ;
    CreateHoneypotNodeRequest(const CreateHoneypotNodeRequest &) = default ;
    CreateHoneypotNodeRequest(CreateHoneypotNodeRequest &&) = default ;
    CreateHoneypotNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHoneypotNodeRequest() = default ;
    CreateHoneypotNodeRequest& operator=(const CreateHoneypotNodeRequest &) = default ;
    CreateHoneypotNodeRequest& operator=(CreateHoneypotNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowHoneypotAccessInternet_ != nullptr
        && this->availableProbeNum_ != nullptr && this->nodeName_ != nullptr && this->securityGroupProbeIpList_ != nullptr; };
    // allowHoneypotAccessInternet Field Functions 
    bool hasAllowHoneypotAccessInternet() const { return this->allowHoneypotAccessInternet_ != nullptr;};
    void deleteAllowHoneypotAccessInternet() { this->allowHoneypotAccessInternet_ = nullptr;};
    inline bool allowHoneypotAccessInternet() const { DARABONBA_PTR_GET_DEFAULT(allowHoneypotAccessInternet_, false) };
    inline CreateHoneypotNodeRequest& setAllowHoneypotAccessInternet(bool allowHoneypotAccessInternet) { DARABONBA_PTR_SET_VALUE(allowHoneypotAccessInternet_, allowHoneypotAccessInternet) };


    // availableProbeNum Field Functions 
    bool hasAvailableProbeNum() const { return this->availableProbeNum_ != nullptr;};
    void deleteAvailableProbeNum() { this->availableProbeNum_ = nullptr;};
    inline int32_t availableProbeNum() const { DARABONBA_PTR_GET_DEFAULT(availableProbeNum_, 0) };
    inline CreateHoneypotNodeRequest& setAvailableProbeNum(int32_t availableProbeNum) { DARABONBA_PTR_SET_VALUE(availableProbeNum_, availableProbeNum) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline CreateHoneypotNodeRequest& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // securityGroupProbeIpList Field Functions 
    bool hasSecurityGroupProbeIpList() const { return this->securityGroupProbeIpList_ != nullptr;};
    void deleteSecurityGroupProbeIpList() { this->securityGroupProbeIpList_ = nullptr;};
    inline const vector<string> & securityGroupProbeIpList() const { DARABONBA_PTR_GET_CONST(securityGroupProbeIpList_, vector<string>) };
    inline vector<string> securityGroupProbeIpList() { DARABONBA_PTR_GET(securityGroupProbeIpList_, vector<string>) };
    inline CreateHoneypotNodeRequest& setSecurityGroupProbeIpList(const vector<string> & securityGroupProbeIpList) { DARABONBA_PTR_SET_VALUE(securityGroupProbeIpList_, securityGroupProbeIpList) };
    inline CreateHoneypotNodeRequest& setSecurityGroupProbeIpList(vector<string> && securityGroupProbeIpList) { DARABONBA_PTR_SET_RVALUE(securityGroupProbeIpList_, securityGroupProbeIpList) };


  protected:
    // Specifies whether to allow honeypots to access the Internet. Valid values:
    // 
    // *   **true**: allows honeypots to access the Internet.
    // *   **false**: does not allow honeypots to access the Internet.
    std::shared_ptr<bool> allowHoneypotAccessInternet_ = nullptr;
    // The number of available probes.
    std::shared_ptr<int32_t> availableProbeNum_ = nullptr;
    // The name of the management node.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The CIDR blocks that are allowed to access the management node.
    std::shared_ptr<vector<string>> securityGroupProbeIpList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
