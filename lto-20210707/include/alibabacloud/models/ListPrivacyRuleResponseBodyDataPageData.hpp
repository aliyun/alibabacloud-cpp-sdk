// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVACYRULERESPONSEBODYDATAPAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVACYRULERESPONSEBODYDATAPAGEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListPrivacyRuleResponseBodyDataPageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivacyRuleResponseBodyDataPageData& obj) { 
      DARABONBA_PTR_TO_JSON(AlgImpl, algImpl_);
      DARABONBA_PTR_TO_JSON(AlgType, algType_);
      DARABONBA_PTR_TO_JSON(CurrentUser, currentUser_);
      DARABONBA_PTR_TO_JSON(MemberName, memberName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PrivacyRuleId, privacyRuleId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivacyRuleResponseBodyDataPageData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgImpl, algImpl_);
      DARABONBA_PTR_FROM_JSON(AlgType, algType_);
      DARABONBA_PTR_FROM_JSON(CurrentUser, currentUser_);
      DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PrivacyRuleId, privacyRuleId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListPrivacyRuleResponseBodyDataPageData() = default ;
    ListPrivacyRuleResponseBodyDataPageData(const ListPrivacyRuleResponseBodyDataPageData &) = default ;
    ListPrivacyRuleResponseBodyDataPageData(ListPrivacyRuleResponseBodyDataPageData &&) = default ;
    ListPrivacyRuleResponseBodyDataPageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivacyRuleResponseBodyDataPageData() = default ;
    ListPrivacyRuleResponseBodyDataPageData& operator=(const ListPrivacyRuleResponseBodyDataPageData &) = default ;
    ListPrivacyRuleResponseBodyDataPageData& operator=(ListPrivacyRuleResponseBodyDataPageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algImpl_ == nullptr
        && return this->algType_ == nullptr && return this->currentUser_ == nullptr && return this->memberName_ == nullptr && return this->name_ == nullptr && return this->privacyRuleId_ == nullptr
        && return this->remark_ == nullptr && return this->status_ == nullptr; };
    // algImpl Field Functions 
    bool hasAlgImpl() const { return this->algImpl_ != nullptr;};
    void deleteAlgImpl() { this->algImpl_ = nullptr;};
    inline string algImpl() const { DARABONBA_PTR_GET_DEFAULT(algImpl_, "") };
    inline ListPrivacyRuleResponseBodyDataPageData& setAlgImpl(string algImpl) { DARABONBA_PTR_SET_VALUE(algImpl_, algImpl) };


    // algType Field Functions 
    bool hasAlgType() const { return this->algType_ != nullptr;};
    void deleteAlgType() { this->algType_ = nullptr;};
    inline string algType() const { DARABONBA_PTR_GET_DEFAULT(algType_, "") };
    inline ListPrivacyRuleResponseBodyDataPageData& setAlgType(string algType) { DARABONBA_PTR_SET_VALUE(algType_, algType) };


    // currentUser Field Functions 
    bool hasCurrentUser() const { return this->currentUser_ != nullptr;};
    void deleteCurrentUser() { this->currentUser_ = nullptr;};
    inline bool currentUser() const { DARABONBA_PTR_GET_DEFAULT(currentUser_, false) };
    inline ListPrivacyRuleResponseBodyDataPageData& setCurrentUser(bool currentUser) { DARABONBA_PTR_SET_VALUE(currentUser_, currentUser) };


    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline string memberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
    inline ListPrivacyRuleResponseBodyDataPageData& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPrivacyRuleResponseBodyDataPageData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // privacyRuleId Field Functions 
    bool hasPrivacyRuleId() const { return this->privacyRuleId_ != nullptr;};
    void deletePrivacyRuleId() { this->privacyRuleId_ = nullptr;};
    inline string privacyRuleId() const { DARABONBA_PTR_GET_DEFAULT(privacyRuleId_, "") };
    inline ListPrivacyRuleResponseBodyDataPageData& setPrivacyRuleId(string privacyRuleId) { DARABONBA_PTR_SET_VALUE(privacyRuleId_, privacyRuleId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListPrivacyRuleResponseBodyDataPageData& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPrivacyRuleResponseBodyDataPageData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> algImpl_ = nullptr;
    std::shared_ptr<string> algType_ = nullptr;
    std::shared_ptr<bool> currentUser_ = nullptr;
    std::shared_ptr<string> memberName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> privacyRuleId_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
