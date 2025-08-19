// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENETWORKREQUESTBODYWHITEIPGROUP_HPP_
#define ALIBABACLOUD_MODELS_UPDATENETWORKREQUESTBODYWHITEIPGROUP_HPP_
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
  class UpdateNetworkRequestBodyWhiteIpGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNetworkRequestBodyWhiteIpGroup& obj) { 
      DARABONBA_PTR_TO_JSON(groupName, groupName_);
      DARABONBA_PTR_TO_JSON(ips, ips_);
      DARABONBA_PTR_TO_JSON(modifyMode, modifyMode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNetworkRequestBodyWhiteIpGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(groupName, groupName_);
      DARABONBA_PTR_FROM_JSON(ips, ips_);
      DARABONBA_PTR_FROM_JSON(modifyMode, modifyMode_);
    };
    UpdateNetworkRequestBodyWhiteIpGroup() = default ;
    UpdateNetworkRequestBodyWhiteIpGroup(const UpdateNetworkRequestBodyWhiteIpGroup &) = default ;
    UpdateNetworkRequestBodyWhiteIpGroup(UpdateNetworkRequestBodyWhiteIpGroup &&) = default ;
    UpdateNetworkRequestBodyWhiteIpGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNetworkRequestBodyWhiteIpGroup() = default ;
    UpdateNetworkRequestBodyWhiteIpGroup& operator=(const UpdateNetworkRequestBodyWhiteIpGroup &) = default ;
    UpdateNetworkRequestBodyWhiteIpGroup& operator=(UpdateNetworkRequestBodyWhiteIpGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupName_ != nullptr
        && this->ips_ != nullptr && this->modifyMode_ != nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UpdateNetworkRequestBodyWhiteIpGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<string> & ips() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
    inline vector<string> ips() { DARABONBA_PTR_GET(ips_, vector<string>) };
    inline UpdateNetworkRequestBodyWhiteIpGroup& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline UpdateNetworkRequestBodyWhiteIpGroup& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


    // modifyMode Field Functions 
    bool hasModifyMode() const { return this->modifyMode_ != nullptr;};
    void deleteModifyMode() { this->modifyMode_ = nullptr;};
    inline string modifyMode() const { DARABONBA_PTR_GET_DEFAULT(modifyMode_, "") };
    inline UpdateNetworkRequestBodyWhiteIpGroup& setModifyMode(string modifyMode) { DARABONBA_PTR_SET_VALUE(modifyMode_, modifyMode) };


  protected:
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<vector<string>> ips_ = nullptr;
    std::shared_ptr<string> modifyMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
