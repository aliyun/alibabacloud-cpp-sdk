// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PIPELINETEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_PIPELINETEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class PipelineTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PipelineTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(deletionTime, deletionTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(generation, generation_);
      DARABONBA_PTR_TO_JSON(kind, kind_);
      DARABONBA_PTR_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(resourceVersion, resourceVersion_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
      DARABONBA_PTR_TO_JSON(uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, PipelineTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(deletionTime, deletionTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(generation, generation_);
      DARABONBA_PTR_FROM_JSON(kind, kind_);
      DARABONBA_PTR_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(resourceVersion, resourceVersion_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
      DARABONBA_PTR_FROM_JSON(uid, uid_);
    };
    PipelineTemplate() = default ;
    PipelineTemplate(const PipelineTemplate &) = default ;
    PipelineTemplate(PipelineTemplate &&) = default ;
    PipelineTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PipelineTemplate() = default ;
    PipelineTemplate& operator=(const PipelineTemplate &) = default ;
    PipelineTemplate& operator=(PipelineTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdTime_ != nullptr
        && this->deletionTime_ != nullptr && this->description_ != nullptr && this->generation_ != nullptr && this->kind_ != nullptr && this->labels_ != nullptr
        && this->name_ != nullptr && this->resourceVersion_ != nullptr && this->spec_ != nullptr && this->uid_ != nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline PipelineTemplate& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // deletionTime Field Functions 
    bool hasDeletionTime() const { return this->deletionTime_ != nullptr;};
    void deleteDeletionTime() { this->deletionTime_ = nullptr;};
    inline string deletionTime() const { DARABONBA_PTR_GET_DEFAULT(deletionTime_, "") };
    inline PipelineTemplate& setDeletionTime(string deletionTime) { DARABONBA_PTR_SET_VALUE(deletionTime_, deletionTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PipelineTemplate& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // generation Field Functions 
    bool hasGeneration() const { return this->generation_ != nullptr;};
    void deleteGeneration() { this->generation_ = nullptr;};
    inline int32_t generation() const { DARABONBA_PTR_GET_DEFAULT(generation_, 0) };
    inline PipelineTemplate& setGeneration(int32_t generation) { DARABONBA_PTR_SET_VALUE(generation_, generation) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline PipelineTemplate& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const map<string, string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
    inline map<string, string> labels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
    inline PipelineTemplate& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline PipelineTemplate& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PipelineTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceVersion Field Functions 
    bool hasResourceVersion() const { return this->resourceVersion_ != nullptr;};
    void deleteResourceVersion() { this->resourceVersion_ = nullptr;};
    inline int32_t resourceVersion() const { DARABONBA_PTR_GET_DEFAULT(resourceVersion_, 0) };
    inline PipelineTemplate& setResourceVersion(int32_t resourceVersion) { DARABONBA_PTR_SET_VALUE(resourceVersion_, resourceVersion) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline const PipelineTemplateSpec & spec() const { DARABONBA_PTR_GET_CONST(spec_, PipelineTemplateSpec) };
    inline PipelineTemplateSpec spec() { DARABONBA_PTR_GET(spec_, PipelineTemplateSpec) };
    inline PipelineTemplate& setSpec(const PipelineTemplateSpec & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
    inline PipelineTemplate& setSpec(PipelineTemplateSpec && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline PipelineTemplate& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> deletionTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> generation_ = nullptr;
    std::shared_ptr<string> kind_ = nullptr;
    std::shared_ptr<map<string, string>> labels_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> resourceVersion_ = nullptr;
    std::shared_ptr<PipelineTemplateSpec> spec_ = nullptr;
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
