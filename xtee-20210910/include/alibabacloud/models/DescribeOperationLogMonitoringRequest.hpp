// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPERATIONLOGMONITORINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPERATIONLOGMONITORINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeOperationLogMonitoringRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOperationLogMonitoringRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(startDate, startDate_);
      DARABONBA_PTR_TO_JSON(userNameSearch, userNameSearch_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOperationLogMonitoringRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(startDate, startDate_);
      DARABONBA_PTR_FROM_JSON(userNameSearch, userNameSearch_);
    };
    DescribeOperationLogMonitoringRequest() = default ;
    DescribeOperationLogMonitoringRequest(const DescribeOperationLogMonitoringRequest &) = default ;
    DescribeOperationLogMonitoringRequest(DescribeOperationLogMonitoringRequest &&) = default ;
    DescribeOperationLogMonitoringRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOperationLogMonitoringRequest() = default ;
    DescribeOperationLogMonitoringRequest& operator=(const DescribeOperationLogMonitoringRequest &) = default ;
    DescribeOperationLogMonitoringRequest& operator=(DescribeOperationLogMonitoringRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->endDate_ != nullptr && this->regId_ != nullptr && this->startDate_ != nullptr && this->userNameSearch_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeOperationLogMonitoringRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribeOperationLogMonitoringRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeOperationLogMonitoringRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DescribeOperationLogMonitoringRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // userNameSearch Field Functions 
    bool hasUserNameSearch() const { return this->userNameSearch_ != nullptr;};
    void deleteUserNameSearch() { this->userNameSearch_ = nullptr;};
    inline string userNameSearch() const { DARABONBA_PTR_GET_DEFAULT(userNameSearch_, "") };
    inline DescribeOperationLogMonitoringRequest& setUserNameSearch(string userNameSearch) { DARABONBA_PTR_SET_VALUE(userNameSearch_, userNameSearch) };


  protected:
    // Language type of the returned message. Values:
    // 
    // - **zh** (default): Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // End date (in yyyy-MM-dd format, and the interval from the start date cannot exceed 90 days)
    std::shared_ptr<string> endDate_ = nullptr;
    // Region code.
    std::shared_ptr<string> regId_ = nullptr;
    // Start date (in yyyy-MM-dd format, and the interval from the current date cannot exceed 90 days)
    std::shared_ptr<string> startDate_ = nullptr;
    // Operator.
    std::shared_ptr<string> userNameSearch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
