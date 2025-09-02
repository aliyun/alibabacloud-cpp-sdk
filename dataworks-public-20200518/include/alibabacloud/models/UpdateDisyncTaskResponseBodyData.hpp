// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDISYNCTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDISYNCTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateDISyncTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDISyncTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDISyncTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateDISyncTaskResponseBodyData() = default ;
    UpdateDISyncTaskResponseBodyData(const UpdateDISyncTaskResponseBodyData &) = default ;
    UpdateDISyncTaskResponseBodyData(UpdateDISyncTaskResponseBodyData &&) = default ;
    UpdateDISyncTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDISyncTaskResponseBodyData() = default ;
    UpdateDISyncTaskResponseBodyData& operator=(const UpdateDISyncTaskResponseBodyData &) = default ;
    UpdateDISyncTaskResponseBodyData& operator=(UpdateDISyncTaskResponseBodyData &&) = default ;
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
    inline UpdateDISyncTaskResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateDISyncTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The error message returned if the data synchronization task fails to be updated. If the data synchronization task is successfully updated, the value null is returned for this parameter.
    std::shared_ptr<string> message_ = nullptr;
    // The update status of the data synchronization task. Valid values:
    // 
    // *   success
    // *   fail
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
