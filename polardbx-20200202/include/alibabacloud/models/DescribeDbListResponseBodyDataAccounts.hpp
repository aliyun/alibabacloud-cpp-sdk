// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBLISTRESPONSEBODYDATAACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBLISTRESPONSEBODYDATAACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDbListResponseBodyDataAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDbListResponseBodyDataAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPrivilege, accountPrivilege_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDbListResponseBodyDataAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPrivilege, accountPrivilege_);
    };
    DescribeDbListResponseBodyDataAccounts() = default ;
    DescribeDbListResponseBodyDataAccounts(const DescribeDbListResponseBodyDataAccounts &) = default ;
    DescribeDbListResponseBodyDataAccounts(DescribeDbListResponseBodyDataAccounts &&) = default ;
    DescribeDbListResponseBodyDataAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDbListResponseBodyDataAccounts() = default ;
    DescribeDbListResponseBodyDataAccounts& operator=(const DescribeDbListResponseBodyDataAccounts &) = default ;
    DescribeDbListResponseBodyDataAccounts& operator=(DescribeDbListResponseBodyDataAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->accountPrivilege_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeDbListResponseBodyDataAccounts& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPrivilege Field Functions 
    bool hasAccountPrivilege() const { return this->accountPrivilege_ != nullptr;};
    void deleteAccountPrivilege() { this->accountPrivilege_ = nullptr;};
    inline string accountPrivilege() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilege_, "") };
    inline DescribeDbListResponseBodyDataAccounts& setAccountPrivilege(string accountPrivilege) { DARABONBA_PTR_SET_VALUE(accountPrivilege_, accountPrivilege) };


  protected:
    std::shared_ptr<string> accountName_ = nullptr;
    std::shared_ptr<string> accountPrivilege_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
