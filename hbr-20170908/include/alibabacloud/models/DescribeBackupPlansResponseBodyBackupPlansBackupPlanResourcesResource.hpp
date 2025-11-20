// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODYBACKUPPLANSBACKUPPLANRESOURCESRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODYBACKUPPLANSBACKUPPLANRESOURCESRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource& obj) { 
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource() = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource(const DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource &) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource(DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource &&) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource() = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource& operator=(const DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource &) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource& operator=(DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extra_ == nullptr
        && return this->resourceId_ == nullptr && return this->sourceType_ == nullptr; };
    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // Additional information about the data source.
    std::shared_ptr<string> extra_ = nullptr;
    // The ID of the data source.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of the data source. Valid value: **UDM_DISK**.
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
