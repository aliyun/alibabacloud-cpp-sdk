// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOCCLISTCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOCCLISTCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeAutoCcListCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoCcListCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoCcListCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
    };
    DescribeAutoCcListCountRequest() = default ;
    DescribeAutoCcListCountRequest(const DescribeAutoCcListCountRequest &) = default ;
    DescribeAutoCcListCountRequest(DescribeAutoCcListCountRequest &&) = default ;
    DescribeAutoCcListCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoCcListCountRequest() = default ;
    DescribeAutoCcListCountRequest& operator=(const DescribeAutoCcListCountRequest &) = default ;
    DescribeAutoCcListCountRequest& operator=(DescribeAutoCcListCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->queryType_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeAutoCcListCountRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string queryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline DescribeAutoCcListCountRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


  protected:
    // The ID of the instance.
    // 
    // > You can call the **DescribeInstanceIds** operation to query the IDs of all instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The mode of how an IP address is added to the whitelist or blacklist. Valid values:
    // 
    // *   **manual**: manually added
    // *   **auto**: automatically added
    std::shared_ptr<string> queryType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
