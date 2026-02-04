// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDDOMAINCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDDOMAINCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeRDDomainConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRDDomainConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfigs, domainConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRDDomainConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfigs, domainConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRDDomainConfigResponseBody() = default ;
    DescribeRDDomainConfigResponseBody(const DescribeRDDomainConfigResponseBody &) = default ;
    DescribeRDDomainConfigResponseBody(DescribeRDDomainConfigResponseBody &&) = default ;
    DescribeRDDomainConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRDDomainConfigResponseBody() = default ;
    DescribeRDDomainConfigResponseBody& operator=(const DescribeRDDomainConfigResponseBody &) = default ;
    DescribeRDDomainConfigResponseBody& operator=(DescribeRDDomainConfigResponseBody &&) = default ;
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
        // The name of the configuration.
        shared_ptr<string> argName_ {};
        // The value of the configuration.
        shared_ptr<string> argValue_ {};
      };

      virtual bool empty() const override { return this->configId_ == nullptr
        && this->functionArgs_ == nullptr && this->functionName_ == nullptr && this->parentId_ == nullptr && this->status_ == nullptr; };
      // configId Field Functions 
      bool hasConfigId() const { return this->configId_ != nullptr;};
      void deleteConfigId() { this->configId_ = nullptr;};
      inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
      inline DomainConfigs& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


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
      // The ID of the configuration.
      shared_ptr<int64_t> configId_ {};
      // The configurations of the features.
      shared_ptr<vector<DomainConfigs::FunctionArgs>> functionArgs_ {};
      // The name of the feature.
      shared_ptr<string> functionName_ {};
      // The ID of the advanced condition configuration.
      shared_ptr<string> parentId_ {};
      // The status. Valid values:
      // 
      // *   **success**
      // *   **testing**
      // *   **failed**
      // *   **configuring**
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->domainConfigs_ == nullptr
        && this->requestId_ == nullptr; };
    // domainConfigs Field Functions 
    bool hasDomainConfigs() const { return this->domainConfigs_ != nullptr;};
    void deleteDomainConfigs() { this->domainConfigs_ = nullptr;};
    inline const vector<DescribeRDDomainConfigResponseBody::DomainConfigs> & getDomainConfigs() const { DARABONBA_PTR_GET_CONST(domainConfigs_, vector<DescribeRDDomainConfigResponseBody::DomainConfigs>) };
    inline vector<DescribeRDDomainConfigResponseBody::DomainConfigs> getDomainConfigs() { DARABONBA_PTR_GET(domainConfigs_, vector<DescribeRDDomainConfigResponseBody::DomainConfigs>) };
    inline DescribeRDDomainConfigResponseBody& setDomainConfigs(const vector<DescribeRDDomainConfigResponseBody::DomainConfigs> & domainConfigs) { DARABONBA_PTR_SET_VALUE(domainConfigs_, domainConfigs) };
    inline DescribeRDDomainConfigResponseBody& setDomainConfigs(vector<DescribeRDDomainConfigResponseBody::DomainConfigs> && domainConfigs) { DARABONBA_PTR_SET_RVALUE(domainConfigs_, domainConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRDDomainConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration of the domain name.
    shared_ptr<vector<DescribeRDDomainConfigResponseBody::DomainConfigs>> domainConfigs_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
