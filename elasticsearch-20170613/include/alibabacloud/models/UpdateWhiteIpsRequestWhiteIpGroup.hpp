// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWHITEIPSREQUESTWHITEIPGROUP_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWHITEIPSREQUESTWHITEIPGROUP_HPP_
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
  class UpdateWhiteIpsRequestWhiteIpGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWhiteIpsRequestWhiteIpGroup& obj) { 
      DARABONBA_PTR_TO_JSON(groupName, groupName_);
      DARABONBA_PTR_TO_JSON(ips, ips_);
      DARABONBA_PTR_TO_JSON(whiteIpType, whiteIpType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWhiteIpsRequestWhiteIpGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(groupName, groupName_);
      DARABONBA_PTR_FROM_JSON(ips, ips_);
      DARABONBA_PTR_FROM_JSON(whiteIpType, whiteIpType_);
    };
    UpdateWhiteIpsRequestWhiteIpGroup() = default ;
    UpdateWhiteIpsRequestWhiteIpGroup(const UpdateWhiteIpsRequestWhiteIpGroup &) = default ;
    UpdateWhiteIpsRequestWhiteIpGroup(UpdateWhiteIpsRequestWhiteIpGroup &&) = default ;
    UpdateWhiteIpsRequestWhiteIpGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWhiteIpsRequestWhiteIpGroup() = default ;
    UpdateWhiteIpsRequestWhiteIpGroup& operator=(const UpdateWhiteIpsRequestWhiteIpGroup &) = default ;
    UpdateWhiteIpsRequestWhiteIpGroup& operator=(UpdateWhiteIpsRequestWhiteIpGroup &&) = default ;
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
    inline UpdateWhiteIpsRequestWhiteIpGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<string> & ips() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
    inline vector<string> ips() { DARABONBA_PTR_GET(ips_, vector<string>) };
    inline UpdateWhiteIpsRequestWhiteIpGroup& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline UpdateWhiteIpsRequestWhiteIpGroup& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


    // whiteIpType Field Functions 
    bool hasWhiteIpType() const { return this->whiteIpType_ != nullptr;};
    void deleteWhiteIpType() { this->whiteIpType_ = nullptr;};
    inline string whiteIpType() const { DARABONBA_PTR_GET_DEFAULT(whiteIpType_, "") };
    inline UpdateWhiteIpsRequestWhiteIpGroup& setWhiteIpType(string whiteIpType) { DARABONBA_PTR_SET_VALUE(whiteIpType_, whiteIpType) };


  protected:
    // The type of the whitelist. Set the value to **PRIVATE_ES**. This value indicates a private IP address whitelist.
    std::shared_ptr<string> groupName_ = nullptr;
    // The returned result.
    std::shared_ptr<vector<string>> ips_ = nullptr;
    // The returned result.
    std::shared_ptr<string> whiteIpType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
