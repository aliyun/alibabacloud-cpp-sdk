// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWHITEIPSRESPONSEBODYRESULTNETWORKCONFIGWHITEIPGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWHITEIPSRESPONSEBODYRESULTNETWORKCONFIGWHITEIPGROUPLIST_HPP_
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
  class UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(groupName, groupName_);
      DARABONBA_PTR_TO_JSON(ips, ips_);
      DARABONBA_PTR_TO_JSON(whiteIpType, whiteIpType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(groupName, groupName_);
      DARABONBA_PTR_FROM_JSON(ips, ips_);
      DARABONBA_PTR_FROM_JSON(whiteIpType, whiteIpType_);
    };
    UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList() = default ;
    UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList(const UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList &) = default ;
    UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList(UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList &&) = default ;
    UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList() = default ;
    UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList& operator=(const UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList &) = default ;
    UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList& operator=(UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupName_ != nullptr
        && this->ips_ != nullptr && this->whiteIpType_ != nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<string> & ips() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
    inline vector<string> ips() { DARABONBA_PTR_GET(ips_, vector<string>) };
    inline UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


    // whiteIpType Field Functions 
    bool hasWhiteIpType() const { return this->whiteIpType_ != nullptr;};
    void deleteWhiteIpType() { this->whiteIpType_ = nullptr;};
    inline string whiteIpType() const { DARABONBA_PTR_GET_DEFAULT(whiteIpType_, "") };
    inline UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList& setWhiteIpType(string whiteIpType) { DARABONBA_PTR_SET_VALUE(whiteIpType_, whiteIpType) };


  protected:
    // The type of the whitelist. The value of this parameter is fixed as PRIVATE_ES, which indicates a private IP address whitelist.
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<vector<string>> ips_ = nullptr;
    std::shared_ptr<string> whiteIpType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
