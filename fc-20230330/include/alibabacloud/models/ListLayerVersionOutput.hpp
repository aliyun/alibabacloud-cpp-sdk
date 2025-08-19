// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLAYERVERSIONOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTLAYERVERSIONOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Layer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListLayerVersionOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLayerVersionOutput& obj) { 
      DARABONBA_PTR_TO_JSON(layers, layers_);
      DARABONBA_PTR_TO_JSON(nextVersion, nextVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListLayerVersionOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(layers, layers_);
      DARABONBA_PTR_FROM_JSON(nextVersion, nextVersion_);
    };
    ListLayerVersionOutput() = default ;
    ListLayerVersionOutput(const ListLayerVersionOutput &) = default ;
    ListLayerVersionOutput(ListLayerVersionOutput &&) = default ;
    ListLayerVersionOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLayerVersionOutput() = default ;
    ListLayerVersionOutput& operator=(const ListLayerVersionOutput &) = default ;
    ListLayerVersionOutput& operator=(ListLayerVersionOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->layers_ != nullptr
        && this->nextVersion_ != nullptr; };
    // layers Field Functions 
    bool hasLayers() const { return this->layers_ != nullptr;};
    void deleteLayers() { this->layers_ = nullptr;};
    inline const vector<Layer> & layers() const { DARABONBA_PTR_GET_CONST(layers_, vector<Layer>) };
    inline vector<Layer> layers() { DARABONBA_PTR_GET(layers_, vector<Layer>) };
    inline ListLayerVersionOutput& setLayers(const vector<Layer> & layers) { DARABONBA_PTR_SET_VALUE(layers_, layers) };
    inline ListLayerVersionOutput& setLayers(vector<Layer> && layers) { DARABONBA_PTR_SET_RVALUE(layers_, layers) };


    // nextVersion Field Functions 
    bool hasNextVersion() const { return this->nextVersion_ != nullptr;};
    void deleteNextVersion() { this->nextVersion_ = nullptr;};
    inline int32_t nextVersion() const { DARABONBA_PTR_GET_DEFAULT(nextVersion_, 0) };
    inline ListLayerVersionOutput& setNextVersion(int32_t nextVersion) { DARABONBA_PTR_SET_VALUE(nextVersion_, nextVersion) };


  protected:
    std::shared_ptr<vector<Layer>> layers_ = nullptr;
    std::shared_ptr<int32_t> nextVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
