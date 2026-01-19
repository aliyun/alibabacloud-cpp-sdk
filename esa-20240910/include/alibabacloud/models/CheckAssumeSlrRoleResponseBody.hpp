// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKASSUMESLRROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKASSUMESLRROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CheckAssumeSlrRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAssumeSlrRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(IsExist, isExist_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAssumeSlrRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(IsExist, isExist_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckAssumeSlrRoleResponseBody() = default ;
    CheckAssumeSlrRoleResponseBody(const CheckAssumeSlrRoleResponseBody &) = default ;
    CheckAssumeSlrRoleResponseBody(CheckAssumeSlrRoleResponseBody &&) = default ;
    CheckAssumeSlrRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAssumeSlrRoleResponseBody() = default ;
    CheckAssumeSlrRoleResponseBody& operator=(const CheckAssumeSlrRoleResponseBody &) = default ;
    CheckAssumeSlrRoleResponseBody& operator=(CheckAssumeSlrRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMsg_ == nullptr
        && this->isExist_ == nullptr && this->requestId_ == nullptr; };
    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline CheckAssumeSlrRoleResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // isExist Field Functions 
    bool hasIsExist() const { return this->isExist_ != nullptr;};
    void deleteIsExist() { this->isExist_ = nullptr;};
    inline string getIsExist() const { DARABONBA_PTR_GET_DEFAULT(isExist_, "") };
    inline CheckAssumeSlrRoleResponseBody& setIsExist(string isExist) { DARABONBA_PTR_SET_VALUE(isExist_, isExist) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckAssumeSlrRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> errorMsg_ {};
    shared_ptr<string> isExist_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
