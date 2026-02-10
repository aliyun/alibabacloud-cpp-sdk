// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERISKLEVELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERISKLEVELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListInstanceRiskLevelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceRiskLevelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceRiskLevels, instanceRiskLevels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceRiskLevelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceRiskLevels, instanceRiskLevels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInstanceRiskLevelsResponseBody() = default ;
    ListInstanceRiskLevelsResponseBody(const ListInstanceRiskLevelsResponseBody &) = default ;
    ListInstanceRiskLevelsResponseBody(ListInstanceRiskLevelsResponseBody &&) = default ;
    ListInstanceRiskLevelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceRiskLevelsResponseBody() = default ;
    ListInstanceRiskLevelsResponseBody& operator=(const ListInstanceRiskLevelsResponseBody &) = default ;
    ListInstanceRiskLevelsResponseBody& operator=(ListInstanceRiskLevelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceRiskLevels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceRiskLevels& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceRiskLevels& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      InstanceRiskLevels() = default ;
      InstanceRiskLevels(const InstanceRiskLevels &) = default ;
      InstanceRiskLevels(InstanceRiskLevels &&) = default ;
      InstanceRiskLevels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceRiskLevels() = default ;
      InstanceRiskLevels& operator=(const InstanceRiskLevels &) = default ;
      InstanceRiskLevels& operator=(InstanceRiskLevels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->level_ == nullptr && this->uuid_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceRiskLevels& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline InstanceRiskLevels& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline InstanceRiskLevels& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The ID of the server.
      shared_ptr<string> instanceId_ {};
      // The risk level. Valid values:
      // 
      // *   **high**
      // *   **medium**
      // *   **low**
      // *   **none**
      shared_ptr<string> level_ {};
      // The UUID of the server for which you want to modify the defense rule. You can call the [DescribeCloudCenterInstances](https://help.aliyun.com/document_detail/141932.html) operation to query the UUIDs of servers.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->instanceRiskLevels_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceRiskLevels Field Functions 
    bool hasInstanceRiskLevels() const { return this->instanceRiskLevels_ != nullptr;};
    void deleteInstanceRiskLevels() { this->instanceRiskLevels_ = nullptr;};
    inline const vector<ListInstanceRiskLevelsResponseBody::InstanceRiskLevels> & getInstanceRiskLevels() const { DARABONBA_PTR_GET_CONST(instanceRiskLevels_, vector<ListInstanceRiskLevelsResponseBody::InstanceRiskLevels>) };
    inline vector<ListInstanceRiskLevelsResponseBody::InstanceRiskLevels> getInstanceRiskLevels() { DARABONBA_PTR_GET(instanceRiskLevels_, vector<ListInstanceRiskLevelsResponseBody::InstanceRiskLevels>) };
    inline ListInstanceRiskLevelsResponseBody& setInstanceRiskLevels(const vector<ListInstanceRiskLevelsResponseBody::InstanceRiskLevels> & instanceRiskLevels) { DARABONBA_PTR_SET_VALUE(instanceRiskLevels_, instanceRiskLevels) };
    inline ListInstanceRiskLevelsResponseBody& setInstanceRiskLevels(vector<ListInstanceRiskLevelsResponseBody::InstanceRiskLevels> && instanceRiskLevels) { DARABONBA_PTR_SET_RVALUE(instanceRiskLevels_, instanceRiskLevels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceRiskLevelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The risk levels of instances.
    shared_ptr<vector<ListInstanceRiskLevelsResponseBody::InstanceRiskLevels>> instanceRiskLevels_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
