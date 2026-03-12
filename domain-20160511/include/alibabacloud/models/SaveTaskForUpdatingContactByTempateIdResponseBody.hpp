// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVETASKFORUPDATINGCONTACTBYTEMPATEIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SAVETASKFORUPDATINGCONTACTBYTEMPATEIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20160511
{
namespace Models
{
  class SaveTaskForUpdatingContactByTempateIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveTaskForUpdatingContactByTempateIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskNo, taskNo_);
    };
    friend void from_json(const Darabonba::Json& j, SaveTaskForUpdatingContactByTempateIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskNo, taskNo_);
    };
    SaveTaskForUpdatingContactByTempateIdResponseBody() = default ;
    SaveTaskForUpdatingContactByTempateIdResponseBody(const SaveTaskForUpdatingContactByTempateIdResponseBody &) = default ;
    SaveTaskForUpdatingContactByTempateIdResponseBody(SaveTaskForUpdatingContactByTempateIdResponseBody &&) = default ;
    SaveTaskForUpdatingContactByTempateIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveTaskForUpdatingContactByTempateIdResponseBody() = default ;
    SaveTaskForUpdatingContactByTempateIdResponseBody& operator=(const SaveTaskForUpdatingContactByTempateIdResponseBody &) = default ;
    SaveTaskForUpdatingContactByTempateIdResponseBody& operator=(SaveTaskForUpdatingContactByTempateIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->success_ == nullptr && this->taskNo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SaveTaskForUpdatingContactByTempateIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SaveTaskForUpdatingContactByTempateIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskNo Field Functions 
    bool hasTaskNo() const { return this->taskNo_ != nullptr;};
    void deleteTaskNo() { this->taskNo_ = nullptr;};
    inline string getTaskNo() const { DARABONBA_PTR_GET_DEFAULT(taskNo_, "") };
    inline SaveTaskForUpdatingContactByTempateIdResponseBody& setTaskNo(string taskNo) { DARABONBA_PTR_SET_VALUE(taskNo_, taskNo) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> taskNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20160511
#endif
