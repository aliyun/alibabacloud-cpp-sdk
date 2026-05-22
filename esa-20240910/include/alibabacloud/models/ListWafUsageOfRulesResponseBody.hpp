// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFUSAGEOFRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFUSAGEOFRULESRESPONSEBODY_HPP_
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
  class ListWafUsageOfRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafUsageOfRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BatchConfigUsage, batchConfigUsage_);
      DARABONBA_PTR_TO_JSON(InstanceUsage, instanceUsage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sites, sites_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafUsageOfRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchConfigUsage, batchConfigUsage_);
      DARABONBA_PTR_FROM_JSON(InstanceUsage, instanceUsage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sites, sites_);
    };
    ListWafUsageOfRulesResponseBody() = default ;
    ListWafUsageOfRulesResponseBody(const ListWafUsageOfRulesResponseBody &) = default ;
    ListWafUsageOfRulesResponseBody(ListWafUsageOfRulesResponseBody &&) = default ;
    ListWafUsageOfRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafUsageOfRulesResponseBody() = default ;
    ListWafUsageOfRulesResponseBody& operator=(const ListWafUsageOfRulesResponseBody &) = default ;
    ListWafUsageOfRulesResponseBody& operator=(ListWafUsageOfRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Sites : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sites& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Sites& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Usage, usage_);
      };
      Sites() = default ;
      Sites(const Sites &) = default ;
      Sites(Sites &&) = default ;
      Sites(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sites() = default ;
      Sites& operator=(const Sites &) = default ;
      Sites& operator=(Sites &&) = default ;
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
      inline Sites& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Sites& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline int64_t getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0L) };
      inline Sites& setUsage(int64_t usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


    protected:
      // Site ID.
      shared_ptr<int64_t> id_ {};
      // Site name.
      shared_ptr<string> name_ {};
      // Usage of WAF rules/WAF rule sets.
      shared_ptr<int64_t> usage_ {};
    };

    virtual bool empty() const override { return this->batchConfigUsage_ == nullptr
        && this->instanceUsage_ == nullptr && this->requestId_ == nullptr && this->sites_ == nullptr; };
    // batchConfigUsage Field Functions 
    bool hasBatchConfigUsage() const { return this->batchConfigUsage_ != nullptr;};
    void deleteBatchConfigUsage() { this->batchConfigUsage_ = nullptr;};
    inline int64_t getBatchConfigUsage() const { DARABONBA_PTR_GET_DEFAULT(batchConfigUsage_, 0L) };
    inline ListWafUsageOfRulesResponseBody& setBatchConfigUsage(int64_t batchConfigUsage) { DARABONBA_PTR_SET_VALUE(batchConfigUsage_, batchConfigUsage) };


    // instanceUsage Field Functions 
    bool hasInstanceUsage() const { return this->instanceUsage_ != nullptr;};
    void deleteInstanceUsage() { this->instanceUsage_ = nullptr;};
    inline int64_t getInstanceUsage() const { DARABONBA_PTR_GET_DEFAULT(instanceUsage_, 0L) };
    inline ListWafUsageOfRulesResponseBody& setInstanceUsage(int64_t instanceUsage) { DARABONBA_PTR_SET_VALUE(instanceUsage_, instanceUsage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWafUsageOfRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sites Field Functions 
    bool hasSites() const { return this->sites_ != nullptr;};
    void deleteSites() { this->sites_ = nullptr;};
    inline const vector<ListWafUsageOfRulesResponseBody::Sites> & getSites() const { DARABONBA_PTR_GET_CONST(sites_, vector<ListWafUsageOfRulesResponseBody::Sites>) };
    inline vector<ListWafUsageOfRulesResponseBody::Sites> getSites() { DARABONBA_PTR_GET(sites_, vector<ListWafUsageOfRulesResponseBody::Sites>) };
    inline ListWafUsageOfRulesResponseBody& setSites(const vector<ListWafUsageOfRulesResponseBody::Sites> & sites) { DARABONBA_PTR_SET_VALUE(sites_, sites) };
    inline ListWafUsageOfRulesResponseBody& setSites(vector<ListWafUsageOfRulesResponseBody::Sites> && sites) { DARABONBA_PTR_SET_RVALUE(sites_, sites) };


  protected:
    shared_ptr<int64_t> batchConfigUsage_ {};
    shared_ptr<int64_t> instanceUsage_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // List of site usage.
    shared_ptr<vector<ListWafUsageOfRulesResponseBody::Sites>> sites_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
