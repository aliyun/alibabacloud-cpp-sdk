// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOCALITYSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOCALITYSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class DescribeLocalitySettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLocalitySettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLocalitySettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    DescribeLocalitySettingRequest() = default ;
    DescribeLocalitySettingRequest(const DescribeLocalitySettingRequest &) = default ;
    DescribeLocalitySettingRequest(DescribeLocalitySettingRequest &&) = default ;
    DescribeLocalitySettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLocalitySettingRequest() = default ;
    DescribeLocalitySettingRequest& operator=(const DescribeLocalitySettingRequest &) = default ;
    DescribeLocalitySettingRequest& operator=(DescribeLocalitySettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->namespaceId_ == nullptr && this->region_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeLocalitySettingRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline DescribeLocalitySettingRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLocalitySettingRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // The ID of the application. To obtain the application ID, call the ListApplication operation. For more information, see [ListApplication](https://help.aliyun.com/document_detail/423162.html).
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The ID of the microservices namespace.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    // The ID of the region.
    // 
    // This parameter is required.
    shared_ptr<string> region_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
