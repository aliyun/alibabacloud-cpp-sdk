// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESHOWSTORAGEINFORESPONSEBODYDATASTORAGEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESHOWSTORAGEINFORESPONSEBODYDATASTORAGEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeShowStorageInfoResponseBodyDataStorageInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeShowStorageInfoResponseBodyDataStorageInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Class, class_);
      DARABONBA_PTR_TO_JSON(DbCount, dbCount_);
      DARABONBA_PTR_TO_JSON(Deletable, deletable_);
      DARABONBA_PTR_TO_JSON(GroupCount, groupCount_);
      DARABONBA_PTR_TO_JSON(InstKind, instKind_);
      DARABONBA_PTR_TO_JSON(IsHealthy, isHealthy_);
      DARABONBA_PTR_TO_JSON(LeaderNode, leaderNode_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageInstName, storageInstName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeShowStorageInfoResponseBodyDataStorageInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Class, class_);
      DARABONBA_PTR_FROM_JSON(DbCount, dbCount_);
      DARABONBA_PTR_FROM_JSON(Deletable, deletable_);
      DARABONBA_PTR_FROM_JSON(GroupCount, groupCount_);
      DARABONBA_PTR_FROM_JSON(InstKind, instKind_);
      DARABONBA_PTR_FROM_JSON(IsHealthy, isHealthy_);
      DARABONBA_PTR_FROM_JSON(LeaderNode, leaderNode_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageInstName, storageInstName_);
    };
    DescribeShowStorageInfoResponseBodyDataStorageInfos() = default ;
    DescribeShowStorageInfoResponseBodyDataStorageInfos(const DescribeShowStorageInfoResponseBodyDataStorageInfos &) = default ;
    DescribeShowStorageInfoResponseBodyDataStorageInfos(DescribeShowStorageInfoResponseBodyDataStorageInfos &&) = default ;
    DescribeShowStorageInfoResponseBodyDataStorageInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeShowStorageInfoResponseBodyDataStorageInfos() = default ;
    DescribeShowStorageInfoResponseBodyDataStorageInfos& operator=(const DescribeShowStorageInfoResponseBodyDataStorageInfos &) = default ;
    DescribeShowStorageInfoResponseBodyDataStorageInfos& operator=(DescribeShowStorageInfoResponseBodyDataStorageInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->class_ == nullptr
        && return this->dbCount_ == nullptr && return this->deletable_ == nullptr && return this->groupCount_ == nullptr && return this->instKind_ == nullptr && return this->isHealthy_ == nullptr
        && return this->leaderNode_ == nullptr && return this->status_ == nullptr && return this->storageInstName_ == nullptr; };
    // class Field Functions 
    bool hasClass() const { return this->class_ != nullptr;};
    void deleteClass() { this->class_ = nullptr;};
    inline string _class() const { DARABONBA_PTR_GET_DEFAULT(class_, "") };
    inline DescribeShowStorageInfoResponseBodyDataStorageInfos& setClass(string _class) { DARABONBA_PTR_SET_VALUE(class_, _class) };


    // dbCount Field Functions 
    bool hasDbCount() const { return this->dbCount_ != nullptr;};
    void deleteDbCount() { this->dbCount_ = nullptr;};
    inline int64_t dbCount() const { DARABONBA_PTR_GET_DEFAULT(dbCount_, 0L) };
    inline DescribeShowStorageInfoResponseBodyDataStorageInfos& setDbCount(int64_t dbCount) { DARABONBA_PTR_SET_VALUE(dbCount_, dbCount) };


    // deletable Field Functions 
    bool hasDeletable() const { return this->deletable_ != nullptr;};
    void deleteDeletable() { this->deletable_ = nullptr;};
    inline bool deletable() const { DARABONBA_PTR_GET_DEFAULT(deletable_, false) };
    inline DescribeShowStorageInfoResponseBodyDataStorageInfos& setDeletable(bool deletable) { DARABONBA_PTR_SET_VALUE(deletable_, deletable) };


    // groupCount Field Functions 
    bool hasGroupCount() const { return this->groupCount_ != nullptr;};
    void deleteGroupCount() { this->groupCount_ = nullptr;};
    inline int64_t groupCount() const { DARABONBA_PTR_GET_DEFAULT(groupCount_, 0L) };
    inline DescribeShowStorageInfoResponseBodyDataStorageInfos& setGroupCount(int64_t groupCount) { DARABONBA_PTR_SET_VALUE(groupCount_, groupCount) };


    // instKind Field Functions 
    bool hasInstKind() const { return this->instKind_ != nullptr;};
    void deleteInstKind() { this->instKind_ = nullptr;};
    inline string instKind() const { DARABONBA_PTR_GET_DEFAULT(instKind_, "") };
    inline DescribeShowStorageInfoResponseBodyDataStorageInfos& setInstKind(string instKind) { DARABONBA_PTR_SET_VALUE(instKind_, instKind) };


    // isHealthy Field Functions 
    bool hasIsHealthy() const { return this->isHealthy_ != nullptr;};
    void deleteIsHealthy() { this->isHealthy_ = nullptr;};
    inline bool isHealthy() const { DARABONBA_PTR_GET_DEFAULT(isHealthy_, false) };
    inline DescribeShowStorageInfoResponseBodyDataStorageInfos& setIsHealthy(bool isHealthy) { DARABONBA_PTR_SET_VALUE(isHealthy_, isHealthy) };


    // leaderNode Field Functions 
    bool hasLeaderNode() const { return this->leaderNode_ != nullptr;};
    void deleteLeaderNode() { this->leaderNode_ = nullptr;};
    inline string leaderNode() const { DARABONBA_PTR_GET_DEFAULT(leaderNode_, "") };
    inline DescribeShowStorageInfoResponseBodyDataStorageInfos& setLeaderNode(string leaderNode) { DARABONBA_PTR_SET_VALUE(leaderNode_, leaderNode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline DescribeShowStorageInfoResponseBodyDataStorageInfos& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageInstName Field Functions 
    bool hasStorageInstName() const { return this->storageInstName_ != nullptr;};
    void deleteStorageInstName() { this->storageInstName_ = nullptr;};
    inline string storageInstName() const { DARABONBA_PTR_GET_DEFAULT(storageInstName_, "") };
    inline DescribeShowStorageInfoResponseBodyDataStorageInfos& setStorageInstName(string storageInstName) { DARABONBA_PTR_SET_VALUE(storageInstName_, storageInstName) };


  protected:
    std::shared_ptr<string> class_ = nullptr;
    std::shared_ptr<int64_t> dbCount_ = nullptr;
    std::shared_ptr<bool> deletable_ = nullptr;
    std::shared_ptr<int64_t> groupCount_ = nullptr;
    std::shared_ptr<string> instKind_ = nullptr;
    std::shared_ptr<bool> isHealthy_ = nullptr;
    std::shared_ptr<string> leaderNode_ = nullptr;
    std::shared_ptr<int64_t> status_ = nullptr;
    std::shared_ptr<string> storageInstName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
