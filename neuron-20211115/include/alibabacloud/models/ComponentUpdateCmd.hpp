// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPONENTUPDATECMD_HPP_
#define ALIBABACLOUD_MODELS_COMPONENTUPDATECMD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ConfigModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ComponentUpdateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ComponentUpdateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(configuration, configuration_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(useScope, useScope_);
      DARABONBA_PTR_TO_JSON(useType, useType_);
    };
    friend void from_json(const Darabonba::Json& j, ComponentUpdateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(useScope, useScope_);
      DARABONBA_PTR_FROM_JSON(useType, useType_);
    };
    ComponentUpdateCmd() = default ;
    ComponentUpdateCmd(const ComponentUpdateCmd &) = default ;
    ComponentUpdateCmd(ComponentUpdateCmd &&) = default ;
    ComponentUpdateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ComponentUpdateCmd() = default ;
    ComponentUpdateCmd& operator=(const ComponentUpdateCmd &) = default ;
    ComponentUpdateCmd& operator=(ComponentUpdateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configuration_ == nullptr
        && this->description_ == nullptr && this->id_ == nullptr && this->scope_ == nullptr && this->useScope_ == nullptr && this->useType_ == nullptr; };
    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const vector<ConfigModel> & getConfiguration() const { DARABONBA_PTR_GET_CONST(configuration_, vector<ConfigModel>) };
    inline vector<ConfigModel> getConfiguration() { DARABONBA_PTR_GET(configuration_, vector<ConfigModel>) };
    inline ComponentUpdateCmd& setConfiguration(const vector<ConfigModel> & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline ComponentUpdateCmd& setConfiguration(vector<ConfigModel> && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ComponentUpdateCmd& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ComponentUpdateCmd& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ComponentUpdateCmd& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // useScope Field Functions 
    bool hasUseScope() const { return this->useScope_ != nullptr;};
    void deleteUseScope() { this->useScope_ = nullptr;};
    inline string getUseScope() const { DARABONBA_PTR_GET_DEFAULT(useScope_, "") };
    inline ComponentUpdateCmd& setUseScope(string useScope) { DARABONBA_PTR_SET_VALUE(useScope_, useScope) };


    // useType Field Functions 
    bool hasUseType() const { return this->useType_ != nullptr;};
    void deleteUseType() { this->useType_ = nullptr;};
    inline string getUseType() const { DARABONBA_PTR_GET_DEFAULT(useType_, "") };
    inline ComponentUpdateCmd& setUseType(string useType) { DARABONBA_PTR_SET_VALUE(useType_, useType) };


  protected:
    shared_ptr<vector<ConfigModel>> configuration_ {};
    shared_ptr<string> description_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> scope_ {};
    shared_ptr<string> useScope_ {};
    shared_ptr<string> useType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
