// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEGRANTEDTOEXPRESSCONNECTROUTERREQUESTTAGMODELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEGRANTEDTOEXPRESSCONNECTROUTERREQUESTTAGMODELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class DescribeInstanceGrantedToExpressConnectRouterRequestTagModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceGrantedToExpressConnectRouterRequestTagModels& obj) { 
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceGrantedToExpressConnectRouterRequestTagModels& obj) { 
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
    };
    DescribeInstanceGrantedToExpressConnectRouterRequestTagModels() = default ;
    DescribeInstanceGrantedToExpressConnectRouterRequestTagModels(const DescribeInstanceGrantedToExpressConnectRouterRequestTagModels &) = default ;
    DescribeInstanceGrantedToExpressConnectRouterRequestTagModels(DescribeInstanceGrantedToExpressConnectRouterRequestTagModels &&) = default ;
    DescribeInstanceGrantedToExpressConnectRouterRequestTagModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceGrantedToExpressConnectRouterRequestTagModels() = default ;
    DescribeInstanceGrantedToExpressConnectRouterRequestTagModels& operator=(const DescribeInstanceGrantedToExpressConnectRouterRequestTagModels &) = default ;
    DescribeInstanceGrantedToExpressConnectRouterRequestTagModels& operator=(DescribeInstanceGrantedToExpressConnectRouterRequestTagModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagKey_ == nullptr
        && return this->tagValue_ == nullptr; };
    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterRequestTagModels& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterRequestTagModels& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    // The tag key. You can specify up to 20 tag keys. The tag key cannot be an empty string.
    // 
    // The tag key can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag key cannot start with `acs:` or `aliyun`.
    std::shared_ptr<string> tagKey_ = nullptr;
    // The tag value. You can specify up to 20 tag values. The tag value cannot be an empty string.
    // 
    // The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag value cannot start with `acs:` or `aliyun`.
    std::shared_ptr<string> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
