// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESPECSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESPECSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListInstanceSpecsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceSpecsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(maxDisk, maxDisk_);
      DARABONBA_PTR_TO_JSON(mem, mem_);
      DARABONBA_PTR_TO_JSON(minDisk, minDisk_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceSpecsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(maxDisk, maxDisk_);
      DARABONBA_PTR_FROM_JSON(mem, mem_);
      DARABONBA_PTR_FROM_JSON(minDisk, minDisk_);
    };
    ListInstanceSpecsResponseBodyResult() = default ;
    ListInstanceSpecsResponseBodyResult(const ListInstanceSpecsResponseBodyResult &) = default ;
    ListInstanceSpecsResponseBodyResult(ListInstanceSpecsResponseBodyResult &&) = default ;
    ListInstanceSpecsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceSpecsResponseBodyResult() = default ;
    ListInstanceSpecsResponseBodyResult& operator=(const ListInstanceSpecsResponseBodyResult &) = default ;
    ListInstanceSpecsResponseBodyResult& operator=(ListInstanceSpecsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cpu_ != nullptr
        && this->maxDisk_ != nullptr && this->mem_ != nullptr && this->minDisk_ != nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline ListInstanceSpecsResponseBodyResult& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // maxDisk Field Functions 
    bool hasMaxDisk() const { return this->maxDisk_ != nullptr;};
    void deleteMaxDisk() { this->maxDisk_ = nullptr;};
    inline int32_t maxDisk() const { DARABONBA_PTR_GET_DEFAULT(maxDisk_, 0) };
    inline ListInstanceSpecsResponseBodyResult& setMaxDisk(int32_t maxDisk) { DARABONBA_PTR_SET_VALUE(maxDisk_, maxDisk) };


    // mem Field Functions 
    bool hasMem() const { return this->mem_ != nullptr;};
    void deleteMem() { this->mem_ = nullptr;};
    inline int32_t mem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
    inline ListInstanceSpecsResponseBodyResult& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


    // minDisk Field Functions 
    bool hasMinDisk() const { return this->minDisk_ != nullptr;};
    void deleteMinDisk() { this->minDisk_ = nullptr;};
    inline int32_t minDisk() const { DARABONBA_PTR_GET_DEFAULT(minDisk_, 0) };
    inline ListInstanceSpecsResponseBodyResult& setMinDisk(int32_t minDisk) { DARABONBA_PTR_SET_VALUE(minDisk_, minDisk) };


  protected:
    // The number of vCPUs.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The maximum storage of a single data node. Unit: GB.
    std::shared_ptr<int32_t> maxDisk_ = nullptr;
    // The memory of the instance. Unit: GB.
    std::shared_ptr<int32_t> mem_ = nullptr;
    // The minimum storage of a single data node. Unit: GB.
    std::shared_ptr<int32_t> minDisk_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
