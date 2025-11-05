// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPISCHEMAUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPISCHEMAUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetApiSchemaUsageResponseBodyUsages.hpp>
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
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->instanceUsage_ == nullptr && return this->requestId_ == nullptr && return this->usages_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetApiSchemaUsageResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceUsage Field Functions 
    bool hasInstanceUsage() const { return this->instanceUsage_ != nullptr;};
    void deleteInstanceUsage() { this->instanceUsage_ = nullptr;};
    inline int32_t instanceUsage() const { DARABONBA_PTR_GET_DEFAULT(instanceUsage_, 0) };
    inline GetApiSchemaUsageResponseBody& setInstanceUsage(int32_t instanceUsage) { DARABONBA_PTR_SET_VALUE(instanceUsage_, instanceUsage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApiSchemaUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usages Field Functions 
    bool hasUsages() const { return this->usages_ != nullptr;};
    void deleteUsages() { this->usages_ = nullptr;};
    inline const vector<GetApiSchemaUsageResponseBodyUsages> & usages() const { DARABONBA_PTR_GET_CONST(usages_, vector<GetApiSchemaUsageResponseBodyUsages>) };
    inline vector<GetApiSchemaUsageResponseBodyUsages> usages() { DARABONBA_PTR_GET(usages_, vector<GetApiSchemaUsageResponseBodyUsages>) };
    inline GetApiSchemaUsageResponseBody& setUsages(const vector<GetApiSchemaUsageResponseBodyUsages> & usages) { DARABONBA_PTR_SET_VALUE(usages_, usages) };
    inline GetApiSchemaUsageResponseBody& setUsages(vector<GetApiSchemaUsageResponseBodyUsages> && usages) { DARABONBA_PTR_SET_RVALUE(usages_, usages) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> instanceUsage_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<GetApiSchemaUsageResponseBodyUsages>> usages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
