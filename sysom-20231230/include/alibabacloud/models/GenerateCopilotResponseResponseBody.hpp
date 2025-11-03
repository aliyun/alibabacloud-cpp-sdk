// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATECOPILOTRESPONSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATECOPILOTRESPONSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GenerateCopilotResponseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateCopilotResponseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(massage, massage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateCopilotResponseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(massage, massage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GenerateCopilotResponseResponseBody() = default ;
    GenerateCopilotResponseResponseBody(const GenerateCopilotResponseResponseBody &) = default ;
    GenerateCopilotResponseResponseBody(GenerateCopilotResponseResponseBody &&) = default ;
    GenerateCopilotResponseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateCopilotResponseResponseBody() = default ;
    GenerateCopilotResponseResponseBody& operator=(const GenerateCopilotResponseResponseBody &) = default ;
    GenerateCopilotResponseResponseBody& operator=(GenerateCopilotResponseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->massage_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GenerateCopilotResponseResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline GenerateCopilotResponseResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // massage Field Functions 
    bool hasMassage() const { return this->massage_ != nullptr;};
    void deleteMassage() { this->massage_ = nullptr;};
    inline string massage() const { DARABONBA_PTR_GET_DEFAULT(massage_, "") };
    inline GenerateCopilotResponseResponseBody& setMassage(string massage) { DARABONBA_PTR_SET_VALUE(massage_, massage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateCopilotResponseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> data_ = nullptr;
    std::shared_ptr<string> massage_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
