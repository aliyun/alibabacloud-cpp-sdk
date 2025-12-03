// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSERVICECONFIGHISTORYRESPONSEBODYCONFIGHISTORYLISTCONFIGHISTORY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSERVICECONFIGHISTORYRESPONSEBODYCONFIGHISTORYLISTCONFIGHISTORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Effective, effective_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NewValue, newValue_);
      DARABONBA_PTR_TO_JSON(OldValue, oldValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Effective, effective_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NewValue, newValue_);
      DARABONBA_PTR_FROM_JSON(OldValue, oldValue_);
    };
    ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory() = default ;
    ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory(const ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory &) = default ;
    ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory(ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory &&) = default ;
    ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory() = default ;
    ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory& operator=(const ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory &) = default ;
    ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory& operator=(ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->effective_ == nullptr && return this->name_ == nullptr && return this->newValue_ == nullptr && return this->oldValue_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // effective Field Functions 
    bool hasEffective() const { return this->effective_ != nullptr;};
    void deleteEffective() { this->effective_ = nullptr;};
    inline string effective() const { DARABONBA_PTR_GET_DEFAULT(effective_, "") };
    inline ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory& setEffective(string effective) { DARABONBA_PTR_SET_VALUE(effective_, effective) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // newValue Field Functions 
    bool hasNewValue() const { return this->newValue_ != nullptr;};
    void deleteNewValue() { this->newValue_ = nullptr;};
    inline string newValue() const { DARABONBA_PTR_GET_DEFAULT(newValue_, "") };
    inline ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory& setNewValue(string newValue) { DARABONBA_PTR_SET_VALUE(newValue_, newValue) };


    // oldValue Field Functions 
    bool hasOldValue() const { return this->oldValue_ != nullptr;};
    void deleteOldValue() { this->oldValue_ = nullptr;};
    inline string oldValue() const { DARABONBA_PTR_GET_DEFAULT(oldValue_, "") };
    inline ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory& setOldValue(string oldValue) { DARABONBA_PTR_SET_VALUE(oldValue_, oldValue) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> effective_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> newValue_ = nullptr;
    std::shared_ptr<string> oldValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
