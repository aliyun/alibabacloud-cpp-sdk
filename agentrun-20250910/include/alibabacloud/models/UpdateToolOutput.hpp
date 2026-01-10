// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETOOLOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATETOOLOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateToolData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateToolOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateToolOutput& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateToolOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    UpdateToolOutput() = default ;
    UpdateToolOutput(const UpdateToolOutput &) = default ;
    UpdateToolOutput(UpdateToolOutput &&) = default ;
    UpdateToolOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateToolOutput() = default ;
    UpdateToolOutput& operator=(const UpdateToolOutput &) = default ;
    UpdateToolOutput& operator=(UpdateToolOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateToolData & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateToolData) };
    inline UpdateToolData getData() { DARABONBA_PTR_GET(data_, UpdateToolData) };
    inline UpdateToolOutput& setData(const UpdateToolData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateToolOutput& setData(UpdateToolData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateToolOutput& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateToolOutput& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<UpdateToolData> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
