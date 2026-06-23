// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTINECODEVERSIONINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETROUTINECODEVERSIONINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetRoutineCodeVersionInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoutineCodeVersionInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BuildId, buildId_);
      DARABONBA_PTR_TO_JSON(CodeDescription, codeDescription_);
      DARABONBA_PTR_TO_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_TO_JSON(ConfOptions, confOptions_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(HasAssets, hasAssets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoutineCodeVersionInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildId, buildId_);
      DARABONBA_PTR_FROM_JSON(CodeDescription, codeDescription_);
      DARABONBA_PTR_FROM_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_FROM_JSON(ConfOptions, confOptions_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(HasAssets, hasAssets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetRoutineCodeVersionInfoResponseBody() = default ;
    GetRoutineCodeVersionInfoResponseBody(const GetRoutineCodeVersionInfoResponseBody &) = default ;
    GetRoutineCodeVersionInfoResponseBody(GetRoutineCodeVersionInfoResponseBody &&) = default ;
    GetRoutineCodeVersionInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoutineCodeVersionInfoResponseBody() = default ;
    GetRoutineCodeVersionInfoResponseBody& operator=(const GetRoutineCodeVersionInfoResponseBody &) = default ;
    GetRoutineCodeVersionInfoResponseBody& operator=(GetRoutineCodeVersionInfoResponseBody &&) = default ;
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
      // The NotFoundStrategy configuration item.
      shared_ptr<string> notFoundStrategy_ {};
    };

    virtual bool empty() const override { return this->buildId_ == nullptr
        && this->codeDescription_ == nullptr && this->codeVersion_ == nullptr && this->confOptions_ == nullptr && this->createTime_ == nullptr && this->extraInfo_ == nullptr
        && this->hasAssets_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // buildId Field Functions 
    bool hasBuildId() const { return this->buildId_ != nullptr;};
    void deleteBuildId() { this->buildId_ = nullptr;};
    inline int64_t getBuildId() const { DARABONBA_PTR_GET_DEFAULT(buildId_, 0L) };
    inline GetRoutineCodeVersionInfoResponseBody& setBuildId(int64_t buildId) { DARABONBA_PTR_SET_VALUE(buildId_, buildId) };


    // codeDescription Field Functions 
    bool hasCodeDescription() const { return this->codeDescription_ != nullptr;};
    void deleteCodeDescription() { this->codeDescription_ = nullptr;};
    inline string getCodeDescription() const { DARABONBA_PTR_GET_DEFAULT(codeDescription_, "") };
    inline GetRoutineCodeVersionInfoResponseBody& setCodeDescription(string codeDescription) { DARABONBA_PTR_SET_VALUE(codeDescription_, codeDescription) };


    // codeVersion Field Functions 
    bool hasCodeVersion() const { return this->codeVersion_ != nullptr;};
    void deleteCodeVersion() { this->codeVersion_ = nullptr;};
    inline string getCodeVersion() const { DARABONBA_PTR_GET_DEFAULT(codeVersion_, "") };
    inline GetRoutineCodeVersionInfoResponseBody& setCodeVersion(string codeVersion) { DARABONBA_PTR_SET_VALUE(codeVersion_, codeVersion) };


    // confOptions Field Functions 
    bool hasConfOptions() const { return this->confOptions_ != nullptr;};
    void deleteConfOptions() { this->confOptions_ = nullptr;};
    inline const GetRoutineCodeVersionInfoResponseBody::ConfOptions & getConfOptions() const { DARABONBA_PTR_GET_CONST(confOptions_, GetRoutineCodeVersionInfoResponseBody::ConfOptions) };
    inline GetRoutineCodeVersionInfoResponseBody::ConfOptions getConfOptions() { DARABONBA_PTR_GET(confOptions_, GetRoutineCodeVersionInfoResponseBody::ConfOptions) };
    inline GetRoutineCodeVersionInfoResponseBody& setConfOptions(const GetRoutineCodeVersionInfoResponseBody::ConfOptions & confOptions) { DARABONBA_PTR_SET_VALUE(confOptions_, confOptions) };
    inline GetRoutineCodeVersionInfoResponseBody& setConfOptions(GetRoutineCodeVersionInfoResponseBody::ConfOptions && confOptions) { DARABONBA_PTR_SET_RVALUE(confOptions_, confOptions) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetRoutineCodeVersionInfoResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string getExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline GetRoutineCodeVersionInfoResponseBody& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // hasAssets Field Functions 
    bool hasHasAssets() const { return this->hasAssets_ != nullptr;};
    void deleteHasAssets() { this->hasAssets_ = nullptr;};
    inline bool getHasAssets() const { DARABONBA_PTR_GET_DEFAULT(hasAssets_, false) };
    inline GetRoutineCodeVersionInfoResponseBody& setHasAssets(bool hasAssets) { DARABONBA_PTR_SET_VALUE(hasAssets_, hasAssets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRoutineCodeVersionInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetRoutineCodeVersionInfoResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The build ID of the code.
    shared_ptr<int64_t> buildId_ {};
    // The description of the code version.
    shared_ptr<string> codeDescription_ {};
    // The code version number.
    shared_ptr<string> codeVersion_ {};
    // The list of configuration items for the code version.
    shared_ptr<GetRoutineCodeVersionInfoResponseBody::ConfOptions> confOptions_ {};
    // The time when the code version was created.
    shared_ptr<string> createTime_ {};
    // The additional information about the code version. The value is in JSON string format.
    shared_ptr<string> extraInfo_ {};
    // Indicates whether the code version contains asset files.
    shared_ptr<bool> hasAssets_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the code version.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
