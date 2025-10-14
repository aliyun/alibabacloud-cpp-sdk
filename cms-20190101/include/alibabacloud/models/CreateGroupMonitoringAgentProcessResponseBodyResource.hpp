// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPMONITORINGAGENTPROCESSRESPONSEBODYRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPMONITORINGAGENTPROCESSRESPONSEBODYRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateGroupMonitoringAgentProcessResponseBodyResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupMonitoringAgentProcessResponseBodyResource& obj) { 
      DARABONBA_PTR_TO_JSON(GroupProcessId, groupProcessId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGroupMonitoringAgentProcessResponseBodyResource& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupProcessId, groupProcessId_);
    };
    CreateGroupMonitoringAgentProcessResponseBodyResource() = default ;
    CreateGroupMonitoringAgentProcessResponseBodyResource(const CreateGroupMonitoringAgentProcessResponseBodyResource &) = default ;
    CreateGroupMonitoringAgentProcessResponseBodyResource(CreateGroupMonitoringAgentProcessResponseBodyResource &&) = default ;
    CreateGroupMonitoringAgentProcessResponseBodyResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupMonitoringAgentProcessResponseBodyResource() = default ;
    CreateGroupMonitoringAgentProcessResponseBodyResource& operator=(const CreateGroupMonitoringAgentProcessResponseBodyResource &) = default ;
    CreateGroupMonitoringAgentProcessResponseBodyResource& operator=(CreateGroupMonitoringAgentProcessResponseBodyResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupProcessId_ == nullptr; };
    // groupProcessId Field Functions 
    bool hasGroupProcessId() const { return this->groupProcessId_ != nullptr;};
    void deleteGroupProcessId() { this->groupProcessId_ = nullptr;};
    inline string groupProcessId() const { DARABONBA_PTR_GET_DEFAULT(groupProcessId_, "") };
    inline CreateGroupMonitoringAgentProcessResponseBodyResource& setGroupProcessId(string groupProcessId) { DARABONBA_PTR_SET_VALUE(groupProcessId_, groupProcessId) };


  protected:
    // The ID of the group process.
    std::shared_ptr<string> groupProcessId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
