// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBINSTANCERELATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBINSTANCERELATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebInstanceRelationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebInstanceRelationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WebInstanceRelations, webInstanceRelations_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebInstanceRelationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WebInstanceRelations, webInstanceRelations_);
    };
    DescribeWebInstanceRelationsResponseBody() = default ;
    DescribeWebInstanceRelationsResponseBody(const DescribeWebInstanceRelationsResponseBody &) = default ;
    DescribeWebInstanceRelationsResponseBody(DescribeWebInstanceRelationsResponseBody &&) = default ;
    DescribeWebInstanceRelationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebInstanceRelationsResponseBody() = default ;
    DescribeWebInstanceRelationsResponseBody& operator=(const DescribeWebInstanceRelationsResponseBody &) = default ;
    DescribeWebInstanceRelationsResponseBody& operator=(DescribeWebInstanceRelationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WebInstanceRelations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WebInstanceRelations& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(InstanceDetails, instanceDetails_);
      };
      friend void from_json(const Darabonba::Json& j, WebInstanceRelations& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(InstanceDetails, instanceDetails_);
      };
      WebInstanceRelations() = default ;
      WebInstanceRelations(const WebInstanceRelations &) = default ;
      WebInstanceRelations(WebInstanceRelations &&) = default ;
      WebInstanceRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WebInstanceRelations() = default ;
      WebInstanceRelations& operator=(const WebInstanceRelations &) = default ;
      WebInstanceRelations& operator=(WebInstanceRelations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceDetails& obj) { 
          DARABONBA_PTR_TO_JSON(EipList, eipList_);
          DARABONBA_PTR_TO_JSON(FunctionVersion, functionVersion_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(EipList, eipList_);
          DARABONBA_PTR_FROM_JSON(FunctionVersion, functionVersion_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        };
        InstanceDetails() = default ;
        InstanceDetails(const InstanceDetails &) = default ;
        InstanceDetails(InstanceDetails &&) = default ;
        InstanceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceDetails() = default ;
        InstanceDetails& operator=(const InstanceDetails &) = default ;
        InstanceDetails& operator=(InstanceDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eipList_ == nullptr
        && this->functionVersion_ == nullptr && this->instanceId_ == nullptr; };
        // eipList Field Functions 
        bool hasEipList() const { return this->eipList_ != nullptr;};
        void deleteEipList() { this->eipList_ = nullptr;};
        inline const vector<string> & getEipList() const { DARABONBA_PTR_GET_CONST(eipList_, vector<string>) };
        inline vector<string> getEipList() { DARABONBA_PTR_GET(eipList_, vector<string>) };
        inline InstanceDetails& setEipList(const vector<string> & eipList) { DARABONBA_PTR_SET_VALUE(eipList_, eipList) };
        inline InstanceDetails& setEipList(vector<string> && eipList) { DARABONBA_PTR_SET_RVALUE(eipList_, eipList) };


        // functionVersion Field Functions 
        bool hasFunctionVersion() const { return this->functionVersion_ != nullptr;};
        void deleteFunctionVersion() { this->functionVersion_ = nullptr;};
        inline string getFunctionVersion() const { DARABONBA_PTR_GET_DEFAULT(functionVersion_, "") };
        inline InstanceDetails& setFunctionVersion(string functionVersion) { DARABONBA_PTR_SET_VALUE(functionVersion_, functionVersion) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceDetails& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      protected:
        // The IP addresses of the instance.
        shared_ptr<vector<string>> eipList_ {};
        // The function plan of the instance. Valid values:
        // 
        // *   **default**: Standard function plan
        // *   **enhance**: Enhanced function plan
        shared_ptr<string> functionVersion_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
      };

      virtual bool empty() const override { return this->domain_ == nullptr
        && this->instanceDetails_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline WebInstanceRelations& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // instanceDetails Field Functions 
      bool hasInstanceDetails() const { return this->instanceDetails_ != nullptr;};
      void deleteInstanceDetails() { this->instanceDetails_ = nullptr;};
      inline const vector<WebInstanceRelations::InstanceDetails> & getInstanceDetails() const { DARABONBA_PTR_GET_CONST(instanceDetails_, vector<WebInstanceRelations::InstanceDetails>) };
      inline vector<WebInstanceRelations::InstanceDetails> getInstanceDetails() { DARABONBA_PTR_GET(instanceDetails_, vector<WebInstanceRelations::InstanceDetails>) };
      inline WebInstanceRelations& setInstanceDetails(const vector<WebInstanceRelations::InstanceDetails> & instanceDetails) { DARABONBA_PTR_SET_VALUE(instanceDetails_, instanceDetails) };
      inline WebInstanceRelations& setInstanceDetails(vector<WebInstanceRelations::InstanceDetails> && instanceDetails) { DARABONBA_PTR_SET_RVALUE(instanceDetails_, instanceDetails) };


    protected:
      // The domain name of the website.
      shared_ptr<string> domain_ {};
      // The information about the instance to which a website service is added.
      shared_ptr<vector<WebInstanceRelations::InstanceDetails>> instanceDetails_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->webInstanceRelations_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebInstanceRelationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // webInstanceRelations Field Functions 
    bool hasWebInstanceRelations() const { return this->webInstanceRelations_ != nullptr;};
    void deleteWebInstanceRelations() { this->webInstanceRelations_ = nullptr;};
    inline const vector<DescribeWebInstanceRelationsResponseBody::WebInstanceRelations> & getWebInstanceRelations() const { DARABONBA_PTR_GET_CONST(webInstanceRelations_, vector<DescribeWebInstanceRelationsResponseBody::WebInstanceRelations>) };
    inline vector<DescribeWebInstanceRelationsResponseBody::WebInstanceRelations> getWebInstanceRelations() { DARABONBA_PTR_GET(webInstanceRelations_, vector<DescribeWebInstanceRelationsResponseBody::WebInstanceRelations>) };
    inline DescribeWebInstanceRelationsResponseBody& setWebInstanceRelations(const vector<DescribeWebInstanceRelationsResponseBody::WebInstanceRelations> & webInstanceRelations) { DARABONBA_PTR_SET_VALUE(webInstanceRelations_, webInstanceRelations) };
    inline DescribeWebInstanceRelationsResponseBody& setWebInstanceRelations(vector<DescribeWebInstanceRelationsResponseBody::WebInstanceRelations> && webInstanceRelations) { DARABONBA_PTR_SET_RVALUE(webInstanceRelations_, webInstanceRelations) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the instances to which a website service is added.
    shared_ptr<vector<DescribeWebInstanceRelationsResponseBody::WebInstanceRelations>> webInstanceRelations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
