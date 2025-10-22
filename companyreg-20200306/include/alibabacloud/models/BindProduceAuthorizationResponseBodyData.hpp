// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDPRODUCEAUTHORIZATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BINDPRODUCEAUTHORIZATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BindProduceAuthorizationResponseBodyDataAuthorizedUserList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class BindProduceAuthorizationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindProduceAuthorizationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedUserList, authorizedUserList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BindProduceAuthorizationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedUserList, authorizedUserList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BindProduceAuthorizationResponseBodyData() = default ;
    BindProduceAuthorizationResponseBodyData(const BindProduceAuthorizationResponseBodyData &) = default ;
    BindProduceAuthorizationResponseBodyData(BindProduceAuthorizationResponseBodyData &&) = default ;
    BindProduceAuthorizationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindProduceAuthorizationResponseBodyData() = default ;
    BindProduceAuthorizationResponseBodyData& operator=(const BindProduceAuthorizationResponseBodyData &) = default ;
    BindProduceAuthorizationResponseBodyData& operator=(BindProduceAuthorizationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedUserList_ == nullptr
        && return this->message_ == nullptr && return this->success_ == nullptr; };
    // authorizedUserList Field Functions 
    bool hasAuthorizedUserList() const { return this->authorizedUserList_ != nullptr;};
    void deleteAuthorizedUserList() { this->authorizedUserList_ = nullptr;};
    inline const vector<Models::BindProduceAuthorizationResponseBodyDataAuthorizedUserList> & authorizedUserList() const { DARABONBA_PTR_GET_CONST(authorizedUserList_, vector<Models::BindProduceAuthorizationResponseBodyDataAuthorizedUserList>) };
    inline vector<Models::BindProduceAuthorizationResponseBodyDataAuthorizedUserList> authorizedUserList() { DARABONBA_PTR_GET(authorizedUserList_, vector<Models::BindProduceAuthorizationResponseBodyDataAuthorizedUserList>) };
    inline BindProduceAuthorizationResponseBodyData& setAuthorizedUserList(const vector<Models::BindProduceAuthorizationResponseBodyDataAuthorizedUserList> & authorizedUserList) { DARABONBA_PTR_SET_VALUE(authorizedUserList_, authorizedUserList) };
    inline BindProduceAuthorizationResponseBodyData& setAuthorizedUserList(vector<Models::BindProduceAuthorizationResponseBodyDataAuthorizedUserList> && authorizedUserList) { DARABONBA_PTR_SET_RVALUE(authorizedUserList_, authorizedUserList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BindProduceAuthorizationResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BindProduceAuthorizationResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<vector<Models::BindProduceAuthorizationResponseBodyDataAuthorizedUserList>> authorizedUserList_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
