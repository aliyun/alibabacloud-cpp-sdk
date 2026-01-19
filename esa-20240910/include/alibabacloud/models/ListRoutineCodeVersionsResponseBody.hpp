// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTINECODEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTINECODEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListRoutineCodeVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoutineCodeVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CodeVersions, codeVersions_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoutineCodeVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeVersions, codeVersions_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRoutineCodeVersionsResponseBody() = default ;
    ListRoutineCodeVersionsResponseBody(const ListRoutineCodeVersionsResponseBody &) = default ;
    ListRoutineCodeVersionsResponseBody(ListRoutineCodeVersionsResponseBody &&) = default ;
    ListRoutineCodeVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoutineCodeVersionsResponseBody() = default ;
    ListRoutineCodeVersionsResponseBody& operator=(const ListRoutineCodeVersionsResponseBody &) = default ;
    ListRoutineCodeVersionsResponseBody& operator=(ListRoutineCodeVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CodeVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CodeVersions& obj) { 
        DARABONBA_PTR_TO_JSON(BuildId, buildId_);
        DARABONBA_PTR_TO_JSON(CodeDescription, codeDescription_);
        DARABONBA_PTR_TO_JSON(CodeVersion, codeVersion_);
        DARABONBA_PTR_TO_JSON(ConfOptions, confOptions_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, CodeVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(BuildId, buildId_);
        DARABONBA_PTR_FROM_JSON(CodeDescription, codeDescription_);
        DARABONBA_PTR_FROM_JSON(CodeVersion, codeVersion_);
        DARABONBA_PTR_FROM_JSON(ConfOptions, confOptions_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      CodeVersions() = default ;
      CodeVersions(const CodeVersions &) = default ;
      CodeVersions(CodeVersions &&) = default ;
      CodeVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CodeVersions() = default ;
      CodeVersions& operator=(const CodeVersions &) = default ;
      CodeVersions& operator=(CodeVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ConfOptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfOptions& obj) { 
          DARABONBA_PTR_TO_JSON(NotFoundStrategy, notFoundStrategy_);
        };
        friend void from_json(const Darabonba::Json& j, ConfOptions& obj) { 
          DARABONBA_PTR_FROM_JSON(NotFoundStrategy, notFoundStrategy_);
        };
        ConfOptions() = default ;
        ConfOptions(const ConfOptions &) = default ;
        ConfOptions(ConfOptions &&) = default ;
        ConfOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfOptions() = default ;
        ConfOptions& operator=(const ConfOptions &) = default ;
        ConfOptions& operator=(ConfOptions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->notFoundStrategy_ == nullptr; };
        // notFoundStrategy Field Functions 
        bool hasNotFoundStrategy() const { return this->notFoundStrategy_ != nullptr;};
        void deleteNotFoundStrategy() { this->notFoundStrategy_ = nullptr;};
        inline string getNotFoundStrategy() const { DARABONBA_PTR_GET_DEFAULT(notFoundStrategy_, "") };
        inline ConfOptions& setNotFoundStrategy(string notFoundStrategy) { DARABONBA_PTR_SET_VALUE(notFoundStrategy_, notFoundStrategy) };


      protected:
        // Code version configuration items NotFoundStrategy.
        shared_ptr<string> notFoundStrategy_ {};
      };

      virtual bool empty() const override { return this->buildId_ == nullptr
        && this->codeDescription_ == nullptr && this->codeVersion_ == nullptr && this->confOptions_ == nullptr && this->createTime_ == nullptr && this->extraInfo_ == nullptr
        && this->status_ == nullptr; };
      // buildId Field Functions 
      bool hasBuildId() const { return this->buildId_ != nullptr;};
      void deleteBuildId() { this->buildId_ = nullptr;};
      inline int64_t getBuildId() const { DARABONBA_PTR_GET_DEFAULT(buildId_, 0L) };
      inline CodeVersions& setBuildId(int64_t buildId) { DARABONBA_PTR_SET_VALUE(buildId_, buildId) };


      // codeDescription Field Functions 
      bool hasCodeDescription() const { return this->codeDescription_ != nullptr;};
      void deleteCodeDescription() { this->codeDescription_ = nullptr;};
      inline string getCodeDescription() const { DARABONBA_PTR_GET_DEFAULT(codeDescription_, "") };
      inline CodeVersions& setCodeDescription(string codeDescription) { DARABONBA_PTR_SET_VALUE(codeDescription_, codeDescription) };


      // codeVersion Field Functions 
      bool hasCodeVersion() const { return this->codeVersion_ != nullptr;};
      void deleteCodeVersion() { this->codeVersion_ = nullptr;};
      inline string getCodeVersion() const { DARABONBA_PTR_GET_DEFAULT(codeVersion_, "") };
      inline CodeVersions& setCodeVersion(string codeVersion) { DARABONBA_PTR_SET_VALUE(codeVersion_, codeVersion) };


      // confOptions Field Functions 
      bool hasConfOptions() const { return this->confOptions_ != nullptr;};
      void deleteConfOptions() { this->confOptions_ = nullptr;};
      inline const CodeVersions::ConfOptions & getConfOptions() const { DARABONBA_PTR_GET_CONST(confOptions_, CodeVersions::ConfOptions) };
      inline CodeVersions::ConfOptions getConfOptions() { DARABONBA_PTR_GET(confOptions_, CodeVersions::ConfOptions) };
      inline CodeVersions& setConfOptions(const CodeVersions::ConfOptions & confOptions) { DARABONBA_PTR_SET_VALUE(confOptions_, confOptions) };
      inline CodeVersions& setConfOptions(CodeVersions::ConfOptions && confOptions) { DARABONBA_PTR_SET_RVALUE(confOptions_, confOptions) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline CodeVersions& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // extraInfo Field Functions 
      bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
      void deleteExtraInfo() { this->extraInfo_ = nullptr;};
      inline string getExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
      inline CodeVersions& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CodeVersions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the code version build.
      shared_ptr<int64_t> buildId_ {};
      // The description of the code version.
      shared_ptr<string> codeDescription_ {};
      // The version of the code.
      shared_ptr<string> codeVersion_ {};
      // Code version configuration items.
      shared_ptr<CodeVersions::ConfOptions> confOptions_ {};
      // The time when the code version was created.
      shared_ptr<string> createTime_ {};
      // Additional information about the code version.
      shared_ptr<string> extraInfo_ {};
      // The status of the code version.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->codeVersions_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // codeVersions Field Functions 
    bool hasCodeVersions() const { return this->codeVersions_ != nullptr;};
    void deleteCodeVersions() { this->codeVersions_ = nullptr;};
    inline const vector<ListRoutineCodeVersionsResponseBody::CodeVersions> & getCodeVersions() const { DARABONBA_PTR_GET_CONST(codeVersions_, vector<ListRoutineCodeVersionsResponseBody::CodeVersions>) };
    inline vector<ListRoutineCodeVersionsResponseBody::CodeVersions> getCodeVersions() { DARABONBA_PTR_GET(codeVersions_, vector<ListRoutineCodeVersionsResponseBody::CodeVersions>) };
    inline ListRoutineCodeVersionsResponseBody& setCodeVersions(const vector<ListRoutineCodeVersionsResponseBody::CodeVersions> & codeVersions) { DARABONBA_PTR_SET_VALUE(codeVersions_, codeVersions) };
    inline ListRoutineCodeVersionsResponseBody& setCodeVersions(vector<ListRoutineCodeVersionsResponseBody::CodeVersions> && codeVersions) { DARABONBA_PTR_SET_RVALUE(codeVersions_, codeVersions) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListRoutineCodeVersionsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListRoutineCodeVersionsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRoutineCodeVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRoutineCodeVersionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The code versions of the routine.
    shared_ptr<vector<ListRoutineCodeVersionsResponseBody::CodeVersions>> codeVersions_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of code versions returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
