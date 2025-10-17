// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSTYLEWRITINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSTYLEWRITINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunStyleWritingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunStyleWritingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(learningSamples, learningSamplesShrink_);
      DARABONBA_PTR_TO_JSON(processStage, processStage_);
      DARABONBA_PTR_TO_JSON(referenceMaterials, referenceMaterialsShrink_);
      DARABONBA_PTR_TO_JSON(styleFeature, styleFeature_);
      DARABONBA_PTR_TO_JSON(useSearch, useSearch_);
      DARABONBA_PTR_TO_JSON(writingTheme, writingTheme_);
    };
    friend void from_json(const Darabonba::Json& j, RunStyleWritingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(learningSamples, learningSamplesShrink_);
      DARABONBA_PTR_FROM_JSON(processStage, processStage_);
      DARABONBA_PTR_FROM_JSON(referenceMaterials, referenceMaterialsShrink_);
      DARABONBA_PTR_FROM_JSON(styleFeature, styleFeature_);
      DARABONBA_PTR_FROM_JSON(useSearch, useSearch_);
      DARABONBA_PTR_FROM_JSON(writingTheme, writingTheme_);
    };
    RunStyleWritingShrinkRequest() = default ;
    RunStyleWritingShrinkRequest(const RunStyleWritingShrinkRequest &) = default ;
    RunStyleWritingShrinkRequest(RunStyleWritingShrinkRequest &&) = default ;
    RunStyleWritingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunStyleWritingShrinkRequest() = default ;
    RunStyleWritingShrinkRequest& operator=(const RunStyleWritingShrinkRequest &) = default ;
    RunStyleWritingShrinkRequest& operator=(RunStyleWritingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->learningSamplesShrink_ == nullptr
        && return this->processStage_ == nullptr && return this->referenceMaterialsShrink_ == nullptr && return this->styleFeature_ == nullptr && return this->useSearch_ == nullptr && return this->writingTheme_ == nullptr; };
    // learningSamplesShrink Field Functions 
    bool hasLearningSamplesShrink() const { return this->learningSamplesShrink_ != nullptr;};
    void deleteLearningSamplesShrink() { this->learningSamplesShrink_ = nullptr;};
    inline string learningSamplesShrink() const { DARABONBA_PTR_GET_DEFAULT(learningSamplesShrink_, "") };
    inline RunStyleWritingShrinkRequest& setLearningSamplesShrink(string learningSamplesShrink) { DARABONBA_PTR_SET_VALUE(learningSamplesShrink_, learningSamplesShrink) };


    // processStage Field Functions 
    bool hasProcessStage() const { return this->processStage_ != nullptr;};
    void deleteProcessStage() { this->processStage_ = nullptr;};
    inline string processStage() const { DARABONBA_PTR_GET_DEFAULT(processStage_, "") };
    inline RunStyleWritingShrinkRequest& setProcessStage(string processStage) { DARABONBA_PTR_SET_VALUE(processStage_, processStage) };


    // referenceMaterialsShrink Field Functions 
    bool hasReferenceMaterialsShrink() const { return this->referenceMaterialsShrink_ != nullptr;};
    void deleteReferenceMaterialsShrink() { this->referenceMaterialsShrink_ = nullptr;};
    inline string referenceMaterialsShrink() const { DARABONBA_PTR_GET_DEFAULT(referenceMaterialsShrink_, "") };
    inline RunStyleWritingShrinkRequest& setReferenceMaterialsShrink(string referenceMaterialsShrink) { DARABONBA_PTR_SET_VALUE(referenceMaterialsShrink_, referenceMaterialsShrink) };


    // styleFeature Field Functions 
    bool hasStyleFeature() const { return this->styleFeature_ != nullptr;};
    void deleteStyleFeature() { this->styleFeature_ = nullptr;};
    inline string styleFeature() const { DARABONBA_PTR_GET_DEFAULT(styleFeature_, "") };
    inline RunStyleWritingShrinkRequest& setStyleFeature(string styleFeature) { DARABONBA_PTR_SET_VALUE(styleFeature_, styleFeature) };


    // useSearch Field Functions 
    bool hasUseSearch() const { return this->useSearch_ != nullptr;};
    void deleteUseSearch() { this->useSearch_ = nullptr;};
    inline bool useSearch() const { DARABONBA_PTR_GET_DEFAULT(useSearch_, false) };
    inline RunStyleWritingShrinkRequest& setUseSearch(bool useSearch) { DARABONBA_PTR_SET_VALUE(useSearch_, useSearch) };


    // writingTheme Field Functions 
    bool hasWritingTheme() const { return this->writingTheme_ != nullptr;};
    void deleteWritingTheme() { this->writingTheme_ = nullptr;};
    inline string writingTheme() const { DARABONBA_PTR_GET_DEFAULT(writingTheme_, "") };
    inline RunStyleWritingShrinkRequest& setWritingTheme(string writingTheme) { DARABONBA_PTR_SET_VALUE(writingTheme_, writingTheme) };


  protected:
    std::shared_ptr<string> learningSamplesShrink_ = nullptr;
    std::shared_ptr<string> processStage_ = nullptr;
    std::shared_ptr<string> referenceMaterialsShrink_ = nullptr;
    std::shared_ptr<string> styleFeature_ = nullptr;
    std::shared_ptr<bool> useSearch_ = nullptr;
    std::shared_ptr<string> writingTheme_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
