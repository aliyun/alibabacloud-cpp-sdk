// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTORSRESPONSEBODYEXECUTORSRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTORSRESPONSEBODYEXECUTORSRESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListExecutorsResponseBodyExecutorsResourceDisks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListExecutorsResponseBodyExecutorsResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutorsResponseBodyExecutorsResource& obj) { 
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(Disks, disks_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutorsResponseBodyExecutorsResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(Disks, disks_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
    };
    ListExecutorsResponseBodyExecutorsResource() = default ;
    ListExecutorsResponseBodyExecutorsResource(const ListExecutorsResponseBodyExecutorsResource &) = default ;
    ListExecutorsResponseBodyExecutorsResource(ListExecutorsResponseBodyExecutorsResource &&) = default ;
    ListExecutorsResponseBodyExecutorsResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutorsResponseBodyExecutorsResource() = default ;
    ListExecutorsResponseBodyExecutorsResource& operator=(const ListExecutorsResponseBodyExecutorsResource &) = default ;
    ListExecutorsResponseBodyExecutorsResource& operator=(ListExecutorsResponseBodyExecutorsResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cores_ == nullptr
        && return this->disks_ == nullptr && return this->instanceType_ == nullptr && return this->memory_ == nullptr; };
    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline float cores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0.0) };
    inline ListExecutorsResponseBodyExecutorsResource& setCores(float cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // disks Field Functions 
    bool hasDisks() const { return this->disks_ != nullptr;};
    void deleteDisks() { this->disks_ = nullptr;};
    inline const vector<Models::ListExecutorsResponseBodyExecutorsResourceDisks> & disks() const { DARABONBA_PTR_GET_CONST(disks_, vector<Models::ListExecutorsResponseBodyExecutorsResourceDisks>) };
    inline vector<Models::ListExecutorsResponseBodyExecutorsResourceDisks> disks() { DARABONBA_PTR_GET(disks_, vector<Models::ListExecutorsResponseBodyExecutorsResourceDisks>) };
    inline ListExecutorsResponseBodyExecutorsResource& setDisks(const vector<Models::ListExecutorsResponseBodyExecutorsResourceDisks> & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
    inline ListExecutorsResponseBodyExecutorsResource& setDisks(vector<Models::ListExecutorsResponseBodyExecutorsResourceDisks> && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListExecutorsResponseBodyExecutorsResource& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline ListExecutorsResponseBodyExecutorsResource& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


  protected:
    // The number of running CPUs.
    std::shared_ptr<float> cores_ = nullptr;
    // The array of the disks.
    std::shared_ptr<vector<Models::ListExecutorsResponseBodyExecutorsResourceDisks>> disks_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    // The total amount of memory resources. Unit: GiB.
    std::shared_ptr<float> memory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
