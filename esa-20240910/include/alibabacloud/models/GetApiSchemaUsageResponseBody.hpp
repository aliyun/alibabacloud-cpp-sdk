// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPISCHEMAUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPISCHEMAUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetApiSchemaUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApiSchemaUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceUsage, instanceUsage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Usages, usages_);
    };
    friend void from_json(const Darabonba::Json& j, GetApiSchemaUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceUsage, instanceUsage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Usages, usages_);
    };
    GetApiSchemaUsageResponseBody() = default ;
    GetApiSchemaUsageResponseBody(const GetApiSchemaUsageResponseBody &) = default ;
    GetApiSchemaUsageResponseBody(GetApiSchemaUsageResponseBody &&) = default ;
    GetApiSchemaUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApiSchemaUsageResponseBody() = default ;
    GetApiSchemaUsageResponseBody& operator=(const GetApiSchemaUsageResponseBody &) = default ;
    GetApiSchemaUsageResponseBody& operator=(GetApiSchemaUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Usages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Usages& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Usages& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Usage, usage_);
      };
      Usages() = default ;
      Usages(const Usages &) = default ;
      Usages(Usages &&) = default ;
      Usages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Usages() = default ;
      Usages& operator=(const Usages &) = default ;
      Usages& operator=(Usages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->usage_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Usages& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Usages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline int32_t getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0) };
      inline Usages& setUsage(int32_t usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


    protected:
      // The website ID.
      shared_ptr<int64_t> id_ {};
      // The website name.
      shared_ptr<string> name_ {};
      // The number of files uploaded for the website.
      shared_ptr<int32_t> usage_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->instanceUsage_ == nullptr && this->requestId_ == nullptr && this->usages_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetApiSchemaUsageResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceUsage Field Functions 
    bool hasInstanceUsage() const { return this->instanceUsage_ != nullptr;};
    void deleteInstanceUsage() { this->instanceUsage_ = nullptr;};
    inline int32_t getInstanceUsage() const { DARABONBA_PTR_GET_DEFAULT(instanceUsage_, 0) };
    inline GetApiSchemaUsageResponseBody& setInstanceUsage(int32_t instanceUsage) { DARABONBA_PTR_SET_VALUE(instanceUsage_, instanceUsage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApiSchemaUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usages Field Functions 
    bool hasUsages() const { return this->usages_ != nullptr;};
    void deleteUsages() { this->usages_ = nullptr;};
    inline const vector<GetApiSchemaUsageResponseBody::Usages> & getUsages() const { DARABONBA_PTR_GET_CONST(usages_, vector<GetApiSchemaUsageResponseBody::Usages>) };
    inline vector<GetApiSchemaUsageResponseBody::Usages> getUsages() { DARABONBA_PTR_GET(usages_, vector<GetApiSchemaUsageResponseBody::Usages>) };
    inline GetApiSchemaUsageResponseBody& setUsages(const vector<GetApiSchemaUsageResponseBody::Usages> & usages) { DARABONBA_PTR_SET_VALUE(usages_, usages) };
    inline GetApiSchemaUsageResponseBody& setUsages(vector<GetApiSchemaUsageResponseBody::Usages> && usages) { DARABONBA_PTR_SET_RVALUE(usages_, usages) };


  protected:
    // The plan ID.
    shared_ptr<string> instanceId_ {};
    // The number of files uploaded for schema verification in the plan instance of the website.
    shared_ptr<int32_t> instanceUsage_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Usage details for websites.
    shared_ptr<vector<GetApiSchemaUsageResponseBody::Usages>> usages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
