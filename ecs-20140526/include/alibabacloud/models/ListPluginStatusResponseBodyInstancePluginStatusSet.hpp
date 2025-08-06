// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINSTATUSRESPONSEBODYINSTANCEPLUGINSTATUSSET_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINSTATUSRESPONSEBODYINSTANCEPLUGINSTATUSSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ListPluginStatusResponseBodyInstancePluginStatusSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginStatusResponseBodyInstancePluginStatusSet& obj) { 
      DARABONBA_PTR_TO_JSON(InstancePluginStatus, instancePluginStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginStatusResponseBodyInstancePluginStatusSet& obj) { 
      DARABONBA_PTR_FROM_JSON(InstancePluginStatus, instancePluginStatus_);
    };
    ListPluginStatusResponseBodyInstancePluginStatusSet() = default ;
    ListPluginStatusResponseBodyInstancePluginStatusSet(const ListPluginStatusResponseBodyInstancePluginStatusSet &) = default ;
    ListPluginStatusResponseBodyInstancePluginStatusSet(ListPluginStatusResponseBodyInstancePluginStatusSet &&) = default ;
    ListPluginStatusResponseBodyInstancePluginStatusSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginStatusResponseBodyInstancePluginStatusSet() = default ;
    ListPluginStatusResponseBodyInstancePluginStatusSet& operator=(const ListPluginStatusResponseBodyInstancePluginStatusSet &) = default ;
    ListPluginStatusResponseBodyInstancePluginStatusSet& operator=(ListPluginStatusResponseBodyInstancePluginStatusSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instancePluginStatus_ != nullptr; };
    // instancePluginStatus Field Functions 
    bool hasInstancePluginStatus() const { return this->instancePluginStatus_ != nullptr;};
    void deleteInstancePluginStatus() { this->instancePluginStatus_ = nullptr;};
    inline const vector<Models::ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus> & instancePluginStatus() const { DARABONBA_PTR_GET_CONST(instancePluginStatus_, vector<Models::ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus>) };
    inline vector<Models::ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus> instancePluginStatus() { DARABONBA_PTR_GET(instancePluginStatus_, vector<Models::ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus>) };
    inline ListPluginStatusResponseBodyInstancePluginStatusSet& setInstancePluginStatus(const vector<Models::ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus> & instancePluginStatus) { DARABONBA_PTR_SET_VALUE(instancePluginStatus_, instancePluginStatus) };
    inline ListPluginStatusResponseBodyInstancePluginStatusSet& setInstancePluginStatus(vector<Models::ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus> && instancePluginStatus) { DARABONBA_PTR_SET_RVALUE(instancePluginStatus_, instancePluginStatus) };


  protected:
    std::shared_ptr<vector<Models::ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus>> instancePluginStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
