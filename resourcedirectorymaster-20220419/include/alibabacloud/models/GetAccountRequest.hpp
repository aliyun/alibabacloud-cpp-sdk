// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(IncludeTags, includeTags_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(IncludeTags, includeTags_);
    };
    GetAccountRequest() = default ;
    GetAccountRequest(const GetAccountRequest &) = default ;
    GetAccountRequest(GetAccountRequest &&) = default ;
    GetAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountRequest() = default ;
    GetAccountRequest& operator=(const GetAccountRequest &) = default ;
    GetAccountRequest& operator=(GetAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->includeTags_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetAccountRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // includeTags Field Functions 
    bool hasIncludeTags() const { return this->includeTags_ != nullptr;};
    void deleteIncludeTags() { this->includeTags_ = nullptr;};
    inline bool includeTags() const { DARABONBA_PTR_GET_DEFAULT(includeTags_, false) };
    inline GetAccountRequest& setIncludeTags(bool includeTags) { DARABONBA_PTR_SET_VALUE(includeTags_, includeTags) };


  protected:
    // The Alibaba Cloud account ID of the member.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountId_ = nullptr;
    // Specifies whether to return the information of tags. Valid values:
    // 
    // *   false (default value)
    // *   true
    std::shared_ptr<bool> includeTags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
