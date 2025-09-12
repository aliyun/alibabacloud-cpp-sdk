// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMINSTANCERESPONSEBODYENGINELIST_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMINSTANCERESPONSEBODYENGINELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormInstanceResponseBodyEngineList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormInstanceResponseBodyEngineList& obj) { 
      DARABONBA_PTR_TO_JSON(ArbiterCoreCount, arbiterCoreCount_);
      DARABONBA_PTR_TO_JSON(CoreCount, coreCount_);
      DARABONBA_PTR_TO_JSON(CpuCount, cpuCount_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(IsLastVersion, isLastVersion_);
      DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_TO_JSON(PrimaryCoreCount, primaryCoreCount_);
      DARABONBA_PTR_TO_JSON(Specification, specification_);
      DARABONBA_PTR_TO_JSON(StandbyCoreCount, standbyCoreCount_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormInstanceResponseBodyEngineList& obj) { 
      DARABONBA_PTR_FROM_JSON(ArbiterCoreCount, arbiterCoreCount_);
      DARABONBA_PTR_FROM_JSON(CoreCount, coreCount_);
      DARABONBA_PTR_FROM_JSON(CpuCount, cpuCount_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(IsLastVersion, isLastVersion_);
      DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_FROM_JSON(PrimaryCoreCount, primaryCoreCount_);
      DARABONBA_PTR_FROM_JSON(Specification, specification_);
      DARABONBA_PTR_FROM_JSON(StandbyCoreCount, standbyCoreCount_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetLindormInstanceResponseBodyEngineList() = default ;
    GetLindormInstanceResponseBodyEngineList(const GetLindormInstanceResponseBodyEngineList &) = default ;
    GetLindormInstanceResponseBodyEngineList(GetLindormInstanceResponseBodyEngineList &&) = default ;
    GetLindormInstanceResponseBodyEngineList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormInstanceResponseBodyEngineList() = default ;
    GetLindormInstanceResponseBodyEngineList& operator=(const GetLindormInstanceResponseBodyEngineList &) = default ;
    GetLindormInstanceResponseBodyEngineList& operator=(GetLindormInstanceResponseBodyEngineList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arbiterCoreCount_ != nullptr
        && this->coreCount_ != nullptr && this->cpuCount_ != nullptr && this->engine_ != nullptr && this->isLastVersion_ != nullptr && this->latestVersion_ != nullptr
        && this->memorySize_ != nullptr && this->primaryCoreCount_ != nullptr && this->specification_ != nullptr && this->standbyCoreCount_ != nullptr && this->version_ != nullptr; };
    // arbiterCoreCount Field Functions 
    bool hasArbiterCoreCount() const { return this->arbiterCoreCount_ != nullptr;};
    void deleteArbiterCoreCount() { this->arbiterCoreCount_ = nullptr;};
    inline string arbiterCoreCount() const { DARABONBA_PTR_GET_DEFAULT(arbiterCoreCount_, "") };
    inline GetLindormInstanceResponseBodyEngineList& setArbiterCoreCount(string arbiterCoreCount) { DARABONBA_PTR_SET_VALUE(arbiterCoreCount_, arbiterCoreCount) };


    // coreCount Field Functions 
    bool hasCoreCount() const { return this->coreCount_ != nullptr;};
    void deleteCoreCount() { this->coreCount_ = nullptr;};
    inline string coreCount() const { DARABONBA_PTR_GET_DEFAULT(coreCount_, "") };
    inline GetLindormInstanceResponseBodyEngineList& setCoreCount(string coreCount) { DARABONBA_PTR_SET_VALUE(coreCount_, coreCount) };


    // cpuCount Field Functions 
    bool hasCpuCount() const { return this->cpuCount_ != nullptr;};
    void deleteCpuCount() { this->cpuCount_ = nullptr;};
    inline string cpuCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCount_, "") };
    inline GetLindormInstanceResponseBodyEngineList& setCpuCount(string cpuCount) { DARABONBA_PTR_SET_VALUE(cpuCount_, cpuCount) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline GetLindormInstanceResponseBodyEngineList& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // isLastVersion Field Functions 
    bool hasIsLastVersion() const { return this->isLastVersion_ != nullptr;};
    void deleteIsLastVersion() { this->isLastVersion_ = nullptr;};
    inline bool isLastVersion() const { DARABONBA_PTR_GET_DEFAULT(isLastVersion_, false) };
    inline GetLindormInstanceResponseBodyEngineList& setIsLastVersion(bool isLastVersion) { DARABONBA_PTR_SET_VALUE(isLastVersion_, isLastVersion) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline string latestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
    inline GetLindormInstanceResponseBodyEngineList& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline string memorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, "") };
    inline GetLindormInstanceResponseBodyEngineList& setMemorySize(string memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // primaryCoreCount Field Functions 
    bool hasPrimaryCoreCount() const { return this->primaryCoreCount_ != nullptr;};
    void deletePrimaryCoreCount() { this->primaryCoreCount_ = nullptr;};
    inline string primaryCoreCount() const { DARABONBA_PTR_GET_DEFAULT(primaryCoreCount_, "") };
    inline GetLindormInstanceResponseBodyEngineList& setPrimaryCoreCount(string primaryCoreCount) { DARABONBA_PTR_SET_VALUE(primaryCoreCount_, primaryCoreCount) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string specification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline GetLindormInstanceResponseBodyEngineList& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


    // standbyCoreCount Field Functions 
    bool hasStandbyCoreCount() const { return this->standbyCoreCount_ != nullptr;};
    void deleteStandbyCoreCount() { this->standbyCoreCount_ = nullptr;};
    inline string standbyCoreCount() const { DARABONBA_PTR_GET_DEFAULT(standbyCoreCount_, "") };
    inline GetLindormInstanceResponseBodyEngineList& setStandbyCoreCount(string standbyCoreCount) { DARABONBA_PTR_SET_VALUE(standbyCoreCount_, standbyCoreCount) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetLindormInstanceResponseBodyEngineList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> arbiterCoreCount_ = nullptr;
    // The number of engine nodes.
    std::shared_ptr<string> coreCount_ = nullptr;
    // The number of CPU cores on the engine node.
    std::shared_ptr<string> cpuCount_ = nullptr;
    // The engine type. Valid values:
    // 
    // *   **lindorm**: LindormTable.
    // *   **tsdb**: LindormTSDB.
    // *   **solr**: LindormSearch.
    // *   **store**: LindormDFS.
    // *   **bds**: Lindorm Tunnel Service (LTS).
    // *   **compute**: Lindorm Distributed Processing System (LDPS).
    std::shared_ptr<string> engine_ = nullptr;
    // Indicates whether the version of the engine is the latest. Valid values:
    // 
    // *   **true**: The version of the engine is the latest.
    // *   **false**: The version of the engine is not the latest.
    std::shared_ptr<bool> isLastVersion_ = nullptr;
    // The latest version number of the engine.
    std::shared_ptr<string> latestVersion_ = nullptr;
    // The memory size of the engine nodes.
    std::shared_ptr<string> memorySize_ = nullptr;
    std::shared_ptr<string> primaryCoreCount_ = nullptr;
    // The specification of the engine node.
    std::shared_ptr<string> specification_ = nullptr;
    std::shared_ptr<string> standbyCoreCount_ = nullptr;
    // The version of the engine.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
