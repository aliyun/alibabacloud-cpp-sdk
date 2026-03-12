// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVECONTACTTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SAVECONTACTTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20160511
{
namespace Models
{
  class SaveContactTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveContactTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContactTemplateId, contactTemplateId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SaveContactTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactTemplateId, contactTemplateId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SaveContactTemplateResponseBody() = default ;
    SaveContactTemplateResponseBody(const SaveContactTemplateResponseBody &) = default ;
    SaveContactTemplateResponseBody(SaveContactTemplateResponseBody &&) = default ;
    SaveContactTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveContactTemplateResponseBody() = default ;
    SaveContactTemplateResponseBody& operator=(const SaveContactTemplateResponseBody &) = default ;
    SaveContactTemplateResponseBody& operator=(SaveContactTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactTemplateId_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // contactTemplateId Field Functions 
    bool hasContactTemplateId() const { return this->contactTemplateId_ != nullptr;};
    void deleteContactTemplateId() { this->contactTemplateId_ = nullptr;};
    inline int64_t getContactTemplateId() const { DARABONBA_PTR_GET_DEFAULT(contactTemplateId_, 0L) };
    inline SaveContactTemplateResponseBody& setContactTemplateId(int64_t contactTemplateId) { DARABONBA_PTR_SET_VALUE(contactTemplateId_, contactTemplateId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SaveContactTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SaveContactTemplateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int64_t> contactTemplateId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20160511
#endif
