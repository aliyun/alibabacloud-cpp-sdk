// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDETAILSRESPONSEBODY_HPP_
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
  class DescribeInstanceDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceDetails, instanceDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceDetails, instanceDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceDetailsResponseBody() = default ;
    DescribeInstanceDetailsResponseBody(const DescribeInstanceDetailsResponseBody &) = default ;
    DescribeInstanceDetailsResponseBody(DescribeInstanceDetailsResponseBody &&) = default ;
    DescribeInstanceDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceDetailsResponseBody() = default ;
    DescribeInstanceDetailsResponseBody& operator=(const DescribeInstanceDetailsResponseBody &) = default ;
    DescribeInstanceDetailsResponseBody& operator=(DescribeInstanceDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceDetails& obj) { 
        DARABONBA_PTR_TO_JSON(EipInfoList, eipInfoList_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Line, line_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(EipInfoList, eipInfoList_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Line, line_);
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
      class EipInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EipInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(Eip, eip_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, EipInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(Eip, eip_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        EipInfoList() = default ;
        EipInfoList(const EipInfoList &) = default ;
        EipInfoList(EipInfoList &&) = default ;
        EipInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EipInfoList() = default ;
        EipInfoList& operator=(const EipInfoList &) = default ;
        EipInfoList& operator=(EipInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eip_ == nullptr
        && this->status_ == nullptr; };
        // eip Field Functions 
        bool hasEip() const { return this->eip_ != nullptr;};
        void deleteEip() { this->eip_ = nullptr;};
        inline string getEip() const { DARABONBA_PTR_GET_DEFAULT(eip_, "") };
        inline EipInfoList& setEip(string eip) { DARABONBA_PTR_SET_VALUE(eip_, eip) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline EipInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> eip_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->eipInfoList_ == nullptr
        && this->instanceId_ == nullptr && this->line_ == nullptr; };
      // eipInfoList Field Functions 
      bool hasEipInfoList() const { return this->eipInfoList_ != nullptr;};
      void deleteEipInfoList() { this->eipInfoList_ = nullptr;};
      inline const vector<InstanceDetails::EipInfoList> & getEipInfoList() const { DARABONBA_PTR_GET_CONST(eipInfoList_, vector<InstanceDetails::EipInfoList>) };
      inline vector<InstanceDetails::EipInfoList> getEipInfoList() { DARABONBA_PTR_GET(eipInfoList_, vector<InstanceDetails::EipInfoList>) };
      inline InstanceDetails& setEipInfoList(const vector<InstanceDetails::EipInfoList> & eipInfoList) { DARABONBA_PTR_SET_VALUE(eipInfoList_, eipInfoList) };
      inline InstanceDetails& setEipInfoList(vector<InstanceDetails::EipInfoList> && eipInfoList) { DARABONBA_PTR_SET_RVALUE(eipInfoList_, eipInfoList) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceDetails& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // line Field Functions 
      bool hasLine() const { return this->line_ != nullptr;};
      void deleteLine() { this->line_ = nullptr;};
      inline string getLine() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
      inline InstanceDetails& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


    protected:
      shared_ptr<vector<InstanceDetails::EipInfoList>> eipInfoList_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> line_ {};
    };

    virtual bool empty() const override { return this->instanceDetails_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceDetails Field Functions 
    bool hasInstanceDetails() const { return this->instanceDetails_ != nullptr;};
    void deleteInstanceDetails() { this->instanceDetails_ = nullptr;};
    inline const vector<DescribeInstanceDetailsResponseBody::InstanceDetails> & getInstanceDetails() const { DARABONBA_PTR_GET_CONST(instanceDetails_, vector<DescribeInstanceDetailsResponseBody::InstanceDetails>) };
    inline vector<DescribeInstanceDetailsResponseBody::InstanceDetails> getInstanceDetails() { DARABONBA_PTR_GET(instanceDetails_, vector<DescribeInstanceDetailsResponseBody::InstanceDetails>) };
    inline DescribeInstanceDetailsResponseBody& setInstanceDetails(const vector<DescribeInstanceDetailsResponseBody::InstanceDetails> & instanceDetails) { DARABONBA_PTR_SET_VALUE(instanceDetails_, instanceDetails) };
    inline DescribeInstanceDetailsResponseBody& setInstanceDetails(vector<DescribeInstanceDetailsResponseBody::InstanceDetails> && instanceDetails) { DARABONBA_PTR_SET_RVALUE(instanceDetails_, instanceDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeInstanceDetailsResponseBody::InstanceDetails>> instanceDetails_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
