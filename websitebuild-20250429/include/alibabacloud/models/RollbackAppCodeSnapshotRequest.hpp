// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROLLBACKAPPCODESNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ROLLBACKAPPCODESNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class RollbackAppCodeSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RollbackAppCodeSnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(TargetLogicalNumber, targetLogicalNumber_);
    };
    friend void from_json(const Darabonba::Json& j, RollbackAppCodeSnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(TargetLogicalNumber, targetLogicalNumber_);
    };
    RollbackAppCodeSnapshotRequest() = default ;
    RollbackAppCodeSnapshotRequest(const RollbackAppCodeSnapshotRequest &) = default ;
    RollbackAppCodeSnapshotRequest(RollbackAppCodeSnapshotRequest &&) = default ;
    RollbackAppCodeSnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RollbackAppCodeSnapshotRequest() = default ;
    RollbackAppCodeSnapshotRequest& operator=(const RollbackAppCodeSnapshotRequest &) = default ;
    RollbackAppCodeSnapshotRequest& operator=(RollbackAppCodeSnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->siteId_ == nullptr
        && this->targetLogicalNumber_ == nullptr; };
    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline string getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
    inline RollbackAppCodeSnapshotRequest& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // targetLogicalNumber Field Functions 
    bool hasTargetLogicalNumber() const { return this->targetLogicalNumber_ != nullptr;};
    void deleteTargetLogicalNumber() { this->targetLogicalNumber_ = nullptr;};
    inline int32_t getTargetLogicalNumber() const { DARABONBA_PTR_GET_DEFAULT(targetLogicalNumber_, 0) };
    inline RollbackAppCodeSnapshotRequest& setTargetLogicalNumber(int32_t targetLogicalNumber) { DARABONBA_PTR_SET_VALUE(targetLogicalNumber_, targetLogicalNumber) };


  protected:
    shared_ptr<string> siteId_ {};
    shared_ptr<int32_t> targetLogicalNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
