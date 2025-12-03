// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINERUNRESPONSEBODYPIPELINERUNSTAGES_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINERUNRESPONSEBODYPIPELINERUNSTAGES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPipelineRunResponseBodyPipelineRunStagesStageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetPipelineRunResponseBodyPipelineRunStages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineRunResponseBodyPipelineRunStages& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(stageInfo, stageInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineRunResponseBodyPipelineRunStages& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(stageInfo, stageInfo_);
    };
    GetPipelineRunResponseBodyPipelineRunStages() = default ;
    GetPipelineRunResponseBodyPipelineRunStages(const GetPipelineRunResponseBodyPipelineRunStages &) = default ;
    GetPipelineRunResponseBodyPipelineRunStages(GetPipelineRunResponseBodyPipelineRunStages &&) = default ;
    GetPipelineRunResponseBodyPipelineRunStages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineRunResponseBodyPipelineRunStages() = default ;
    GetPipelineRunResponseBodyPipelineRunStages& operator=(const GetPipelineRunResponseBodyPipelineRunStages &) = default ;
    GetPipelineRunResponseBodyPipelineRunStages& operator=(GetPipelineRunResponseBodyPipelineRunStages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->stageInfo_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetPipelineRunResponseBodyPipelineRunStages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // stageInfo Field Functions 
    bool hasStageInfo() const { return this->stageInfo_ != nullptr;};
    void deleteStageInfo() { this->stageInfo_ = nullptr;};
    inline const Models::GetPipelineRunResponseBodyPipelineRunStagesStageInfo & stageInfo() const { DARABONBA_PTR_GET_CONST(stageInfo_, Models::GetPipelineRunResponseBodyPipelineRunStagesStageInfo) };
    inline Models::GetPipelineRunResponseBodyPipelineRunStagesStageInfo stageInfo() { DARABONBA_PTR_GET(stageInfo_, Models::GetPipelineRunResponseBodyPipelineRunStagesStageInfo) };
    inline GetPipelineRunResponseBodyPipelineRunStages& setStageInfo(const Models::GetPipelineRunResponseBodyPipelineRunStagesStageInfo & stageInfo) { DARABONBA_PTR_SET_VALUE(stageInfo_, stageInfo) };
    inline GetPipelineRunResponseBodyPipelineRunStages& setStageInfo(Models::GetPipelineRunResponseBodyPipelineRunStagesStageInfo && stageInfo) { DARABONBA_PTR_SET_RVALUE(stageInfo_, stageInfo) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::GetPipelineRunResponseBodyPipelineRunStagesStageInfo> stageInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
