// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFACEVIDEOTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDFACEVIDEOTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddFaceVideoTemplateResponseBodyDate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class AddFaceVideoTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFaceVideoTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddFaceVideoTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddFaceVideoTemplateResponseBody() = default ;
    AddFaceVideoTemplateResponseBody(const AddFaceVideoTemplateResponseBody &) = default ;
    AddFaceVideoTemplateResponseBody(AddFaceVideoTemplateResponseBody &&) = default ;
    AddFaceVideoTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFaceVideoTemplateResponseBody() = default ;
    AddFaceVideoTemplateResponseBody& operator=(const AddFaceVideoTemplateResponseBody &) = default ;
    AddFaceVideoTemplateResponseBody& operator=(AddFaceVideoTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline const AddFaceVideoTemplateResponseBodyDate & date() const { DARABONBA_PTR_GET_CONST(date_, AddFaceVideoTemplateResponseBodyDate) };
    inline AddFaceVideoTemplateResponseBodyDate date() { DARABONBA_PTR_GET(date_, AddFaceVideoTemplateResponseBodyDate) };
    inline AddFaceVideoTemplateResponseBody& setDate(const AddFaceVideoTemplateResponseBodyDate & date) { DARABONBA_PTR_SET_VALUE(date_, date) };
    inline AddFaceVideoTemplateResponseBody& setDate(AddFaceVideoTemplateResponseBodyDate && date) { DARABONBA_PTR_SET_RVALUE(date_, date) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddFaceVideoTemplateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddFaceVideoTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<AddFaceVideoTemplateResponseBodyDate> date_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
