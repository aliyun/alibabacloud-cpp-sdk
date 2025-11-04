// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMARTHANDLEJOBRESPONSEBODYSMARTJOBINFO_HPP_
#define ALIBABACLOUD_MODELS_GETSMARTHANDLEJOBRESPONSEBODYSMARTJOBINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSmartHandleJobResponseBodySmartJobInfoInputConfig.hpp>
#include <alibabacloud/models/GetSmartHandleJobResponseBodySmartJobInfoOutputConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetSmartHandleJobResponseBodySmartJobInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmartHandleJobResponseBodySmartJobInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmartHandleJobResponseBodySmartJobInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetSmartHandleJobResponseBodySmartJobInfo() = default ;
    GetSmartHandleJobResponseBodySmartJobInfo(const GetSmartHandleJobResponseBodySmartJobInfo &) = default ;
    GetSmartHandleJobResponseBodySmartJobInfo(GetSmartHandleJobResponseBodySmartJobInfo &&) = default ;
    GetSmartHandleJobResponseBodySmartJobInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmartHandleJobResponseBodySmartJobInfo() = default ;
    GetSmartHandleJobResponseBodySmartJobInfo& operator=(const GetSmartHandleJobResponseBodySmartJobInfo &) = default ;
    GetSmartHandleJobResponseBodySmartJobInfo& operator=(GetSmartHandleJobResponseBodySmartJobInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->inputConfig_ == nullptr && return this->jobType_ == nullptr && return this->modifiedTime_ == nullptr && return this->outputConfig_ == nullptr
        && return this->title_ == nullptr && return this->userId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetSmartHandleJobResponseBodySmartJobInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetSmartHandleJobResponseBodySmartJobInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // inputConfig Field Functions 
    bool hasInputConfig() const { return this->inputConfig_ != nullptr;};
    void deleteInputConfig() { this->inputConfig_ = nullptr;};
    inline const Models::GetSmartHandleJobResponseBodySmartJobInfoInputConfig & inputConfig() const { DARABONBA_PTR_GET_CONST(inputConfig_, Models::GetSmartHandleJobResponseBodySmartJobInfoInputConfig) };
    inline Models::GetSmartHandleJobResponseBodySmartJobInfoInputConfig inputConfig() { DARABONBA_PTR_GET(inputConfig_, Models::GetSmartHandleJobResponseBodySmartJobInfoInputConfig) };
    inline GetSmartHandleJobResponseBodySmartJobInfo& setInputConfig(const Models::GetSmartHandleJobResponseBodySmartJobInfoInputConfig & inputConfig) { DARABONBA_PTR_SET_VALUE(inputConfig_, inputConfig) };
    inline GetSmartHandleJobResponseBodySmartJobInfo& setInputConfig(Models::GetSmartHandleJobResponseBodySmartJobInfoInputConfig && inputConfig) { DARABONBA_PTR_SET_RVALUE(inputConfig_, inputConfig) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline GetSmartHandleJobResponseBodySmartJobInfo& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetSmartHandleJobResponseBodySmartJobInfo& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // outputConfig Field Functions 
    bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
    void deleteOutputConfig() { this->outputConfig_ = nullptr;};
    inline const Models::GetSmartHandleJobResponseBodySmartJobInfoOutputConfig & outputConfig() const { DARABONBA_PTR_GET_CONST(outputConfig_, Models::GetSmartHandleJobResponseBodySmartJobInfoOutputConfig) };
    inline Models::GetSmartHandleJobResponseBodySmartJobInfoOutputConfig outputConfig() { DARABONBA_PTR_GET(outputConfig_, Models::GetSmartHandleJobResponseBodySmartJobInfoOutputConfig) };
    inline GetSmartHandleJobResponseBodySmartJobInfo& setOutputConfig(const Models::GetSmartHandleJobResponseBodySmartJobInfoOutputConfig & outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };
    inline GetSmartHandleJobResponseBodySmartJobInfo& setOutputConfig(Models::GetSmartHandleJobResponseBodySmartJobInfoOutputConfig && outputConfig) { DARABONBA_PTR_SET_RVALUE(outputConfig_, outputConfig) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetSmartHandleJobResponseBodySmartJobInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetSmartHandleJobResponseBodySmartJobInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The time when the job was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The job description.
    std::shared_ptr<string> description_ = nullptr;
    // The input configurations.
    std::shared_ptr<Models::GetSmartHandleJobResponseBodySmartJobInfoInputConfig> inputConfig_ = nullptr;
    // The job type.
    std::shared_ptr<string> jobType_ = nullptr;
    // The time when the job was last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The output configurations.
    std::shared_ptr<Models::GetSmartHandleJobResponseBodySmartJobInfoOutputConfig> outputConfig_ = nullptr;
    // The job title.
    std::shared_ptr<string> title_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
