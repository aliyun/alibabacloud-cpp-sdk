// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENETWORKRESPONSEBODYRESULTWHITEIPGROUP_HPP_
#define ALIBABACLOUD_MODELS_UPDATENETWORKRESPONSEBODYRESULTWHITEIPGROUP_HPP_
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
  class UpdateNetworkResponseBodyResultWhiteIpGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNetworkResponseBodyResultWhiteIpGroup& obj) { 
      DARABONBA_PTR_TO_JSON(groupName, groupName_);
      DARABONBA_PTR_TO_JSON(ips, ips_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNetworkResponseBodyResultWhiteIpGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(groupName, groupName_);
      DARABONBA_PTR_FROM_JSON(ips, ips_);
    };
    UpdateNetworkResponseBodyResultWhiteIpGroup() = default ;
    UpdateNetworkResponseBodyResultWhiteIpGroup(const UpdateNetworkResponseBodyResultWhiteIpGroup &) = default ;
    UpdateNetworkResponseBodyResultWhiteIpGroup(UpdateNetworkResponseBodyResultWhiteIpGroup &&) = default ;
    UpdateNetworkResponseBodyResultWhiteIpGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNetworkResponseBodyResultWhiteIpGroup() = default ;
    UpdateNetworkResponseBodyResultWhiteIpGroup& operator=(const UpdateNetworkResponseBodyResultWhiteIpGroup &) = default ;
    UpdateNetworkResponseBodyResultWhiteIpGroup& operator=(UpdateNetworkResponseBodyResultWhiteIpGroup &&) = default ;
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
    inline UpdateNetworkResponseBodyResultWhiteIpGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<string> & ips() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
    inline vector<string> ips() { DARABONBA_PTR_GET(ips_, vector<string>) };
    inline UpdateNetworkResponseBodyResultWhiteIpGroup& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline UpdateNetworkResponseBodyResultWhiteIpGroup& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


  protected:
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<vector<string>> ips_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
