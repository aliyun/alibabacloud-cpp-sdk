// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETOOLOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATETOOLOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateToolData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateToolOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateToolOutput& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateToolOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CreateToolOutput() = default ;
    CreateToolOutput(const CreateToolOutput &) = default ;
    CreateToolOutput(CreateToolOutput &&) = default ;
    CreateToolOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateToolOutput() = default ;
    CreateToolOutput& operator=(const CreateToolOutput &) = default ;
    CreateToolOutput& operator=(CreateToolOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->message_ != nullptr && this->success_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateToolData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateToolData) };
    inline CreateToolData data() { DARABONBA_PTR_GET(data_, CreateToolData) };
    inline CreateToolOutput& setData(const CreateToolData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateToolOutput& setData(CreateToolData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateToolOutput& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateToolOutput& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<CreateToolData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
