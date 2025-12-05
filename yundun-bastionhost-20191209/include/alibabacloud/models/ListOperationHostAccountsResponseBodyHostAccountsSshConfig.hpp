// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONHOSTACCOUNTSRESPONSEBODYHOSTACCOUNTSSSHCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONHOSTACCOUNTSRESPONSEBODYHOSTACCOUNTSSSHCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListOperationHostAccountsResponseBodyHostAccountsSSHConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationHostAccountsResponseBodyHostAccountsSSHConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EnableSFTPChannel, enableSFTPChannel_);
      DARABONBA_PTR_TO_JSON(EnableSSHChannel, enableSSHChannel_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationHostAccountsResponseBodyHostAccountsSSHConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableSFTPChannel, enableSFTPChannel_);
      DARABONBA_PTR_FROM_JSON(EnableSSHChannel, enableSSHChannel_);
    };
    ListOperationHostAccountsResponseBodyHostAccountsSSHConfig() = default ;
    ListOperationHostAccountsResponseBodyHostAccountsSSHConfig(const ListOperationHostAccountsResponseBodyHostAccountsSSHConfig &) = default ;
    ListOperationHostAccountsResponseBodyHostAccountsSSHConfig(ListOperationHostAccountsResponseBodyHostAccountsSSHConfig &&) = default ;
    ListOperationHostAccountsResponseBodyHostAccountsSSHConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationHostAccountsResponseBodyHostAccountsSSHConfig() = default ;
    ListOperationHostAccountsResponseBodyHostAccountsSSHConfig& operator=(const ListOperationHostAccountsResponseBodyHostAccountsSSHConfig &) = default ;
    ListOperationHostAccountsResponseBodyHostAccountsSSHConfig& operator=(ListOperationHostAccountsResponseBodyHostAccountsSSHConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableSFTPChannel_ == nullptr
        && return this->enableSSHChannel_ == nullptr; };
    // enableSFTPChannel Field Functions 
    bool hasEnableSFTPChannel() const { return this->enableSFTPChannel_ != nullptr;};
    void deleteEnableSFTPChannel() { this->enableSFTPChannel_ = nullptr;};
    inline bool enableSFTPChannel() const { DARABONBA_PTR_GET_DEFAULT(enableSFTPChannel_, false) };
    inline ListOperationHostAccountsResponseBodyHostAccountsSSHConfig& setEnableSFTPChannel(bool enableSFTPChannel) { DARABONBA_PTR_SET_VALUE(enableSFTPChannel_, enableSFTPChannel) };


    // enableSSHChannel Field Functions 
    bool hasEnableSSHChannel() const { return this->enableSSHChannel_ != nullptr;};
    void deleteEnableSSHChannel() { this->enableSSHChannel_ = nullptr;};
    inline bool enableSSHChannel() const { DARABONBA_PTR_GET_DEFAULT(enableSSHChannel_, false) };
    inline ListOperationHostAccountsResponseBodyHostAccountsSSHConfig& setEnableSSHChannel(bool enableSSHChannel) { DARABONBA_PTR_SET_VALUE(enableSSHChannel_, enableSSHChannel) };


  protected:
    // Indicates whether SFTP channels are enabled for the account.
    std::shared_ptr<bool> enableSFTPChannel_ = nullptr;
    // Indicates whether SSH channels are enabled for the account.
    std::shared_ptr<bool> enableSSHChannel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
