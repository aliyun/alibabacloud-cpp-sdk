// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEABOLISHAPITASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEABOLISHAPITASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAbolishApiTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAbolishApiTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OperationUid, operationUid_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAbolishApiTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationUid, operationUid_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DescribeAbolishApiTaskRequest() = default ;
    DescribeAbolishApiTaskRequest(const DescribeAbolishApiTaskRequest &) = default ;
    DescribeAbolishApiTaskRequest(DescribeAbolishApiTaskRequest &&) = default ;
    DescribeAbolishApiTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAbolishApiTaskRequest() = default ;
    DescribeAbolishApiTaskRequest& operator=(const DescribeAbolishApiTaskRequest &) = default ;
    DescribeAbolishApiTaskRequest& operator=(DescribeAbolishApiTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operationUid_ == nullptr
        && this->securityToken_ == nullptr; };
    // operationUid Field Functions 
    bool hasOperationUid() const { return this->operationUid_ != nullptr;};
    void deleteOperationUid() { this->operationUid_ = nullptr;};
    inline string getOperationUid() const { DARABONBA_PTR_GET_DEFAULT(operationUid_, "") };
    inline DescribeAbolishApiTaskRequest& setOperationUid(string operationUid) { DARABONBA_PTR_SET_VALUE(operationUid_, operationUid) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeAbolishApiTaskRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the unpublishing operation.
    // 
    // This parameter is required.
    shared_ptr<string> operationUid_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
