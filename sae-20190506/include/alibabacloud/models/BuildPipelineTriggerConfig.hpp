// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUILDPIPELINETRIGGERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_BUILDPIPELINETRIGGERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class BuildPipelineTriggerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuildPipelineTriggerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BranchName, branchName_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, BuildPipelineTriggerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BranchName, branchName_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    BuildPipelineTriggerConfig() = default ;
    BuildPipelineTriggerConfig(const BuildPipelineTriggerConfig &) = default ;
    BuildPipelineTriggerConfig(BuildPipelineTriggerConfig &&) = default ;
    BuildPipelineTriggerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuildPipelineTriggerConfig() = default ;
    BuildPipelineTriggerConfig& operator=(const BuildPipelineTriggerConfig &) = default ;
    BuildPipelineTriggerConfig& operator=(BuildPipelineTriggerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->branchName_ == nullptr
        && return this->tagName_ == nullptr && return this->type_ == nullptr; };
    // branchName Field Functions 
    bool hasBranchName() const { return this->branchName_ != nullptr;};
    void deleteBranchName() { this->branchName_ = nullptr;};
    inline string branchName() const { DARABONBA_PTR_GET_DEFAULT(branchName_, "") };
    inline BuildPipelineTriggerConfig& setBranchName(string branchName) { DARABONBA_PTR_SET_VALUE(branchName_, branchName) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline BuildPipelineTriggerConfig& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline BuildPipelineTriggerConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> branchName_ = nullptr;
    std::shared_ptr<string> tagName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
