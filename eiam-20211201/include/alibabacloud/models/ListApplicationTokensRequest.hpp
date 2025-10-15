// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONTOKENSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONTOKENSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListApplicationTokensRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationTokensRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationTokenType, applicationTokenType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationTokensRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationTokenType, applicationTokenType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ListApplicationTokensRequest() = default ;
    ListApplicationTokensRequest(const ListApplicationTokensRequest &) = default ;
    ListApplicationTokensRequest(ListApplicationTokensRequest &&) = default ;
    ListApplicationTokensRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationTokensRequest() = default ;
    ListApplicationTokensRequest& operator=(const ListApplicationTokensRequest &) = default ;
    ListApplicationTokensRequest& operator=(ListApplicationTokensRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->applicationTokenType_ == nullptr && return this->instanceId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListApplicationTokensRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationTokenType Field Functions 
    bool hasApplicationTokenType() const { return this->applicationTokenType_ != nullptr;};
    void deleteApplicationTokenType() { this->applicationTokenType_ = nullptr;};
    inline string applicationTokenType() const { DARABONBA_PTR_GET_DEFAULT(applicationTokenType_, "") };
    inline ListApplicationTokensRequest& setApplicationTokenType(string applicationTokenType) { DARABONBA_PTR_SET_VALUE(applicationTokenType_, applicationTokenType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListApplicationTokensRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // IDaaS的应用资源ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    // ApplicationToken的类型
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationTokenType_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
