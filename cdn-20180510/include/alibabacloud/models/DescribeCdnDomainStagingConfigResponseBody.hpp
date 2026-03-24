// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINSTAGINGCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINSTAGINGCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDomainStagingConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainStagingConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfigs, domainConfigs_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainStagingConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfigs, domainConfigs_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnDomainStagingConfigResponseBody() = default ;
    DescribeCdnDomainStagingConfigResponseBody(const DescribeCdnDomainStagingConfigResponseBody &) = default ;
    DescribeCdnDomainStagingConfigResponseBody(DescribeCdnDomainStagingConfigResponseBody &&) = default ;
    DescribeCdnDomainStagingConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainStagingConfigResponseBody() = default ;
    DescribeCdnDomainStagingConfigResponseBody& operator=(const DescribeCdnDomainStagingConfigResponseBody &) = default ;
    DescribeCdnDomainStagingConfigResponseBody& operator=(DescribeCdnDomainStagingConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigId, configId_);
        DARABONBA_PTR_TO_JSON(FunctionArgs, functionArgs_);
        DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
        DARABONBA_PTR_TO_JSON(ParentId, parentId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DomainConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
        DARABONBA_PTR_FROM_JSON(FunctionArgs, functionArgs_);
        DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
        DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DomainConfigs() = default ;
      DomainConfigs(const DomainConfigs &) = default ;
      DomainConfigs(DomainConfigs &&) = default ;
      DomainConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainConfigs() = default ;
      DomainConfigs& operator=(const DomainConfigs &) = default ;
      DomainConfigs& operator=(DomainConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FunctionArgs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FunctionArgs& obj) { 
          DARABONBA_PTR_TO_JSON(ArgName, argName_);
          DARABONBA_PTR_TO_JSON(ArgValue, argValue_);
        };
        friend void from_json(const Darabonba::Json& j, FunctionArgs& obj) { 
          DARABONBA_PTR_FROM_JSON(ArgName, argName_);
          DARABONBA_PTR_FROM_JSON(ArgValue, argValue_);
        };
        FunctionArgs() = default ;
        FunctionArgs(const FunctionArgs &) = default ;
        FunctionArgs(FunctionArgs &&) = default ;
        FunctionArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FunctionArgs() = default ;
        FunctionArgs& operator=(const FunctionArgs &) = default ;
        FunctionArgs& operator=(FunctionArgs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->argName_ == nullptr
        && this->argValue_ == nullptr; };
        // argName Field Functions 
        bool hasArgName() const { return this->argName_ != nullptr;};
        void deleteArgName() { this->argName_ = nullptr;};
        inline string getArgName() const { DARABONBA_PTR_GET_DEFAULT(argName_, "") };
        inline FunctionArgs& setArgName(string argName) { DARABONBA_PTR_SET_VALUE(argName_, argName) };


        // argValue Field Functions 
        bool hasArgValue() const { return this->argValue_ != nullptr;};
        void deleteArgValue() { this->argValue_ = nullptr;};
        inline string getArgValue() const { DARABONBA_PTR_GET_DEFAULT(argValue_, "") };
        inline FunctionArgs& setArgValue(string argValue) { DARABONBA_PTR_SET_VALUE(argValue_, argValue) };


      protected:
        // The configuration name.
        shared_ptr<string> argName_ {};
        // The configuration value.
        shared_ptr<string> argValue_ {};
      };

      virtual bool empty() const override { return this->configId_ == nullptr
        && this->functionArgs_ == nullptr && this->functionName_ == nullptr && this->parentId_ == nullptr && this->status_ == nullptr; };
      // configId Field Functions 
      bool hasConfigId() const { return this->configId_ != nullptr;};
      void deleteConfigId() { this->configId_ = nullptr;};
      inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
      inline DomainConfigs& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


      // functionArgs Field Functions 
      bool hasFunctionArgs() const { return this->functionArgs_ != nullptr;};
      void deleteFunctionArgs() { this->functionArgs_ = nullptr;};
      inline const vector<DomainConfigs::FunctionArgs> & getFunctionArgs() const { DARABONBA_PTR_GET_CONST(functionArgs_, vector<DomainConfigs::FunctionArgs>) };
      inline vector<DomainConfigs::FunctionArgs> getFunctionArgs() { DARABONBA_PTR_GET(functionArgs_, vector<DomainConfigs::FunctionArgs>) };
      inline DomainConfigs& setFunctionArgs(const vector<DomainConfigs::FunctionArgs> & functionArgs) { DARABONBA_PTR_SET_VALUE(functionArgs_, functionArgs) };
      inline DomainConfigs& setFunctionArgs(vector<DomainConfigs::FunctionArgs> && functionArgs) { DARABONBA_PTR_SET_RVALUE(functionArgs_, functionArgs) };


      // functionName Field Functions 
      bool hasFunctionName() const { return this->functionName_ != nullptr;};
      void deleteFunctionName() { this->functionName_ = nullptr;};
      inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
      inline DomainConfigs& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
      inline DomainConfigs& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DomainConfigs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The configuration ID.
      shared_ptr<string> configId_ {};
      // The description of each feature.
      shared_ptr<vector<DomainConfigs::FunctionArgs>> functionArgs_ {};
      // The feature name.
      shared_ptr<string> functionName_ {};
      // The rule condition ID. This parameter is optional. To create a rule condition, you can configure the **condition** feature that is described in the [Parameters for configuring features for domain names](https://help.aliyun.com/document_detail/388460.html) topic. A rule condition can identify parameters that are included in requests and filter requests based on the identified parameters. Each rule condition has a [ConfigId](https://help.aliyun.com/document_detail/388994.html). You can reference ConfigId instead of ParentId in other features. This way, you can combine rule conditions and features for flexible configurations. For more information, see [BatchSetCdnDomainConfig](https://help.aliyun.com/document_detail/90915.html) or ParentId configuration example in this topic.
      shared_ptr<string> parentId_ {};
      // The configuration status. Valid values:
      // 
      // *   **testing**
      // *   **configuring**
      // *   **success**
      // *   **failed**
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->domainConfigs_ == nullptr
        && this->domainName_ == nullptr && this->requestId_ == nullptr; };
    // domainConfigs Field Functions 
    bool hasDomainConfigs() const { return this->domainConfigs_ != nullptr;};
    void deleteDomainConfigs() { this->domainConfigs_ = nullptr;};
    inline const vector<DescribeCdnDomainStagingConfigResponseBody::DomainConfigs> & getDomainConfigs() const { DARABONBA_PTR_GET_CONST(domainConfigs_, vector<DescribeCdnDomainStagingConfigResponseBody::DomainConfigs>) };
    inline vector<DescribeCdnDomainStagingConfigResponseBody::DomainConfigs> getDomainConfigs() { DARABONBA_PTR_GET(domainConfigs_, vector<DescribeCdnDomainStagingConfigResponseBody::DomainConfigs>) };
    inline DescribeCdnDomainStagingConfigResponseBody& setDomainConfigs(const vector<DescribeCdnDomainStagingConfigResponseBody::DomainConfigs> & domainConfigs) { DARABONBA_PTR_SET_VALUE(domainConfigs_, domainConfigs) };
    inline DescribeCdnDomainStagingConfigResponseBody& setDomainConfigs(vector<DescribeCdnDomainStagingConfigResponseBody::DomainConfigs> && domainConfigs) { DARABONBA_PTR_SET_RVALUE(domainConfigs_, domainConfigs) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeCdnDomainStagingConfigResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnDomainStagingConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The domain name configurations.
    shared_ptr<vector<DescribeCdnDomainStagingConfigResponseBody::DomainConfigs>> domainConfigs_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
