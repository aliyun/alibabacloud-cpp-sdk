// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEMGVULITEMRESPONSEBODYGROUPEDVULITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEMGVULITEMRESPONSEBODYGROUPEDVULITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeEmgVulItemResponseBodyGroupedVulItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEmgVulItemResponseBodyGroupedVulItems& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtLastCheck, gmtLastCheck_);
      DARABONBA_PTR_TO_JSON(GmtPublish, gmtPublish_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PendingCount, pendingCount_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RaspDefend, raspDefend_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEmgVulItemResponseBodyGroupedVulItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtLastCheck, gmtLastCheck_);
      DARABONBA_PTR_FROM_JSON(GmtPublish, gmtPublish_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PendingCount, pendingCount_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RaspDefend, raspDefend_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeEmgVulItemResponseBodyGroupedVulItems() = default ;
    DescribeEmgVulItemResponseBodyGroupedVulItems(const DescribeEmgVulItemResponseBodyGroupedVulItems &) = default ;
    DescribeEmgVulItemResponseBodyGroupedVulItems(DescribeEmgVulItemResponseBodyGroupedVulItems &&) = default ;
    DescribeEmgVulItemResponseBodyGroupedVulItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEmgVulItemResponseBodyGroupedVulItems() = default ;
    DescribeEmgVulItemResponseBodyGroupedVulItems& operator=(const DescribeEmgVulItemResponseBodyGroupedVulItems &) = default ;
    DescribeEmgVulItemResponseBodyGroupedVulItems& operator=(DescribeEmgVulItemResponseBodyGroupedVulItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasName_ == nullptr
        && return this->checkType_ == nullptr && return this->description_ == nullptr && return this->gmtLastCheck_ == nullptr && return this->gmtPublish_ == nullptr && return this->name_ == nullptr
        && return this->pendingCount_ == nullptr && return this->progress_ == nullptr && return this->raspDefend_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DescribeEmgVulItemResponseBodyGroupedVulItems& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline int32_t checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
    inline DescribeEmgVulItemResponseBodyGroupedVulItems& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeEmgVulItemResponseBodyGroupedVulItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtLastCheck Field Functions 
    bool hasGmtLastCheck() const { return this->gmtLastCheck_ != nullptr;};
    void deleteGmtLastCheck() { this->gmtLastCheck_ = nullptr;};
    inline int64_t gmtLastCheck() const { DARABONBA_PTR_GET_DEFAULT(gmtLastCheck_, 0L) };
    inline DescribeEmgVulItemResponseBodyGroupedVulItems& setGmtLastCheck(int64_t gmtLastCheck) { DARABONBA_PTR_SET_VALUE(gmtLastCheck_, gmtLastCheck) };


    // gmtPublish Field Functions 
    bool hasGmtPublish() const { return this->gmtPublish_ != nullptr;};
    void deleteGmtPublish() { this->gmtPublish_ = nullptr;};
    inline int64_t gmtPublish() const { DARABONBA_PTR_GET_DEFAULT(gmtPublish_, 0L) };
    inline DescribeEmgVulItemResponseBodyGroupedVulItems& setGmtPublish(int64_t gmtPublish) { DARABONBA_PTR_SET_VALUE(gmtPublish_, gmtPublish) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEmgVulItemResponseBodyGroupedVulItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pendingCount Field Functions 
    bool hasPendingCount() const { return this->pendingCount_ != nullptr;};
    void deletePendingCount() { this->pendingCount_ = nullptr;};
    inline int32_t pendingCount() const { DARABONBA_PTR_GET_DEFAULT(pendingCount_, 0) };
    inline DescribeEmgVulItemResponseBodyGroupedVulItems& setPendingCount(int32_t pendingCount) { DARABONBA_PTR_SET_VALUE(pendingCount_, pendingCount) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline DescribeEmgVulItemResponseBodyGroupedVulItems& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // raspDefend Field Functions 
    bool hasRaspDefend() const { return this->raspDefend_ != nullptr;};
    void deleteRaspDefend() { this->raspDefend_ = nullptr;};
    inline int32_t raspDefend() const { DARABONBA_PTR_GET_DEFAULT(raspDefend_, 0) };
    inline DescribeEmgVulItemResponseBodyGroupedVulItems& setRaspDefend(int32_t raspDefend) { DARABONBA_PTR_SET_VALUE(raspDefend_, raspDefend) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeEmgVulItemResponseBodyGroupedVulItems& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeEmgVulItemResponseBodyGroupedVulItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the urgent vulnerability.
    std::shared_ptr<string> aliasName_ = nullptr;
    // The check method.
    std::shared_ptr<int32_t> checkType_ = nullptr;
    // The introduction to the vulnerability.
    std::shared_ptr<string> description_ = nullptr;
    // The timestamp when the urgent vulnerability was last detected. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtLastCheck_ = nullptr;
    // The timestamp when the urgent vulnerability was last disclosed. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtPublish_ = nullptr;
    // The name of the detection rule.
    std::shared_ptr<string> name_ = nullptr;
    // The number of unhandled urgent vulnerabilities.
    std::shared_ptr<int32_t> pendingCount_ = nullptr;
    // The progress of the urgent vulnerability detection task. Valid values: 0 to 100.
    // 
    // >  This parameter is returned only when an urgent vulnerability is being detected.
    std::shared_ptr<int32_t> progress_ = nullptr;
    // Indicates whether the application protection feature is supported. Valid values:
    // *   **0**: no
    // *   **1**: yes
    // >  If this parameter is not returned, the application protection is not supported.
    std::shared_ptr<int32_t> raspDefend_ = nullptr;
    // The detection status of the urgent vulnerability. Valid values:
    // 
    // *   **10**: The urgent vulnerability is not detected.
    // *   **20**: The urgent vulnerability is being detected.
    // *   **30**: The urgent vulnerability detection is complete.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The method that is used to detect the urgent vulnerability. Valid values:
    // 
    // *   **python**: The Version method is used. Security Center checks the software versions of your server to check whether disclosed vulnerabilities exist on your server.
    // *   **scan**: The Network Scan method is used. Security Center analyzes the access traffic to your server over the Internet to check whether vulnerabilities exist on your server.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
