// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERISKNUMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERISKNUMREQUEST_HPP_
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
  class ListInstanceRiskNumRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceRiskNumRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceRiskNumRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
    };
    ListInstanceRiskNumRequest() = default ;
    ListInstanceRiskNumRequest(const ListInstanceRiskNumRequest &) = default ;
    ListInstanceRiskNumRequest(ListInstanceRiskNumRequest &&) = default ;
    ListInstanceRiskNumRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceRiskNumRequest() = default ;
    ListInstanceRiskNumRequest& operator=(const ListInstanceRiskNumRequest &) = default ;
    ListInstanceRiskNumRequest& operator=(ListInstanceRiskNumRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      InstanceList() = default ;
      InstanceList(const InstanceList &) = default ;
      InstanceList(InstanceList &&) = default ;
      InstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceList() = default ;
      InstanceList& operator=(const InstanceList &) = default ;
      InstanceList& operator=(InstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->uuid_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline InstanceList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The UUID of the instance.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->instanceList_ == nullptr; };
    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<ListInstanceRiskNumRequest::InstanceList> & getInstanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<ListInstanceRiskNumRequest::InstanceList>) };
    inline vector<ListInstanceRiskNumRequest::InstanceList> getInstanceList() { DARABONBA_PTR_GET(instanceList_, vector<ListInstanceRiskNumRequest::InstanceList>) };
    inline ListInstanceRiskNumRequest& setInstanceList(const vector<ListInstanceRiskNumRequest::InstanceList> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline ListInstanceRiskNumRequest& setInstanceList(vector<ListInstanceRiskNumRequest::InstanceList> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


  protected:
    // The instances.
    shared_ptr<vector<ListInstanceRiskNumRequest::InstanceList>> instanceList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
