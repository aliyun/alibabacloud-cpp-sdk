// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSCENESRESPONSEBODYSCENELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSCENESRESPONSEBODYSCENELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCasterScenesResponseBodySceneListScene.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterScenesResponseBodySceneList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterScenesResponseBodySceneList& obj) { 
      DARABONBA_PTR_TO_JSON(Scene, scene_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterScenesResponseBodySceneList& obj) { 
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
    };
    DescribeCasterScenesResponseBodySceneList() = default ;
    DescribeCasterScenesResponseBodySceneList(const DescribeCasterScenesResponseBodySceneList &) = default ;
    DescribeCasterScenesResponseBodySceneList(DescribeCasterScenesResponseBodySceneList &&) = default ;
    DescribeCasterScenesResponseBodySceneList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterScenesResponseBodySceneList() = default ;
    DescribeCasterScenesResponseBodySceneList& operator=(const DescribeCasterScenesResponseBodySceneList &) = default ;
    DescribeCasterScenesResponseBodySceneList& operator=(DescribeCasterScenesResponseBodySceneList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scene_ != nullptr; };
    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline const vector<Models::DescribeCasterScenesResponseBodySceneListScene> & scene() const { DARABONBA_PTR_GET_CONST(scene_, vector<Models::DescribeCasterScenesResponseBodySceneListScene>) };
    inline vector<Models::DescribeCasterScenesResponseBodySceneListScene> scene() { DARABONBA_PTR_GET(scene_, vector<Models::DescribeCasterScenesResponseBodySceneListScene>) };
    inline DescribeCasterScenesResponseBodySceneList& setScene(const vector<Models::DescribeCasterScenesResponseBodySceneListScene> & scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };
    inline DescribeCasterScenesResponseBodySceneList& setScene(vector<Models::DescribeCasterScenesResponseBodySceneListScene> && scene) { DARABONBA_PTR_SET_RVALUE(scene_, scene) };


  protected:
    std::shared_ptr<vector<Models::DescribeCasterScenesResponseBodySceneListScene>> scene_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
