// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETONCETASKRESULTINFORESPONSEBODYTASKINFO_HPP_
#define ALIBABACLOUD_MODELS_GETONCETASKRESULTINFORESPONSEBODYTASKINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetOnceTaskResultInfoResponseBodyTaskInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOnceTaskResultInfoResponseBodyTaskInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetOnceTaskResultInfoResponseBodyTaskInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetOnceTaskResultInfoResponseBodyTaskInfo() = default ;
    GetOnceTaskResultInfoResponseBodyTaskInfo(const GetOnceTaskResultInfoResponseBodyTaskInfo &) = default ;
    GetOnceTaskResultInfoResponseBodyTaskInfo(GetOnceTaskResultInfoResponseBodyTaskInfo &&) = default ;
    GetOnceTaskResultInfoResponseBodyTaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOnceTaskResultInfoResponseBodyTaskInfo() = default ;
    GetOnceTaskResultInfoResponseBodyTaskInfo& operator=(const GetOnceTaskResultInfoResponseBodyTaskInfo &) = default ;
    GetOnceTaskResultInfoResponseBodyTaskInfo& operator=(GetOnceTaskResultInfoResponseBodyTaskInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetOnceTaskResultInfoResponseBodyTaskInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The status of the task. Valid values:
    // 
    // *   **INIT**: The task is not started.
    // *   **START**: The task is started.
    // *   **SUCCESS**: The task is complete.
    // *   **TIMEOUT**: The task times out.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
