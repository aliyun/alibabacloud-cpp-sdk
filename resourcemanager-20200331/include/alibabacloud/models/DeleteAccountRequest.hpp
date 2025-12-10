// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class DeleteAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AbandonableCheckId, abandonableCheckId_);
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AbandonableCheckId, abandonableCheckId_);
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
    };
    DeleteAccountRequest() = default ;
    DeleteAccountRequest(const DeleteAccountRequest &) = default ;
    DeleteAccountRequest(DeleteAccountRequest &&) = default ;
    DeleteAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAccountRequest() = default ;
    DeleteAccountRequest& operator=(const DeleteAccountRequest &) = default ;
    DeleteAccountRequest& operator=(DeleteAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abandonableCheckId_ == nullptr
        && return this->accountId_ == nullptr; };
    // abandonableCheckId Field Functions 
    bool hasAbandonableCheckId() const { return this->abandonableCheckId_ != nullptr;};
    void deleteAbandonableCheckId() { this->abandonableCheckId_ = nullptr;};
    inline const vector<string> & abandonableCheckId() const { DARABONBA_PTR_GET_CONST(abandonableCheckId_, vector<string>) };
    inline vector<string> abandonableCheckId() { DARABONBA_PTR_GET(abandonableCheckId_, vector<string>) };
    inline DeleteAccountRequest& setAbandonableCheckId(const vector<string> & abandonableCheckId) { DARABONBA_PTR_SET_VALUE(abandonableCheckId_, abandonableCheckId) };
    inline DeleteAccountRequest& setAbandonableCheckId(vector<string> && abandonableCheckId) { DARABONBA_PTR_SET_RVALUE(abandonableCheckId_, abandonableCheckId) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline DeleteAccountRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


  protected:
    std::shared_ptr<vector<string>> abandonableCheckId_ = nullptr;
    // The type of the deletion. Valid values:
    // 
    // *   0: direct deletion. If the member does not have pay-as-you-go resources that are purchased within the previous 30 days, the system directly deletes the member.
    // *   1: deletion with a silence period. If the member has pay-as-you-go resources that are purchased within the previous 30 days, the member enters a silence period of 45 days. The system starts to delete the member until the silence period ends. For more information about the silence period, see [What is the silence period for member deletion?](https://help.aliyun.com/document_detail/446079.html)
    // 
    // This parameter is required.
    std::shared_ptr<string> accountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
