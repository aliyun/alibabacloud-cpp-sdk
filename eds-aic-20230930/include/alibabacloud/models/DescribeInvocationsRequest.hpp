// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeInvocationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(InvocationId, invocationId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvocationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(InvocationId, invocationId_);
    };
    DescribeInvocationsRequest() = default ;
    DescribeInvocationsRequest(const DescribeInvocationsRequest &) = default ;
    DescribeInvocationsRequest(DescribeInvocationsRequest &&) = default ;
    DescribeInvocationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvocationsRequest() = default ;
    DescribeInvocationsRequest& operator=(const DescribeInvocationsRequest &) = default ;
    DescribeInvocationsRequest& operator=(DescribeInvocationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->invocationId_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeInvocationsRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeInvocationsRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // invocationId Field Functions 
    bool hasInvocationId() const { return this->invocationId_ != nullptr;};
    void deleteInvocationId() { this->invocationId_ = nullptr;};
    inline string getInvocationId() const { DARABONBA_PTR_GET_DEFAULT(invocationId_, "") };
    inline DescribeInvocationsRequest& setInvocationId(string invocationId) { DARABONBA_PTR_SET_VALUE(invocationId_, invocationId) };


  protected:
    // The IDs of the cloud phone instances. You can specify a maximum of 50 cloud phone instances.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> instanceIds_ {};
    // The ID of the execution. You can retrieve the output of a command once by using either the execution ID or the cloud phone instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> invocationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
