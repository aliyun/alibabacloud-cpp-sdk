// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKREACHABLEANALYSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKREACHABLEANALYSISREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class CreateNetworkReachableAnalysisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkReachableAnalysisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkPathId, networkPathId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkReachableAnalysisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkPathId, networkPathId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateNetworkReachableAnalysisRequest() = default ;
    CreateNetworkReachableAnalysisRequest(const CreateNetworkReachableAnalysisRequest &) = default ;
    CreateNetworkReachableAnalysisRequest(CreateNetworkReachableAnalysisRequest &&) = default ;
    CreateNetworkReachableAnalysisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkReachableAnalysisRequest() = default ;
    CreateNetworkReachableAnalysisRequest& operator=(const CreateNetworkReachableAnalysisRequest &) = default ;
    CreateNetworkReachableAnalysisRequest& operator=(CreateNetworkReachableAnalysisRequest &&) = default ;
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
      // The key of the tag to add to the resource. The tag key can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag key cannot start with `acs:` or `aliyun`.
      // 
      // You can add up to 20 tags in each call.
      shared_ptr<string> key_ {};
      // The value of the tag to add to the resource. The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag value cannot start with `acs:` or `aliyun`. The tag value can be an empty string.
      // 
      // You can add up to 20 tag values in each call.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->networkPathId_ == nullptr
        && this->regionId_ == nullptr && this->tag_ == nullptr; };
    // networkPathId Field Functions 
    bool hasNetworkPathId() const { return this->networkPathId_ != nullptr;};
    void deleteNetworkPathId() { this->networkPathId_ = nullptr;};
    inline string getNetworkPathId() const { DARABONBA_PTR_GET_DEFAULT(networkPathId_, "") };
    inline CreateNetworkReachableAnalysisRequest& setNetworkPathId(string networkPathId) { DARABONBA_PTR_SET_VALUE(networkPathId_, networkPathId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateNetworkReachableAnalysisRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateNetworkReachableAnalysisRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateNetworkReachableAnalysisRequest::Tag>) };
    inline vector<CreateNetworkReachableAnalysisRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateNetworkReachableAnalysisRequest::Tag>) };
    inline CreateNetworkReachableAnalysisRequest& setTag(const vector<CreateNetworkReachableAnalysisRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateNetworkReachableAnalysisRequest& setTag(vector<CreateNetworkReachableAnalysisRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The ID of the network path. You can call the [CreateNetworkPath](https://help.aliyun.com/document_detail/2366522.html) operation to obtain the ID of the network path.
    // 
    // This parameter is required.
    shared_ptr<string> networkPathId_ {};
    // The ID of the region for which you want to create a task for analyzing network reachability.
    shared_ptr<string> regionId_ {};
    // The tags to add to the resource.
    shared_ptr<vector<CreateNetworkReachableAnalysisRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
