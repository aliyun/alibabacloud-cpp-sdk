// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCEZONELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCEZONELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAccessInstanceZoneListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessInstanceZoneListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessInstanceType, accessInstanceType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessInstanceZoneListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessInstanceType, accessInstanceType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
    };
    DescribeAccessInstanceZoneListRequest() = default ;
    DescribeAccessInstanceZoneListRequest(const DescribeAccessInstanceZoneListRequest &) = default ;
    DescribeAccessInstanceZoneListRequest(DescribeAccessInstanceZoneListRequest &&) = default ;
    DescribeAccessInstanceZoneListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessInstanceZoneListRequest() = default ;
    DescribeAccessInstanceZoneListRequest& operator=(const DescribeAccessInstanceZoneListRequest &) = default ;
    DescribeAccessInstanceZoneListRequest& operator=(DescribeAccessInstanceZoneListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessInstanceType_ == nullptr
        && this->lang_ == nullptr && this->regionNo_ == nullptr; };
    // accessInstanceType Field Functions 
    bool hasAccessInstanceType() const { return this->accessInstanceType_ != nullptr;};
    void deleteAccessInstanceType() { this->accessInstanceType_ = nullptr;};
    inline string getAccessInstanceType() const { DARABONBA_PTR_GET_DEFAULT(accessInstanceType_, "") };
    inline DescribeAccessInstanceZoneListRequest& setAccessInstanceType(string accessInstanceType) { DARABONBA_PTR_SET_VALUE(accessInstanceType_, accessInstanceType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeAccessInstanceZoneListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeAccessInstanceZoneListRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


  protected:
    shared_ptr<string> accessInstanceType_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> regionNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
