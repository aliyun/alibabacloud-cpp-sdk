// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINSTATUSRESPONSEBODYINSTANCEPLUGINSTATUSSETINSTANCEPLUGINSTATUSPLUGINSTATUSSET_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINSTATUSRESPONSEBODYINSTANCEPLUGINSTATUSSETINSTANCEPLUGINSTATUSPLUGINSTATUSSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet& obj) { 
      DARABONBA_PTR_TO_JSON(PluginStatus, pluginStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet& obj) { 
      DARABONBA_PTR_FROM_JSON(PluginStatus, pluginStatus_);
    };
    ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet() = default ;
    ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet(const ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet &) = default ;
    ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet(ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet &&) = default ;
    ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet() = default ;
    ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet& operator=(const ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet &) = default ;
    ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet& operator=(ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pluginStatus_ != nullptr; };
    // pluginStatus Field Functions 
    bool hasPluginStatus() const { return this->pluginStatus_ != nullptr;};
    void deletePluginStatus() { this->pluginStatus_ = nullptr;};
    inline const vector<Models::ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus> & pluginStatus() const { DARABONBA_PTR_GET_CONST(pluginStatus_, vector<Models::ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus>) };
    inline vector<Models::ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus> pluginStatus() { DARABONBA_PTR_GET(pluginStatus_, vector<Models::ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus>) };
    inline ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet& setPluginStatus(const vector<Models::ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus> & pluginStatus) { DARABONBA_PTR_SET_VALUE(pluginStatus_, pluginStatus) };
    inline ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet& setPluginStatus(vector<Models::ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus> && pluginStatus) { DARABONBA_PTR_SET_RVALUE(pluginStatus_, pluginStatus) };


  protected:
    std::shared_ptr<vector<Models::ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus>> pluginStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
