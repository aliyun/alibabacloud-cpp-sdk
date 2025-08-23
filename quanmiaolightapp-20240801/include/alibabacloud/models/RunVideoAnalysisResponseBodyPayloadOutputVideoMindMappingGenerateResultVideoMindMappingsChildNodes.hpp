// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOMINDMAPPINGGENERATERESULTVIDEOMINDMAPPINGSCHILDNODES_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOMINDMAPPINGGENERATERESULTVIDEOMINDMAPPINGSCHILDNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes& obj) { 
      DARABONBA_PTR_TO_JSON(childNodes, childNodes_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(childNodes, childNodes_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes(const RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes(RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes &&) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes& operator=(const RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes& operator=(RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->childNodes_ != nullptr
        && this->name_ != nullptr; };
    // childNodes Field Functions 
    bool hasChildNodes() const { return this->childNodes_ != nullptr;};
    void deleteChildNodes() { this->childNodes_ = nullptr;};
    inline const vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes> & childNodes() const { DARABONBA_PTR_GET_CONST(childNodes_, vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes>) };
    inline vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes> childNodes() { DARABONBA_PTR_GET(childNodes_, vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes>) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes& setChildNodes(const vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes> & childNodes) { DARABONBA_PTR_SET_VALUE(childNodes_, childNodes) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes& setChildNodes(vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes> && childNodes) { DARABONBA_PTR_SET_RVALUE(childNodes_, childNodes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes>> childNodes_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
