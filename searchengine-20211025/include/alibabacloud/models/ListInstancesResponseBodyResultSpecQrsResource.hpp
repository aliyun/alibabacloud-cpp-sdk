// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYRESULTSPECQRSRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYRESULTSPECQRSRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListInstancesResponseBodyResultSpecQrsResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyResultSpecQrsResource& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(disk, disk_);
      DARABONBA_PTR_TO_JSON(mem, mem_);
      DARABONBA_PTR_TO_JSON(nodeCount, nodeCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyResultSpecQrsResource& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(disk, disk_);
      DARABONBA_PTR_FROM_JSON(mem, mem_);
      DARABONBA_PTR_FROM_JSON(nodeCount, nodeCount_);
    };
    ListInstancesResponseBodyResultSpecQrsResource() = default ;
    ListInstancesResponseBodyResultSpecQrsResource(const ListInstancesResponseBodyResultSpecQrsResource &) = default ;
    ListInstancesResponseBodyResultSpecQrsResource(ListInstancesResponseBodyResultSpecQrsResource &&) = default ;
    ListInstancesResponseBodyResultSpecQrsResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyResultSpecQrsResource() = default ;
    ListInstancesResponseBodyResultSpecQrsResource& operator=(const ListInstancesResponseBodyResultSpecQrsResource &) = default ;
    ListInstancesResponseBodyResultSpecQrsResource& operator=(ListInstancesResponseBodyResultSpecQrsResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->cpu_ != nullptr && this->disk_ != nullptr && this->mem_ != nullptr && this->nodeCount_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListInstancesResponseBodyResultSpecQrsResource& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline ListInstancesResponseBodyResultSpecQrsResource& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline int32_t disk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
    inline ListInstancesResponseBodyResultSpecQrsResource& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


    // mem Field Functions 
    bool hasMem() const { return this->mem_ != nullptr;};
    void deleteMem() { this->mem_ = nullptr;};
    inline int32_t mem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
    inline ListInstancesResponseBodyResultSpecQrsResource& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int32_t nodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
    inline ListInstancesResponseBodyResultSpecQrsResource& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<int32_t> cpu_ = nullptr;
    std::shared_ptr<int32_t> disk_ = nullptr;
    std::shared_ptr<int32_t> mem_ = nullptr;
    std::shared_ptr<int32_t> nodeCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
