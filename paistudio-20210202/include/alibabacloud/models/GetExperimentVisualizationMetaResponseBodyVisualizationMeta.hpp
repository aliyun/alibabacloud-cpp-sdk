// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXPERIMENTVISUALIZATIONMETARESPONSEBODYVISUALIZATIONMETA_HPP_
#define ALIBABACLOUD_MODELS_GETEXPERIMENTVISUALIZATIONMETARESPONSEBODYVISUALIZATIONMETA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetExperimentVisualizationMetaResponseBodyVisualizationMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExperimentVisualizationMetaResponseBodyVisualizationMeta& obj) { 
      DARABONBA_PTR_TO_JSON(Meta, meta_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
    };
    friend void from_json(const Darabonba::Json& j, GetExperimentVisualizationMetaResponseBodyVisualizationMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(Meta, meta_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
    };
    GetExperimentVisualizationMetaResponseBodyVisualizationMeta() = default ;
    GetExperimentVisualizationMetaResponseBodyVisualizationMeta(const GetExperimentVisualizationMetaResponseBodyVisualizationMeta &) = default ;
    GetExperimentVisualizationMetaResponseBodyVisualizationMeta(GetExperimentVisualizationMetaResponseBodyVisualizationMeta &&) = default ;
    GetExperimentVisualizationMetaResponseBodyVisualizationMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExperimentVisualizationMetaResponseBodyVisualizationMeta() = default ;
    GetExperimentVisualizationMetaResponseBodyVisualizationMeta& operator=(const GetExperimentVisualizationMetaResponseBodyVisualizationMeta &) = default ;
    GetExperimentVisualizationMetaResponseBodyVisualizationMeta& operator=(GetExperimentVisualizationMetaResponseBodyVisualizationMeta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->meta_ == nullptr
        && return this->nodeId_ == nullptr && return this->nodeName_ == nullptr; };
    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline string meta() const { DARABONBA_PTR_GET_DEFAULT(meta_, "") };
    inline GetExperimentVisualizationMetaResponseBodyVisualizationMeta& setMeta(string meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetExperimentVisualizationMetaResponseBodyVisualizationMeta& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetExperimentVisualizationMetaResponseBodyVisualizationMeta& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


  protected:
    std::shared_ptr<string> meta_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
