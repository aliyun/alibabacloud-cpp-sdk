// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCENEPREVIEWDATARESPONSEBODYDATATAGS_HPP_
#define ALIBABACLOUD_MODELS_GETSCENEPREVIEWDATARESPONSEBODYDATATAGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetScenePreviewDataResponseBodyDataTagsConfig.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetScenePreviewDataResponseBodyDataTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScenePreviewDataResponseBodyDataTags& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(PositionPanoCube, positionPanoCube_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetScenePreviewDataResponseBodyDataTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(PositionPanoCube, positionPanoCube_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetScenePreviewDataResponseBodyDataTags() = default ;
    GetScenePreviewDataResponseBodyDataTags(const GetScenePreviewDataResponseBodyDataTags &) = default ;
    GetScenePreviewDataResponseBodyDataTags(GetScenePreviewDataResponseBodyDataTags &&) = default ;
    GetScenePreviewDataResponseBodyDataTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScenePreviewDataResponseBodyDataTags() = default ;
    GetScenePreviewDataResponseBodyDataTags& operator=(const GetScenePreviewDataResponseBodyDataTags &) = default ;
    GetScenePreviewDataResponseBodyDataTags& operator=(GetScenePreviewDataResponseBodyDataTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->id_ == nullptr && return this->position_ == nullptr && return this->positionPanoCube_ == nullptr && return this->type_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::GetScenePreviewDataResponseBodyDataTagsConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::GetScenePreviewDataResponseBodyDataTagsConfig) };
    inline Models::GetScenePreviewDataResponseBodyDataTagsConfig config() { DARABONBA_PTR_GET(config_, Models::GetScenePreviewDataResponseBodyDataTagsConfig) };
    inline GetScenePreviewDataResponseBodyDataTags& setConfig(const Models::GetScenePreviewDataResponseBodyDataTagsConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline GetScenePreviewDataResponseBodyDataTags& setConfig(Models::GetScenePreviewDataResponseBodyDataTagsConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetScenePreviewDataResponseBodyDataTags& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline const vector<double> & position() const { DARABONBA_PTR_GET_CONST(position_, vector<double>) };
    inline vector<double> position() { DARABONBA_PTR_GET(position_, vector<double>) };
    inline GetScenePreviewDataResponseBodyDataTags& setPosition(const vector<double> & position) { DARABONBA_PTR_SET_VALUE(position_, position) };
    inline GetScenePreviewDataResponseBodyDataTags& setPosition(vector<double> && position) { DARABONBA_PTR_SET_RVALUE(position_, position) };


    // positionPanoCube Field Functions 
    bool hasPositionPanoCube() const { return this->positionPanoCube_ != nullptr;};
    void deletePositionPanoCube() { this->positionPanoCube_ = nullptr;};
    inline const vector<double> & positionPanoCube() const { DARABONBA_PTR_GET_CONST(positionPanoCube_, vector<double>) };
    inline vector<double> positionPanoCube() { DARABONBA_PTR_GET(positionPanoCube_, vector<double>) };
    inline GetScenePreviewDataResponseBodyDataTags& setPositionPanoCube(const vector<double> & positionPanoCube) { DARABONBA_PTR_SET_VALUE(positionPanoCube_, positionPanoCube) };
    inline GetScenePreviewDataResponseBodyDataTags& setPositionPanoCube(vector<double> && positionPanoCube) { DARABONBA_PTR_SET_RVALUE(positionPanoCube_, positionPanoCube) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetScenePreviewDataResponseBodyDataTags& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::GetScenePreviewDataResponseBodyDataTagsConfig> config_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<vector<double>> position_ = nullptr;
    std::shared_ptr<vector<double>> positionPanoCube_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
