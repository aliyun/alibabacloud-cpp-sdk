// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWHITEIPSRESPONSEBODYRESULTNETWORKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWHITEIPSRESPONSEBODYRESULTNETWORKCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateWhiteIpsResponseBodyResultNetworkConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWhiteIpsResponseBodyResultNetworkConfig& obj) { 
      DARABONBA_PTR_TO_JSON(whiteIpGroupList, whiteIpGroupList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWhiteIpsResponseBodyResultNetworkConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(whiteIpGroupList, whiteIpGroupList_);
    };
    UpdateWhiteIpsResponseBodyResultNetworkConfig() = default ;
    UpdateWhiteIpsResponseBodyResultNetworkConfig(const UpdateWhiteIpsResponseBodyResultNetworkConfig &) = default ;
    UpdateWhiteIpsResponseBodyResultNetworkConfig(UpdateWhiteIpsResponseBodyResultNetworkConfig &&) = default ;
    UpdateWhiteIpsResponseBodyResultNetworkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWhiteIpsResponseBodyResultNetworkConfig() = default ;
    UpdateWhiteIpsResponseBodyResultNetworkConfig& operator=(const UpdateWhiteIpsResponseBodyResultNetworkConfig &) = default ;
    UpdateWhiteIpsResponseBodyResultNetworkConfig& operator=(UpdateWhiteIpsResponseBodyResultNetworkConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->whiteIpGroupList_ != nullptr; };
    // whiteIpGroupList Field Functions 
    bool hasWhiteIpGroupList() const { return this->whiteIpGroupList_ != nullptr;};
    void deleteWhiteIpGroupList() { this->whiteIpGroupList_ = nullptr;};
    inline const vector<Models::UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList> & whiteIpGroupList() const { DARABONBA_PTR_GET_CONST(whiteIpGroupList_, vector<Models::UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList>) };
    inline vector<Models::UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList> whiteIpGroupList() { DARABONBA_PTR_GET(whiteIpGroupList_, vector<Models::UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList>) };
    inline UpdateWhiteIpsResponseBodyResultNetworkConfig& setWhiteIpGroupList(const vector<Models::UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList> & whiteIpGroupList) { DARABONBA_PTR_SET_VALUE(whiteIpGroupList_, whiteIpGroupList) };
    inline UpdateWhiteIpsResponseBodyResultNetworkConfig& setWhiteIpGroupList(vector<Models::UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList> && whiteIpGroupList) { DARABONBA_PTR_SET_RVALUE(whiteIpGroupList_, whiteIpGroupList) };


  protected:
    // The IP addresses in the whitelist.
    std::shared_ptr<vector<Models::UpdateWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList>> whiteIpGroupList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
