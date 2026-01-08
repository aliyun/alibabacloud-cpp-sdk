// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERDACCOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERDACCOUNTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInstanceRdAccountsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceRdAccountsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MemberDesc, memberDesc_);
      DARABONBA_PTR_TO_JSON(MemberDisplayName, memberDisplayName_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRdAccountsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MemberDesc, memberDesc_);
      DARABONBA_PTR_FROM_JSON(MemberDisplayName, memberDisplayName_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeInstanceRdAccountsRequest() = default ;
    DescribeInstanceRdAccountsRequest(const DescribeInstanceRdAccountsRequest &) = default ;
    DescribeInstanceRdAccountsRequest(DescribeInstanceRdAccountsRequest &&) = default ;
    DescribeInstanceRdAccountsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceRdAccountsRequest() = default ;
    DescribeInstanceRdAccountsRequest& operator=(const DescribeInstanceRdAccountsRequest &) = default ;
    DescribeInstanceRdAccountsRequest& operator=(DescribeInstanceRdAccountsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->lang_ == nullptr && this->memberDesc_ == nullptr && this->memberDisplayName_ == nullptr && this->memberUid_ == nullptr && this->pageSize_ == nullptr
        && this->sourceIp_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeInstanceRdAccountsRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeInstanceRdAccountsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // memberDesc Field Functions 
    bool hasMemberDesc() const { return this->memberDesc_ != nullptr;};
    void deleteMemberDesc() { this->memberDesc_ = nullptr;};
    inline string getMemberDesc() const { DARABONBA_PTR_GET_DEFAULT(memberDesc_, "") };
    inline DescribeInstanceRdAccountsRequest& setMemberDesc(string memberDesc) { DARABONBA_PTR_SET_VALUE(memberDesc_, memberDesc) };


    // memberDisplayName Field Functions 
    bool hasMemberDisplayName() const { return this->memberDisplayName_ != nullptr;};
    void deleteMemberDisplayName() { this->memberDisplayName_ = nullptr;};
    inline string getMemberDisplayName() const { DARABONBA_PTR_GET_DEFAULT(memberDisplayName_, "") };
    inline DescribeInstanceRdAccountsRequest& setMemberDisplayName(string memberDisplayName) { DARABONBA_PTR_SET_VALUE(memberDisplayName_, memberDisplayName) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline DescribeInstanceRdAccountsRequest& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeInstanceRdAccountsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeInstanceRdAccountsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    shared_ptr<string> currentPage_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> memberDesc_ {};
    shared_ptr<string> memberDisplayName_ {};
    shared_ptr<string> memberUid_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
