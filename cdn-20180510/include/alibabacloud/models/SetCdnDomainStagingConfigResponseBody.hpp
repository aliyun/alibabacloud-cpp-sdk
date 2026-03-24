// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCDNDOMAINSTAGINGCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETCDNDOMAINSTAGINGCONFIGRESPONSEBODY_HPP_
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
  class SetCdnDomainStagingConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetCdnDomainStagingConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfigList, domainConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetCdnDomainStagingConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfigList, domainConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetCdnDomainStagingConfigResponseBody() = default ;
    SetCdnDomainStagingConfigResponseBody(const SetCdnDomainStagingConfigResponseBody &) = default ;
    SetCdnDomainStagingConfigResponseBody(SetCdnDomainStagingConfigResponseBody &&) = default ;
    SetCdnDomainStagingConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetCdnDomainStagingConfigResponseBody() = default ;
    SetCdnDomainStagingConfigResponseBody& operator=(const SetCdnDomainStagingConfigResponseBody &) = default ;
    SetCdnDomainStagingConfigResponseBody& operator=(SetCdnDomainStagingConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigId, configId_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      };
      friend void from_json(const Darabonba::Json& j, DomainConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      };
      DomainConfigList() = default ;
      DomainConfigList(const DomainConfigList &) = default ;
      DomainConfigList(DomainConfigList &&) = default ;
      DomainConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainConfigList() = default ;
      DomainConfigList& operator=(const DomainConfigList &) = default ;
      DomainConfigList& operator=(DomainConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configId_ == nullptr
        && this->domainName_ == nullptr && this->functionName_ == nullptr; };
      // configId Field Functions 
      bool hasConfigId() const { return this->configId_ != nullptr;};
      void deleteConfigId() { this->configId_ = nullptr;};
      inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
      inline DomainConfigList& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline DomainConfigList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // functionName Field Functions 
      bool hasFunctionName() const { return this->functionName_ != nullptr;};
      void deleteFunctionName() { this->functionName_ = nullptr;};
      inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
      inline DomainConfigList& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    protected:
      // The ID of the configuration.
      shared_ptr<int64_t> configId_ {};
      // The domain name.
      shared_ptr<string> domainName_ {};
      // The name of the feature.
      shared_ptr<string> functionName_ {};
    };

    virtual bool empty() const override { return this->domainConfigList_ == nullptr
        && this->requestId_ == nullptr; };
    // domainConfigList Field Functions 
    bool hasDomainConfigList() const { return this->domainConfigList_ != nullptr;};
    void deleteDomainConfigList() { this->domainConfigList_ = nullptr;};
    inline const vector<SetCdnDomainStagingConfigResponseBody::DomainConfigList> & getDomainConfigList() const { DARABONBA_PTR_GET_CONST(domainConfigList_, vector<SetCdnDomainStagingConfigResponseBody::DomainConfigList>) };
    inline vector<SetCdnDomainStagingConfigResponseBody::DomainConfigList> getDomainConfigList() { DARABONBA_PTR_GET(domainConfigList_, vector<SetCdnDomainStagingConfigResponseBody::DomainConfigList>) };
    inline SetCdnDomainStagingConfigResponseBody& setDomainConfigList(const vector<SetCdnDomainStagingConfigResponseBody::DomainConfigList> & domainConfigList) { DARABONBA_PTR_SET_VALUE(domainConfigList_, domainConfigList) };
    inline SetCdnDomainStagingConfigResponseBody& setDomainConfigList(vector<SetCdnDomainStagingConfigResponseBody::DomainConfigList> && domainConfigList) { DARABONBA_PTR_SET_RVALUE(domainConfigList_, domainConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetCdnDomainStagingConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of domain configurations.
    shared_ptr<vector<SetCdnDomainStagingConfigResponseBody::DomainConfigList>> domainConfigList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
