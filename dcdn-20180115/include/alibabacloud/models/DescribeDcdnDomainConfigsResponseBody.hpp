// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCONFIGSRESPONSEBODY_HPP_
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
  class DescribeDcdnDomainConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfigs, domainConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfigs, domainConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnDomainConfigsResponseBody() = default ;
    DescribeDcdnDomainConfigsResponseBody(const DescribeDcdnDomainConfigsResponseBody &) = default ;
    DescribeDcdnDomainConfigsResponseBody(DescribeDcdnDomainConfigsResponseBody &&) = default ;
    DescribeDcdnDomainConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainConfigsResponseBody() = default ;
    DescribeDcdnDomainConfigsResponseBody& operator=(const DescribeDcdnDomainConfigsResponseBody &) = default ;
    DescribeDcdnDomainConfigsResponseBody& operator=(DescribeDcdnDomainConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(DomainConfig, domainConfig_);
      };
      friend void from_json(const Darabonba::Json& j, DomainConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainConfig, domainConfig_);
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
      class DomainConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(FunctionArgs, functionArgs_);
          DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DomainConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(FunctionArgs, functionArgs_);
          DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DomainConfig() = default ;
        DomainConfig(const DomainConfig &) = default ;
        DomainConfig(DomainConfig &&) = default ;
        DomainConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainConfig() = default ;
        DomainConfig& operator=(const DomainConfig &) = default ;
        DomainConfig& operator=(DomainConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FunctionArgs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FunctionArgs& obj) { 
            DARABONBA_PTR_TO_JSON(FunctionArg, functionArg_);
          };
          friend void from_json(const Darabonba::Json& j, FunctionArgs& obj) { 
            DARABONBA_PTR_FROM_JSON(FunctionArg, functionArg_);
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
          class FunctionArg : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FunctionArg& obj) { 
              DARABONBA_PTR_TO_JSON(ArgName, argName_);
              DARABONBA_PTR_TO_JSON(ArgValue, argValue_);
            };
            friend void from_json(const Darabonba::Json& j, FunctionArg& obj) { 
              DARABONBA_PTR_FROM_JSON(ArgName, argName_);
              DARABONBA_PTR_FROM_JSON(ArgValue, argValue_);
            };
            FunctionArg() = default ;
            FunctionArg(const FunctionArg &) = default ;
            FunctionArg(FunctionArg &&) = default ;
            FunctionArg(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FunctionArg() = default ;
            FunctionArg& operator=(const FunctionArg &) = default ;
            FunctionArg& operator=(FunctionArg &&) = default ;
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
            inline FunctionArg& setArgName(string argName) { DARABONBA_PTR_SET_VALUE(argName_, argName) };


            // argValue Field Functions 
            bool hasArgValue() const { return this->argValue_ != nullptr;};
            void deleteArgValue() { this->argValue_ = nullptr;};
            inline string getArgValue() const { DARABONBA_PTR_GET_DEFAULT(argValue_, "") };
            inline FunctionArg& setArgValue(string argValue) { DARABONBA_PTR_SET_VALUE(argValue_, argValue) };


          protected:
            // The name of the configuration.
            shared_ptr<string> argName_ {};
            // The value of the configuration.
            shared_ptr<string> argValue_ {};
          };

          virtual bool empty() const override { return this->functionArg_ == nullptr; };
          // functionArg Field Functions 
          bool hasFunctionArg() const { return this->functionArg_ != nullptr;};
          void deleteFunctionArg() { this->functionArg_ = nullptr;};
          inline const vector<FunctionArgs::FunctionArg> & getFunctionArg() const { DARABONBA_PTR_GET_CONST(functionArg_, vector<FunctionArgs::FunctionArg>) };
          inline vector<FunctionArgs::FunctionArg> getFunctionArg() { DARABONBA_PTR_GET(functionArg_, vector<FunctionArgs::FunctionArg>) };
          inline FunctionArgs& setFunctionArg(const vector<FunctionArgs::FunctionArg> & functionArg) { DARABONBA_PTR_SET_VALUE(functionArg_, functionArg) };
          inline FunctionArgs& setFunctionArg(vector<FunctionArgs::FunctionArg> && functionArg) { DARABONBA_PTR_SET_RVALUE(functionArg_, functionArg) };


        protected:
          shared_ptr<vector<FunctionArgs::FunctionArg>> functionArg_ {};
        };

        virtual bool empty() const override { return this->configId_ == nullptr
        && this->functionArgs_ == nullptr && this->functionName_ == nullptr && this->parentId_ == nullptr && this->status_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
        inline DomainConfig& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // functionArgs Field Functions 
        bool hasFunctionArgs() const { return this->functionArgs_ != nullptr;};
        void deleteFunctionArgs() { this->functionArgs_ = nullptr;};
        inline const DomainConfig::FunctionArgs & getFunctionArgs() const { DARABONBA_PTR_GET_CONST(functionArgs_, DomainConfig::FunctionArgs) };
        inline DomainConfig::FunctionArgs getFunctionArgs() { DARABONBA_PTR_GET(functionArgs_, DomainConfig::FunctionArgs) };
        inline DomainConfig& setFunctionArgs(const DomainConfig::FunctionArgs & functionArgs) { DARABONBA_PTR_SET_VALUE(functionArgs_, functionArgs) };
        inline DomainConfig& setFunctionArgs(DomainConfig::FunctionArgs && functionArgs) { DARABONBA_PTR_SET_RVALUE(functionArgs_, functionArgs) };


        // functionName Field Functions 
        bool hasFunctionName() const { return this->functionName_ != nullptr;};
        void deleteFunctionName() { this->functionName_ = nullptr;};
        inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
        inline DomainConfig& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
        inline DomainConfig& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DomainConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The ID of the configuration.
        shared_ptr<string> configId_ {};
        // The configurations of the features.
        shared_ptr<DomainConfig::FunctionArgs> functionArgs_ {};
        // The feature name.
        shared_ptr<string> functionName_ {};
        // The ID of the advanced condition configuration.
        shared_ptr<string> parentId_ {};
        // The status of the configuration. Valid values:
        // 
        // *   **success**: successful
        // *   **testing**: testing
        // *   **failed**: The configuration failed.
        // *   **configuring**: The configuration is in progress.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->domainConfig_ == nullptr; };
      // domainConfig Field Functions 
      bool hasDomainConfig() const { return this->domainConfig_ != nullptr;};
      void deleteDomainConfig() { this->domainConfig_ = nullptr;};
      inline const vector<DomainConfigs::DomainConfig> & getDomainConfig() const { DARABONBA_PTR_GET_CONST(domainConfig_, vector<DomainConfigs::DomainConfig>) };
      inline vector<DomainConfigs::DomainConfig> getDomainConfig() { DARABONBA_PTR_GET(domainConfig_, vector<DomainConfigs::DomainConfig>) };
      inline DomainConfigs& setDomainConfig(const vector<DomainConfigs::DomainConfig> & domainConfig) { DARABONBA_PTR_SET_VALUE(domainConfig_, domainConfig) };
      inline DomainConfigs& setDomainConfig(vector<DomainConfigs::DomainConfig> && domainConfig) { DARABONBA_PTR_SET_RVALUE(domainConfig_, domainConfig) };


    protected:
      shared_ptr<vector<DomainConfigs::DomainConfig>> domainConfig_ {};
    };

    virtual bool empty() const override { return this->domainConfigs_ == nullptr
        && this->requestId_ == nullptr; };
    // domainConfigs Field Functions 
    bool hasDomainConfigs() const { return this->domainConfigs_ != nullptr;};
    void deleteDomainConfigs() { this->domainConfigs_ = nullptr;};
    inline const DescribeDcdnDomainConfigsResponseBody::DomainConfigs & getDomainConfigs() const { DARABONBA_PTR_GET_CONST(domainConfigs_, DescribeDcdnDomainConfigsResponseBody::DomainConfigs) };
    inline DescribeDcdnDomainConfigsResponseBody::DomainConfigs getDomainConfigs() { DARABONBA_PTR_GET(domainConfigs_, DescribeDcdnDomainConfigsResponseBody::DomainConfigs) };
    inline DescribeDcdnDomainConfigsResponseBody& setDomainConfigs(const DescribeDcdnDomainConfigsResponseBody::DomainConfigs & domainConfigs) { DARABONBA_PTR_SET_VALUE(domainConfigs_, domainConfigs) };
    inline DescribeDcdnDomainConfigsResponseBody& setDomainConfigs(DescribeDcdnDomainConfigsResponseBody::DomainConfigs && domainConfigs) { DARABONBA_PTR_SET_RVALUE(domainConfigs_, domainConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configurations of the domain name.
    shared_ptr<DescribeDcdnDomainConfigsResponseBody::DomainConfigs> domainConfigs_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
