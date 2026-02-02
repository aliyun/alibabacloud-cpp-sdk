// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCESSSLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCESSSLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ModifyInstancesSSLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstancesSSLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceNames, instanceNames_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstancesSSLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceNames, instanceNames_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyInstancesSSLResponseBody() = default ;
    ModifyInstancesSSLResponseBody(const ModifyInstancesSSLResponseBody &) = default ;
    ModifyInstancesSSLResponseBody(ModifyInstancesSSLResponseBody &&) = default ;
    ModifyInstancesSSLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstancesSSLResponseBody() = default ;
    ModifyInstancesSSLResponseBody& operator=(const ModifyInstancesSSLResponseBody &) = default ;
    ModifyInstancesSSLResponseBody& operator=(ModifyInstancesSSLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceNames_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceNames Field Functions 
    bool hasInstanceNames() const { return this->instanceNames_ != nullptr;};
    void deleteInstanceNames() { this->instanceNames_ = nullptr;};
    inline const vector<string> & getInstanceNames() const { DARABONBA_PTR_GET_CONST(instanceNames_, vector<string>) };
    inline vector<string> getInstanceNames() { DARABONBA_PTR_GET(instanceNames_, vector<string>) };
    inline ModifyInstancesSSLResponseBody& setInstanceNames(const vector<string> & instanceNames) { DARABONBA_PTR_SET_VALUE(instanceNames_, instanceNames) };
    inline ModifyInstancesSSLResponseBody& setInstanceNames(vector<string> && instanceNames) { DARABONBA_PTR_SET_RVALUE(instanceNames_, instanceNames) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyInstancesSSLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The RDS Supabase instances whose SSL settings are modified.
    shared_ptr<vector<string>> instanceNames_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
