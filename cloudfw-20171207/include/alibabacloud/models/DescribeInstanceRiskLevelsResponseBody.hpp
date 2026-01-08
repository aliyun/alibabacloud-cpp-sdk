// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERISKLEVELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERISKLEVELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInstanceRiskLevelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceRiskLevelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceRisks, instanceRisks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRiskLevelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceRisks, instanceRisks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceRiskLevelsResponseBody() = default ;
    DescribeInstanceRiskLevelsResponseBody(const DescribeInstanceRiskLevelsResponseBody &) = default ;
    DescribeInstanceRiskLevelsResponseBody(DescribeInstanceRiskLevelsResponseBody &&) = default ;
    DescribeInstanceRiskLevelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceRiskLevelsResponseBody() = default ;
    DescribeInstanceRiskLevelsResponseBody& operator=(const DescribeInstanceRiskLevelsResponseBody &) = default ;
    DescribeInstanceRiskLevelsResponseBody& operator=(DescribeInstanceRiskLevelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceRisks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceRisks& obj) { 
        DARABONBA_PTR_TO_JSON(Details, details_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Level, level_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceRisks& obj) { 
        DARABONBA_PTR_FROM_JSON(Details, details_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
      };
      InstanceRisks() = default ;
      InstanceRisks(const InstanceRisks &) = default ;
      InstanceRisks(InstanceRisks &&) = default ;
      InstanceRisks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceRisks() = default ;
      InstanceRisks& operator=(const InstanceRisks &) = default ;
      InstanceRisks& operator=(InstanceRisks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Details : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Details& obj) { 
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Details& obj) { 
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Details() = default ;
        Details(const Details &) = default ;
        Details(Details &&) = default ;
        Details(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Details() = default ;
        Details& operator=(const Details &) = default ;
        Details& operator=(Details &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ip_ == nullptr
        && this->level_ == nullptr && this->type_ == nullptr; };
        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline Details& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline Details& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Details& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The IP addresses of servers.
        shared_ptr<string> ip_ {};
        // The risk levels. Valid values:
        // 
        // *   **medium**
        shared_ptr<string> level_ {};
        // The type.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->details_ == nullptr
        && this->instanceId_ == nullptr && this->level_ == nullptr; };
      // details Field Functions 
      bool hasDetails() const { return this->details_ != nullptr;};
      void deleteDetails() { this->details_ = nullptr;};
      inline const vector<InstanceRisks::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<InstanceRisks::Details>) };
      inline vector<InstanceRisks::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<InstanceRisks::Details>) };
      inline InstanceRisks& setDetails(const vector<InstanceRisks::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
      inline InstanceRisks& setDetails(vector<InstanceRisks::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceRisks& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline InstanceRisks& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    protected:
      // The risk levels of the Elastic Compute Service (ECS) instance.
      shared_ptr<vector<InstanceRisks::Details>> details_ {};
      // The instance ID of your Cloud Firewall.
      shared_ptr<string> instanceId_ {};
      // The risk levels. Valid values:
      // 
      // *   **medium**
      shared_ptr<string> level_ {};
    };

    virtual bool empty() const override { return this->instanceRisks_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceRisks Field Functions 
    bool hasInstanceRisks() const { return this->instanceRisks_ != nullptr;};
    void deleteInstanceRisks() { this->instanceRisks_ = nullptr;};
    inline const vector<DescribeInstanceRiskLevelsResponseBody::InstanceRisks> & getInstanceRisks() const { DARABONBA_PTR_GET_CONST(instanceRisks_, vector<DescribeInstanceRiskLevelsResponseBody::InstanceRisks>) };
    inline vector<DescribeInstanceRiskLevelsResponseBody::InstanceRisks> getInstanceRisks() { DARABONBA_PTR_GET(instanceRisks_, vector<DescribeInstanceRiskLevelsResponseBody::InstanceRisks>) };
    inline DescribeInstanceRiskLevelsResponseBody& setInstanceRisks(const vector<DescribeInstanceRiskLevelsResponseBody::InstanceRisks> & instanceRisks) { DARABONBA_PTR_SET_VALUE(instanceRisks_, instanceRisks) };
    inline DescribeInstanceRiskLevelsResponseBody& setInstanceRisks(vector<DescribeInstanceRiskLevelsResponseBody::InstanceRisks> && instanceRisks) { DARABONBA_PTR_SET_RVALUE(instanceRisks_, instanceRisks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceRiskLevelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the instances.
    shared_ptr<vector<DescribeInstanceRiskLevelsResponseBody::InstanceRisks>> instanceRisks_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
