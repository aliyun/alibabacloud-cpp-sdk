// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLAYERSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTLAYERSOUTPUT_HPP_
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
  class ListLayersOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLayersOutput& obj) { 
      DARABONBA_PTR_TO_JSON(layers, layers_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListLayersOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(layers, layers_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ListLayersOutput() = default ;
    ListLayersOutput(const ListLayersOutput &) = default ;
    ListLayersOutput(ListLayersOutput &&) = default ;
    ListLayersOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLayersOutput() = default ;
    ListLayersOutput& operator=(const ListLayersOutput &) = default ;
    ListLayersOutput& operator=(ListLayersOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->layers_ == nullptr
        && return this->nextToken_ == nullptr; };
    // layers Field Functions 
    bool hasLayers() const { return this->layers_ != nullptr;};
    void deleteLayers() { this->layers_ = nullptr;};
    inline const vector<Layer> & layers() const { DARABONBA_PTR_GET_CONST(layers_, vector<Layer>) };
    inline vector<Layer> layers() { DARABONBA_PTR_GET(layers_, vector<Layer>) };
    inline ListLayersOutput& setLayers(const vector<Layer> & layers) { DARABONBA_PTR_SET_VALUE(layers_, layers) };
    inline ListLayersOutput& setLayers(vector<Layer> && layers) { DARABONBA_PTR_SET_RVALUE(layers_, layers) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListLayersOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    std::shared_ptr<vector<Layer>> layers_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
