// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMMAPPREQUESTBINDINGCONFIGCOMMANDS_HPP_
#define ALIBABACLOUD_MODELS_CREATEMMAPPREQUESTBINDINGCONFIGCOMMANDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMmAppRequestBindingConfigCommandsTools.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class CreateMmAppRequestBindingConfigCommands : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMmAppRequestBindingConfigCommands& obj) { 
      DARABONBA_PTR_TO_JSON(DomainCode, domainCode_);
      DARABONBA_PTR_TO_JSON(Tools, tools_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMmAppRequestBindingConfigCommands& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainCode, domainCode_);
      DARABONBA_PTR_FROM_JSON(Tools, tools_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateMmAppRequestBindingConfigCommands() = default ;
    CreateMmAppRequestBindingConfigCommands(const CreateMmAppRequestBindingConfigCommands &) = default ;
    CreateMmAppRequestBindingConfigCommands(CreateMmAppRequestBindingConfigCommands &&) = default ;
    CreateMmAppRequestBindingConfigCommands(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMmAppRequestBindingConfigCommands() = default ;
    CreateMmAppRequestBindingConfigCommands& operator=(const CreateMmAppRequestBindingConfigCommands &) = default ;
    CreateMmAppRequestBindingConfigCommands& operator=(CreateMmAppRequestBindingConfigCommands &&) = default ;
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
    inline CreateMmAppRequestBindingConfigCommands& setDomainCode(string domainCode) { DARABONBA_PTR_SET_VALUE(domainCode_, domainCode) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<Models::CreateMmAppRequestBindingConfigCommandsTools> & tools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Models::CreateMmAppRequestBindingConfigCommandsTools>) };
    inline vector<Models::CreateMmAppRequestBindingConfigCommandsTools> tools() { DARABONBA_PTR_GET(tools_, vector<Models::CreateMmAppRequestBindingConfigCommandsTools>) };
    inline CreateMmAppRequestBindingConfigCommands& setTools(const vector<Models::CreateMmAppRequestBindingConfigCommandsTools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline CreateMmAppRequestBindingConfigCommands& setTools(vector<Models::CreateMmAppRequestBindingConfigCommandsTools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateMmAppRequestBindingConfigCommands& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> domainCode_ = nullptr;
    std::shared_ptr<vector<Models::CreateMmAppRequestBindingConfigCommandsTools>> tools_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
