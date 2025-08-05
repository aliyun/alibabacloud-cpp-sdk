// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBINFORESPONSEBODYDATASCENERESULTS_HPP_
#define ALIBABACLOUD_MODELS_GETJOBINFORESPONSEBODYDATASCENERESULTS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetJobInfoResponseBodyDataSceneResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobInfoResponseBodyDataSceneResults& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(sceneTag, sceneTag_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobInfoResponseBodyDataSceneResults& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(sceneTag, sceneTag_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetJobInfoResponseBodyDataSceneResults() = default ;
    GetJobInfoResponseBodyDataSceneResults(const GetJobInfoResponseBodyDataSceneResults &) = default ;
    GetJobInfoResponseBodyDataSceneResults(GetJobInfoResponseBodyDataSceneResults &&) = default ;
    GetJobInfoResponseBodyDataSceneResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobInfoResponseBodyDataSceneResults() = default ;
    GetJobInfoResponseBodyDataSceneResults& operator=(const GetJobInfoResponseBodyDataSceneResults &) = default ;
    GetJobInfoResponseBodyDataSceneResults& operator=(GetJobInfoResponseBodyDataSceneResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->params_ != nullptr && this->scene_ != nullptr && this->sceneTag_ != nullptr && this->summary_ != nullptr && this->type_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetJobInfoResponseBodyDataSceneResults& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const map<string, string> & params() const { DARABONBA_PTR_GET_CONST(params_, map<string, string>) };
    inline map<string, string> params() { DARABONBA_PTR_GET(params_, map<string, string>) };
    inline GetJobInfoResponseBodyDataSceneResults& setParams(const map<string, string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline GetJobInfoResponseBodyDataSceneResults& setParams(map<string, string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline GetJobInfoResponseBodyDataSceneResults& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // sceneTag Field Functions 
    bool hasSceneTag() const { return this->sceneTag_ != nullptr;};
    void deleteSceneTag() { this->sceneTag_ = nullptr;};
    inline string sceneTag() const { DARABONBA_PTR_GET_DEFAULT(sceneTag_, "") };
    inline GetJobInfoResponseBodyDataSceneResults& setSceneTag(string sceneTag) { DARABONBA_PTR_SET_VALUE(sceneTag_, sceneTag) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline GetJobInfoResponseBodyDataSceneResults& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetJobInfoResponseBodyDataSceneResults& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The intelligent diagnostics result description.
    std::shared_ptr<string> description_ = nullptr;
    // Information about the nodes where data skew or data expansion is detected. This parameter is returned only when the diagnostics scenario is data skew or data expansion.
    std::shared_ptr<map<string, string>> params_ = nullptr;
    // The intelligent diagnostics result scenario.
    std::shared_ptr<string> scene_ = nullptr;
    // The intelligent diagnostics result tag.
    std::shared_ptr<string> sceneTag_ = nullptr;
    // The intelligent diagnostics result summary.
    std::shared_ptr<string> summary_ = nullptr;
    // The intelligent diagnostics result type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
