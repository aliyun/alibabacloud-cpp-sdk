// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSTYLEWRITINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSTYLEWRITINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunStyleWritingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunStyleWritingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(learningSamples, learningSamples_);
      DARABONBA_PTR_TO_JSON(processStage, processStage_);
      DARABONBA_PTR_TO_JSON(referenceMaterials, referenceMaterials_);
      DARABONBA_PTR_TO_JSON(styleFeature, styleFeature_);
      DARABONBA_PTR_TO_JSON(useSearch, useSearch_);
      DARABONBA_PTR_TO_JSON(writingTheme, writingTheme_);
    };
    friend void from_json(const Darabonba::Json& j, RunStyleWritingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(learningSamples, learningSamples_);
      DARABONBA_PTR_FROM_JSON(processStage, processStage_);
      DARABONBA_PTR_FROM_JSON(referenceMaterials, referenceMaterials_);
      DARABONBA_PTR_FROM_JSON(styleFeature, styleFeature_);
      DARABONBA_PTR_FROM_JSON(useSearch, useSearch_);
      DARABONBA_PTR_FROM_JSON(writingTheme, writingTheme_);
    };
    RunStyleWritingRequest() = default ;
    RunStyleWritingRequest(const RunStyleWritingRequest &) = default ;
    RunStyleWritingRequest(RunStyleWritingRequest &&) = default ;
    RunStyleWritingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunStyleWritingRequest() = default ;
    RunStyleWritingRequest& operator=(const RunStyleWritingRequest &) = default ;
    RunStyleWritingRequest& operator=(RunStyleWritingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->learningSamples_ == nullptr
        && return this->processStage_ == nullptr && return this->referenceMaterials_ == nullptr && return this->styleFeature_ == nullptr && return this->useSearch_ == nullptr && return this->writingTheme_ == nullptr; };
    // learningSamples Field Functions 
    bool hasLearningSamples() const { return this->learningSamples_ != nullptr;};
    void deleteLearningSamples() { this->learningSamples_ = nullptr;};
    inline const vector<string> & learningSamples() const { DARABONBA_PTR_GET_CONST(learningSamples_, vector<string>) };
    inline vector<string> learningSamples() { DARABONBA_PTR_GET(learningSamples_, vector<string>) };
    inline RunStyleWritingRequest& setLearningSamples(const vector<string> & learningSamples) { DARABONBA_PTR_SET_VALUE(learningSamples_, learningSamples) };
    inline RunStyleWritingRequest& setLearningSamples(vector<string> && learningSamples) { DARABONBA_PTR_SET_RVALUE(learningSamples_, learningSamples) };


    // processStage Field Functions 
    bool hasProcessStage() const { return this->processStage_ != nullptr;};
    void deleteProcessStage() { this->processStage_ = nullptr;};
    inline string processStage() const { DARABONBA_PTR_GET_DEFAULT(processStage_, "") };
    inline RunStyleWritingRequest& setProcessStage(string processStage) { DARABONBA_PTR_SET_VALUE(processStage_, processStage) };


    // referenceMaterials Field Functions 
    bool hasReferenceMaterials() const { return this->referenceMaterials_ != nullptr;};
    void deleteReferenceMaterials() { this->referenceMaterials_ = nullptr;};
    inline const vector<string> & referenceMaterials() const { DARABONBA_PTR_GET_CONST(referenceMaterials_, vector<string>) };
    inline vector<string> referenceMaterials() { DARABONBA_PTR_GET(referenceMaterials_, vector<string>) };
    inline RunStyleWritingRequest& setReferenceMaterials(const vector<string> & referenceMaterials) { DARABONBA_PTR_SET_VALUE(referenceMaterials_, referenceMaterials) };
    inline RunStyleWritingRequest& setReferenceMaterials(vector<string> && referenceMaterials) { DARABONBA_PTR_SET_RVALUE(referenceMaterials_, referenceMaterials) };


    // styleFeature Field Functions 
    bool hasStyleFeature() const { return this->styleFeature_ != nullptr;};
    void deleteStyleFeature() { this->styleFeature_ = nullptr;};
    inline string styleFeature() const { DARABONBA_PTR_GET_DEFAULT(styleFeature_, "") };
    inline RunStyleWritingRequest& setStyleFeature(string styleFeature) { DARABONBA_PTR_SET_VALUE(styleFeature_, styleFeature) };


    // useSearch Field Functions 
    bool hasUseSearch() const { return this->useSearch_ != nullptr;};
    void deleteUseSearch() { this->useSearch_ = nullptr;};
    inline bool useSearch() const { DARABONBA_PTR_GET_DEFAULT(useSearch_, false) };
    inline RunStyleWritingRequest& setUseSearch(bool useSearch) { DARABONBA_PTR_SET_VALUE(useSearch_, useSearch) };


    // writingTheme Field Functions 
    bool hasWritingTheme() const { return this->writingTheme_ != nullptr;};
    void deleteWritingTheme() { this->writingTheme_ = nullptr;};
    inline string writingTheme() const { DARABONBA_PTR_GET_DEFAULT(writingTheme_, "") };
    inline RunStyleWritingRequest& setWritingTheme(string writingTheme) { DARABONBA_PTR_SET_VALUE(writingTheme_, writingTheme) };


  protected:
    std::shared_ptr<vector<string>> learningSamples_ = nullptr;
    std::shared_ptr<string> processStage_ = nullptr;
    std::shared_ptr<vector<string>> referenceMaterials_ = nullptr;
    std::shared_ptr<string> styleFeature_ = nullptr;
    std::shared_ptr<bool> useSearch_ = nullptr;
    std::shared_ptr<string> writingTheme_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
