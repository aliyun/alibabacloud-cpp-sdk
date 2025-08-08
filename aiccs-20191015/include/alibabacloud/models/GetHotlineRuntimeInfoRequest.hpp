// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTLINERUNTIMEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHOTLINERUNTIMEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetHotlineRuntimeInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotlineRuntimeInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotlineRuntimeInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetHotlineRuntimeInfoRequest() = default ;
    GetHotlineRuntimeInfoRequest(const GetHotlineRuntimeInfoRequest &) = default ;
    GetHotlineRuntimeInfoRequest(GetHotlineRuntimeInfoRequest &&) = default ;
    GetHotlineRuntimeInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotlineRuntimeInfoRequest() = default ;
    GetHotlineRuntimeInfoRequest& operator=(const GetHotlineRuntimeInfoRequest &) = default ;
    GetHotlineRuntimeInfoRequest& operator=(GetHotlineRuntimeInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->instanceId_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline GetHotlineRuntimeInfoRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetHotlineRuntimeInfoRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> accountName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
