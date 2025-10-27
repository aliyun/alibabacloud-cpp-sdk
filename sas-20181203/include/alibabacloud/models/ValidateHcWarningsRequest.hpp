// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEHCWARNINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEHCWARNINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ValidateHcWarningsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateHcWarningsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_TO_JSON(RiskIds, riskIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateHcWarningsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_FROM_JSON(RiskIds, riskIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    ValidateHcWarningsRequest() = default ;
    ValidateHcWarningsRequest(const ValidateHcWarningsRequest &) = default ;
    ValidateHcWarningsRequest(ValidateHcWarningsRequest &&) = default ;
    ValidateHcWarningsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateHcWarningsRequest() = default ;
    ValidateHcWarningsRequest& operator=(const ValidateHcWarningsRequest &) = default ;
    ValidateHcWarningsRequest& operator=(ValidateHcWarningsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkIds_ == nullptr
        && return this->riskIds_ == nullptr && return this->status_ == nullptr && return this->uuids_ == nullptr; };
    // checkIds Field Functions 
    bool hasCheckIds() const { return this->checkIds_ != nullptr;};
    void deleteCheckIds() { this->checkIds_ = nullptr;};
    inline string checkIds() const { DARABONBA_PTR_GET_DEFAULT(checkIds_, "") };
    inline ValidateHcWarningsRequest& setCheckIds(string checkIds) { DARABONBA_PTR_SET_VALUE(checkIds_, checkIds) };


    // riskIds Field Functions 
    bool hasRiskIds() const { return this->riskIds_ != nullptr;};
    void deleteRiskIds() { this->riskIds_ = nullptr;};
    inline string riskIds() const { DARABONBA_PTR_GET_DEFAULT(riskIds_, "") };
    inline ValidateHcWarningsRequest& setRiskIds(string riskIds) { DARABONBA_PTR_SET_VALUE(riskIds_, riskIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ValidateHcWarningsRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string uuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline ValidateHcWarningsRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The IDs of check items that you want to verify. Separate multiple IDs with commas (,).
    // > You can use [DescribeCheckWarningSummary](https://help.aliyun.com/document_detail/116179.html) to get IDs of check items.
    std::shared_ptr<string> checkIds_ = nullptr;
    // The IDs of risk items that you want to verify. Separate multiple IDs with commas (,).
    std::shared_ptr<string> riskIds_ = nullptr;
    // The status of the check item that you want to verify.
    // 
    // *   1: failed
    // *   3: passed
    // *   5: expired
    std::shared_ptr<int32_t> status_ = nullptr;
    // The UUIDs of the servers on which you want to verify the risk items. Separate multiple UUIDs with commas (,).
    // 
    // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
    std::shared_ptr<string> uuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
