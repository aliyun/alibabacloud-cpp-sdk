// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORRESOURCEQUOTAATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORRESOURCEQUOTAATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorResourceQuotaAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorResourceQuotaAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ShowUsed, showUsed_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorResourceQuotaAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ShowUsed, showUsed_);
    };
    DescribeMonitorResourceQuotaAttributeRequest() = default ;
    DescribeMonitorResourceQuotaAttributeRequest(const DescribeMonitorResourceQuotaAttributeRequest &) = default ;
    DescribeMonitorResourceQuotaAttributeRequest(DescribeMonitorResourceQuotaAttributeRequest &&) = default ;
    DescribeMonitorResourceQuotaAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorResourceQuotaAttributeRequest() = default ;
    DescribeMonitorResourceQuotaAttributeRequest& operator=(const DescribeMonitorResourceQuotaAttributeRequest &) = default ;
    DescribeMonitorResourceQuotaAttributeRequest& operator=(DescribeMonitorResourceQuotaAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->showUsed_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMonitorResourceQuotaAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // showUsed Field Functions 
    bool hasShowUsed() const { return this->showUsed_ != nullptr;};
    void deleteShowUsed() { this->showUsed_ = nullptr;};
    inline bool getShowUsed() const { DARABONBA_PTR_GET_DEFAULT(showUsed_, false) };
    inline DescribeMonitorResourceQuotaAttributeRequest& setShowUsed(bool showUsed) { DARABONBA_PTR_SET_VALUE(showUsed_, showUsed) };


  protected:
    shared_ptr<string> regionId_ {};
    // Specifies whether to return information about used quotas. Valid values:
    // 
    // *   true (default): yes
    // *   false: no
    shared_ptr<bool> showUsed_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
