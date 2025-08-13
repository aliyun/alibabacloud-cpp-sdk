// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLUSTERSPECIFICATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLUSTERSPECIFICATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryClusterSpecificationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryClusterSpecificationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterSpecificationName, clusterSpecificationName_);
      DARABONBA_PTR_TO_JSON(CpuCapacity, cpuCapacity_);
      DARABONBA_PTR_TO_JSON(MemoryCapacity, memoryCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, QueryClusterSpecificationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterSpecificationName, clusterSpecificationName_);
      DARABONBA_PTR_FROM_JSON(CpuCapacity, cpuCapacity_);
      DARABONBA_PTR_FROM_JSON(MemoryCapacity, memoryCapacity_);
    };
    QueryClusterSpecificationResponseBodyData() = default ;
    QueryClusterSpecificationResponseBodyData(const QueryClusterSpecificationResponseBodyData &) = default ;
    QueryClusterSpecificationResponseBodyData(QueryClusterSpecificationResponseBodyData &&) = default ;
    QueryClusterSpecificationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryClusterSpecificationResponseBodyData() = default ;
    QueryClusterSpecificationResponseBodyData& operator=(const QueryClusterSpecificationResponseBodyData &) = default ;
    QueryClusterSpecificationResponseBodyData& operator=(QueryClusterSpecificationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterSpecificationName_ != nullptr
        && this->cpuCapacity_ != nullptr && this->memoryCapacity_ != nullptr; };
    // clusterSpecificationName Field Functions 
    bool hasClusterSpecificationName() const { return this->clusterSpecificationName_ != nullptr;};
    void deleteClusterSpecificationName() { this->clusterSpecificationName_ = nullptr;};
    inline string clusterSpecificationName() const { DARABONBA_PTR_GET_DEFAULT(clusterSpecificationName_, "") };
    inline QueryClusterSpecificationResponseBodyData& setClusterSpecificationName(string clusterSpecificationName) { DARABONBA_PTR_SET_VALUE(clusterSpecificationName_, clusterSpecificationName) };


    // cpuCapacity Field Functions 
    bool hasCpuCapacity() const { return this->cpuCapacity_ != nullptr;};
    void deleteCpuCapacity() { this->cpuCapacity_ = nullptr;};
    inline string cpuCapacity() const { DARABONBA_PTR_GET_DEFAULT(cpuCapacity_, "") };
    inline QueryClusterSpecificationResponseBodyData& setCpuCapacity(string cpuCapacity) { DARABONBA_PTR_SET_VALUE(cpuCapacity_, cpuCapacity) };


    // memoryCapacity Field Functions 
    bool hasMemoryCapacity() const { return this->memoryCapacity_ != nullptr;};
    void deleteMemoryCapacity() { this->memoryCapacity_ = nullptr;};
    inline string memoryCapacity() const { DARABONBA_PTR_GET_DEFAULT(memoryCapacity_, "") };
    inline QueryClusterSpecificationResponseBodyData& setMemoryCapacity(string memoryCapacity) { DARABONBA_PTR_SET_VALUE(memoryCapacity_, memoryCapacity) };


  protected:
    // The engine specifications that can be used.
    std::shared_ptr<string> clusterSpecificationName_ = nullptr;
    // The number of vCPUs in the specifications.
    std::shared_ptr<string> cpuCapacity_ = nullptr;
    // The memory size in the specifications. Unit: GB.
    std::shared_ptr<string> memoryCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
