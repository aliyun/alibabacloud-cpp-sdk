// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMMAPPREQUESTBINDINGCONFIGCOMMANDS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMMAPPREQUESTBINDINGCONFIGCOMMANDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateMmAppRequestBindingConfigCommandsTools.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class UpdateMmAppRequestBindingConfigCommands : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMmAppRequestBindingConfigCommands& obj) { 
      DARABONBA_PTR_TO_JSON(DomainCode, domainCode_);
      DARABONBA_PTR_TO_JSON(Tools, tools_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMmAppRequestBindingConfigCommands& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainCode, domainCode_);
      DARABONBA_PTR_FROM_JSON(Tools, tools_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateMmAppRequestBindingConfigCommands() = default ;
    UpdateMmAppRequestBindingConfigCommands(const UpdateMmAppRequestBindingConfigCommands &) = default ;
    UpdateMmAppRequestBindingConfigCommands(UpdateMmAppRequestBindingConfigCommands &&) = default ;
    UpdateMmAppRequestBindingConfigCommands(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMmAppRequestBindingConfigCommands() = default ;
    UpdateMmAppRequestBindingConfigCommands& operator=(const UpdateMmAppRequestBindingConfigCommands &) = default ;
    UpdateMmAppRequestBindingConfigCommands& operator=(UpdateMmAppRequestBindingConfigCommands &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainCode_ != nullptr
        && this->tools_ != nullptr && this->type_ != nullptr; };
    // domainCode Field Functions 
    bool hasDomainCode() const { return this->domainCode_ != nullptr;};
    void deleteDomainCode() { this->domainCode_ = nullptr;};
    inline string domainCode() const { DARABONBA_PTR_GET_DEFAULT(domainCode_, "") };
    inline UpdateMmAppRequestBindingConfigCommands& setDomainCode(string domainCode) { DARABONBA_PTR_SET_VALUE(domainCode_, domainCode) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<Models::UpdateMmAppRequestBindingConfigCommandsTools> & tools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Models::UpdateMmAppRequestBindingConfigCommandsTools>) };
    inline vector<Models::UpdateMmAppRequestBindingConfigCommandsTools> tools() { DARABONBA_PTR_GET(tools_, vector<Models::UpdateMmAppRequestBindingConfigCommandsTools>) };
    inline UpdateMmAppRequestBindingConfigCommands& setTools(const vector<Models::UpdateMmAppRequestBindingConfigCommandsTools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline UpdateMmAppRequestBindingConfigCommands& setTools(vector<Models::UpdateMmAppRequestBindingConfigCommandsTools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateMmAppRequestBindingConfigCommands& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> domainCode_ = nullptr;
    std::shared_ptr<vector<Models::UpdateMmAppRequestBindingConfigCommandsTools>> tools_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
