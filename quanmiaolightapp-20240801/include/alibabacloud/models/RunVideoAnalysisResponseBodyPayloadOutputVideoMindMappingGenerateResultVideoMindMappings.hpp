// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOMINDMAPPINGGENERATERESULTVIDEOMINDMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOMINDMAPPINGGENERATERESULTVIDEOMINDMAPPINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings& obj) { 
      DARABONBA_PTR_TO_JSON(childNodes, childNodes_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(childNodes, childNodes_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings(const RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings(RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings &&) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings& operator=(const RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings& operator=(RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->childNodes_ != nullptr
        && this->name_ != nullptr; };
    // childNodes Field Functions 
    bool hasChildNodes() const { return this->childNodes_ != nullptr;};
    void deleteChildNodes() { this->childNodes_ = nullptr;};
    inline const vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes> & childNodes() const { DARABONBA_PTR_GET_CONST(childNodes_, vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes>) };
    inline vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes> childNodes() { DARABONBA_PTR_GET(childNodes_, vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes>) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings& setChildNodes(const vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes> & childNodes) { DARABONBA_PTR_SET_VALUE(childNodes_, childNodes) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings& setChildNodes(vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes> && childNodes) { DARABONBA_PTR_SET_RVALUE(childNodes_, childNodes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes>> childNodes_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
