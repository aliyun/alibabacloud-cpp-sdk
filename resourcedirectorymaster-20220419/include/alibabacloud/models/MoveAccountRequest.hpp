// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOVEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class MoveAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(DestinationFolderId, destinationFolderId_);
    };
    friend void from_json(const Darabonba::Json& j, MoveAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(DestinationFolderId, destinationFolderId_);
    };
    MoveAccountRequest() = default ;
    MoveAccountRequest(const MoveAccountRequest &) = default ;
    MoveAccountRequest(MoveAccountRequest &&) = default ;
    MoveAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveAccountRequest() = default ;
    MoveAccountRequest& operator=(const MoveAccountRequest &) = default ;
    MoveAccountRequest& operator=(MoveAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->destinationFolderId_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline MoveAccountRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // destinationFolderId Field Functions 
    bool hasDestinationFolderId() const { return this->destinationFolderId_ != nullptr;};
    void deleteDestinationFolderId() { this->destinationFolderId_ = nullptr;};
    inline string destinationFolderId() const { DARABONBA_PTR_GET_DEFAULT(destinationFolderId_, "") };
    inline MoveAccountRequest& setDestinationFolderId(string destinationFolderId) { DARABONBA_PTR_SET_VALUE(destinationFolderId_, destinationFolderId) };


  protected:
    // The Alibaba Cloud account ID of the member that you want to move.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountId_ = nullptr;
    // The ID of the destination folder.
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationFolderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
