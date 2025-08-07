// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEANDPUBLISHAGENTSELECTIVEREQUESTAPPLICATIONCONFIGLONGTERMMEMORY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEANDPUBLISHAGENTSELECTIVEREQUESTAPPLICATIONCONFIGLONGTERMMEMORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
    };
    UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory() = default ;
    UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory(const UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory &) = default ;
    UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory(UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory &&) = default ;
    UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory() = default ;
    UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory& operator=(const UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory &) = default ;
    UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory& operator=(UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


  protected:
    std::shared_ptr<bool> enable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
