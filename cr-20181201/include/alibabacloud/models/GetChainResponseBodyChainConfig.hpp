// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHAINRESPONSEBODYCHAINCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETCHAINRESPONSEBODYCHAINCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetChainResponseBodyChainConfigNodes.hpp>
#include <alibabacloud/models/GetChainResponseBodyChainConfigRouters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetChainResponseBodyChainConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChainResponseBodyChainConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ChainConfigId, chainConfigId_);
      DARABONBA_PTR_TO_JSON(IsActive, isActive_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(Routers, routers_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetChainResponseBodyChainConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ChainConfigId, chainConfigId_);
      DARABONBA_PTR_FROM_JSON(IsActive, isActive_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(Routers, routers_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetChainResponseBodyChainConfig() = default ;
    GetChainResponseBodyChainConfig(const GetChainResponseBodyChainConfig &) = default ;
    GetChainResponseBodyChainConfig(GetChainResponseBodyChainConfig &&) = default ;
    GetChainResponseBodyChainConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChainResponseBodyChainConfig() = default ;
    GetChainResponseBodyChainConfig& operator=(const GetChainResponseBodyChainConfig &) = default ;
    GetChainResponseBodyChainConfig& operator=(GetChainResponseBodyChainConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chainConfigId_ != nullptr
        && this->isActive_ != nullptr && this->nodes_ != nullptr && this->routers_ != nullptr && this->version_ != nullptr; };
    // chainConfigId Field Functions 
    bool hasChainConfigId() const { return this->chainConfigId_ != nullptr;};
    void deleteChainConfigId() { this->chainConfigId_ = nullptr;};
    inline string chainConfigId() const { DARABONBA_PTR_GET_DEFAULT(chainConfigId_, "") };
    inline GetChainResponseBodyChainConfig& setChainConfigId(string chainConfigId) { DARABONBA_PTR_SET_VALUE(chainConfigId_, chainConfigId) };


    // isActive Field Functions 
    bool hasIsActive() const { return this->isActive_ != nullptr;};
    void deleteIsActive() { this->isActive_ = nullptr;};
    inline bool isActive() const { DARABONBA_PTR_GET_DEFAULT(isActive_, false) };
    inline GetChainResponseBodyChainConfig& setIsActive(bool isActive) { DARABONBA_PTR_SET_VALUE(isActive_, isActive) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::GetChainResponseBodyChainConfigNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::GetChainResponseBodyChainConfigNodes>) };
    inline vector<Models::GetChainResponseBodyChainConfigNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::GetChainResponseBodyChainConfigNodes>) };
    inline GetChainResponseBodyChainConfig& setNodes(const vector<Models::GetChainResponseBodyChainConfigNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline GetChainResponseBodyChainConfig& setNodes(vector<Models::GetChainResponseBodyChainConfigNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // routers Field Functions 
    bool hasRouters() const { return this->routers_ != nullptr;};
    void deleteRouters() { this->routers_ = nullptr;};
    inline const vector<Models::GetChainResponseBodyChainConfigRouters> & routers() const { DARABONBA_PTR_GET_CONST(routers_, vector<Models::GetChainResponseBodyChainConfigRouters>) };
    inline vector<Models::GetChainResponseBodyChainConfigRouters> routers() { DARABONBA_PTR_GET(routers_, vector<Models::GetChainResponseBodyChainConfigRouters>) };
    inline GetChainResponseBodyChainConfig& setRouters(const vector<Models::GetChainResponseBodyChainConfigRouters> & routers) { DARABONBA_PTR_SET_VALUE(routers_, routers) };
    inline GetChainResponseBodyChainConfig& setRouters(vector<Models::GetChainResponseBodyChainConfigRouters> && routers) { DARABONBA_PTR_SET_RVALUE(routers_, routers) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetChainResponseBodyChainConfig& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> chainConfigId_ = nullptr;
    std::shared_ptr<bool> isActive_ = nullptr;
    std::shared_ptr<vector<Models::GetChainResponseBodyChainConfigNodes>> nodes_ = nullptr;
    std::shared_ptr<vector<Models::GetChainResponseBodyChainConfigRouters>> routers_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
