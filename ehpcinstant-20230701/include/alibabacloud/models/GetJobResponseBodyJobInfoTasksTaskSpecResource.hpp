// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFOTASKSTASKSPECRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFOTASKSTASKSPECRESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetJobResponseBodyJobInfoTasksTaskSpecResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyJobInfoTasksTaskSpecResource& obj) { 
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(Disks, disks_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyJobInfoTasksTaskSpecResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(Disks, disks_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
    };
    GetJobResponseBodyJobInfoTasksTaskSpecResource() = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecResource(const GetJobResponseBodyJobInfoTasksTaskSpecResource &) = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecResource(GetJobResponseBodyJobInfoTasksTaskSpecResource &&) = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyJobInfoTasksTaskSpecResource() = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecResource& operator=(const GetJobResponseBodyJobInfoTasksTaskSpecResource &) = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecResource& operator=(GetJobResponseBodyJobInfoTasksTaskSpecResource &&) = default ;
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
    inline GetJobResponseBodyJobInfoTasksTaskSpecResource& setCores(float cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // disks Field Functions 
    bool hasDisks() const { return this->disks_ != nullptr;};
    void deleteDisks() { this->disks_ = nullptr;};
    inline const vector<Models::GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks> & disks() const { DARABONBA_PTR_GET_CONST(disks_, vector<Models::GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks>) };
    inline vector<Models::GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks> disks() { DARABONBA_PTR_GET(disks_, vector<Models::GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks>) };
    inline GetJobResponseBodyJobInfoTasksTaskSpecResource& setDisks(const vector<Models::GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks> & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
    inline GetJobResponseBodyJobInfoTasksTaskSpecResource& setDisks(vector<Models::GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks> && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline GetJobResponseBodyJobInfoTasksTaskSpecResource& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline GetJobResponseBodyJobInfoTasksTaskSpecResource& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline GetJobResponseBodyJobInfoTasksTaskSpecResource& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


  protected:
    std::shared_ptr<float> cores_ = nullptr;
    std::shared_ptr<vector<Models::GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks>> disks_ = nullptr;
    std::shared_ptr<vector<string>> instanceTypes_ = nullptr;
    std::shared_ptr<int32_t> memory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
