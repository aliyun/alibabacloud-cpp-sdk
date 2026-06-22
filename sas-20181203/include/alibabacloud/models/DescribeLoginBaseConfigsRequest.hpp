// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGINBASECONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGINBASECONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeLoginBaseConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoginBaseConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoginBaseConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeLoginBaseConfigsRequest() = default ;
    DescribeLoginBaseConfigsRequest(const DescribeLoginBaseConfigsRequest &) = default ;
    DescribeLoginBaseConfigsRequest(DescribeLoginBaseConfigsRequest &&) = default ;
    DescribeLoginBaseConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoginBaseConfigsRequest() = default ;
    DescribeLoginBaseConfigsRequest& operator=(const DescribeLoginBaseConfigsRequest &) = default ;
    DescribeLoginBaseConfigsRequest& operator=(DescribeLoginBaseConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->target_ == nullptr && this->type_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeLoginBaseConfigsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLoginBaseConfigsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline DescribeLoginBaseConfigsRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeLoginBaseConfigsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The page number of the page to return. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // Settings for paged query. The number of logon configuration entries to display on each page when paging is used. Default value: **5**.
    shared_ptr<int32_t> pageSize_ {};
    // The selection mode for the assets on which the policy takes effect. This parameter is in JSON format and contains the following fields:
    // 
    // - **Target**: The UUID of the server to add or delete, or the ID of the server group.
    // 
    // > If the targetType parameter is set to uuid, this parameter specifies the UUID of the server. If the targetType parameter is set to groupId, this parameter specifies the ID of the server group. If the targetType parameter is set to global, set this parameter to a hyphen (-).
    // 
    // - **targetType**: The selection mode for the assets on which the policy takes effect. Valid values:
    //     - **uuid**: queries by individual server.
    //     - **groupId**: queries by server group.
    //     - **global**: queries all servers.
    shared_ptr<string> target_ {};
    // The type of logon configuration to query. Valid values:
    // - **login_common_location**: common logon location.
    // - **login_common_ip**: common logon IP address.
    // - **login_common_time**: common logon time.
    // - **login_common_account**: common logon account.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
