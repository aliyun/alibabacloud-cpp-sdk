// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXPERIMENTVISUALIZATIONMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEXPERIMENTVISUALIZATIONMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetExperimentVisualizationMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExperimentVisualizationMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetExperimentVisualizationMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
    };
    GetExperimentVisualizationMetaRequest() = default ;
    GetExperimentVisualizationMetaRequest(const GetExperimentVisualizationMetaRequest &) = default ;
    GetExperimentVisualizationMetaRequest(GetExperimentVisualizationMetaRequest &&) = default ;
    GetExperimentVisualizationMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExperimentVisualizationMetaRequest() = default ;
    GetExperimentVisualizationMetaRequest& operator=(const GetExperimentVisualizationMetaRequest &) = default ;
    GetExperimentVisualizationMetaRequest& operator=(GetExperimentVisualizationMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeIds_ == nullptr; };
    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline string nodeIds() const { DARABONBA_PTR_GET_DEFAULT(nodeIds_, "") };
    inline GetExperimentVisualizationMetaRequest& setNodeIds(string nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };


  protected:
    std::shared_ptr<string> nodeIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
