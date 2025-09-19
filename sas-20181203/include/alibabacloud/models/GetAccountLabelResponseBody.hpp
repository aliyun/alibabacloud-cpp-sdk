// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTLABELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTLABELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAccountLabelResponseBodyAccountLabelList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAccountLabelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountLabelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountLabelList, accountLabelList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountLabelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountLabelList, accountLabelList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccountLabelResponseBody() = default ;
    GetAccountLabelResponseBody(const GetAccountLabelResponseBody &) = default ;
    GetAccountLabelResponseBody(GetAccountLabelResponseBody &&) = default ;
    GetAccountLabelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountLabelResponseBody() = default ;
    GetAccountLabelResponseBody& operator=(const GetAccountLabelResponseBody &) = default ;
    GetAccountLabelResponseBody& operator=(GetAccountLabelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountLabelList_ != nullptr
        && this->requestId_ != nullptr; };
    // accountLabelList Field Functions 
    bool hasAccountLabelList() const { return this->accountLabelList_ != nullptr;};
    void deleteAccountLabelList() { this->accountLabelList_ = nullptr;};
    inline const vector<GetAccountLabelResponseBodyAccountLabelList> & accountLabelList() const { DARABONBA_PTR_GET_CONST(accountLabelList_, vector<GetAccountLabelResponseBodyAccountLabelList>) };
    inline vector<GetAccountLabelResponseBodyAccountLabelList> accountLabelList() { DARABONBA_PTR_GET(accountLabelList_, vector<GetAccountLabelResponseBodyAccountLabelList>) };
    inline GetAccountLabelResponseBody& setAccountLabelList(const vector<GetAccountLabelResponseBodyAccountLabelList> & accountLabelList) { DARABONBA_PTR_SET_VALUE(accountLabelList_, accountLabelList) };
    inline GetAccountLabelResponseBody& setAccountLabelList(vector<GetAccountLabelResponseBodyAccountLabelList> && accountLabelList) { DARABONBA_PTR_SET_RVALUE(accountLabelList_, accountLabelList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccountLabelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The tag list.
    std::shared_ptr<vector<GetAccountLabelResponseBodyAccountLabelList>> accountLabelList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
