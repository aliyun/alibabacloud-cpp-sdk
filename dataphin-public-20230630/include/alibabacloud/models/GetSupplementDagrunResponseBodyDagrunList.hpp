// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPPLEMENTDAGRUNRESPONSEBODYDAGRUNLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSUPPLEMENTDAGRUNRESPONSEBODYDAGRUNLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetSupplementDagrunResponseBodyDagrunList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupplementDagrunResponseBodyDagrunList& obj) { 
      DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EndExecuteTime, endExecuteTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(StartExecuteTime, startExecuteTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupplementId, supplementId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupplementDagrunResponseBodyDagrunList& obj) { 
      DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EndExecuteTime, endExecuteTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(StartExecuteTime, startExecuteTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupplementId, supplementId_);
    };
    GetSupplementDagrunResponseBodyDagrunList() = default ;
    GetSupplementDagrunResponseBodyDagrunList(const GetSupplementDagrunResponseBodyDagrunList &) = default ;
    GetSupplementDagrunResponseBodyDagrunList(GetSupplementDagrunResponseBodyDagrunList &&) = default ;
    GetSupplementDagrunResponseBodyDagrunList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupplementDagrunResponseBodyDagrunList() = default ;
    GetSupplementDagrunResponseBodyDagrunList& operator=(const GetSupplementDagrunResponseBodyDagrunList &) = default ;
    GetSupplementDagrunResponseBodyDagrunList& operator=(GetSupplementDagrunResponseBodyDagrunList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizDate_ != nullptr
        && this->duration_ != nullptr && this->endExecuteTime_ != nullptr && this->id_ != nullptr && this->startExecuteTime_ != nullptr && this->status_ != nullptr
        && this->supplementId_ != nullptr; };
    // bizDate Field Functions 
    bool hasBizDate() const { return this->bizDate_ != nullptr;};
    void deleteBizDate() { this->bizDate_ = nullptr;};
    inline string bizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
    inline GetSupplementDagrunResponseBodyDagrunList& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline GetSupplementDagrunResponseBodyDagrunList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // endExecuteTime Field Functions 
    bool hasEndExecuteTime() const { return this->endExecuteTime_ != nullptr;};
    void deleteEndExecuteTime() { this->endExecuteTime_ = nullptr;};
    inline int64_t endExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(endExecuteTime_, 0L) };
    inline GetSupplementDagrunResponseBodyDagrunList& setEndExecuteTime(int64_t endExecuteTime) { DARABONBA_PTR_SET_VALUE(endExecuteTime_, endExecuteTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetSupplementDagrunResponseBodyDagrunList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // startExecuteTime Field Functions 
    bool hasStartExecuteTime() const { return this->startExecuteTime_ != nullptr;};
    void deleteStartExecuteTime() { this->startExecuteTime_ = nullptr;};
    inline int64_t startExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(startExecuteTime_, 0L) };
    inline GetSupplementDagrunResponseBodyDagrunList& setStartExecuteTime(int64_t startExecuteTime) { DARABONBA_PTR_SET_VALUE(startExecuteTime_, startExecuteTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSupplementDagrunResponseBodyDagrunList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supplementId Field Functions 
    bool hasSupplementId() const { return this->supplementId_ != nullptr;};
    void deleteSupplementId() { this->supplementId_ = nullptr;};
    inline string supplementId() const { DARABONBA_PTR_GET_DEFAULT(supplementId_, "") };
    inline GetSupplementDagrunResponseBodyDagrunList& setSupplementId(string supplementId) { DARABONBA_PTR_SET_VALUE(supplementId_, supplementId) };


  protected:
    std::shared_ptr<string> bizDate_ = nullptr;
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<int64_t> endExecuteTime_ = nullptr;
    // Dagrun ID
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int64_t> startExecuteTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> supplementId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
