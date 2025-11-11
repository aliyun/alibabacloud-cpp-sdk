// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWRITINGREQUESTWRITINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_RUNWRITINGREQUESTWRITINGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunWritingRequestWritingConfigPromptTag.hpp>
#include <vector>
#include <alibabacloud/models/RunWritingRequestWritingConfigTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunWritingRequestWritingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunWritingRequestWritingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(PromptTag, promptTag_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UseSearch, useSearch_);
    };
    friend void from_json(const Darabonba::Json& j, RunWritingRequestWritingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(PromptTag, promptTag_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UseSearch, useSearch_);
    };
    RunWritingRequestWritingConfig() = default ;
    RunWritingRequestWritingConfig(const RunWritingRequestWritingConfig &) = default ;
    RunWritingRequestWritingConfig(RunWritingRequestWritingConfig &&) = default ;
    RunWritingRequestWritingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunWritingRequestWritingConfig() = default ;
    RunWritingRequestWritingConfig& operator=(const RunWritingRequestWritingConfig &) = default ;
    RunWritingRequestWritingConfig& operator=(RunWritingRequestWritingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->promptTag_ == nullptr && return this->tags_ == nullptr && return this->useSearch_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline RunWritingRequestWritingConfig& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // promptTag Field Functions 
    bool hasPromptTag() const { return this->promptTag_ != nullptr;};
    void deletePromptTag() { this->promptTag_ = nullptr;};
    inline const Models::RunWritingRequestWritingConfigPromptTag & promptTag() const { DARABONBA_PTR_GET_CONST(promptTag_, Models::RunWritingRequestWritingConfigPromptTag) };
    inline Models::RunWritingRequestWritingConfigPromptTag promptTag() { DARABONBA_PTR_GET(promptTag_, Models::RunWritingRequestWritingConfigPromptTag) };
    inline RunWritingRequestWritingConfig& setPromptTag(const Models::RunWritingRequestWritingConfigPromptTag & promptTag) { DARABONBA_PTR_SET_VALUE(promptTag_, promptTag) };
    inline RunWritingRequestWritingConfig& setPromptTag(Models::RunWritingRequestWritingConfigPromptTag && promptTag) { DARABONBA_PTR_SET_RVALUE(promptTag_, promptTag) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::RunWritingRequestWritingConfigTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::RunWritingRequestWritingConfigTags>) };
    inline vector<Models::RunWritingRequestWritingConfigTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::RunWritingRequestWritingConfigTags>) };
    inline RunWritingRequestWritingConfig& setTags(const vector<Models::RunWritingRequestWritingConfigTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline RunWritingRequestWritingConfig& setTags(vector<Models::RunWritingRequestWritingConfigTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // useSearch Field Functions 
    bool hasUseSearch() const { return this->useSearch_ != nullptr;};
    void deleteUseSearch() { this->useSearch_ = nullptr;};
    inline bool useSearch() const { DARABONBA_PTR_GET_DEFAULT(useSearch_, false) };
    inline RunWritingRequestWritingConfig& setUseSearch(bool useSearch) { DARABONBA_PTR_SET_VALUE(useSearch_, useSearch) };


  protected:
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<Models::RunWritingRequestWritingConfigPromptTag> promptTag_ = nullptr;
    std::shared_ptr<vector<Models::RunWritingRequestWritingConfigTags>> tags_ = nullptr;
    std::shared_ptr<bool> useSearch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
