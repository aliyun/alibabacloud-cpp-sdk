// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOPHONCOMMANDSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOPHONCOMMANDSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSophonCommandsResponseBodyDataParamConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeSophonCommandsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSophonCommandsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParamConfig, paramConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSophonCommandsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParamConfig, paramConfig_);
    };
    DescribeSophonCommandsResponseBodyData() = default ;
    DescribeSophonCommandsResponseBodyData(const DescribeSophonCommandsResponseBodyData &) = default ;
    DescribeSophonCommandsResponseBodyData(DescribeSophonCommandsResponseBodyData &&) = default ;
    DescribeSophonCommandsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSophonCommandsResponseBodyData() = default ;
    DescribeSophonCommandsResponseBodyData& operator=(const DescribeSophonCommandsResponseBodyData &) = default ;
    DescribeSophonCommandsResponseBodyData& operator=(DescribeSophonCommandsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->displayName_ == nullptr && return this->name_ == nullptr && return this->paramConfig_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSophonCommandsResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribeSophonCommandsResponseBodyData& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSophonCommandsResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // paramConfig Field Functions 
    bool hasParamConfig() const { return this->paramConfig_ != nullptr;};
    void deleteParamConfig() { this->paramConfig_ = nullptr;};
    inline const vector<Models::DescribeSophonCommandsResponseBodyDataParamConfig> & paramConfig() const { DARABONBA_PTR_GET_CONST(paramConfig_, vector<Models::DescribeSophonCommandsResponseBodyDataParamConfig>) };
    inline vector<Models::DescribeSophonCommandsResponseBodyDataParamConfig> paramConfig() { DARABONBA_PTR_GET(paramConfig_, vector<Models::DescribeSophonCommandsResponseBodyDataParamConfig>) };
    inline DescribeSophonCommandsResponseBodyData& setParamConfig(const vector<Models::DescribeSophonCommandsResponseBodyDataParamConfig> & paramConfig) { DARABONBA_PTR_SET_VALUE(paramConfig_, paramConfig) };
    inline DescribeSophonCommandsResponseBodyData& setParamConfig(vector<Models::DescribeSophonCommandsResponseBodyDataParamConfig> && paramConfig) { DARABONBA_PTR_SET_RVALUE(paramConfig_, paramConfig) };


  protected:
    // The description of the command.
    std::shared_ptr<string> description_ = nullptr;
    // The display name of the command.
    std::shared_ptr<string> displayName_ = nullptr;
    // The name of the command.
    std::shared_ptr<string> name_ = nullptr;
    // The parameter configurations.
    std::shared_ptr<vector<Models::DescribeSophonCommandsResponseBodyDataParamConfig>> paramConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
