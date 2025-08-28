// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALLTASKDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCALLTASKDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ListCallTaskDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCallTaskDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CalledNum, calledNum_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListCallTaskDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CalledNum, calledNum_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListCallTaskDetailResponseBodyData() = default ;
    ListCallTaskDetailResponseBodyData(const ListCallTaskDetailResponseBodyData &) = default ;
    ListCallTaskDetailResponseBodyData(ListCallTaskDetailResponseBodyData &&) = default ;
    ListCallTaskDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCallTaskDetailResponseBodyData() = default ;
    ListCallTaskDetailResponseBodyData& operator=(const ListCallTaskDetailResponseBodyData &) = default ;
    ListCallTaskDetailResponseBodyData& operator=(ListCallTaskDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->calledNum_ != nullptr
        && this->caller_ != nullptr && this->duration_ != nullptr && this->id_ != nullptr && this->status_ != nullptr; };
    // calledNum Field Functions 
    bool hasCalledNum() const { return this->calledNum_ != nullptr;};
    void deleteCalledNum() { this->calledNum_ = nullptr;};
    inline string calledNum() const { DARABONBA_PTR_GET_DEFAULT(calledNum_, "") };
    inline ListCallTaskDetailResponseBodyData& setCalledNum(string calledNum) { DARABONBA_PTR_SET_VALUE(calledNum_, calledNum) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string caller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline ListCallTaskDetailResponseBodyData& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline ListCallTaskDetailResponseBodyData& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListCallTaskDetailResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCallTaskDetailResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The called number.
    std::shared_ptr<string> calledNum_ = nullptr;
    // The calling number.
    std::shared_ptr<string> caller_ = nullptr;
    // The call duration. Unit: seconds.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // This parameter is unavailable.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The task state. Valid values:
    // 
    // *   **SUCCESS**: The task was successful.
    // *   **FAIL**: The task failed.
    // *   **INIT**: The task was not started.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
