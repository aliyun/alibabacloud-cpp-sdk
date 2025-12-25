// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCENEPREVIEWDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSCENEPREVIEWDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetScenePreviewDataResponseBodyDataModel.hpp>
#include <vector>
#include <alibabacloud/models/GetScenePreviewDataResponseBodyDataTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetScenePreviewDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScenePreviewDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetScenePreviewDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetScenePreviewDataResponseBodyData() = default ;
    GetScenePreviewDataResponseBodyData(const GetScenePreviewDataResponseBodyData &) = default ;
    GetScenePreviewDataResponseBodyData(GetScenePreviewDataResponseBodyData &&) = default ;
    GetScenePreviewDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScenePreviewDataResponseBodyData() = default ;
    GetScenePreviewDataResponseBodyData& operator=(const GetScenePreviewDataResponseBodyData &) = default ;
    GetScenePreviewDataResponseBodyData& operator=(GetScenePreviewDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->model_ == nullptr
        && return this->tags_ == nullptr; };
    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const Models::GetScenePreviewDataResponseBodyDataModel & model() const { DARABONBA_PTR_GET_CONST(model_, Models::GetScenePreviewDataResponseBodyDataModel) };
    inline Models::GetScenePreviewDataResponseBodyDataModel model() { DARABONBA_PTR_GET(model_, Models::GetScenePreviewDataResponseBodyDataModel) };
    inline GetScenePreviewDataResponseBodyData& setModel(const Models::GetScenePreviewDataResponseBodyDataModel & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline GetScenePreviewDataResponseBodyData& setModel(Models::GetScenePreviewDataResponseBodyDataModel && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetScenePreviewDataResponseBodyDataTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetScenePreviewDataResponseBodyDataTags>) };
    inline vector<Models::GetScenePreviewDataResponseBodyDataTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetScenePreviewDataResponseBodyDataTags>) };
    inline GetScenePreviewDataResponseBodyData& setTags(const vector<Models::GetScenePreviewDataResponseBodyDataTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetScenePreviewDataResponseBodyData& setTags(vector<Models::GetScenePreviewDataResponseBodyDataTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<Models::GetScenePreviewDataResponseBodyDataModel> model_ = nullptr;
    std::shared_ptr<vector<Models::GetScenePreviewDataResponseBodyDataTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
