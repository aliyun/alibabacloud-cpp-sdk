// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDISYNCTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DELETEDISYNCTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DeleteDISyncTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDISyncTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDISyncTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DeleteDISyncTaskResponseBodyData() = default ;
    DeleteDISyncTaskResponseBodyData(const DeleteDISyncTaskResponseBodyData &) = default ;
    DeleteDISyncTaskResponseBodyData(DeleteDISyncTaskResponseBodyData &&) = default ;
    DeleteDISyncTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDISyncTaskResponseBodyData() = default ;
    DeleteDISyncTaskResponseBodyData& operator=(const DeleteDISyncTaskResponseBodyData &) = default ;
    DeleteDISyncTaskResponseBodyData& operator=(DeleteDISyncTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->status_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteDISyncTaskResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DeleteDISyncTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The reason why the synchronization task fails to be deleted. If the synchronization task is deleted, the value null is returned for this parameter.
    std::shared_ptr<string> message_ = nullptr;
    // Indicates whether the synchronization task is deleted. Valid values:
    // 
    // *   success: The synchronization task is deleted.
    // *   fail: The synchronization task fails to be deleted. You can troubleshoot the issue based on the failure reason.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
