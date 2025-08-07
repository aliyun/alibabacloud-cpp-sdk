// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTTASKSTASKSPECRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTTASKSTASKSPECRESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateJobRequestTasksTaskSpecResourceDisks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateJobRequestTasksTaskSpecResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestTasksTaskSpecResource& obj) { 
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(Disks, disks_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestTasksTaskSpecResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(Disks, disks_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
    };
    CreateJobRequestTasksTaskSpecResource() = default ;
    CreateJobRequestTasksTaskSpecResource(const CreateJobRequestTasksTaskSpecResource &) = default ;
    CreateJobRequestTasksTaskSpecResource(CreateJobRequestTasksTaskSpecResource &&) = default ;
    CreateJobRequestTasksTaskSpecResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestTasksTaskSpecResource() = default ;
    CreateJobRequestTasksTaskSpecResource& operator=(const CreateJobRequestTasksTaskSpecResource &) = default ;
    CreateJobRequestTasksTaskSpecResource& operator=(CreateJobRequestTasksTaskSpecResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cores_ != nullptr
        && this->disks_ != nullptr && this->instanceTypes_ != nullptr && this->memory_ != nullptr; };
    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline float cores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0.0) };
    inline CreateJobRequestTasksTaskSpecResource& setCores(float cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // disks Field Functions 
    bool hasDisks() const { return this->disks_ != nullptr;};
    void deleteDisks() { this->disks_ = nullptr;};
    inline const vector<Models::CreateJobRequestTasksTaskSpecResourceDisks> & disks() const { DARABONBA_PTR_GET_CONST(disks_, vector<Models::CreateJobRequestTasksTaskSpecResourceDisks>) };
    inline vector<Models::CreateJobRequestTasksTaskSpecResourceDisks> disks() { DARABONBA_PTR_GET(disks_, vector<Models::CreateJobRequestTasksTaskSpecResourceDisks>) };
    inline CreateJobRequestTasksTaskSpecResource& setDisks(const vector<Models::CreateJobRequestTasksTaskSpecResourceDisks> & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
    inline CreateJobRequestTasksTaskSpecResource& setDisks(vector<Models::CreateJobRequestTasksTaskSpecResourceDisks> && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline CreateJobRequestTasksTaskSpecResource& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline CreateJobRequestTasksTaskSpecResource& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline CreateJobRequestTasksTaskSpecResource& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


  protected:
    std::shared_ptr<float> cores_ = nullptr;
    std::shared_ptr<vector<Models::CreateJobRequestTasksTaskSpecResourceDisks>> disks_ = nullptr;
    std::shared_ptr<vector<string>> instanceTypes_ = nullptr;
    std::shared_ptr<float> memory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
