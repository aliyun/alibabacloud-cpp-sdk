// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDAGSRESPONSEBODYDATADAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTDAGSRESPONSEBODYDATADAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDagsResponseBodyDataDags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDagsResponseBodyDataDags& obj) { 
      DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Gmtdate, gmtdate_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OpSeq, opSeq_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListDagsResponseBodyDataDags& obj) { 
      DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Gmtdate, gmtdate_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OpSeq, opSeq_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListDagsResponseBodyDataDags() = default ;
    ListDagsResponseBodyDataDags(const ListDagsResponseBodyDataDags &) = default ;
    ListDagsResponseBodyDataDags(ListDagsResponseBodyDataDags &&) = default ;
    ListDagsResponseBodyDataDags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDagsResponseBodyDataDags() = default ;
    ListDagsResponseBodyDataDags& operator=(const ListDagsResponseBodyDataDags &) = default ;
    ListDagsResponseBodyDataDags& operator=(ListDagsResponseBodyDataDags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizdate_ != nullptr
        && this->createTime_ != nullptr && this->createUser_ != nullptr && this->dagId_ != nullptr && this->finishTime_ != nullptr && this->gmtdate_ != nullptr
        && this->modifyTime_ != nullptr && this->name_ != nullptr && this->opSeq_ != nullptr && this->projectId_ != nullptr && this->startTime_ != nullptr
        && this->status_ != nullptr && this->type_ != nullptr; };
    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline int64_t bizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
    inline ListDagsResponseBodyDataDags& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDagsResponseBodyDataDags& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListDagsResponseBodyDataDags& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline ListDagsResponseBodyDataDags& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline ListDagsResponseBodyDataDags& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // gmtdate Field Functions 
    bool hasGmtdate() const { return this->gmtdate_ != nullptr;};
    void deleteGmtdate() { this->gmtdate_ = nullptr;};
    inline int64_t gmtdate() const { DARABONBA_PTR_GET_DEFAULT(gmtdate_, 0L) };
    inline ListDagsResponseBodyDataDags& setGmtdate(int64_t gmtdate) { DARABONBA_PTR_SET_VALUE(gmtdate_, gmtdate) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline ListDagsResponseBodyDataDags& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDagsResponseBodyDataDags& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // opSeq Field Functions 
    bool hasOpSeq() const { return this->opSeq_ != nullptr;};
    void deleteOpSeq() { this->opSeq_ = nullptr;};
    inline int64_t opSeq() const { DARABONBA_PTR_GET_DEFAULT(opSeq_, 0L) };
    inline ListDagsResponseBodyDataDags& setOpSeq(int64_t opSeq) { DARABONBA_PTR_SET_VALUE(opSeq_, opSeq) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDagsResponseBodyDataDags& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListDagsResponseBodyDataDags& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDagsResponseBodyDataDags& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListDagsResponseBodyDataDags& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The data timestamp.
    std::shared_ptr<int64_t> bizdate_ = nullptr;
    // The creation time.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The creator.
    std::shared_ptr<string> createUser_ = nullptr;
    // The DAG ID.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The end time.
    std::shared_ptr<int64_t> finishTime_ = nullptr;
    // The actual running time.
    std::shared_ptr<int64_t> gmtdate_ = nullptr;
    // The modification time.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The name of the DAG.
    std::shared_ptr<string> name_ = nullptr;
    // The sequence number of the operation.
    std::shared_ptr<int64_t> opSeq_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The start time.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the DAG. Valid values:
    // 
    // *   CREATED
    // *   RUNNING
    // *   FAILURE
    // *   SUCCESS
    std::shared_ptr<string> status_ = nullptr;
    // The type of the DAG. Valid values:
    // 
    // *   MANUAL: DAG for a manually triggered workflow
    // *   SMOKE_TEST: DAG for a smoke testing workflow
    // *   SUPPLY_DATA: DAG for a data backfill instance
    // *   BUSINESS_PROCESS_DAG: DAG for a one-time workflow
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
