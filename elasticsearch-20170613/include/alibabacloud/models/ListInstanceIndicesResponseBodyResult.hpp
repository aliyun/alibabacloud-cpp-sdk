// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEINDICESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEINDICESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListInstanceIndicesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceIndicesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(health, health_);
      DARABONBA_PTR_TO_JSON(ilmExplain, ilmExplain_);
      DARABONBA_PTR_TO_JSON(isManaged, isManaged_);
      DARABONBA_PTR_TO_JSON(managedStatus, managedStatus_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(phase, phase_);
      DARABONBA_PTR_TO_JSON(size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceIndicesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(health, health_);
      DARABONBA_PTR_FROM_JSON(ilmExplain, ilmExplain_);
      DARABONBA_PTR_FROM_JSON(isManaged, isManaged_);
      DARABONBA_PTR_FROM_JSON(managedStatus, managedStatus_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(phase, phase_);
      DARABONBA_PTR_FROM_JSON(size, size_);
    };
    ListInstanceIndicesResponseBodyResult() = default ;
    ListInstanceIndicesResponseBodyResult(const ListInstanceIndicesResponseBodyResult &) = default ;
    ListInstanceIndicesResponseBodyResult(ListInstanceIndicesResponseBodyResult &&) = default ;
    ListInstanceIndicesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceIndicesResponseBodyResult() = default ;
    ListInstanceIndicesResponseBodyResult& operator=(const ListInstanceIndicesResponseBodyResult &) = default ;
    ListInstanceIndicesResponseBodyResult& operator=(ListInstanceIndicesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->health_ != nullptr && this->ilmExplain_ != nullptr && this->isManaged_ != nullptr && this->managedStatus_ != nullptr && this->name_ != nullptr
        && this->phase_ != nullptr && this->size_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListInstanceIndicesResponseBodyResult& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // health Field Functions 
    bool hasHealth() const { return this->health_ != nullptr;};
    void deleteHealth() { this->health_ = nullptr;};
    inline string health() const { DARABONBA_PTR_GET_DEFAULT(health_, "") };
    inline ListInstanceIndicesResponseBodyResult& setHealth(string health) { DARABONBA_PTR_SET_VALUE(health_, health) };


    // ilmExplain Field Functions 
    bool hasIlmExplain() const { return this->ilmExplain_ != nullptr;};
    void deleteIlmExplain() { this->ilmExplain_ = nullptr;};
    inline string ilmExplain() const { DARABONBA_PTR_GET_DEFAULT(ilmExplain_, "") };
    inline ListInstanceIndicesResponseBodyResult& setIlmExplain(string ilmExplain) { DARABONBA_PTR_SET_VALUE(ilmExplain_, ilmExplain) };


    // isManaged Field Functions 
    bool hasIsManaged() const { return this->isManaged_ != nullptr;};
    void deleteIsManaged() { this->isManaged_ = nullptr;};
    inline string isManaged() const { DARABONBA_PTR_GET_DEFAULT(isManaged_, "") };
    inline ListInstanceIndicesResponseBodyResult& setIsManaged(string isManaged) { DARABONBA_PTR_SET_VALUE(isManaged_, isManaged) };


    // managedStatus Field Functions 
    bool hasManagedStatus() const { return this->managedStatus_ != nullptr;};
    void deleteManagedStatus() { this->managedStatus_ = nullptr;};
    inline string managedStatus() const { DARABONBA_PTR_GET_DEFAULT(managedStatus_, "") };
    inline ListInstanceIndicesResponseBodyResult& setManagedStatus(string managedStatus) { DARABONBA_PTR_SET_VALUE(managedStatus_, managedStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListInstanceIndicesResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline ListInstanceIndicesResponseBodyResult& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListInstanceIndicesResponseBodyResult& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The name of the Elasticsearch index.
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> health_ = nullptr;
    std::shared_ptr<string> ilmExplain_ = nullptr;
    // The managed status of the index. The following three statuses are supported:
    // 
    // *   following: Hosting.
    // *   closing: The instance is being unhosted.
    // *   closed: unmanaged.
    std::shared_ptr<string> isManaged_ = nullptr;
    // The current storage lifecycle. Value meaning:
    // 
    // *   warm: warm.
    // *   cold: the cold phase.
    // *   hot: hot phase.
    // *   delete: deletes a stage.
    // 
    // >  If this parameter is empty, the current index is not managed by the lifecycle.
    std::shared_ptr<string> managedStatus_ = nullptr;
    // The full lifecycle status of the current index.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> phase_ = nullptr;
    // The running status of the index. The following three statuses are supported:
    // 
    // *   green: healthy.
    // *   yellow: alerts.
    // *   red: an exception.
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
