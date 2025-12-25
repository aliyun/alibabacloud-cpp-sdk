// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCENEPREVIEWDATARESPONSEBODYDATAMODELPANOLISTPOSITION_HPP_
#define ALIBABACLOUD_MODELS_GETSCENEPREVIEWDATARESPONSEBODYDATAMODELPANOLISTPOSITION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetScenePreviewDataResponseBodyDataModelPanoListPosition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScenePreviewDataResponseBodyDataModelPanoListPosition& obj) { 
      DARABONBA_PTR_TO_JSON(Rotation, rotation_);
      DARABONBA_PTR_TO_JSON(Spot, spot_);
      DARABONBA_PTR_TO_JSON(Viewpoint, viewpoint_);
    };
    friend void from_json(const Darabonba::Json& j, GetScenePreviewDataResponseBodyDataModelPanoListPosition& obj) { 
      DARABONBA_PTR_FROM_JSON(Rotation, rotation_);
      DARABONBA_PTR_FROM_JSON(Spot, spot_);
      DARABONBA_PTR_FROM_JSON(Viewpoint, viewpoint_);
    };
    GetScenePreviewDataResponseBodyDataModelPanoListPosition() = default ;
    GetScenePreviewDataResponseBodyDataModelPanoListPosition(const GetScenePreviewDataResponseBodyDataModelPanoListPosition &) = default ;
    GetScenePreviewDataResponseBodyDataModelPanoListPosition(GetScenePreviewDataResponseBodyDataModelPanoListPosition &&) = default ;
    GetScenePreviewDataResponseBodyDataModelPanoListPosition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScenePreviewDataResponseBodyDataModelPanoListPosition() = default ;
    GetScenePreviewDataResponseBodyDataModelPanoListPosition& operator=(const GetScenePreviewDataResponseBodyDataModelPanoListPosition &) = default ;
    GetScenePreviewDataResponseBodyDataModelPanoListPosition& operator=(GetScenePreviewDataResponseBodyDataModelPanoListPosition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rotation_ == nullptr
        && return this->spot_ == nullptr && return this->viewpoint_ == nullptr; };
    // rotation Field Functions 
    bool hasRotation() const { return this->rotation_ != nullptr;};
    void deleteRotation() { this->rotation_ = nullptr;};
    inline const vector<double> & rotation() const { DARABONBA_PTR_GET_CONST(rotation_, vector<double>) };
    inline vector<double> rotation() { DARABONBA_PTR_GET(rotation_, vector<double>) };
    inline GetScenePreviewDataResponseBodyDataModelPanoListPosition& setRotation(const vector<double> & rotation) { DARABONBA_PTR_SET_VALUE(rotation_, rotation) };
    inline GetScenePreviewDataResponseBodyDataModelPanoListPosition& setRotation(vector<double> && rotation) { DARABONBA_PTR_SET_RVALUE(rotation_, rotation) };


    // spot Field Functions 
    bool hasSpot() const { return this->spot_ != nullptr;};
    void deleteSpot() { this->spot_ = nullptr;};
    inline const vector<double> & spot() const { DARABONBA_PTR_GET_CONST(spot_, vector<double>) };
    inline vector<double> spot() { DARABONBA_PTR_GET(spot_, vector<double>) };
    inline GetScenePreviewDataResponseBodyDataModelPanoListPosition& setSpot(const vector<double> & spot) { DARABONBA_PTR_SET_VALUE(spot_, spot) };
    inline GetScenePreviewDataResponseBodyDataModelPanoListPosition& setSpot(vector<double> && spot) { DARABONBA_PTR_SET_RVALUE(spot_, spot) };


    // viewpoint Field Functions 
    bool hasViewpoint() const { return this->viewpoint_ != nullptr;};
    void deleteViewpoint() { this->viewpoint_ = nullptr;};
    inline const vector<double> & viewpoint() const { DARABONBA_PTR_GET_CONST(viewpoint_, vector<double>) };
    inline vector<double> viewpoint() { DARABONBA_PTR_GET(viewpoint_, vector<double>) };
    inline GetScenePreviewDataResponseBodyDataModelPanoListPosition& setViewpoint(const vector<double> & viewpoint) { DARABONBA_PTR_SET_VALUE(viewpoint_, viewpoint) };
    inline GetScenePreviewDataResponseBodyDataModelPanoListPosition& setViewpoint(vector<double> && viewpoint) { DARABONBA_PTR_SET_RVALUE(viewpoint_, viewpoint) };


  protected:
    std::shared_ptr<vector<double>> rotation_ = nullptr;
    std::shared_ptr<vector<double>> spot_ = nullptr;
    std::shared_ptr<vector<double>> viewpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
