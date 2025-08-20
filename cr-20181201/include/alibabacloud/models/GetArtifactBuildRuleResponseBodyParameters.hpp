// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTBUILDRULERESPONSEBODYPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTBUILDRULERESPONSEBODYPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetArtifactBuildRuleResponseBodyParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArtifactBuildRuleResponseBodyParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ImageIndexOnly, imageIndexOnly_);
      DARABONBA_PTR_TO_JSON(PriorityFile, priorityFile_);
    };
    friend void from_json(const Darabonba::Json& j, GetArtifactBuildRuleResponseBodyParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageIndexOnly, imageIndexOnly_);
      DARABONBA_PTR_FROM_JSON(PriorityFile, priorityFile_);
    };
    GetArtifactBuildRuleResponseBodyParameters() = default ;
    GetArtifactBuildRuleResponseBodyParameters(const GetArtifactBuildRuleResponseBodyParameters &) = default ;
    GetArtifactBuildRuleResponseBodyParameters(GetArtifactBuildRuleResponseBodyParameters &&) = default ;
    GetArtifactBuildRuleResponseBodyParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArtifactBuildRuleResponseBodyParameters() = default ;
    GetArtifactBuildRuleResponseBodyParameters& operator=(const GetArtifactBuildRuleResponseBodyParameters &) = default ;
    GetArtifactBuildRuleResponseBodyParameters& operator=(GetArtifactBuildRuleResponseBodyParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageIndexOnly_ != nullptr
        && this->priorityFile_ != nullptr; };
    // imageIndexOnly Field Functions 
    bool hasImageIndexOnly() const { return this->imageIndexOnly_ != nullptr;};
    void deleteImageIndexOnly() { this->imageIndexOnly_ = nullptr;};
    inline bool imageIndexOnly() const { DARABONBA_PTR_GET_DEFAULT(imageIndexOnly_, false) };
    inline GetArtifactBuildRuleResponseBodyParameters& setImageIndexOnly(bool imageIndexOnly) { DARABONBA_PTR_SET_VALUE(imageIndexOnly_, imageIndexOnly) };


    // priorityFile Field Functions 
    bool hasPriorityFile() const { return this->priorityFile_ != nullptr;};
    void deletePriorityFile() { this->priorityFile_ = nullptr;};
    inline string priorityFile() const { DARABONBA_PTR_GET_DEFAULT(priorityFile_, "") };
    inline GetArtifactBuildRuleResponseBodyParameters& setPriorityFile(string priorityFile) { DARABONBA_PTR_SET_VALUE(priorityFile_, priorityFile) };


  protected:
    std::shared_ptr<bool> imageIndexOnly_ = nullptr;
    std::shared_ptr<string> priorityFile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
