// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMMAPPREQUESTBINDINGCONFIGCOMMANDSTOOLS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMMAPPREQUESTBINDINGCONFIGCOMMANDSTOOLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class UpdateMmAppRequestBindingConfigCommandsTools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMmAppRequestBindingConfigCommandsTools& obj) { 
      DARABONBA_PTR_TO_JSON(ToolId, toolId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMmAppRequestBindingConfigCommandsTools& obj) { 
      DARABONBA_PTR_FROM_JSON(ToolId, toolId_);
    };
    UpdateMmAppRequestBindingConfigCommandsTools() = default ;
    UpdateMmAppRequestBindingConfigCommandsTools(const UpdateMmAppRequestBindingConfigCommandsTools &) = default ;
    UpdateMmAppRequestBindingConfigCommandsTools(UpdateMmAppRequestBindingConfigCommandsTools &&) = default ;
    UpdateMmAppRequestBindingConfigCommandsTools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMmAppRequestBindingConfigCommandsTools() = default ;
    UpdateMmAppRequestBindingConfigCommandsTools& operator=(const UpdateMmAppRequestBindingConfigCommandsTools &) = default ;
    UpdateMmAppRequestBindingConfigCommandsTools& operator=(UpdateMmAppRequestBindingConfigCommandsTools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->toolId_ != nullptr; };
    // toolId Field Functions 
    bool hasToolId() const { return this->toolId_ != nullptr;};
    void deleteToolId() { this->toolId_ = nullptr;};
    inline string toolId() const { DARABONBA_PTR_GET_DEFAULT(toolId_, "") };
    inline UpdateMmAppRequestBindingConfigCommandsTools& setToolId(string toolId) { DARABONBA_PTR_SET_VALUE(toolId_, toolId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> toolId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
