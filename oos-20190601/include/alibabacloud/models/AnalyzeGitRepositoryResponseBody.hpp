// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZEGITREPOSITORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ANALYZEGITREPOSITORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class AnalyzeGitRepositoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeGitRepositoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisResults, analysisResults_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeGitRepositoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisResults, analysisResults_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AnalyzeGitRepositoryResponseBody() = default ;
    AnalyzeGitRepositoryResponseBody(const AnalyzeGitRepositoryResponseBody &) = default ;
    AnalyzeGitRepositoryResponseBody(AnalyzeGitRepositoryResponseBody &&) = default ;
    AnalyzeGitRepositoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeGitRepositoryResponseBody() = default ;
    AnalyzeGitRepositoryResponseBody& operator=(const AnalyzeGitRepositoryResponseBody &) = default ;
    AnalyzeGitRepositoryResponseBody& operator=(AnalyzeGitRepositoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AnalysisResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AnalysisResults& obj) { 
        DARABONBA_PTR_TO_JSON(BuildFiles, buildFiles_);
        DARABONBA_PTR_TO_JSON(BuildType, buildType_);
        DARABONBA_PTR_TO_JSON(RuntimeType, runtimeType_);
      };
      friend void from_json(const Darabonba::Json& j, AnalysisResults& obj) { 
        DARABONBA_PTR_FROM_JSON(BuildFiles, buildFiles_);
        DARABONBA_PTR_FROM_JSON(BuildType, buildType_);
        DARABONBA_PTR_FROM_JSON(RuntimeType, runtimeType_);
      };
      AnalysisResults() = default ;
      AnalysisResults(const AnalysisResults &) = default ;
      AnalysisResults(AnalysisResults &&) = default ;
      AnalysisResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AnalysisResults() = default ;
      AnalysisResults& operator=(const AnalysisResults &) = default ;
      AnalysisResults& operator=(AnalysisResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BuildFiles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BuildFiles& obj) { 
          DARABONBA_PTR_TO_JSON(FileType, fileType_);
          DARABONBA_PTR_TO_JSON(Paths, paths_);
        };
        friend void from_json(const Darabonba::Json& j, BuildFiles& obj) { 
          DARABONBA_PTR_FROM_JSON(FileType, fileType_);
          DARABONBA_PTR_FROM_JSON(Paths, paths_);
        };
        BuildFiles() = default ;
        BuildFiles(const BuildFiles &) = default ;
        BuildFiles(BuildFiles &&) = default ;
        BuildFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BuildFiles() = default ;
        BuildFiles& operator=(const BuildFiles &) = default ;
        BuildFiles& operator=(BuildFiles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileType_ == nullptr
        && this->paths_ == nullptr; };
        // fileType Field Functions 
        bool hasFileType() const { return this->fileType_ != nullptr;};
        void deleteFileType() { this->fileType_ = nullptr;};
        inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
        inline BuildFiles& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


        // paths Field Functions 
        bool hasPaths() const { return this->paths_ != nullptr;};
        void deletePaths() { this->paths_ = nullptr;};
        inline const vector<string> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
        inline vector<string> getPaths() { DARABONBA_PTR_GET(paths_, vector<string>) };
        inline BuildFiles& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
        inline BuildFiles& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


      protected:
        shared_ptr<string> fileType_ {};
        shared_ptr<vector<string>> paths_ {};
      };

      virtual bool empty() const override { return this->buildFiles_ == nullptr
        && this->buildType_ == nullptr && this->runtimeType_ == nullptr; };
      // buildFiles Field Functions 
      bool hasBuildFiles() const { return this->buildFiles_ != nullptr;};
      void deleteBuildFiles() { this->buildFiles_ = nullptr;};
      inline const vector<AnalysisResults::BuildFiles> & getBuildFiles() const { DARABONBA_PTR_GET_CONST(buildFiles_, vector<AnalysisResults::BuildFiles>) };
      inline vector<AnalysisResults::BuildFiles> getBuildFiles() { DARABONBA_PTR_GET(buildFiles_, vector<AnalysisResults::BuildFiles>) };
      inline AnalysisResults& setBuildFiles(const vector<AnalysisResults::BuildFiles> & buildFiles) { DARABONBA_PTR_SET_VALUE(buildFiles_, buildFiles) };
      inline AnalysisResults& setBuildFiles(vector<AnalysisResults::BuildFiles> && buildFiles) { DARABONBA_PTR_SET_RVALUE(buildFiles_, buildFiles) };


      // buildType Field Functions 
      bool hasBuildType() const { return this->buildType_ != nullptr;};
      void deleteBuildType() { this->buildType_ = nullptr;};
      inline string getBuildType() const { DARABONBA_PTR_GET_DEFAULT(buildType_, "") };
      inline AnalysisResults& setBuildType(string buildType) { DARABONBA_PTR_SET_VALUE(buildType_, buildType) };


      // runtimeType Field Functions 
      bool hasRuntimeType() const { return this->runtimeType_ != nullptr;};
      void deleteRuntimeType() { this->runtimeType_ = nullptr;};
      inline string getRuntimeType() const { DARABONBA_PTR_GET_DEFAULT(runtimeType_, "") };
      inline AnalysisResults& setRuntimeType(string runtimeType) { DARABONBA_PTR_SET_VALUE(runtimeType_, runtimeType) };


    protected:
      shared_ptr<vector<AnalysisResults::BuildFiles>> buildFiles_ {};
      shared_ptr<string> buildType_ {};
      shared_ptr<string> runtimeType_ {};
    };

    virtual bool empty() const override { return this->analysisResults_ == nullptr
        && this->count_ == nullptr && this->requestId_ == nullptr; };
    // analysisResults Field Functions 
    bool hasAnalysisResults() const { return this->analysisResults_ != nullptr;};
    void deleteAnalysisResults() { this->analysisResults_ = nullptr;};
    inline const vector<AnalyzeGitRepositoryResponseBody::AnalysisResults> & getAnalysisResults() const { DARABONBA_PTR_GET_CONST(analysisResults_, vector<AnalyzeGitRepositoryResponseBody::AnalysisResults>) };
    inline vector<AnalyzeGitRepositoryResponseBody::AnalysisResults> getAnalysisResults() { DARABONBA_PTR_GET(analysisResults_, vector<AnalyzeGitRepositoryResponseBody::AnalysisResults>) };
    inline AnalyzeGitRepositoryResponseBody& setAnalysisResults(const vector<AnalyzeGitRepositoryResponseBody::AnalysisResults> & analysisResults) { DARABONBA_PTR_SET_VALUE(analysisResults_, analysisResults) };
    inline AnalyzeGitRepositoryResponseBody& setAnalysisResults(vector<AnalyzeGitRepositoryResponseBody::AnalysisResults> && analysisResults) { DARABONBA_PTR_SET_RVALUE(analysisResults_, analysisResults) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline AnalyzeGitRepositoryResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AnalyzeGitRepositoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<AnalyzeGitRepositoryResponseBody::AnalysisResults>> analysisResults_ {};
    shared_ptr<int32_t> count_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
