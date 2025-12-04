// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFABRICTOPOLOGYRESPONSEBODYCONTENTTOPOINFO_HPP_
#define ALIBABACLOUD_MODELS_GETFABRICTOPOLOGYRESPONSEBODYCONTENTTOPOINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetFabricTopologyResponseBodyContentTopoInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFabricTopologyResponseBodyContentTopoInfo& obj) { 
      DARABONBA_PTR_TO_JSON(LayerName, layerName_);
      DARABONBA_PTR_TO_JSON(LayerType, layerType_);
      DARABONBA_PTR_TO_JSON(NextLayer, nextLayer_);
    };
    friend void from_json(const Darabonba::Json& j, GetFabricTopologyResponseBodyContentTopoInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(LayerName, layerName_);
      DARABONBA_PTR_FROM_JSON(LayerType, layerType_);
      DARABONBA_PTR_FROM_JSON(NextLayer, nextLayer_);
    };
    GetFabricTopologyResponseBodyContentTopoInfo() = default ;
    GetFabricTopologyResponseBodyContentTopoInfo(const GetFabricTopologyResponseBodyContentTopoInfo &) = default ;
    GetFabricTopologyResponseBodyContentTopoInfo(GetFabricTopologyResponseBodyContentTopoInfo &&) = default ;
    GetFabricTopologyResponseBodyContentTopoInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFabricTopologyResponseBodyContentTopoInfo() = default ;
    GetFabricTopologyResponseBodyContentTopoInfo& operator=(const GetFabricTopologyResponseBodyContentTopoInfo &) = default ;
    GetFabricTopologyResponseBodyContentTopoInfo& operator=(GetFabricTopologyResponseBodyContentTopoInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->layerName_ == nullptr
        && return this->layerType_ == nullptr && return this->nextLayer_ == nullptr; };
    // layerName Field Functions 
    bool hasLayerName() const { return this->layerName_ != nullptr;};
    void deleteLayerName() { this->layerName_ = nullptr;};
    inline string layerName() const { DARABONBA_PTR_GET_DEFAULT(layerName_, "") };
    inline GetFabricTopologyResponseBodyContentTopoInfo& setLayerName(string layerName) { DARABONBA_PTR_SET_VALUE(layerName_, layerName) };


    // layerType Field Functions 
    bool hasLayerType() const { return this->layerType_ != nullptr;};
    void deleteLayerType() { this->layerType_ = nullptr;};
    inline string layerType() const { DARABONBA_PTR_GET_DEFAULT(layerType_, "") };
    inline GetFabricTopologyResponseBodyContentTopoInfo& setLayerType(string layerType) { DARABONBA_PTR_SET_VALUE(layerType_, layerType) };


    // nextLayer Field Functions 
    bool hasNextLayer() const { return this->nextLayer_ != nullptr;};
    void deleteNextLayer() { this->nextLayer_ = nullptr;};
    inline const vector<Darabonba::Json> & nextLayer() const { DARABONBA_PTR_GET_CONST(nextLayer_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> nextLayer() { DARABONBA_PTR_GET(nextLayer_, vector<Darabonba::Json>) };
    inline GetFabricTopologyResponseBodyContentTopoInfo& setNextLayer(const vector<Darabonba::Json> & nextLayer) { DARABONBA_PTR_SET_VALUE(nextLayer_, nextLayer) };
    inline GetFabricTopologyResponseBodyContentTopoInfo& setNextLayer(vector<Darabonba::Json> && nextLayer) { DARABONBA_PTR_SET_RVALUE(nextLayer_, nextLayer) };


  protected:
    // The resource name.
    std::shared_ptr<string> layerName_ = nullptr;
    // Hierarchical resource types
    // 
    // Valid value:
    // 
    // *   core: core layer.
    // *   node: Lingjun node.
    // *   lni: lingjun network interface controller.
    // *   spine: backbone layer.
    // *   leaf: access layer
    std::shared_ptr<string> layerType_ = nullptr;
    // Next Level
    std::shared_ptr<vector<Darabonba::Json>> nextLayer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
