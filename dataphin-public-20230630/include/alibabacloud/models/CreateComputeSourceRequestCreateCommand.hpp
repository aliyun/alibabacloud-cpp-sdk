// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPUTESOURCEREQUESTCREATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPUTESOURCEREQUESTCREATECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateComputeSourceRequestCreateCommandConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateComputeSourceRequestCreateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComputeSourceRequestCreateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigList, configList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComputeSourceRequestCreateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateComputeSourceRequestCreateCommand() = default ;
    CreateComputeSourceRequestCreateCommand(const CreateComputeSourceRequestCreateCommand &) = default ;
    CreateComputeSourceRequestCreateCommand(CreateComputeSourceRequestCreateCommand &&) = default ;
    CreateComputeSourceRequestCreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComputeSourceRequestCreateCommand() = default ;
    CreateComputeSourceRequestCreateCommand& operator=(const CreateComputeSourceRequestCreateCommand &) = default ;
    CreateComputeSourceRequestCreateCommand& operator=(CreateComputeSourceRequestCreateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configList_ != nullptr
        && this->description_ != nullptr && this->name_ != nullptr && this->type_ != nullptr; };
    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline const vector<Models::CreateComputeSourceRequestCreateCommandConfigList> & configList() const { DARABONBA_PTR_GET_CONST(configList_, vector<Models::CreateComputeSourceRequestCreateCommandConfigList>) };
    inline vector<Models::CreateComputeSourceRequestCreateCommandConfigList> configList() { DARABONBA_PTR_GET(configList_, vector<Models::CreateComputeSourceRequestCreateCommandConfigList>) };
    inline CreateComputeSourceRequestCreateCommand& setConfigList(const vector<Models::CreateComputeSourceRequestCreateCommandConfigList> & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
    inline CreateComputeSourceRequestCreateCommand& setConfigList(vector<Models::CreateComputeSourceRequestCreateCommandConfigList> && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateComputeSourceRequestCreateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateComputeSourceRequestCreateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateComputeSourceRequestCreateCommand& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateComputeSourceRequestCreateCommandConfigList>> configList_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
