// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSBYDEPENDENCYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSBYDEPENDENCYIDRESPONSEBODY_HPP_
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
  class ListProjectsByDependencyIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsByDependencyIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorName, errorName_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsByDependencyIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorName, errorName_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListProjectsByDependencyIdResponseBody() = default ;
    ListProjectsByDependencyIdResponseBody(const ListProjectsByDependencyIdResponseBody &) = default ;
    ListProjectsByDependencyIdResponseBody(ListProjectsByDependencyIdResponseBody &&) = default ;
    ListProjectsByDependencyIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsByDependencyIdResponseBody() = default ;
    ListProjectsByDependencyIdResponseBody& operator=(const ListProjectsByDependencyIdResponseBody &) = default ;
    ListProjectsByDependencyIdResponseBody& operator=(ListProjectsByDependencyIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BizUsage, bizUsage_);
        DARABONBA_PTR_TO_JSON(BuildDetail, buildDetail_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Dataset, dataset_);
        DARABONBA_PTR_TO_JSON(Ext, ext_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Intro, intro_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BizUsage, bizUsage_);
        DARABONBA_PTR_FROM_JSON(BuildDetail, buildDetail_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Dataset, dataset_);
        DARABONBA_PTR_FROM_JSON(Ext, ext_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Intro, intro_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Source : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Source& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(SourceFiles, sourceFiles_);
        };
        friend void from_json(const Darabonba::Json& j, Source& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(SourceFiles, sourceFiles_);
        };
        Source() = default ;
        Source(const Source &) = default ;
        Source(Source &&) = default ;
        Source(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Source() = default ;
        Source& operator=(const Source &) = default ;
        Source& operator=(Source &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SourceFiles : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SourceFiles& obj) { 
            DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
            DARABONBA_PTR_TO_JSON(FileName, fileName_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Size, size_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, SourceFiles& obj) { 
            DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
            DARABONBA_PTR_FROM_JSON(FileName, fileName_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Size, size_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          SourceFiles() = default ;
          SourceFiles(const SourceFiles &) = default ;
          SourceFiles(SourceFiles &&) = default ;
          SourceFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SourceFiles() = default ;
          SourceFiles& operator=(const SourceFiles &) = default ;
          SourceFiles& operator=(SourceFiles &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->coverUrl_ == nullptr
        && this->fileName_ == nullptr && this->id_ == nullptr && this->size_ == nullptr && this->type_ == nullptr && this->url_ == nullptr; };
          // coverUrl Field Functions 
          bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
          void deleteCoverUrl() { this->coverUrl_ = nullptr;};
          inline string getCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
          inline SourceFiles& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


          // fileName Field Functions 
          bool hasFileName() const { return this->fileName_ != nullptr;};
          void deleteFileName() { this->fileName_ = nullptr;};
          inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
          inline SourceFiles& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline SourceFiles& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // size Field Functions 
          bool hasSize() const { return this->size_ != nullptr;};
          void deleteSize() { this->size_ = nullptr;};
          inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
          inline SourceFiles& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline SourceFiles& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline SourceFiles& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<string> coverUrl_ {};
          shared_ptr<string> fileName_ {};
          shared_ptr<string> id_ {};
          shared_ptr<int64_t> size_ {};
          shared_ptr<string> type_ {};
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->id_ == nullptr && this->modifiedTime_ == nullptr && this->ossKey_ == nullptr && this->projectId_ == nullptr && this->sourceFiles_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Source& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Source& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline Source& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // ossKey Field Functions 
        bool hasOssKey() const { return this->ossKey_ != nullptr;};
        void deleteOssKey() { this->ossKey_ = nullptr;};
        inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
        inline Source& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Source& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // sourceFiles Field Functions 
        bool hasSourceFiles() const { return this->sourceFiles_ != nullptr;};
        void deleteSourceFiles() { this->sourceFiles_ = nullptr;};
        inline const vector<Source::SourceFiles> & getSourceFiles() const { DARABONBA_PTR_GET_CONST(sourceFiles_, vector<Source::SourceFiles>) };
        inline vector<Source::SourceFiles> getSourceFiles() { DARABONBA_PTR_GET(sourceFiles_, vector<Source::SourceFiles>) };
        inline Source& setSourceFiles(const vector<Source::SourceFiles> & sourceFiles) { DARABONBA_PTR_SET_VALUE(sourceFiles_, sourceFiles) };
        inline Source& setSourceFiles(vector<Source::SourceFiles> && sourceFiles) { DARABONBA_PTR_SET_RVALUE(sourceFiles_, sourceFiles) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> modifiedTime_ {};
        shared_ptr<string> ossKey_ {};
        shared_ptr<int64_t> projectId_ {};
        shared_ptr<vector<Source::SourceFiles>> sourceFiles_ {};
      };

      class Dataset : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dataset& obj) { 
          DARABONBA_ANY_TO_JSON(BuildResultUrl, buildResultUrl_);
          DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
          DARABONBA_PTR_TO_JSON(GlbModelUrl, glbModelUrl_);
          DARABONBA_PTR_TO_JSON(ModelUrl, modelUrl_);
          DARABONBA_PTR_TO_JSON(OriginResultUrl, originResultUrl_);
          DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
          DARABONBA_PTR_TO_JSON(PoseUrl, poseUrl_);
          DARABONBA_PTR_TO_JSON(PreviewUrl, previewUrl_);
        };
        friend void from_json(const Darabonba::Json& j, Dataset& obj) { 
          DARABONBA_ANY_FROM_JSON(BuildResultUrl, buildResultUrl_);
          DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
          DARABONBA_PTR_FROM_JSON(GlbModelUrl, glbModelUrl_);
          DARABONBA_PTR_FROM_JSON(ModelUrl, modelUrl_);
          DARABONBA_PTR_FROM_JSON(OriginResultUrl, originResultUrl_);
          DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
          DARABONBA_PTR_FROM_JSON(PoseUrl, poseUrl_);
          DARABONBA_PTR_FROM_JSON(PreviewUrl, previewUrl_);
        };
        Dataset() = default ;
        Dataset(const Dataset &) = default ;
        Dataset(Dataset &&) = default ;
        Dataset(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dataset() = default ;
        Dataset& operator=(const Dataset &) = default ;
        Dataset& operator=(Dataset &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->buildResultUrl_ == nullptr
        && this->coverUrl_ == nullptr && this->glbModelUrl_ == nullptr && this->modelUrl_ == nullptr && this->originResultUrl_ == nullptr && this->ossKey_ == nullptr
        && this->poseUrl_ == nullptr && this->previewUrl_ == nullptr; };
        // buildResultUrl Field Functions 
        bool hasBuildResultUrl() const { return this->buildResultUrl_ != nullptr;};
        void deleteBuildResultUrl() { this->buildResultUrl_ = nullptr;};
        inline         const Darabonba::Json & getBuildResultUrl() const { DARABONBA_GET(buildResultUrl_) };
        Darabonba::Json & getBuildResultUrl() { DARABONBA_GET(buildResultUrl_) };
        inline Dataset& setBuildResultUrl(const Darabonba::Json & buildResultUrl) { DARABONBA_SET_VALUE(buildResultUrl_, buildResultUrl) };
        inline Dataset& setBuildResultUrl(Darabonba::Json && buildResultUrl) { DARABONBA_SET_RVALUE(buildResultUrl_, buildResultUrl) };


        // coverUrl Field Functions 
        bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
        void deleteCoverUrl() { this->coverUrl_ = nullptr;};
        inline string getCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
        inline Dataset& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


        // glbModelUrl Field Functions 
        bool hasGlbModelUrl() const { return this->glbModelUrl_ != nullptr;};
        void deleteGlbModelUrl() { this->glbModelUrl_ = nullptr;};
        inline string getGlbModelUrl() const { DARABONBA_PTR_GET_DEFAULT(glbModelUrl_, "") };
        inline Dataset& setGlbModelUrl(string glbModelUrl) { DARABONBA_PTR_SET_VALUE(glbModelUrl_, glbModelUrl) };


        // modelUrl Field Functions 
        bool hasModelUrl() const { return this->modelUrl_ != nullptr;};
        void deleteModelUrl() { this->modelUrl_ = nullptr;};
        inline string getModelUrl() const { DARABONBA_PTR_GET_DEFAULT(modelUrl_, "") };
        inline Dataset& setModelUrl(string modelUrl) { DARABONBA_PTR_SET_VALUE(modelUrl_, modelUrl) };


        // originResultUrl Field Functions 
        bool hasOriginResultUrl() const { return this->originResultUrl_ != nullptr;};
        void deleteOriginResultUrl() { this->originResultUrl_ = nullptr;};
        inline string getOriginResultUrl() const { DARABONBA_PTR_GET_DEFAULT(originResultUrl_, "") };
        inline Dataset& setOriginResultUrl(string originResultUrl) { DARABONBA_PTR_SET_VALUE(originResultUrl_, originResultUrl) };


        // ossKey Field Functions 
        bool hasOssKey() const { return this->ossKey_ != nullptr;};
        void deleteOssKey() { this->ossKey_ = nullptr;};
        inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
        inline Dataset& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


        // poseUrl Field Functions 
        bool hasPoseUrl() const { return this->poseUrl_ != nullptr;};
        void deletePoseUrl() { this->poseUrl_ = nullptr;};
        inline string getPoseUrl() const { DARABONBA_PTR_GET_DEFAULT(poseUrl_, "") };
        inline Dataset& setPoseUrl(string poseUrl) { DARABONBA_PTR_SET_VALUE(poseUrl_, poseUrl) };


        // previewUrl Field Functions 
        bool hasPreviewUrl() const { return this->previewUrl_ != nullptr;};
        void deletePreviewUrl() { this->previewUrl_ = nullptr;};
        inline string getPreviewUrl() const { DARABONBA_PTR_GET_DEFAULT(previewUrl_, "") };
        inline Dataset& setPreviewUrl(string previewUrl) { DARABONBA_PTR_SET_VALUE(previewUrl_, previewUrl) };


      protected:
        Darabonba::Json buildResultUrl_ {};
        shared_ptr<string> coverUrl_ {};
        shared_ptr<string> glbModelUrl_ {};
        shared_ptr<string> modelUrl_ {};
        shared_ptr<string> originResultUrl_ {};
        shared_ptr<string> ossKey_ {};
        shared_ptr<string> poseUrl_ {};
        shared_ptr<string> previewUrl_ {};
      };

      class BuildDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BuildDetail& obj) { 
          DARABONBA_PTR_TO_JSON(CompletedTime, completedTime_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(EstimatedDuration, estimatedDuration_);
          DARABONBA_PTR_TO_JSON(RunningTime, runningTime_);
          DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
        };
        friend void from_json(const Darabonba::Json& j, BuildDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(CompletedTime, completedTime_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(EstimatedDuration, estimatedDuration_);
          DARABONBA_PTR_FROM_JSON(RunningTime, runningTime_);
          DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
        };
        BuildDetail() = default ;
        BuildDetail(const BuildDetail &) = default ;
        BuildDetail(BuildDetail &&) = default ;
        BuildDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BuildDetail() = default ;
        BuildDetail& operator=(const BuildDetail &) = default ;
        BuildDetail& operator=(BuildDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->completedTime_ == nullptr
        && this->errorMessage_ == nullptr && this->estimatedDuration_ == nullptr && this->runningTime_ == nullptr && this->submitTime_ == nullptr; };
        // completedTime Field Functions 
        bool hasCompletedTime() const { return this->completedTime_ != nullptr;};
        void deleteCompletedTime() { this->completedTime_ = nullptr;};
        inline string getCompletedTime() const { DARABONBA_PTR_GET_DEFAULT(completedTime_, "") };
        inline BuildDetail& setCompletedTime(string completedTime) { DARABONBA_PTR_SET_VALUE(completedTime_, completedTime) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline BuildDetail& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // estimatedDuration Field Functions 
        bool hasEstimatedDuration() const { return this->estimatedDuration_ != nullptr;};
        void deleteEstimatedDuration() { this->estimatedDuration_ = nullptr;};
        inline int64_t getEstimatedDuration() const { DARABONBA_PTR_GET_DEFAULT(estimatedDuration_, 0L) };
        inline BuildDetail& setEstimatedDuration(int64_t estimatedDuration) { DARABONBA_PTR_SET_VALUE(estimatedDuration_, estimatedDuration) };


        // runningTime Field Functions 
        bool hasRunningTime() const { return this->runningTime_ != nullptr;};
        void deleteRunningTime() { this->runningTime_ = nullptr;};
        inline string getRunningTime() const { DARABONBA_PTR_GET_DEFAULT(runningTime_, "") };
        inline BuildDetail& setRunningTime(string runningTime) { DARABONBA_PTR_SET_VALUE(runningTime_, runningTime) };


        // submitTime Field Functions 
        bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
        void deleteSubmitTime() { this->submitTime_ = nullptr;};
        inline string getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
        inline BuildDetail& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


      protected:
        shared_ptr<string> completedTime_ {};
        shared_ptr<string> errorMessage_ {};
        shared_ptr<int64_t> estimatedDuration_ {};
        shared_ptr<string> runningTime_ {};
        shared_ptr<string> submitTime_ {};
      };

      virtual bool empty() const override { return this->bizUsage_ == nullptr
        && this->buildDetail_ == nullptr && this->createTime_ == nullptr && this->dataset_ == nullptr && this->ext_ == nullptr && this->id_ == nullptr
        && this->intro_ == nullptr && this->modifiedTime_ == nullptr && this->source_ == nullptr && this->status_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr; };
      // bizUsage Field Functions 
      bool hasBizUsage() const { return this->bizUsage_ != nullptr;};
      void deleteBizUsage() { this->bizUsage_ = nullptr;};
      inline string getBizUsage() const { DARABONBA_PTR_GET_DEFAULT(bizUsage_, "") };
      inline Data& setBizUsage(string bizUsage) { DARABONBA_PTR_SET_VALUE(bizUsage_, bizUsage) };


      // buildDetail Field Functions 
      bool hasBuildDetail() const { return this->buildDetail_ != nullptr;};
      void deleteBuildDetail() { this->buildDetail_ = nullptr;};
      inline const Data::BuildDetail & getBuildDetail() const { DARABONBA_PTR_GET_CONST(buildDetail_, Data::BuildDetail) };
      inline Data::BuildDetail getBuildDetail() { DARABONBA_PTR_GET(buildDetail_, Data::BuildDetail) };
      inline Data& setBuildDetail(const Data::BuildDetail & buildDetail) { DARABONBA_PTR_SET_VALUE(buildDetail_, buildDetail) };
      inline Data& setBuildDetail(Data::BuildDetail && buildDetail) { DARABONBA_PTR_SET_RVALUE(buildDetail_, buildDetail) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataset Field Functions 
      bool hasDataset() const { return this->dataset_ != nullptr;};
      void deleteDataset() { this->dataset_ = nullptr;};
      inline const Data::Dataset & getDataset() const { DARABONBA_PTR_GET_CONST(dataset_, Data::Dataset) };
      inline Data::Dataset getDataset() { DARABONBA_PTR_GET(dataset_, Data::Dataset) };
      inline Data& setDataset(const Data::Dataset & dataset) { DARABONBA_PTR_SET_VALUE(dataset_, dataset) };
      inline Data& setDataset(Data::Dataset && dataset) { DARABONBA_PTR_SET_RVALUE(dataset_, dataset) };


      // ext Field Functions 
      bool hasExt() const { return this->ext_ != nullptr;};
      void deleteExt() { this->ext_ = nullptr;};
      inline string getExt() const { DARABONBA_PTR_GET_DEFAULT(ext_, "") };
      inline Data& setExt(string ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // intro Field Functions 
      bool hasIntro() const { return this->intro_ != nullptr;};
      void deleteIntro() { this->intro_ = nullptr;};
      inline string getIntro() const { DARABONBA_PTR_GET_DEFAULT(intro_, "") };
      inline Data& setIntro(string intro) { DARABONBA_PTR_SET_VALUE(intro_, intro) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Data& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline const Data::Source & getSource() const { DARABONBA_PTR_GET_CONST(source_, Data::Source) };
      inline Data::Source getSource() { DARABONBA_PTR_GET(source_, Data::Source) };
      inline Data& setSource(const Data::Source & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
      inline Data& setSource(Data::Source && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> bizUsage_ {};
      shared_ptr<Data::BuildDetail> buildDetail_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<Data::Dataset> dataset_ {};
      shared_ptr<string> ext_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> intro_ {};
      shared_ptr<string> modifiedTime_ {};
      shared_ptr<Data::Source> source_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorName_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListProjectsByDependencyIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListProjectsByDependencyIdResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListProjectsByDependencyIdResponseBody::Data>) };
    inline vector<ListProjectsByDependencyIdResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListProjectsByDependencyIdResponseBody::Data>) };
    inline ListProjectsByDependencyIdResponseBody& setData(const vector<ListProjectsByDependencyIdResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListProjectsByDependencyIdResponseBody& setData(vector<ListProjectsByDependencyIdResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorName Field Functions 
    bool hasErrorName() const { return this->errorName_ != nullptr;};
    void deleteErrorName() { this->errorName_ = nullptr;};
    inline string getErrorName() const { DARABONBA_PTR_GET_DEFAULT(errorName_, "") };
    inline ListProjectsByDependencyIdResponseBody& setErrorName(string errorName) { DARABONBA_PTR_SET_VALUE(errorName_, errorName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListProjectsByDependencyIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProjectsByDependencyIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListProjectsByDependencyIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListProjectsByDependencyIdResponseBody::Data>> data_ {};
    shared_ptr<string> errorName_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
