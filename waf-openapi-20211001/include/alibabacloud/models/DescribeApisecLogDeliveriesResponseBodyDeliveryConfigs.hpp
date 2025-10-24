// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECLOGDELIVERIESRESPONSEBODYDELIVERYCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECLOGDELIVERIESRESPONSEBODYDELIVERYCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(AssertKey, assertKey_);
      DARABONBA_PTR_TO_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(AssertKey, assertKey_);
      DARABONBA_PTR_FROM_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs() = default ;
    DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs(const DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs &) = default ;
    DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs(DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs &&) = default ;
    DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs() = default ;
    DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs& operator=(const DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs &) = default ;
    DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs& operator=(DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assertKey_ == nullptr
        && return this->logRegionId_ == nullptr && return this->logStoreName_ == nullptr && return this->projectName_ == nullptr && return this->status_ == nullptr; };
    // assertKey Field Functions 
    bool hasAssertKey() const { return this->assertKey_ != nullptr;};
    void deleteAssertKey() { this->assertKey_ = nullptr;};
    inline string assertKey() const { DARABONBA_PTR_GET_DEFAULT(assertKey_, "") };
    inline DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs& setAssertKey(string assertKey) { DARABONBA_PTR_SET_VALUE(assertKey_, assertKey) };


    // logRegionId Field Functions 
    bool hasLogRegionId() const { return this->logRegionId_ != nullptr;};
    void deleteLogRegionId() { this->logRegionId_ = nullptr;};
    inline string logRegionId() const { DARABONBA_PTR_GET_DEFAULT(logRegionId_, "") };
    inline DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs& setLogRegionId(string logRegionId) { DARABONBA_PTR_SET_VALUE(logRegionId_, logRegionId) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The type of the log subscription. Valid values:
    // 
    // *   **risk**: risk information.
    // *   **event**: attack event information.
    // *   **asset**: asset information.
    std::shared_ptr<string> assertKey_ = nullptr;
    // The ID of the region where logs are stored.
    std::shared_ptr<string> logRegionId_ = nullptr;
    // The name of the Logstore in Simple Log Service.
    std::shared_ptr<string> logStoreName_ = nullptr;
    // The name of the project in Simple Log Service.
    std::shared_ptr<string> projectName_ = nullptr;
    // The status of API security log subscription. Valid values:
    // 
    // *   **true**: enabled.
    // *   **false**: disabled.
    std::shared_ptr<bool> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
