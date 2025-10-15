// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAPPLICATIONACCOUNTTOUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDAPPLICATIONACCOUNTTOUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class AddApplicationAccountToUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddApplicationAccountToUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationAccountId, applicationAccountId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddApplicationAccountToUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationAccountId, applicationAccountId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddApplicationAccountToUserResponseBody() = default ;
    AddApplicationAccountToUserResponseBody(const AddApplicationAccountToUserResponseBody &) = default ;
    AddApplicationAccountToUserResponseBody(AddApplicationAccountToUserResponseBody &&) = default ;
    AddApplicationAccountToUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddApplicationAccountToUserResponseBody() = default ;
    AddApplicationAccountToUserResponseBody& operator=(const AddApplicationAccountToUserResponseBody &) = default ;
    AddApplicationAccountToUserResponseBody& operator=(AddApplicationAccountToUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationAccountId_ == nullptr
        && return this->requestId_ == nullptr; };
    // applicationAccountId Field Functions 
    bool hasApplicationAccountId() const { return this->applicationAccountId_ != nullptr;};
    void deleteApplicationAccountId() { this->applicationAccountId_ = nullptr;};
    inline string applicationAccountId() const { DARABONBA_PTR_GET_DEFAULT(applicationAccountId_, "") };
    inline AddApplicationAccountToUserResponseBody& setApplicationAccountId(string applicationAccountId) { DARABONBA_PTR_SET_VALUE(applicationAccountId_, applicationAccountId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddApplicationAccountToUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> applicationAccountId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
