// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCECONFIGCHANGELOGRESPONSEBODYDATAPARAMCHANGELOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCECONFIGCHANGELOGRESPONSEBODYDATAPARAMCHANGELOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs& obj) { 
      DARABONBA_PTR_TO_JSON(Applied, applied_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ID, ID_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NewValue, newValue_);
      DARABONBA_PTR_TO_JSON(OldValue, oldValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Applied, applied_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ID, ID_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NewValue, newValue_);
      DARABONBA_PTR_FROM_JSON(OldValue, oldValue_);
    };
    DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs() = default ;
    DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs(const DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs &) = default ;
    DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs(DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs &&) = default ;
    DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs() = default ;
    DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs& operator=(const DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs &) = default ;
    DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs& operator=(DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applied_ == nullptr
        && return this->gmtCreated_ == nullptr && return this->gmtModified_ == nullptr && return this->ID_ == nullptr && return this->name_ == nullptr && return this->newValue_ == nullptr
        && return this->oldValue_ == nullptr; };
    // applied Field Functions 
    bool hasApplied() const { return this->applied_ != nullptr;};
    void deleteApplied() { this->applied_ = nullptr;};
    inline bool applied() const { DARABONBA_PTR_GET_DEFAULT(applied_, false) };
    inline DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs& setApplied(bool applied) { DARABONBA_PTR_SET_VALUE(applied_, applied) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // ID Field Functions 
    bool hasID() const { return this->ID_ != nullptr;};
    void deleteID() { this->ID_ = nullptr;};
    inline int64_t ID() const { DARABONBA_PTR_GET_DEFAULT(ID_, 0L) };
    inline DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs& setID(int64_t ID) { DARABONBA_PTR_SET_VALUE(ID_, ID) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // newValue Field Functions 
    bool hasNewValue() const { return this->newValue_ != nullptr;};
    void deleteNewValue() { this->newValue_ = nullptr;};
    inline string newValue() const { DARABONBA_PTR_GET_DEFAULT(newValue_, "") };
    inline DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs& setNewValue(string newValue) { DARABONBA_PTR_SET_VALUE(newValue_, newValue) };


    // oldValue Field Functions 
    bool hasOldValue() const { return this->oldValue_ != nullptr;};
    void deleteOldValue() { this->oldValue_ = nullptr;};
    inline string oldValue() const { DARABONBA_PTR_GET_DEFAULT(oldValue_, "") };
    inline DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs& setOldValue(string oldValue) { DARABONBA_PTR_SET_VALUE(oldValue_, oldValue) };


  protected:
    std::shared_ptr<bool> applied_ = nullptr;
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> ID_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> newValue_ = nullptr;
    std::shared_ptr<string> oldValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
