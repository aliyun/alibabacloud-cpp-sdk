// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPCONFIGMAPPING_HPP_
#define ALIBABACLOUD_MODELS_APPCONFIGMAPPING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class AppConfigMapping : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppConfigMapping& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
    };
    friend void from_json(const Darabonba::Json& j, AppConfigMapping& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
    };
    AppConfigMapping() = default ;
    AppConfigMapping(const AppConfigMapping &) = default ;
    AppConfigMapping(AppConfigMapping &&) = default ;
    AppConfigMapping(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppConfigMapping() = default ;
    AppConfigMapping& operator=(const AppConfigMapping &) = default ;
    AppConfigMapping& operator=(AppConfigMapping &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->modelId_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline AppConfigMapping& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline AppConfigMapping& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


  protected:
    shared_ptr<string> alias_ {};
    shared_ptr<string> modelId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
