// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBLELAYER7INSTANCERELATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBLELAYER7INSTANCERELATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribleLayer7InstanceRelationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribleLayer7InstanceRelationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Layer7InstanceRelations, layer7InstanceRelations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribleLayer7InstanceRelationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Layer7InstanceRelations, layer7InstanceRelations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribleLayer7InstanceRelationsResponseBody() = default ;
    DescribleLayer7InstanceRelationsResponseBody(const DescribleLayer7InstanceRelationsResponseBody &) = default ;
    DescribleLayer7InstanceRelationsResponseBody(DescribleLayer7InstanceRelationsResponseBody &&) = default ;
    DescribleLayer7InstanceRelationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribleLayer7InstanceRelationsResponseBody() = default ;
    DescribleLayer7InstanceRelationsResponseBody& operator=(const DescribleLayer7InstanceRelationsResponseBody &) = default ;
    DescribleLayer7InstanceRelationsResponseBody& operator=(DescribleLayer7InstanceRelationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Layer7InstanceRelations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Layer7InstanceRelations& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(InstanceDetails, instanceDetails_);
      };
      friend void from_json(const Darabonba::Json& j, Layer7InstanceRelations& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(InstanceDetails, instanceDetails_);
      };
      Layer7InstanceRelations() = default ;
      Layer7InstanceRelations(const Layer7InstanceRelations &) = default ;
      Layer7InstanceRelations(Layer7InstanceRelations &&) = default ;
      Layer7InstanceRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Layer7InstanceRelations() = default ;
      Layer7InstanceRelations& operator=(const Layer7InstanceRelations &) = default ;
      Layer7InstanceRelations& operator=(Layer7InstanceRelations &&) = default ;
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
          DARABONBA_PTR_TO_JSON(IpMode, ipMode_);
          DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(EipList, eipList_);
          DARABONBA_PTR_FROM_JSON(FunctionVersion, functionVersion_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(IpMode, ipMode_);
          DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
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
        && this->functionVersion_ == nullptr && this->instanceId_ == nullptr && this->ipMode_ == nullptr && this->ipVersion_ == nullptr; };
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


        // ipMode Field Functions 
        bool hasIpMode() const { return this->ipMode_ != nullptr;};
        void deleteIpMode() { this->ipMode_ = nullptr;};
        inline string getIpMode() const { DARABONBA_PTR_GET_DEFAULT(ipMode_, "") };
        inline InstanceDetails& setIpMode(string ipMode) { DARABONBA_PTR_SET_VALUE(ipMode_, ipMode) };


        // ipVersion Field Functions 
        bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
        void deleteIpVersion() { this->ipVersion_ = nullptr;};
        inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
        inline InstanceDetails& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


      protected:
        shared_ptr<vector<string>> eipList_ {};
        shared_ptr<string> functionVersion_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> ipMode_ {};
        shared_ptr<string> ipVersion_ {};
      };

      virtual bool empty() const override { return this->domain_ == nullptr
        && this->instanceDetails_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Layer7InstanceRelations& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // instanceDetails Field Functions 
      bool hasInstanceDetails() const { return this->instanceDetails_ != nullptr;};
      void deleteInstanceDetails() { this->instanceDetails_ = nullptr;};
      inline const vector<Layer7InstanceRelations::InstanceDetails> & getInstanceDetails() const { DARABONBA_PTR_GET_CONST(instanceDetails_, vector<Layer7InstanceRelations::InstanceDetails>) };
      inline vector<Layer7InstanceRelations::InstanceDetails> getInstanceDetails() { DARABONBA_PTR_GET(instanceDetails_, vector<Layer7InstanceRelations::InstanceDetails>) };
      inline Layer7InstanceRelations& setInstanceDetails(const vector<Layer7InstanceRelations::InstanceDetails> & instanceDetails) { DARABONBA_PTR_SET_VALUE(instanceDetails_, instanceDetails) };
      inline Layer7InstanceRelations& setInstanceDetails(vector<Layer7InstanceRelations::InstanceDetails> && instanceDetails) { DARABONBA_PTR_SET_RVALUE(instanceDetails_, instanceDetails) };


    protected:
      shared_ptr<string> domain_ {};
      shared_ptr<vector<Layer7InstanceRelations::InstanceDetails>> instanceDetails_ {};
    };

    virtual bool empty() const override { return this->layer7InstanceRelations_ == nullptr
        && this->requestId_ == nullptr; };
    // layer7InstanceRelations Field Functions 
    bool hasLayer7InstanceRelations() const { return this->layer7InstanceRelations_ != nullptr;};
    void deleteLayer7InstanceRelations() { this->layer7InstanceRelations_ = nullptr;};
    inline const vector<DescribleLayer7InstanceRelationsResponseBody::Layer7InstanceRelations> & getLayer7InstanceRelations() const { DARABONBA_PTR_GET_CONST(layer7InstanceRelations_, vector<DescribleLayer7InstanceRelationsResponseBody::Layer7InstanceRelations>) };
    inline vector<DescribleLayer7InstanceRelationsResponseBody::Layer7InstanceRelations> getLayer7InstanceRelations() { DARABONBA_PTR_GET(layer7InstanceRelations_, vector<DescribleLayer7InstanceRelationsResponseBody::Layer7InstanceRelations>) };
    inline DescribleLayer7InstanceRelationsResponseBody& setLayer7InstanceRelations(const vector<DescribleLayer7InstanceRelationsResponseBody::Layer7InstanceRelations> & layer7InstanceRelations) { DARABONBA_PTR_SET_VALUE(layer7InstanceRelations_, layer7InstanceRelations) };
    inline DescribleLayer7InstanceRelationsResponseBody& setLayer7InstanceRelations(vector<DescribleLayer7InstanceRelationsResponseBody::Layer7InstanceRelations> && layer7InstanceRelations) { DARABONBA_PTR_SET_RVALUE(layer7InstanceRelations_, layer7InstanceRelations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribleLayer7InstanceRelationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribleLayer7InstanceRelationsResponseBody::Layer7InstanceRelations>> layer7InstanceRelations_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
