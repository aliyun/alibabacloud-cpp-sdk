// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKSRESPONSEBODYNETWORKSNETWORKVSWITCHIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKSRESPONSEBODYNETWORKSNETWORKVSWITCHIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworksResponseBodyNetworksNetworkVSwitchIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworksResponseBodyNetworksNetworkVSwitchIds& obj) { 
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworksResponseBodyNetworksNetworkVSwitchIds& obj) { 
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeNetworksResponseBodyNetworksNetworkVSwitchIds() = default ;
    DescribeNetworksResponseBodyNetworksNetworkVSwitchIds(const DescribeNetworksResponseBodyNetworksNetworkVSwitchIds &) = default ;
    DescribeNetworksResponseBodyNetworksNetworkVSwitchIds(DescribeNetworksResponseBodyNetworksNetworkVSwitchIds &&) = default ;
    DescribeNetworksResponseBodyNetworksNetworkVSwitchIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworksResponseBodyNetworksNetworkVSwitchIds() = default ;
    DescribeNetworksResponseBodyNetworksNetworkVSwitchIds& operator=(const DescribeNetworksResponseBodyNetworksNetworkVSwitchIds &) = default ;
    DescribeNetworksResponseBodyNetworksNetworkVSwitchIds& operator=(DescribeNetworksResponseBodyNetworksNetworkVSwitchIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vSwitchId_ != nullptr; };
    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline const vector<string> & vSwitchId() const { DARABONBA_PTR_GET_CONST(vSwitchId_, vector<string>) };
    inline vector<string> vSwitchId() { DARABONBA_PTR_GET(vSwitchId_, vector<string>) };
    inline DescribeNetworksResponseBodyNetworksNetworkVSwitchIds& setVSwitchId(const vector<string> & vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };
    inline DescribeNetworksResponseBodyNetworksNetworkVSwitchIds& setVSwitchId(vector<string> && vSwitchId) { DARABONBA_PTR_SET_RVALUE(vSwitchId_, vSwitchId) };


  protected:
    std::shared_ptr<vector<string>> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
