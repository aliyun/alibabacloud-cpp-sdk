// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLAYERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLAYERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListLayersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLayersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Layers, layers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLayersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Layers, layers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLayersResponseBody() = default ;
    ListLayersResponseBody(const ListLayersResponseBody &) = default ;
    ListLayersResponseBody(ListLayersResponseBody &&) = default ;
    ListLayersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLayersResponseBody() = default ;
    ListLayersResponseBody& operator=(const ListLayersResponseBody &) = default ;
    ListLayersResponseBody& operator=(ListLayersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Layers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Layers& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(LaboratoryId, laboratoryId_);
        DARABONBA_PTR_TO_JSON(LayerId, layerId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ResidualFlow, residualFlow_);
        DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      };
      friend void from_json(const Darabonba::Json& j, Layers& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(LaboratoryId, laboratoryId_);
        DARABONBA_PTR_FROM_JSON(LayerId, layerId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ResidualFlow, residualFlow_);
        DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      };
      Layers() = default ;
      Layers(const Layers &) = default ;
      Layers(Layers &&) = default ;
      Layers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Layers() = default ;
      Layers& operator=(const Layers &) = default ;
      Layers& operator=(Layers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->gmtCreateTime_ == nullptr && this->laboratoryId_ == nullptr && this->layerId_ == nullptr && this->name_ == nullptr && this->residualFlow_ == nullptr
        && this->sceneId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Layers& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline Layers& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // laboratoryId Field Functions 
      bool hasLaboratoryId() const { return this->laboratoryId_ != nullptr;};
      void deleteLaboratoryId() { this->laboratoryId_ = nullptr;};
      inline string getLaboratoryId() const { DARABONBA_PTR_GET_DEFAULT(laboratoryId_, "") };
      inline Layers& setLaboratoryId(string laboratoryId) { DARABONBA_PTR_SET_VALUE(laboratoryId_, laboratoryId) };


      // layerId Field Functions 
      bool hasLayerId() const { return this->layerId_ != nullptr;};
      void deleteLayerId() { this->layerId_ = nullptr;};
      inline string getLayerId() const { DARABONBA_PTR_GET_DEFAULT(layerId_, "") };
      inline Layers& setLayerId(string layerId) { DARABONBA_PTR_SET_VALUE(layerId_, layerId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Layers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // residualFlow Field Functions 
      bool hasResidualFlow() const { return this->residualFlow_ != nullptr;};
      void deleteResidualFlow() { this->residualFlow_ = nullptr;};
      inline int64_t getResidualFlow() const { DARABONBA_PTR_GET_DEFAULT(residualFlow_, 0L) };
      inline Layers& setResidualFlow(int64_t residualFlow) { DARABONBA_PTR_SET_VALUE(residualFlow_, residualFlow) };


      // sceneId Field Functions 
      bool hasSceneId() const { return this->sceneId_ != nullptr;};
      void deleteSceneId() { this->sceneId_ = nullptr;};
      inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
      inline Layers& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<string> laboratoryId_ {};
      shared_ptr<string> layerId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int64_t> residualFlow_ {};
      shared_ptr<string> sceneId_ {};
    };

    virtual bool empty() const override { return this->layers_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // layers Field Functions 
    bool hasLayers() const { return this->layers_ != nullptr;};
    void deleteLayers() { this->layers_ = nullptr;};
    inline const vector<ListLayersResponseBody::Layers> & getLayers() const { DARABONBA_PTR_GET_CONST(layers_, vector<ListLayersResponseBody::Layers>) };
    inline vector<ListLayersResponseBody::Layers> getLayers() { DARABONBA_PTR_GET(layers_, vector<ListLayersResponseBody::Layers>) };
    inline ListLayersResponseBody& setLayers(const vector<ListLayersResponseBody::Layers> & layers) { DARABONBA_PTR_SET_VALUE(layers_, layers) };
    inline ListLayersResponseBody& setLayers(vector<ListLayersResponseBody::Layers> && layers) { DARABONBA_PTR_SET_RVALUE(layers_, layers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLayersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLayersResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListLayersResponseBody::Layers>> layers_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
