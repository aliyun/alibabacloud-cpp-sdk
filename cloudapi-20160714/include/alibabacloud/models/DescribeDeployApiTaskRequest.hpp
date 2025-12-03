// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYAPITASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYAPITASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDeployApiTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployApiTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OperationUid, operationUid_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployApiTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationUid, operationUid_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DescribeDeployApiTaskRequest() = default ;
    DescribeDeployApiTaskRequest(const DescribeDeployApiTaskRequest &) = default ;
    DescribeDeployApiTaskRequest(DescribeDeployApiTaskRequest &&) = default ;
    DescribeDeployApiTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployApiTaskRequest() = default ;
    DescribeDeployApiTaskRequest& operator=(const DescribeDeployApiTaskRequest &) = default ;
    DescribeDeployApiTaskRequest& operator=(DescribeDeployApiTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operationUid_ == nullptr
        && return this->securityToken_ == nullptr; };
    // operationUid Field Functions 
    bool hasOperationUid() const { return this->operationUid_ != nullptr;};
    void deleteOperationUid() { this->operationUid_ = nullptr;};
    inline string operationUid() const { DARABONBA_PTR_GET_DEFAULT(operationUid_, "") };
    inline DescribeDeployApiTaskRequest& setOperationUid(string operationUid) { DARABONBA_PTR_SET_VALUE(operationUid_, operationUid) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeDeployApiTaskRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The task ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> operationUid_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
