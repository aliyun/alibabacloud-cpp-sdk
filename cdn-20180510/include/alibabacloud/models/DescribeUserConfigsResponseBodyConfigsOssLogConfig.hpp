// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERCONFIGSRESPONSEBODYCONFIGSOSSLOGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERCONFIGSRESPONSEBODYCONFIGSOSSLOGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeUserConfigsResponseBodyConfigsOssLogConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserConfigsResponseBodyConfigsOssLogConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserConfigsResponseBodyConfigsOssLogConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
    };
    DescribeUserConfigsResponseBodyConfigsOssLogConfig() = default ;
    DescribeUserConfigsResponseBodyConfigsOssLogConfig(const DescribeUserConfigsResponseBodyConfigsOssLogConfig &) = default ;
    DescribeUserConfigsResponseBodyConfigsOssLogConfig(DescribeUserConfigsResponseBodyConfigsOssLogConfig &&) = default ;
    DescribeUserConfigsResponseBodyConfigsOssLogConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserConfigsResponseBodyConfigsOssLogConfig() = default ;
    DescribeUserConfigsResponseBodyConfigsOssLogConfig& operator=(const DescribeUserConfigsResponseBodyConfigsOssLogConfig &) = default ;
    DescribeUserConfigsResponseBodyConfigsOssLogConfig& operator=(DescribeUserConfigsResponseBodyConfigsOssLogConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucket_ == nullptr
        && return this->enable_ == nullptr && return this->prefix_ == nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline DescribeUserConfigsResponseBodyConfigsOssLogConfig& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline DescribeUserConfigsResponseBodyConfigsOssLogConfig& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline DescribeUserConfigsResponseBodyConfigsOssLogConfig& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


  protected:
    // The name of the bucket.
    std::shared_ptr<string> bucket_ = nullptr;
    // Indicates whether the OSS bucket is enabled.
    std::shared_ptr<string> enable_ = nullptr;
    // The prefix.
    std::shared_ptr<string> prefix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
