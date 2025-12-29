// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSCENELISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSCENELISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class QuerySceneListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySceneListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(SceneStates, sceneStatesShrink_);
      DARABONBA_PTR_TO_JSON(SceneTypes, sceneTypesShrink_);
      DARABONBA_PTR_TO_JSON(TemplateInfoIds, templateInfoIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySceneListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(SceneStates, sceneStatesShrink_);
      DARABONBA_PTR_FROM_JSON(SceneTypes, sceneTypesShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateInfoIds, templateInfoIdsShrink_);
    };
    QuerySceneListShrinkRequest() = default ;
    QuerySceneListShrinkRequest(const QuerySceneListShrinkRequest &) = default ;
    QuerySceneListShrinkRequest(QuerySceneListShrinkRequest &&) = default ;
    QuerySceneListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySceneListShrinkRequest() = default ;
    QuerySceneListShrinkRequest& operator=(const QuerySceneListShrinkRequest &) = default ;
    QuerySceneListShrinkRequest& operator=(QuerySceneListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->sceneStatesShrink_ == nullptr && this->sceneTypesShrink_ == nullptr && this->templateInfoIdsShrink_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline QuerySceneListShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // sceneStatesShrink Field Functions 
    bool hasSceneStatesShrink() const { return this->sceneStatesShrink_ != nullptr;};
    void deleteSceneStatesShrink() { this->sceneStatesShrink_ = nullptr;};
    inline string getSceneStatesShrink() const { DARABONBA_PTR_GET_DEFAULT(sceneStatesShrink_, "") };
    inline QuerySceneListShrinkRequest& setSceneStatesShrink(string sceneStatesShrink) { DARABONBA_PTR_SET_VALUE(sceneStatesShrink_, sceneStatesShrink) };


    // sceneTypesShrink Field Functions 
    bool hasSceneTypesShrink() const { return this->sceneTypesShrink_ != nullptr;};
    void deleteSceneTypesShrink() { this->sceneTypesShrink_ = nullptr;};
    inline string getSceneTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(sceneTypesShrink_, "") };
    inline QuerySceneListShrinkRequest& setSceneTypesShrink(string sceneTypesShrink) { DARABONBA_PTR_SET_VALUE(sceneTypesShrink_, sceneTypesShrink) };


    // templateInfoIdsShrink Field Functions 
    bool hasTemplateInfoIdsShrink() const { return this->templateInfoIdsShrink_ != nullptr;};
    void deleteTemplateInfoIdsShrink() { this->templateInfoIdsShrink_ = nullptr;};
    inline string getTemplateInfoIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(templateInfoIdsShrink_, "") };
    inline QuerySceneListShrinkRequest& setTemplateInfoIdsShrink(string templateInfoIdsShrink) { DARABONBA_PTR_SET_VALUE(templateInfoIdsShrink_, templateInfoIdsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    shared_ptr<string> sceneStatesShrink_ {};
    shared_ptr<string> sceneTypesShrink_ {};
    shared_ptr<string> templateInfoIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
