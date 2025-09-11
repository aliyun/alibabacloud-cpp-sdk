// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERCONFIGCHANGELOGSRESPONSEBODYDATAPARAMCHANGELOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERCONFIGCHANGELOGSRESPONSEBODYDATAPARAMCHANGELOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsApplied, isApplied_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NewValue, newValue_);
      DARABONBA_PTR_TO_JSON(OldValue, oldValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsApplied, isApplied_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NewValue, newValue_);
      DARABONBA_PTR_FROM_JSON(OldValue, oldValue_);
    };
    DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs() = default ;
    DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs(const DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs &) = default ;
    DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs(DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs &&) = default ;
    DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs() = default ;
    DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs& operator=(const DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs &) = default ;
    DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs& operator=(DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gmtCreated_ != nullptr
        && this->gmtModified_ != nullptr && this->id_ != nullptr && this->isApplied_ != nullptr && this->name_ != nullptr && this->newValue_ != nullptr
        && this->oldValue_ != nullptr; };
    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isApplied Field Functions 
    bool hasIsApplied() const { return this->isApplied_ != nullptr;};
    void deleteIsApplied() { this->isApplied_ = nullptr;};
    inline bool isApplied() const { DARABONBA_PTR_GET_DEFAULT(isApplied_, false) };
    inline DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs& setIsApplied(bool isApplied) { DARABONBA_PTR_SET_VALUE(isApplied_, isApplied) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // newValue Field Functions 
    bool hasNewValue() const { return this->newValue_ != nullptr;};
    void deleteNewValue() { this->newValue_ = nullptr;};
    inline string newValue() const { DARABONBA_PTR_GET_DEFAULT(newValue_, "") };
    inline DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs& setNewValue(string newValue) { DARABONBA_PTR_SET_VALUE(newValue_, newValue) };


    // oldValue Field Functions 
    bool hasOldValue() const { return this->oldValue_ != nullptr;};
    void deleteOldValue() { this->oldValue_ = nullptr;};
    inline string oldValue() const { DARABONBA_PTR_GET_DEFAULT(oldValue_, "") };
    inline DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs& setOldValue(string oldValue) { DARABONBA_PTR_SET_VALUE(oldValue_, oldValue) };


  protected:
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the change log.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Indicates whether the modification has taken effect.
    std::shared_ptr<bool> isApplied_ = nullptr;
    // The parameter name.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> newValue_ = nullptr;
    std::shared_ptr<string> oldValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
