// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPREQUESTNETWORKWHITEIPGROUP_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPREQUESTNETWORKWHITEIPGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class UpdateAppRequestNetworkWhiteIpGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAppRequestNetworkWhiteIpGroup& obj) { 
      DARABONBA_PTR_TO_JSON(groupName, groupName_);
      DARABONBA_PTR_TO_JSON(ips, ips_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAppRequestNetworkWhiteIpGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(groupName, groupName_);
      DARABONBA_PTR_FROM_JSON(ips, ips_);
    };
    UpdateAppRequestNetworkWhiteIpGroup() = default ;
    UpdateAppRequestNetworkWhiteIpGroup(const UpdateAppRequestNetworkWhiteIpGroup &) = default ;
    UpdateAppRequestNetworkWhiteIpGroup(UpdateAppRequestNetworkWhiteIpGroup &&) = default ;
    UpdateAppRequestNetworkWhiteIpGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAppRequestNetworkWhiteIpGroup() = default ;
    UpdateAppRequestNetworkWhiteIpGroup& operator=(const UpdateAppRequestNetworkWhiteIpGroup &) = default ;
    UpdateAppRequestNetworkWhiteIpGroup& operator=(UpdateAppRequestNetworkWhiteIpGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupName_ != nullptr
        && this->ips_ != nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UpdateAppRequestNetworkWhiteIpGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<string> & ips() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
    inline vector<string> ips() { DARABONBA_PTR_GET(ips_, vector<string>) };
    inline UpdateAppRequestNetworkWhiteIpGroup& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline UpdateAppRequestNetworkWhiteIpGroup& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


  protected:
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<vector<string>> ips_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
