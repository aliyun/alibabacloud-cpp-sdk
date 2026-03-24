// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeUserConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserConfigsResponseBody() = default ;
    DescribeUserConfigsResponseBody(const DescribeUserConfigsResponseBody &) = default ;
    DescribeUserConfigsResponseBody(DescribeUserConfigsResponseBody &&) = default ;
    DescribeUserConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserConfigsResponseBody() = default ;
    DescribeUserConfigsResponseBody& operator=(const DescribeUserConfigsResponseBody &) = default ;
    DescribeUserConfigsResponseBody& operator=(DescribeUserConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configs& obj) { 
        DARABONBA_PTR_TO_JSON(OssLogConfig, ossLogConfig_);
        DARABONBA_PTR_TO_JSON(WafConfig, wafConfig_);
      };
      friend void from_json(const Darabonba::Json& j, Configs& obj) { 
        DARABONBA_PTR_FROM_JSON(OssLogConfig, ossLogConfig_);
        DARABONBA_PTR_FROM_JSON(WafConfig, wafConfig_);
      };
      Configs() = default ;
      Configs(const Configs &) = default ;
      Configs(Configs &&) = default ;
      Configs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configs() = default ;
      Configs& operator=(const Configs &) = default ;
      Configs& operator=(Configs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WafConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WafConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Enable, enable_);
        };
        friend void from_json(const Darabonba::Json& j, WafConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
        };
        WafConfig() = default ;
        WafConfig(const WafConfig &) = default ;
        WafConfig(WafConfig &&) = default ;
        WafConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WafConfig() = default ;
        WafConfig& operator=(const WafConfig &) = default ;
        WafConfig& operator=(WafConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enable_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
        inline WafConfig& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      protected:
        // Indicates whether WAF is enabled.
        shared_ptr<string> enable_ {};
      };

      class OssLogConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OssLogConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Bucket, bucket_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(Prefix, prefix_);
        };
        friend void from_json(const Darabonba::Json& j, OssLogConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
        };
        OssLogConfig() = default ;
        OssLogConfig(const OssLogConfig &) = default ;
        OssLogConfig(OssLogConfig &&) = default ;
        OssLogConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OssLogConfig() = default ;
        OssLogConfig& operator=(const OssLogConfig &) = default ;
        OssLogConfig& operator=(OssLogConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bucket_ == nullptr
        && this->enable_ == nullptr && this->prefix_ == nullptr; };
        // bucket Field Functions 
        bool hasBucket() const { return this->bucket_ != nullptr;};
        void deleteBucket() { this->bucket_ = nullptr;};
        inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
        inline OssLogConfig& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
        inline OssLogConfig& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // prefix Field Functions 
        bool hasPrefix() const { return this->prefix_ != nullptr;};
        void deletePrefix() { this->prefix_ = nullptr;};
        inline string getPrefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
        inline OssLogConfig& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


      protected:
        // The name of the bucket.
        shared_ptr<string> bucket_ {};
        // Indicates whether the OSS bucket is enabled.
        shared_ptr<string> enable_ {};
        // The prefix.
        shared_ptr<string> prefix_ {};
      };

      virtual bool empty() const override { return this->ossLogConfig_ == nullptr
        && this->wafConfig_ == nullptr; };
      // ossLogConfig Field Functions 
      bool hasOssLogConfig() const { return this->ossLogConfig_ != nullptr;};
      void deleteOssLogConfig() { this->ossLogConfig_ = nullptr;};
      inline const Configs::OssLogConfig & getOssLogConfig() const { DARABONBA_PTR_GET_CONST(ossLogConfig_, Configs::OssLogConfig) };
      inline Configs::OssLogConfig getOssLogConfig() { DARABONBA_PTR_GET(ossLogConfig_, Configs::OssLogConfig) };
      inline Configs& setOssLogConfig(const Configs::OssLogConfig & ossLogConfig) { DARABONBA_PTR_SET_VALUE(ossLogConfig_, ossLogConfig) };
      inline Configs& setOssLogConfig(Configs::OssLogConfig && ossLogConfig) { DARABONBA_PTR_SET_RVALUE(ossLogConfig_, ossLogConfig) };


      // wafConfig Field Functions 
      bool hasWafConfig() const { return this->wafConfig_ != nullptr;};
      void deleteWafConfig() { this->wafConfig_ = nullptr;};
      inline const Configs::WafConfig & getWafConfig() const { DARABONBA_PTR_GET_CONST(wafConfig_, Configs::WafConfig) };
      inline Configs::WafConfig getWafConfig() { DARABONBA_PTR_GET(wafConfig_, Configs::WafConfig) };
      inline Configs& setWafConfig(const Configs::WafConfig & wafConfig) { DARABONBA_PTR_SET_VALUE(wafConfig_, wafConfig) };
      inline Configs& setWafConfig(Configs::WafConfig && wafConfig) { DARABONBA_PTR_SET_RVALUE(wafConfig_, wafConfig) };


    protected:
      // The configurations of Object Storage Service (OSS).
      shared_ptr<Configs::OssLogConfig> ossLogConfig_ {};
      // The configurations of Web Application Firewall (WAF).
      shared_ptr<Configs::WafConfig> wafConfig_ {};
    };

    virtual bool empty() const override { return this->configs_ == nullptr
        && this->requestId_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const DescribeUserConfigsResponseBody::Configs & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, DescribeUserConfigsResponseBody::Configs) };
    inline DescribeUserConfigsResponseBody::Configs getConfigs() { DARABONBA_PTR_GET(configs_, DescribeUserConfigsResponseBody::Configs) };
    inline DescribeUserConfigsResponseBody& setConfigs(const DescribeUserConfigsResponseBody::Configs & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline DescribeUserConfigsResponseBody& setConfigs(DescribeUserConfigsResponseBody::Configs && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configurations of the specified feature.
    shared_ptr<DescribeUserConfigsResponseBody::Configs> configs_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
