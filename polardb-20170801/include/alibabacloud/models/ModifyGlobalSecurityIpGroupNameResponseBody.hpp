// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYGLOBALSECURITYIPGROUPNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYGLOBALSECURITYIPGROUPNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyGlobalSecurityIPGroupNameResponseBodyGlobalSecurityIPGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyGlobalSecurityIPGroupNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyGlobalSecurityIPGroupNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalSecurityIPGroup, globalSecurityIPGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyGlobalSecurityIPGroupNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalSecurityIPGroup, globalSecurityIPGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyGlobalSecurityIPGroupNameResponseBody() = default ;
    ModifyGlobalSecurityIPGroupNameResponseBody(const ModifyGlobalSecurityIPGroupNameResponseBody &) = default ;
    ModifyGlobalSecurityIPGroupNameResponseBody(ModifyGlobalSecurityIPGroupNameResponseBody &&) = default ;
    ModifyGlobalSecurityIPGroupNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyGlobalSecurityIPGroupNameResponseBody() = default ;
    ModifyGlobalSecurityIPGroupNameResponseBody& operator=(const ModifyGlobalSecurityIPGroupNameResponseBody &) = default ;
    ModifyGlobalSecurityIPGroupNameResponseBody& operator=(ModifyGlobalSecurityIPGroupNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->globalSecurityIPGroup_ == nullptr
        && return this->requestId_ == nullptr; };
    // globalSecurityIPGroup Field Functions 
    bool hasGlobalSecurityIPGroup() const { return this->globalSecurityIPGroup_ != nullptr;};
    void deleteGlobalSecurityIPGroup() { this->globalSecurityIPGroup_ = nullptr;};
    inline const vector<ModifyGlobalSecurityIPGroupNameResponseBodyGlobalSecurityIPGroup> & globalSecurityIPGroup() const { DARABONBA_PTR_GET_CONST(globalSecurityIPGroup_, vector<ModifyGlobalSecurityIPGroupNameResponseBodyGlobalSecurityIPGroup>) };
    inline vector<ModifyGlobalSecurityIPGroupNameResponseBodyGlobalSecurityIPGroup> globalSecurityIPGroup() { DARABONBA_PTR_GET(globalSecurityIPGroup_, vector<ModifyGlobalSecurityIPGroupNameResponseBodyGlobalSecurityIPGroup>) };
    inline ModifyGlobalSecurityIPGroupNameResponseBody& setGlobalSecurityIPGroup(const vector<ModifyGlobalSecurityIPGroupNameResponseBodyGlobalSecurityIPGroup> & globalSecurityIPGroup) { DARABONBA_PTR_SET_VALUE(globalSecurityIPGroup_, globalSecurityIPGroup) };
    inline ModifyGlobalSecurityIPGroupNameResponseBody& setGlobalSecurityIPGroup(vector<ModifyGlobalSecurityIPGroupNameResponseBodyGlobalSecurityIPGroup> && globalSecurityIPGroup) { DARABONBA_PTR_SET_RVALUE(globalSecurityIPGroup_, globalSecurityIPGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyGlobalSecurityIPGroupNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the global IP whitelist template.
    std::shared_ptr<vector<ModifyGlobalSecurityIPGroupNameResponseBodyGlobalSecurityIPGroup>> globalSecurityIPGroup_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
