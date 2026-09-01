// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROCESSSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROCESSSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeProcessStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProcessStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProcessActionEnd, processActionEnd_);
      DARABONBA_PTR_TO_JSON(ProcessActionStart, processActionStart_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProcessStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProcessActionEnd, processActionEnd_);
      DARABONBA_PTR_FROM_JSON(ProcessActionStart, processActionStart_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    DescribeProcessStatisticsRequest() = default ;
    DescribeProcessStatisticsRequest(const DescribeProcessStatisticsRequest &) = default ;
    DescribeProcessStatisticsRequest(DescribeProcessStatisticsRequest &&) = default ;
    DescribeProcessStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProcessStatisticsRequest() = default ;
    DescribeProcessStatisticsRequest& operator=(const DescribeProcessStatisticsRequest &) = default ;
    DescribeProcessStatisticsRequest& operator=(DescribeProcessStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->processActionEnd_ == nullptr && this->processActionStart_ == nullptr && this->roleFor_ == nullptr && this->roleType_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeProcessStatisticsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // processActionEnd Field Functions 
    bool hasProcessActionEnd() const { return this->processActionEnd_ != nullptr;};
    void deleteProcessActionEnd() { this->processActionEnd_ = nullptr;};
    inline int64_t getProcessActionEnd() const { DARABONBA_PTR_GET_DEFAULT(processActionEnd_, 0L) };
    inline DescribeProcessStatisticsRequest& setProcessActionEnd(int64_t processActionEnd) { DARABONBA_PTR_SET_VALUE(processActionEnd_, processActionEnd) };


    // processActionStart Field Functions 
    bool hasProcessActionStart() const { return this->processActionStart_ != nullptr;};
    void deleteProcessActionStart() { this->processActionStart_ = nullptr;};
    inline int64_t getProcessActionStart() const { DARABONBA_PTR_GET_DEFAULT(processActionStart_, 0L) };
    inline DescribeProcessStatisticsRequest& setProcessActionStart(int64_t processActionStart) { DARABONBA_PTR_SET_VALUE(processActionStart_, processActionStart) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline string getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, "") };
    inline DescribeProcessStatisticsRequest& setRoleFor(string roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline DescribeProcessStatisticsRequest& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The language of the response. Valid values:
    // 
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The end time of the query for response tasks. The value is a 13-digit UNIX timestamp.
    shared_ptr<int64_t> processActionEnd_ {};
    // The start time of the query for response tasks. The value is a 13-digit UNIX timestamp.
    shared_ptr<int64_t> processActionStart_ {};
    // The user ID of the member to which the administrator switches the view.
    shared_ptr<string> roleFor_ {};
    // The view type. Valid values:
    // 
    // - 0 (default): the view of the current Alibaba Cloud account.
    // - 1: the view of all accounts in the enterprise.
    shared_ptr<string> roleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
