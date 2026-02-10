// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTLABELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTLABELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class AccountLabelList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccountLabelList& obj) { 
        DARABONBA_PTR_TO_JSON(LabelSeries, labelSeries_);
        DARABONBA_PTR_TO_JSON(LabelStatus, labelStatus_);
      };
      friend void from_json(const Darabonba::Json& j, AccountLabelList& obj) { 
        DARABONBA_PTR_FROM_JSON(LabelSeries, labelSeries_);
        DARABONBA_PTR_FROM_JSON(LabelStatus, labelStatus_);
      };
      AccountLabelList() = default ;
      AccountLabelList(const AccountLabelList &) = default ;
      AccountLabelList(AccountLabelList &&) = default ;
      AccountLabelList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccountLabelList() = default ;
      AccountLabelList& operator=(const AccountLabelList &) = default ;
      AccountLabelList& operator=(AccountLabelList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->labelSeries_ == nullptr
        && this->labelStatus_ == nullptr; };
      // labelSeries Field Functions 
      bool hasLabelSeries() const { return this->labelSeries_ != nullptr;};
      void deleteLabelSeries() { this->labelSeries_ = nullptr;};
      inline string getLabelSeries() const { DARABONBA_PTR_GET_DEFAULT(labelSeries_, "") };
      inline AccountLabelList& setLabelSeries(string labelSeries) { DARABONBA_PTR_SET_VALUE(labelSeries_, labelSeries) };


      // labelStatus Field Functions 
      bool hasLabelStatus() const { return this->labelStatus_ != nullptr;};
      void deleteLabelStatus() { this->labelStatus_ = nullptr;};
      inline bool getLabelStatus() const { DARABONBA_PTR_GET_DEFAULT(labelStatus_, false) };
      inline AccountLabelList& setLabelStatus(bool labelStatus) { DARABONBA_PTR_SET_VALUE(labelStatus_, labelStatus) };


    protected:
      // The tag information.
      shared_ptr<string> labelSeries_ {};
      // Indicates whether the tag is valid.
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> labelStatus_ {};
    };

    virtual bool empty() const override { return this->accountLabelList_ == nullptr
        && this->requestId_ == nullptr; };
    // accountLabelList Field Functions 
    bool hasAccountLabelList() const { return this->accountLabelList_ != nullptr;};
    void deleteAccountLabelList() { this->accountLabelList_ = nullptr;};
    inline const vector<GetAccountLabelResponseBody::AccountLabelList> & getAccountLabelList() const { DARABONBA_PTR_GET_CONST(accountLabelList_, vector<GetAccountLabelResponseBody::AccountLabelList>) };
    inline vector<GetAccountLabelResponseBody::AccountLabelList> getAccountLabelList() { DARABONBA_PTR_GET(accountLabelList_, vector<GetAccountLabelResponseBody::AccountLabelList>) };
    inline GetAccountLabelResponseBody& setAccountLabelList(const vector<GetAccountLabelResponseBody::AccountLabelList> & accountLabelList) { DARABONBA_PTR_SET_VALUE(accountLabelList_, accountLabelList) };
    inline GetAccountLabelResponseBody& setAccountLabelList(vector<GetAccountLabelResponseBody::AccountLabelList> && accountLabelList) { DARABONBA_PTR_SET_RVALUE(accountLabelList_, accountLabelList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccountLabelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The tag list.
    shared_ptr<vector<GetAccountLabelResponseBody::AccountLabelList>> accountLabelList_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
