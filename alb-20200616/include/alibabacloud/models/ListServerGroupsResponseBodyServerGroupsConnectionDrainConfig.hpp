// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVERGROUPSRESPONSEBODYSERVERGROUPSCONNECTIONDRAINCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVERGROUPSRESPONSEBODYSERVERGROUPSCONNECTIONDRAINCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionDrainEnabled, connectionDrainEnabled_);
      DARABONBA_PTR_TO_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionDrainEnabled, connectionDrainEnabled_);
      DARABONBA_PTR_FROM_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
    };
    ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig() = default ;
    ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig(const ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig &) = default ;
    ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig(ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig &&) = default ;
    ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig() = default ;
    ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig& operator=(const ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig &) = default ;
    ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig& operator=(ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionDrainEnabled_ != nullptr
        && this->connectionDrainTimeout_ != nullptr; };
    // connectionDrainEnabled Field Functions 
    bool hasConnectionDrainEnabled() const { return this->connectionDrainEnabled_ != nullptr;};
    void deleteConnectionDrainEnabled() { this->connectionDrainEnabled_ = nullptr;};
    inline bool connectionDrainEnabled() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainEnabled_, false) };
    inline ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig& setConnectionDrainEnabled(bool connectionDrainEnabled) { DARABONBA_PTR_SET_VALUE(connectionDrainEnabled_, connectionDrainEnabled) };


    // connectionDrainTimeout Field Functions 
    bool hasConnectionDrainTimeout() const { return this->connectionDrainTimeout_ != nullptr;};
    void deleteConnectionDrainTimeout() { this->connectionDrainTimeout_ = nullptr;};
    inline int32_t connectionDrainTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainTimeout_, 0) };
    inline ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig& setConnectionDrainTimeout(int32_t connectionDrainTimeout) { DARABONBA_PTR_SET_VALUE(connectionDrainTimeout_, connectionDrainTimeout) };


  protected:
    // Indicates whether connection draining is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> connectionDrainEnabled_ = nullptr;
    // The timeout period of connection draining.
    std::shared_ptr<int32_t> connectionDrainTimeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
