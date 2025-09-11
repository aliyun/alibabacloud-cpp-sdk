// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTINECODEVERSIONSRESPONSEBODYCODEVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTINECODEVERSIONSRESPONSEBODYCODEVERSIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListRoutineCodeVersionsResponseBodyCodeVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoutineCodeVersionsResponseBodyCodeVersions& obj) { 
      DARABONBA_PTR_TO_JSON(BuildId, buildId_);
      DARABONBA_PTR_TO_JSON(CodeDescription, codeDescription_);
      DARABONBA_PTR_TO_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_TO_JSON(ConfOptions, confOptions_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoutineCodeVersionsResponseBodyCodeVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildId, buildId_);
      DARABONBA_PTR_FROM_JSON(CodeDescription, codeDescription_);
      DARABONBA_PTR_FROM_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_FROM_JSON(ConfOptions, confOptions_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListRoutineCodeVersionsResponseBodyCodeVersions() = default ;
    ListRoutineCodeVersionsResponseBodyCodeVersions(const ListRoutineCodeVersionsResponseBodyCodeVersions &) = default ;
    ListRoutineCodeVersionsResponseBodyCodeVersions(ListRoutineCodeVersionsResponseBodyCodeVersions &&) = default ;
    ListRoutineCodeVersionsResponseBodyCodeVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoutineCodeVersionsResponseBodyCodeVersions() = default ;
    ListRoutineCodeVersionsResponseBodyCodeVersions& operator=(const ListRoutineCodeVersionsResponseBodyCodeVersions &) = default ;
    ListRoutineCodeVersionsResponseBodyCodeVersions& operator=(ListRoutineCodeVersionsResponseBodyCodeVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildId_ != nullptr
        && this->codeDescription_ != nullptr && this->codeVersion_ != nullptr && this->confOptions_ != nullptr && this->createTime_ != nullptr && this->extraInfo_ != nullptr
        && this->status_ != nullptr; };
    // buildId Field Functions 
    bool hasBuildId() const { return this->buildId_ != nullptr;};
    void deleteBuildId() { this->buildId_ = nullptr;};
    inline int64_t buildId() const { DARABONBA_PTR_GET_DEFAULT(buildId_, 0L) };
    inline ListRoutineCodeVersionsResponseBodyCodeVersions& setBuildId(int64_t buildId) { DARABONBA_PTR_SET_VALUE(buildId_, buildId) };


    // codeDescription Field Functions 
    bool hasCodeDescription() const { return this->codeDescription_ != nullptr;};
    void deleteCodeDescription() { this->codeDescription_ = nullptr;};
    inline string codeDescription() const { DARABONBA_PTR_GET_DEFAULT(codeDescription_, "") };
    inline ListRoutineCodeVersionsResponseBodyCodeVersions& setCodeDescription(string codeDescription) { DARABONBA_PTR_SET_VALUE(codeDescription_, codeDescription) };


    // codeVersion Field Functions 
    bool hasCodeVersion() const { return this->codeVersion_ != nullptr;};
    void deleteCodeVersion() { this->codeVersion_ = nullptr;};
    inline string codeVersion() const { DARABONBA_PTR_GET_DEFAULT(codeVersion_, "") };
    inline ListRoutineCodeVersionsResponseBodyCodeVersions& setCodeVersion(string codeVersion) { DARABONBA_PTR_SET_VALUE(codeVersion_, codeVersion) };


    // confOptions Field Functions 
    bool hasConfOptions() const { return this->confOptions_ != nullptr;};
    void deleteConfOptions() { this->confOptions_ = nullptr;};
    inline const Models::ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions & confOptions() const { DARABONBA_PTR_GET_CONST(confOptions_, Models::ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions) };
    inline Models::ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions confOptions() { DARABONBA_PTR_GET(confOptions_, Models::ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions) };
    inline ListRoutineCodeVersionsResponseBodyCodeVersions& setConfOptions(const Models::ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions & confOptions) { DARABONBA_PTR_SET_VALUE(confOptions_, confOptions) };
    inline ListRoutineCodeVersionsResponseBodyCodeVersions& setConfOptions(Models::ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions && confOptions) { DARABONBA_PTR_SET_RVALUE(confOptions_, confOptions) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListRoutineCodeVersionsResponseBodyCodeVersions& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string extraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline ListRoutineCodeVersionsResponseBodyCodeVersions& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListRoutineCodeVersionsResponseBodyCodeVersions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int64_t> buildId_ = nullptr;
    std::shared_ptr<string> codeDescription_ = nullptr;
    std::shared_ptr<string> codeVersion_ = nullptr;
    std::shared_ptr<Models::ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions> confOptions_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> extraInfo_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
