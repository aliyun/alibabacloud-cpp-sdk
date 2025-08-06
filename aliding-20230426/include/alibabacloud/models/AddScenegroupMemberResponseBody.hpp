// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSCENEGROUPMEMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDSCENEGROUPMEMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddScenegroupMemberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddScenegroupMemberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddScenegroupMemberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    AddScenegroupMemberResponseBody() = default ;
    AddScenegroupMemberResponseBody(const AddScenegroupMemberResponseBody &) = default ;
    AddScenegroupMemberResponseBody(AddScenegroupMemberResponseBody &&) = default ;
    AddScenegroupMemberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddScenegroupMemberResponseBody() = default ;
    AddScenegroupMemberResponseBody& operator=(const AddScenegroupMemberResponseBody &) = default ;
    AddScenegroupMemberResponseBody& operator=(AddScenegroupMemberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->success_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddScenegroupMemberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddScenegroupMemberResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
