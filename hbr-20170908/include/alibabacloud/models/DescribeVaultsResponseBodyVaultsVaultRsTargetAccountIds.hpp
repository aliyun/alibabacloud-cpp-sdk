// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVAULTSRESPONSEBODYVAULTSVAULTRSTARGETACCOUNTIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVAULTSRESPONSEBODYVAULTSVAULTRSTARGETACCOUNTIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeVaultsResponseBodyVaultsVaultRsTargetAccountIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVaultsResponseBodyVaultsVaultRsTargetAccountIds& obj) { 
      DARABONBA_PTR_TO_JSON(RsTargetAccountId, rsTargetAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVaultsResponseBodyVaultsVaultRsTargetAccountIds& obj) { 
      DARABONBA_PTR_FROM_JSON(RsTargetAccountId, rsTargetAccountId_);
    };
    DescribeVaultsResponseBodyVaultsVaultRsTargetAccountIds() = default ;
    DescribeVaultsResponseBodyVaultsVaultRsTargetAccountIds(const DescribeVaultsResponseBodyVaultsVaultRsTargetAccountIds &) = default ;
    DescribeVaultsResponseBodyVaultsVaultRsTargetAccountIds(DescribeVaultsResponseBodyVaultsVaultRsTargetAccountIds &&) = default ;
    DescribeVaultsResponseBodyVaultsVaultRsTargetAccountIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVaultsResponseBodyVaultsVaultRsTargetAccountIds() = default ;
    DescribeVaultsResponseBodyVaultsVaultRsTargetAccountIds& operator=(const DescribeVaultsResponseBodyVaultsVaultRsTargetAccountIds &) = default ;
    DescribeVaultsResponseBodyVaultsVaultRsTargetAccountIds& operator=(DescribeVaultsResponseBodyVaultsVaultRsTargetAccountIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rsTargetAccountId_ == nullptr; };
    // rsTargetAccountId Field Functions 
    bool hasRsTargetAccountId() const { return this->rsTargetAccountId_ != nullptr;};
    void deleteRsTargetAccountId() { this->rsTargetAccountId_ = nullptr;};
    inline const vector<int64_t> & rsTargetAccountId() const { DARABONBA_PTR_GET_CONST(rsTargetAccountId_, vector<int64_t>) };
    inline vector<int64_t> rsTargetAccountId() { DARABONBA_PTR_GET(rsTargetAccountId_, vector<int64_t>) };
    inline DescribeVaultsResponseBodyVaultsVaultRsTargetAccountIds& setRsTargetAccountId(const vector<int64_t> & rsTargetAccountId) { DARABONBA_PTR_SET_VALUE(rsTargetAccountId_, rsTargetAccountId) };
    inline DescribeVaultsResponseBodyVaultsVaultRsTargetAccountIds& setRsTargetAccountId(vector<int64_t> && rsTargetAccountId) { DARABONBA_PTR_SET_RVALUE(rsTargetAccountId_, rsTargetAccountId) };


  protected:
    std::shared_ptr<vector<int64_t>> rsTargetAccountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
