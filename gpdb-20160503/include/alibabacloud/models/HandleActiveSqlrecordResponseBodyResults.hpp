// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HANDLEACTIVESQLRECORDRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_HANDLEACTIVESQLRECORDRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class HandleActiveSQLRecordResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HandleActiveSQLRecordResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, HandleActiveSQLRecordResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    HandleActiveSQLRecordResponseBodyResults() = default ;
    HandleActiveSQLRecordResponseBodyResults(const HandleActiveSQLRecordResponseBodyResults &) = default ;
    HandleActiveSQLRecordResponseBodyResults(HandleActiveSQLRecordResponseBodyResults &&) = default ;
    HandleActiveSQLRecordResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HandleActiveSQLRecordResponseBodyResults() = default ;
    HandleActiveSQLRecordResponseBodyResults& operator=(const HandleActiveSQLRecordResponseBodyResults &) = default ;
    HandleActiveSQLRecordResponseBodyResults& operator=(HandleActiveSQLRecordResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pid_ != nullptr
        && this->status_ != nullptr; };
    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline HandleActiveSQLRecordResponseBodyResults& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline HandleActiveSQLRecordResponseBodyResults& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The process ID, which is a unique identifier of the query.
    std::shared_ptr<string> pid_ = nullptr;
    // Indicates whether the processing was successful. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
