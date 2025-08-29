// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLAYERSRESPONSEBODYLAYERS_HPP_
#define ALIBABACLOUD_MODELS_LISTLAYERSRESPONSEBODYLAYERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListLayersResponseBodyLayers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLayersResponseBodyLayers& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(LaboratoryId, laboratoryId_);
      DARABONBA_PTR_TO_JSON(LayerId, layerId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResidualFlow, residualFlow_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLayersResponseBodyLayers& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(LaboratoryId, laboratoryId_);
      DARABONBA_PTR_FROM_JSON(LayerId, layerId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResidualFlow, residualFlow_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    ListLayersResponseBodyLayers() = default ;
    ListLayersResponseBodyLayers(const ListLayersResponseBodyLayers &) = default ;
    ListLayersResponseBodyLayers(ListLayersResponseBodyLayers &&) = default ;
    ListLayersResponseBodyLayers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLayersResponseBodyLayers() = default ;
    ListLayersResponseBodyLayers& operator=(const ListLayersResponseBodyLayers &) = default ;
    ListLayersResponseBodyLayers& operator=(ListLayersResponseBodyLayers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->gmtCreateTime_ != nullptr && this->laboratoryId_ != nullptr && this->layerId_ != nullptr && this->name_ != nullptr && this->residualFlow_ != nullptr
        && this->sceneId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListLayersResponseBodyLayers& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListLayersResponseBodyLayers& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // laboratoryId Field Functions 
    bool hasLaboratoryId() const { return this->laboratoryId_ != nullptr;};
    void deleteLaboratoryId() { this->laboratoryId_ = nullptr;};
    inline string laboratoryId() const { DARABONBA_PTR_GET_DEFAULT(laboratoryId_, "") };
    inline ListLayersResponseBodyLayers& setLaboratoryId(string laboratoryId) { DARABONBA_PTR_SET_VALUE(laboratoryId_, laboratoryId) };


    // layerId Field Functions 
    bool hasLayerId() const { return this->layerId_ != nullptr;};
    void deleteLayerId() { this->layerId_ = nullptr;};
    inline string layerId() const { DARABONBA_PTR_GET_DEFAULT(layerId_, "") };
    inline ListLayersResponseBodyLayers& setLayerId(string layerId) { DARABONBA_PTR_SET_VALUE(layerId_, layerId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListLayersResponseBodyLayers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // residualFlow Field Functions 
    bool hasResidualFlow() const { return this->residualFlow_ != nullptr;};
    void deleteResidualFlow() { this->residualFlow_ = nullptr;};
    inline int64_t residualFlow() const { DARABONBA_PTR_GET_DEFAULT(residualFlow_, 0L) };
    inline ListLayersResponseBodyLayers& setResidualFlow(int64_t residualFlow) { DARABONBA_PTR_SET_VALUE(residualFlow_, residualFlow) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline ListLayersResponseBodyLayers& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> laboratoryId_ = nullptr;
    std::shared_ptr<string> layerId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> residualFlow_ = nullptr;
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
