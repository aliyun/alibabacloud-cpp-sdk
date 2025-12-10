// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIFECYCLERESOURCEDATABASE_HPP_
#define ALIBABACLOUD_MODELS_LIFECYCLERESOURCEDATABASE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class LifecycleResourceDatabase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LifecycleResourceDatabase& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LocationUri, locationUri_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, LifecycleResourceDatabase& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LocationUri, locationUri_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    LifecycleResourceDatabase() = default ;
    LifecycleResourceDatabase(const LifecycleResourceDatabase &) = default ;
    LifecycleResourceDatabase(LifecycleResourceDatabase &&) = default ;
    LifecycleResourceDatabase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LifecycleResourceDatabase() = default ;
    LifecycleResourceDatabase& operator=(const LifecycleResourceDatabase &) = default ;
    LifecycleResourceDatabase& operator=(LifecycleResourceDatabase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->locationUri_ == nullptr && return this->name_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline LifecycleResourceDatabase& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline LifecycleResourceDatabase& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // locationUri Field Functions 
    bool hasLocationUri() const { return this->locationUri_ != nullptr;};
    void deleteLocationUri() { this->locationUri_ = nullptr;};
    inline string locationUri() const { DARABONBA_PTR_GET_DEFAULT(locationUri_, "") };
    inline LifecycleResourceDatabase& setLocationUri(string locationUri) { DARABONBA_PTR_SET_VALUE(locationUri_, locationUri) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline LifecycleResourceDatabase& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline LifecycleResourceDatabase& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> locationUri_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
