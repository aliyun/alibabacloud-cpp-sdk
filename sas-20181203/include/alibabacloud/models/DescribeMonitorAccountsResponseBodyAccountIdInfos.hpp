// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORACCOUNTSRESPONSEBODYACCOUNTIDINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORACCOUNTSRESPONSEBODYACCOUNTIDINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeMonitorAccountsResponseBodyAccountIdInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorAccountsResponseBodyAccountIdInfos& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AddTime, addTime_);
      DARABONBA_PTR_TO_JSON(OperatorUid, operatorUid_);
      DARABONBA_PTR_TO_JSON(PostBasicService, postBasicService_);
      DARABONBA_PTR_TO_JSON(SasVersion, sasVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorAccountsResponseBodyAccountIdInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AddTime, addTime_);
      DARABONBA_PTR_FROM_JSON(OperatorUid, operatorUid_);
      DARABONBA_PTR_FROM_JSON(PostBasicService, postBasicService_);
      DARABONBA_PTR_FROM_JSON(SasVersion, sasVersion_);
    };
    DescribeMonitorAccountsResponseBodyAccountIdInfos() = default ;
    DescribeMonitorAccountsResponseBodyAccountIdInfos(const DescribeMonitorAccountsResponseBodyAccountIdInfos &) = default ;
    DescribeMonitorAccountsResponseBodyAccountIdInfos(DescribeMonitorAccountsResponseBodyAccountIdInfos &&) = default ;
    DescribeMonitorAccountsResponseBodyAccountIdInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorAccountsResponseBodyAccountIdInfos() = default ;
    DescribeMonitorAccountsResponseBodyAccountIdInfos& operator=(const DescribeMonitorAccountsResponseBodyAccountIdInfos &) = default ;
    DescribeMonitorAccountsResponseBodyAccountIdInfos& operator=(DescribeMonitorAccountsResponseBodyAccountIdInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->addTime_ == nullptr && return this->operatorUid_ == nullptr && return this->postBasicService_ == nullptr && return this->sasVersion_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline DescribeMonitorAccountsResponseBodyAccountIdInfos& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // addTime Field Functions 
    bool hasAddTime() const { return this->addTime_ != nullptr;};
    void deleteAddTime() { this->addTime_ = nullptr;};
    inline int64_t addTime() const { DARABONBA_PTR_GET_DEFAULT(addTime_, 0L) };
    inline DescribeMonitorAccountsResponseBodyAccountIdInfos& setAddTime(int64_t addTime) { DARABONBA_PTR_SET_VALUE(addTime_, addTime) };


    // operatorUid Field Functions 
    bool hasOperatorUid() const { return this->operatorUid_ != nullptr;};
    void deleteOperatorUid() { this->operatorUid_ = nullptr;};
    inline string operatorUid() const { DARABONBA_PTR_GET_DEFAULT(operatorUid_, "") };
    inline DescribeMonitorAccountsResponseBodyAccountIdInfos& setOperatorUid(string operatorUid) { DARABONBA_PTR_SET_VALUE(operatorUid_, operatorUid) };


    // postBasicService Field Functions 
    bool hasPostBasicService() const { return this->postBasicService_ != nullptr;};
    void deletePostBasicService() { this->postBasicService_ = nullptr;};
    inline int32_t postBasicService() const { DARABONBA_PTR_GET_DEFAULT(postBasicService_, 0) };
    inline DescribeMonitorAccountsResponseBodyAccountIdInfos& setPostBasicService(int32_t postBasicService) { DARABONBA_PTR_SET_VALUE(postBasicService_, postBasicService) };


    // sasVersion Field Functions 
    bool hasSasVersion() const { return this->sasVersion_ != nullptr;};
    void deleteSasVersion() { this->sasVersion_ = nullptr;};
    inline string sasVersion() const { DARABONBA_PTR_GET_DEFAULT(sasVersion_, "") };
    inline DescribeMonitorAccountsResponseBodyAccountIdInfos& setSasVersion(string sasVersion) { DARABONBA_PTR_SET_VALUE(sasVersion_, sasVersion) };


  protected:
    // The Alibaba Cloud account ID of the member.
    std::shared_ptr<string> accountId_ = nullptr;
    // The time when it was added to the control list, in timestamp format with second precision.
    std::shared_ptr<int64_t> addTime_ = nullptr;
    // The account ID of the operator.
    std::shared_ptr<string> operatorUid_ = nullptr;
    // Basic service switch. Values: 
    // - **0**: Off 
    // - **1**: On
    std::shared_ptr<int32_t> postBasicService_ = nullptr;
    // The purchased version of Cloud Security Center. Values:
    // - **0** or **1**: Free Edition 
    // - **2** or **3**: Enterprise Edition
    //  - **5**: Advanced Edition 
    // - **6**: Anti-Virus Edition 
    // - **7**: Flagship Edition
    std::shared_ptr<string> sasVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
