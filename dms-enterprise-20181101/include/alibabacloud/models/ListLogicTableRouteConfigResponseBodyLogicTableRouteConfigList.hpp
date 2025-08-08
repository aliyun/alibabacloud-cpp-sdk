// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGICTABLEROUTECONFIGRESPONSEBODYLOGICTABLEROUTECONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGICTABLEROUTECONFIGRESPONSEBODYLOGICTABLEROUTECONFIGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(LogicTableRouteConfig, logicTableRouteConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(LogicTableRouteConfig, logicTableRouteConfig_);
    };
    ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList() = default ;
    ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList(const ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList &) = default ;
    ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList(ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList &&) = default ;
    ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList() = default ;
    ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList& operator=(const ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList &) = default ;
    ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList& operator=(ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logicTableRouteConfig_ != nullptr; };
    // logicTableRouteConfig Field Functions 
    bool hasLogicTableRouteConfig() const { return this->logicTableRouteConfig_ != nullptr;};
    void deleteLogicTableRouteConfig() { this->logicTableRouteConfig_ = nullptr;};
    inline const vector<Models::ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig> & logicTableRouteConfig() const { DARABONBA_PTR_GET_CONST(logicTableRouteConfig_, vector<Models::ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig>) };
    inline vector<Models::ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig> logicTableRouteConfig() { DARABONBA_PTR_GET(logicTableRouteConfig_, vector<Models::ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig>) };
    inline ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList& setLogicTableRouteConfig(const vector<Models::ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig> & logicTableRouteConfig) { DARABONBA_PTR_SET_VALUE(logicTableRouteConfig_, logicTableRouteConfig) };
    inline ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList& setLogicTableRouteConfig(vector<Models::ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig> && logicTableRouteConfig) { DARABONBA_PTR_SET_RVALUE(logicTableRouteConfig_, logicTableRouteConfig) };


  protected:
    std::shared_ptr<vector<Models::ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig>> logicTableRouteConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
