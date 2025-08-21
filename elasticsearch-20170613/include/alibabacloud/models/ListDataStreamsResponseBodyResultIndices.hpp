// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASTREAMSRESPONSEBODYRESULTINDICES_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASTREAMSRESPONSEBODYRESULTINDICES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDataStreamsResponseBodyResultIndices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataStreamsResponseBodyResultIndices& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(health, health_);
      DARABONBA_PTR_TO_JSON(isManaged, isManaged_);
      DARABONBA_PTR_TO_JSON(managedStatus, managedStatus_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataStreamsResponseBodyResultIndices& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(health, health_);
      DARABONBA_PTR_FROM_JSON(isManaged, isManaged_);
      DARABONBA_PTR_FROM_JSON(managedStatus, managedStatus_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(size, size_);
    };
    ListDataStreamsResponseBodyResultIndices() = default ;
    ListDataStreamsResponseBodyResultIndices(const ListDataStreamsResponseBodyResultIndices &) = default ;
    ListDataStreamsResponseBodyResultIndices(ListDataStreamsResponseBodyResultIndices &&) = default ;
    ListDataStreamsResponseBodyResultIndices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataStreamsResponseBodyResultIndices() = default ;
    ListDataStreamsResponseBodyResultIndices& operator=(const ListDataStreamsResponseBodyResultIndices &) = default ;
    ListDataStreamsResponseBodyResultIndices& operator=(ListDataStreamsResponseBodyResultIndices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->health_ != nullptr && this->isManaged_ != nullptr && this->managedStatus_ != nullptr && this->name_ != nullptr && this->size_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListDataStreamsResponseBodyResultIndices& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // health Field Functions 
    bool hasHealth() const { return this->health_ != nullptr;};
    void deleteHealth() { this->health_ = nullptr;};
    inline string health() const { DARABONBA_PTR_GET_DEFAULT(health_, "") };
    inline ListDataStreamsResponseBodyResultIndices& setHealth(string health) { DARABONBA_PTR_SET_VALUE(health_, health) };


    // isManaged Field Functions 
    bool hasIsManaged() const { return this->isManaged_ != nullptr;};
    void deleteIsManaged() { this->isManaged_ = nullptr;};
    inline bool isManaged() const { DARABONBA_PTR_GET_DEFAULT(isManaged_, false) };
    inline ListDataStreamsResponseBodyResultIndices& setIsManaged(bool isManaged) { DARABONBA_PTR_SET_VALUE(isManaged_, isManaged) };


    // managedStatus Field Functions 
    bool hasManagedStatus() const { return this->managedStatus_ != nullptr;};
    void deleteManagedStatus() { this->managedStatus_ = nullptr;};
    inline string managedStatus() const { DARABONBA_PTR_GET_DEFAULT(managedStatus_, "") };
    inline ListDataStreamsResponseBodyResultIndices& setManagedStatus(string managedStatus) { DARABONBA_PTR_SET_VALUE(managedStatus_, managedStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDataStreamsResponseBodyResultIndices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListDataStreamsResponseBodyResultIndices& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> health_ = nullptr;
    std::shared_ptr<bool> isManaged_ = nullptr;
    std::shared_ptr<string> managedStatus_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
