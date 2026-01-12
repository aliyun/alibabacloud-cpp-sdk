// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROJECTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROJECTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class CreateProjectShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProjectShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoBuild, autoBuild_);
      DARABONBA_PTR_TO_JSON(Dependencies, dependencies_);
      DARABONBA_PTR_TO_JSON(ExtInfo, extInfo_);
      DARABONBA_PTR_TO_JSON(Gender, gender_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Intro, intro_);
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_TO_JSON(MapUuid, mapUuid_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(TryOnParams, tryOnParamsShrink_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProjectShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoBuild, autoBuild_);
      DARABONBA_PTR_FROM_JSON(Dependencies, dependencies_);
      DARABONBA_PTR_FROM_JSON(ExtInfo, extInfo_);
      DARABONBA_PTR_FROM_JSON(Gender, gender_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Intro, intro_);
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_FROM_JSON(MapUuid, mapUuid_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(TryOnParams, tryOnParamsShrink_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    CreateProjectShrinkRequest() = default ;
    CreateProjectShrinkRequest(const CreateProjectShrinkRequest &) = default ;
    CreateProjectShrinkRequest(CreateProjectShrinkRequest &&) = default ;
    CreateProjectShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProjectShrinkRequest() = default ;
    CreateProjectShrinkRequest& operator=(const CreateProjectShrinkRequest &) = default ;
    CreateProjectShrinkRequest& operator=(CreateProjectShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoBuild_ == nullptr
        && this->dependencies_ == nullptr && this->extInfo_ == nullptr && this->gender_ == nullptr && this->height_ == nullptr && this->intro_ == nullptr
        && this->jwtToken_ == nullptr && this->mapUuid_ == nullptr && this->method_ == nullptr && this->mode_ == nullptr && this->title_ == nullptr
        && this->tryOnParamsShrink_ == nullptr && this->type_ == nullptr && this->weight_ == nullptr; };
    // autoBuild Field Functions 
    bool hasAutoBuild() const { return this->autoBuild_ != nullptr;};
    void deleteAutoBuild() { this->autoBuild_ = nullptr;};
    inline bool getAutoBuild() const { DARABONBA_PTR_GET_DEFAULT(autoBuild_, false) };
    inline CreateProjectShrinkRequest& setAutoBuild(bool autoBuild) { DARABONBA_PTR_SET_VALUE(autoBuild_, autoBuild) };


    // dependencies Field Functions 
    bool hasDependencies() const { return this->dependencies_ != nullptr;};
    void deleteDependencies() { this->dependencies_ = nullptr;};
    inline string getDependencies() const { DARABONBA_PTR_GET_DEFAULT(dependencies_, "") };
    inline CreateProjectShrinkRequest& setDependencies(string dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };


    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline string getExtInfo() const { DARABONBA_PTR_GET_DEFAULT(extInfo_, "") };
    inline CreateProjectShrinkRequest& setExtInfo(string extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline CreateProjectShrinkRequest& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline double getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
    inline CreateProjectShrinkRequest& setHeight(double height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // intro Field Functions 
    bool hasIntro() const { return this->intro_ != nullptr;};
    void deleteIntro() { this->intro_ = nullptr;};
    inline string getIntro() const { DARABONBA_PTR_GET_DEFAULT(intro_, "") };
    inline CreateProjectShrinkRequest& setIntro(string intro) { DARABONBA_PTR_SET_VALUE(intro_, intro) };


    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline CreateProjectShrinkRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


    // mapUuid Field Functions 
    bool hasMapUuid() const { return this->mapUuid_ != nullptr;};
    void deleteMapUuid() { this->mapUuid_ = nullptr;};
    inline string getMapUuid() const { DARABONBA_PTR_GET_DEFAULT(mapUuid_, "") };
    inline CreateProjectShrinkRequest& setMapUuid(string mapUuid) { DARABONBA_PTR_SET_VALUE(mapUuid_, mapUuid) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline CreateProjectShrinkRequest& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateProjectShrinkRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateProjectShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // tryOnParamsShrink Field Functions 
    bool hasTryOnParamsShrink() const { return this->tryOnParamsShrink_ != nullptr;};
    void deleteTryOnParamsShrink() { this->tryOnParamsShrink_ = nullptr;};
    inline string getTryOnParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(tryOnParamsShrink_, "") };
    inline CreateProjectShrinkRequest& setTryOnParamsShrink(string tryOnParamsShrink) { DARABONBA_PTR_SET_VALUE(tryOnParamsShrink_, tryOnParamsShrink) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateProjectShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline double getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0.0) };
    inline CreateProjectShrinkRequest& setWeight(double weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    shared_ptr<bool> autoBuild_ {};
    shared_ptr<string> dependencies_ {};
    shared_ptr<string> extInfo_ {};
    shared_ptr<string> gender_ {};
    shared_ptr<double> height_ {};
    shared_ptr<string> intro_ {};
    shared_ptr<string> jwtToken_ {};
    shared_ptr<string> mapUuid_ {};
    shared_ptr<string> method_ {};
    shared_ptr<string> mode_ {};
    shared_ptr<string> title_ {};
    shared_ptr<string> tryOnParamsShrink_ {};
    shared_ptr<string> type_ {};
    shared_ptr<double> weight_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
