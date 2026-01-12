// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class CreateProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProjectRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(TryOnParams, tryOnParams_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProjectRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(TryOnParams, tryOnParams_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    CreateProjectRequest() = default ;
    CreateProjectRequest(const CreateProjectRequest &) = default ;
    CreateProjectRequest(CreateProjectRequest &&) = default ;
    CreateProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProjectRequest() = default ;
    CreateProjectRequest& operator=(const CreateProjectRequest &) = default ;
    CreateProjectRequest& operator=(CreateProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TryOnParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TryOnParams& obj) { 
        DARABONBA_PTR_TO_JSON(ClothIds, clothIds_);
        DARABONBA_PTR_TO_JSON(ClothInfos, clothInfos_);
      };
      friend void from_json(const Darabonba::Json& j, TryOnParams& obj) { 
        DARABONBA_PTR_FROM_JSON(ClothIds, clothIds_);
        DARABONBA_PTR_FROM_JSON(ClothInfos, clothInfos_);
      };
      TryOnParams() = default ;
      TryOnParams(const TryOnParams &) = default ;
      TryOnParams(TryOnParams &&) = default ;
      TryOnParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TryOnParams() = default ;
      TryOnParams& operator=(const TryOnParams &) = default ;
      TryOnParams& operator=(TryOnParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ClothInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClothInfos& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ClothInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ClothInfos() = default ;
        ClothInfos(const ClothInfos &) = default ;
        ClothInfos(ClothInfos &&) = default ;
        ClothInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClothInfos() = default ;
        ClothInfos& operator=(const ClothInfos &) = default ;
        ClothInfos& operator=(ClothInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->size_ == nullptr && this->status_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ClothInfos& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
        inline ClothInfos& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ClothInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // This parameter is required.
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> size_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->clothIds_ == nullptr
        && this->clothInfos_ == nullptr; };
      // clothIds Field Functions 
      bool hasClothIds() const { return this->clothIds_ != nullptr;};
      void deleteClothIds() { this->clothIds_ = nullptr;};
      inline const vector<int64_t> & getClothIds() const { DARABONBA_PTR_GET_CONST(clothIds_, vector<int64_t>) };
      inline vector<int64_t> getClothIds() { DARABONBA_PTR_GET(clothIds_, vector<int64_t>) };
      inline TryOnParams& setClothIds(const vector<int64_t> & clothIds) { DARABONBA_PTR_SET_VALUE(clothIds_, clothIds) };
      inline TryOnParams& setClothIds(vector<int64_t> && clothIds) { DARABONBA_PTR_SET_RVALUE(clothIds_, clothIds) };


      // clothInfos Field Functions 
      bool hasClothInfos() const { return this->clothInfos_ != nullptr;};
      void deleteClothInfos() { this->clothInfos_ = nullptr;};
      inline const vector<TryOnParams::ClothInfos> & getClothInfos() const { DARABONBA_PTR_GET_CONST(clothInfos_, vector<TryOnParams::ClothInfos>) };
      inline vector<TryOnParams::ClothInfos> getClothInfos() { DARABONBA_PTR_GET(clothInfos_, vector<TryOnParams::ClothInfos>) };
      inline TryOnParams& setClothInfos(const vector<TryOnParams::ClothInfos> & clothInfos) { DARABONBA_PTR_SET_VALUE(clothInfos_, clothInfos) };
      inline TryOnParams& setClothInfos(vector<TryOnParams::ClothInfos> && clothInfos) { DARABONBA_PTR_SET_RVALUE(clothInfos_, clothInfos) };


    protected:
      shared_ptr<vector<int64_t>> clothIds_ {};
      shared_ptr<vector<TryOnParams::ClothInfos>> clothInfos_ {};
    };

    virtual bool empty() const override { return this->autoBuild_ == nullptr
        && this->dependencies_ == nullptr && this->extInfo_ == nullptr && this->gender_ == nullptr && this->height_ == nullptr && this->intro_ == nullptr
        && this->jwtToken_ == nullptr && this->mapUuid_ == nullptr && this->method_ == nullptr && this->mode_ == nullptr && this->title_ == nullptr
        && this->tryOnParams_ == nullptr && this->type_ == nullptr && this->weight_ == nullptr; };
    // autoBuild Field Functions 
    bool hasAutoBuild() const { return this->autoBuild_ != nullptr;};
    void deleteAutoBuild() { this->autoBuild_ = nullptr;};
    inline bool getAutoBuild() const { DARABONBA_PTR_GET_DEFAULT(autoBuild_, false) };
    inline CreateProjectRequest& setAutoBuild(bool autoBuild) { DARABONBA_PTR_SET_VALUE(autoBuild_, autoBuild) };


    // dependencies Field Functions 
    bool hasDependencies() const { return this->dependencies_ != nullptr;};
    void deleteDependencies() { this->dependencies_ = nullptr;};
    inline string getDependencies() const { DARABONBA_PTR_GET_DEFAULT(dependencies_, "") };
    inline CreateProjectRequest& setDependencies(string dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };


    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline string getExtInfo() const { DARABONBA_PTR_GET_DEFAULT(extInfo_, "") };
    inline CreateProjectRequest& setExtInfo(string extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline CreateProjectRequest& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline double getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
    inline CreateProjectRequest& setHeight(double height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // intro Field Functions 
    bool hasIntro() const { return this->intro_ != nullptr;};
    void deleteIntro() { this->intro_ = nullptr;};
    inline string getIntro() const { DARABONBA_PTR_GET_DEFAULT(intro_, "") };
    inline CreateProjectRequest& setIntro(string intro) { DARABONBA_PTR_SET_VALUE(intro_, intro) };


    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline CreateProjectRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


    // mapUuid Field Functions 
    bool hasMapUuid() const { return this->mapUuid_ != nullptr;};
    void deleteMapUuid() { this->mapUuid_ = nullptr;};
    inline string getMapUuid() const { DARABONBA_PTR_GET_DEFAULT(mapUuid_, "") };
    inline CreateProjectRequest& setMapUuid(string mapUuid) { DARABONBA_PTR_SET_VALUE(mapUuid_, mapUuid) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline CreateProjectRequest& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateProjectRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateProjectRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // tryOnParams Field Functions 
    bool hasTryOnParams() const { return this->tryOnParams_ != nullptr;};
    void deleteTryOnParams() { this->tryOnParams_ = nullptr;};
    inline const CreateProjectRequest::TryOnParams & getTryOnParams() const { DARABONBA_PTR_GET_CONST(tryOnParams_, CreateProjectRequest::TryOnParams) };
    inline CreateProjectRequest::TryOnParams getTryOnParams() { DARABONBA_PTR_GET(tryOnParams_, CreateProjectRequest::TryOnParams) };
    inline CreateProjectRequest& setTryOnParams(const CreateProjectRequest::TryOnParams & tryOnParams) { DARABONBA_PTR_SET_VALUE(tryOnParams_, tryOnParams) };
    inline CreateProjectRequest& setTryOnParams(CreateProjectRequest::TryOnParams && tryOnParams) { DARABONBA_PTR_SET_RVALUE(tryOnParams_, tryOnParams) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateProjectRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline double getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0.0) };
    inline CreateProjectRequest& setWeight(double weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


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
    shared_ptr<CreateProjectRequest::TryOnParams> tryOnParams_ {};
    shared_ptr<string> type_ {};
    shared_ptr<double> weight_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
