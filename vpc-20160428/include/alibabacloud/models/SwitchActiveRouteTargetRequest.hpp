// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHACTIVEROUTETARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHACTIVEROUTETARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class SwitchActiveRouteTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchActiveRouteTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RouteTargetGroupId, routeTargetGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchActiveRouteTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RouteTargetGroupId, routeTargetGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    SwitchActiveRouteTargetRequest() = default ;
    SwitchActiveRouteTargetRequest(const SwitchActiveRouteTargetRequest &) = default ;
    SwitchActiveRouteTargetRequest(SwitchActiveRouteTargetRequest &&) = default ;
    SwitchActiveRouteTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchActiveRouteTargetRequest() = default ;
    SwitchActiveRouteTargetRequest& operator=(const SwitchActiveRouteTargetRequest &) = default ;
    SwitchActiveRouteTargetRequest& operator=(SwitchActiveRouteTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the resource tag. Up to 20 tag keys are supported. If you need to pass this value, you cannot input an empty string.
      // 
      // Each tag key can have up to 128 characters and cannot start with `aliyun` or `acs:`. It also cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The value of the resource tag. Up to 20 tag values are supported. If you need to pass this value, you can input an empty string. A maximum of 128 characters is allowed. The value cannot start with `aliyun` or `acs:`, and it must not contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->regionId_ == nullptr && this->routeTargetGroupId_ == nullptr && this->tag_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SwitchActiveRouteTargetRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SwitchActiveRouteTargetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // routeTargetGroupId Field Functions 
    bool hasRouteTargetGroupId() const { return this->routeTargetGroupId_ != nullptr;};
    void deleteRouteTargetGroupId() { this->routeTargetGroupId_ = nullptr;};
    inline string getRouteTargetGroupId() const { DARABONBA_PTR_GET_DEFAULT(routeTargetGroupId_, "") };
    inline SwitchActiveRouteTargetRequest& setRouteTargetGroupId(string routeTargetGroupId) { DARABONBA_PTR_SET_VALUE(routeTargetGroupId_, routeTargetGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<SwitchActiveRouteTargetRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<SwitchActiveRouteTargetRequest::Tag>) };
    inline vector<SwitchActiveRouteTargetRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<SwitchActiveRouteTargetRequest::Tag>) };
    inline SwitchActiveRouteTargetRequest& setTag(const vector<SwitchActiveRouteTargetRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline SwitchActiveRouteTargetRequest& setTag(vector<SwitchActiveRouteTargetRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // Client token, used to ensure the idempotence of the request. Generate a unique value for this parameter from your client to ensure that it is unique across different requests. The ClientToken only supports ASCII characters. Note: If you do not specify this, the system will automatically use the RequestId of the API request as the ClientToken identifier. The RequestId may differ for each API request.
    shared_ptr<string> clientToken_ {};
    // The region ID where the RouteTargetGroup is located.
    // 
    // You can obtain the region ID by calling the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) API.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The instance ID of the RouteTargetGroup.
    // 
    // This parameter is required.
    shared_ptr<string> routeTargetGroupId_ {};
    // Resource tags.
    shared_ptr<vector<SwitchActiveRouteTargetRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
