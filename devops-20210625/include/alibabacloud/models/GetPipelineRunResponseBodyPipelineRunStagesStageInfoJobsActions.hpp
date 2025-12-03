// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINERUNRESPONSEBODYPIPELINERUNSTAGESSTAGEINFOJOBSACTIONS_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINERUNRESPONSEBODYPIPELINERUNSTAGESSTAGEINFOJOBSACTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions& obj) { 
      DARABONBA_PTR_TO_JSON(disable, disable_);
      DARABONBA_ANY_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions& obj) { 
      DARABONBA_PTR_FROM_JSON(disable, disable_);
      DARABONBA_ANY_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions() = default ;
    GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions(const GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions &) = default ;
    GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions(GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions &&) = default ;
    GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions() = default ;
    GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions& operator=(const GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions &) = default ;
    GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions& operator=(GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->disable_ == nullptr
        && return this->params_ == nullptr && return this->type_ == nullptr; };
    // disable Field Functions 
    bool hasDisable() const { return this->disable_ != nullptr;};
    void deleteDisable() { this->disable_ = nullptr;};
    inline bool disable() const { DARABONBA_PTR_GET_DEFAULT(disable_, false) };
    inline GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions& setDisable(bool disable) { DARABONBA_PTR_SET_VALUE(disable_, disable) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline     const Darabonba::Json & params() const { DARABONBA_GET(params_) };
    Darabonba::Json & params() { DARABONBA_GET(params_) };
    inline GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
    inline GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions& setParams(Darabonba::Json & params) { DARABONBA_SET_RVALUE(params_, params) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<bool> disable_ = nullptr;
    Darabonba::Json params_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
