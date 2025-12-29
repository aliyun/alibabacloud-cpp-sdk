// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSCENELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSCENELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class QuerySceneListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySceneListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(SceneStates, sceneStates_);
      DARABONBA_PTR_TO_JSON(SceneTypes, sceneTypes_);
      DARABONBA_PTR_TO_JSON(TemplateInfoIds, templateInfoIds_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySceneListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(SceneStates, sceneStates_);
      DARABONBA_PTR_FROM_JSON(SceneTypes, sceneTypes_);
      DARABONBA_PTR_FROM_JSON(TemplateInfoIds, templateInfoIds_);
    };
    QuerySceneListRequest() = default ;
    QuerySceneListRequest(const QuerySceneListRequest &) = default ;
    QuerySceneListRequest(QuerySceneListRequest &&) = default ;
    QuerySceneListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySceneListRequest() = default ;
    QuerySceneListRequest& operator=(const QuerySceneListRequest &) = default ;
    QuerySceneListRequest& operator=(QuerySceneListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->sceneStates_ == nullptr && this->sceneTypes_ == nullptr && this->templateInfoIds_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline QuerySceneListRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // sceneStates Field Functions 
    bool hasSceneStates() const { return this->sceneStates_ != nullptr;};
    void deleteSceneStates() { this->sceneStates_ = nullptr;};
    inline const vector<int32_t> & getSceneStates() const { DARABONBA_PTR_GET_CONST(sceneStates_, vector<int32_t>) };
    inline vector<int32_t> getSceneStates() { DARABONBA_PTR_GET(sceneStates_, vector<int32_t>) };
    inline QuerySceneListRequest& setSceneStates(const vector<int32_t> & sceneStates) { DARABONBA_PTR_SET_VALUE(sceneStates_, sceneStates) };
    inline QuerySceneListRequest& setSceneStates(vector<int32_t> && sceneStates) { DARABONBA_PTR_SET_RVALUE(sceneStates_, sceneStates) };


    // sceneTypes Field Functions 
    bool hasSceneTypes() const { return this->sceneTypes_ != nullptr;};
    void deleteSceneTypes() { this->sceneTypes_ = nullptr;};
    inline const vector<string> & getSceneTypes() const { DARABONBA_PTR_GET_CONST(sceneTypes_, vector<string>) };
    inline vector<string> getSceneTypes() { DARABONBA_PTR_GET(sceneTypes_, vector<string>) };
    inline QuerySceneListRequest& setSceneTypes(const vector<string> & sceneTypes) { DARABONBA_PTR_SET_VALUE(sceneTypes_, sceneTypes) };
    inline QuerySceneListRequest& setSceneTypes(vector<string> && sceneTypes) { DARABONBA_PTR_SET_RVALUE(sceneTypes_, sceneTypes) };


    // templateInfoIds Field Functions 
    bool hasTemplateInfoIds() const { return this->templateInfoIds_ != nullptr;};
    void deleteTemplateInfoIds() { this->templateInfoIds_ = nullptr;};
    inline const vector<string> & getTemplateInfoIds() const { DARABONBA_PTR_GET_CONST(templateInfoIds_, vector<string>) };
    inline vector<string> getTemplateInfoIds() { DARABONBA_PTR_GET(templateInfoIds_, vector<string>) };
    inline QuerySceneListRequest& setTemplateInfoIds(const vector<string> & templateInfoIds) { DARABONBA_PTR_SET_VALUE(templateInfoIds_, templateInfoIds) };
    inline QuerySceneListRequest& setTemplateInfoIds(vector<string> && templateInfoIds) { DARABONBA_PTR_SET_RVALUE(templateInfoIds_, templateInfoIds) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    shared_ptr<vector<int32_t>> sceneStates_ {};
    shared_ptr<vector<string>> sceneTypes_ {};
    shared_ptr<vector<string>> templateInfoIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
