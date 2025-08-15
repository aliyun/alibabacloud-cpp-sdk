// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROCESSDEFINITIONWITHSCHEDULEREQUESTTASKRELATIONJSON_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROCESSDEFINITIONWITHSCHEDULEREQUESTTASKRELATIONJSON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class UpdateProcessDefinitionWithScheduleRequestTaskRelationJson : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProcessDefinitionWithScheduleRequestTaskRelationJson& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(postTaskCode, postTaskCode_);
      DARABONBA_PTR_TO_JSON(postTaskVersion, postTaskVersion_);
      DARABONBA_PTR_TO_JSON(preTaskCode, preTaskCode_);
      DARABONBA_PTR_TO_JSON(preTaskVersion, preTaskVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProcessDefinitionWithScheduleRequestTaskRelationJson& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(postTaskCode, postTaskCode_);
      DARABONBA_PTR_FROM_JSON(postTaskVersion, postTaskVersion_);
      DARABONBA_PTR_FROM_JSON(preTaskCode, preTaskCode_);
      DARABONBA_PTR_FROM_JSON(preTaskVersion, preTaskVersion_);
    };
    UpdateProcessDefinitionWithScheduleRequestTaskRelationJson() = default ;
    UpdateProcessDefinitionWithScheduleRequestTaskRelationJson(const UpdateProcessDefinitionWithScheduleRequestTaskRelationJson &) = default ;
    UpdateProcessDefinitionWithScheduleRequestTaskRelationJson(UpdateProcessDefinitionWithScheduleRequestTaskRelationJson &&) = default ;
    UpdateProcessDefinitionWithScheduleRequestTaskRelationJson(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProcessDefinitionWithScheduleRequestTaskRelationJson() = default ;
    UpdateProcessDefinitionWithScheduleRequestTaskRelationJson& operator=(const UpdateProcessDefinitionWithScheduleRequestTaskRelationJson &) = default ;
    UpdateProcessDefinitionWithScheduleRequestTaskRelationJson& operator=(UpdateProcessDefinitionWithScheduleRequestTaskRelationJson &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->postTaskCode_ != nullptr && this->postTaskVersion_ != nullptr && this->preTaskCode_ != nullptr && this->preTaskVersion_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateProcessDefinitionWithScheduleRequestTaskRelationJson& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // postTaskCode Field Functions 
    bool hasPostTaskCode() const { return this->postTaskCode_ != nullptr;};
    void deletePostTaskCode() { this->postTaskCode_ = nullptr;};
    inline int64_t postTaskCode() const { DARABONBA_PTR_GET_DEFAULT(postTaskCode_, 0L) };
    inline UpdateProcessDefinitionWithScheduleRequestTaskRelationJson& setPostTaskCode(int64_t postTaskCode) { DARABONBA_PTR_SET_VALUE(postTaskCode_, postTaskCode) };


    // postTaskVersion Field Functions 
    bool hasPostTaskVersion() const { return this->postTaskVersion_ != nullptr;};
    void deletePostTaskVersion() { this->postTaskVersion_ = nullptr;};
    inline int32_t postTaskVersion() const { DARABONBA_PTR_GET_DEFAULT(postTaskVersion_, 0) };
    inline UpdateProcessDefinitionWithScheduleRequestTaskRelationJson& setPostTaskVersion(int32_t postTaskVersion) { DARABONBA_PTR_SET_VALUE(postTaskVersion_, postTaskVersion) };


    // preTaskCode Field Functions 
    bool hasPreTaskCode() const { return this->preTaskCode_ != nullptr;};
    void deletePreTaskCode() { this->preTaskCode_ = nullptr;};
    inline int64_t preTaskCode() const { DARABONBA_PTR_GET_DEFAULT(preTaskCode_, 0L) };
    inline UpdateProcessDefinitionWithScheduleRequestTaskRelationJson& setPreTaskCode(int64_t preTaskCode) { DARABONBA_PTR_SET_VALUE(preTaskCode_, preTaskCode) };


    // preTaskVersion Field Functions 
    bool hasPreTaskVersion() const { return this->preTaskVersion_ != nullptr;};
    void deletePreTaskVersion() { this->preTaskVersion_ = nullptr;};
    inline int32_t preTaskVersion() const { DARABONBA_PTR_GET_DEFAULT(preTaskVersion_, 0) };
    inline UpdateProcessDefinitionWithScheduleRequestTaskRelationJson& setPreTaskVersion(int32_t preTaskVersion) { DARABONBA_PTR_SET_VALUE(preTaskVersion_, preTaskVersion) };


  protected:
    // The name of the node topology. You can enter a workflow name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the downstream node.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> postTaskCode_ = nullptr;
    // The version of the downstream node.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> postTaskVersion_ = nullptr;
    // The ID of the upstream node.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> preTaskCode_ = nullptr;
    // The version of the upstream node.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> preTaskVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
