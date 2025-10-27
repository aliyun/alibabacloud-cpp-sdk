// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSCHEDULECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSCHEDULECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyScheduleConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyScheduleConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyScheduleConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribePropertyScheduleConfigRequest() = default ;
    DescribePropertyScheduleConfigRequest(const DescribePropertyScheduleConfigRequest &) = default ;
    DescribePropertyScheduleConfigRequest(DescribePropertyScheduleConfigRequest &&) = default ;
    DescribePropertyScheduleConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyScheduleConfigRequest() = default ;
    DescribePropertyScheduleConfigRequest& operator=(const DescribePropertyScheduleConfigRequest &) = default ;
    DescribePropertyScheduleConfigRequest& operator=(DescribePropertyScheduleConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribePropertyScheduleConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The type of the asset fingerprints. Valid values:
    // 
    // *   **scheduler_port_period**: listening port
    // *   **scheduler_process_period**: running process
    // *   **scheduler_account_period**: account
    // *   **scheduler_software_period**: software
    // *   **scheduler_cron_period**: scheduled task
    // *   **scheduler_sca_period**: middleware
    // *   **scheduler_autorun_period**: startup item
    // *   **scheduler_lkm_period**: kernel module
    // *   **scheduler_sca_proxy_period**: website
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
