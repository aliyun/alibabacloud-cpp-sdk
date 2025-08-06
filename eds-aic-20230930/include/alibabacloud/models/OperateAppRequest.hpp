// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEAPPREQUEST_HPP_
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
  class OperateAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(InstanceIdList, instanceIdList_);
      DARABONBA_PTR_TO_JSON(OperateType, operateType_);
    };
    friend void from_json(const Darabonba::Json& j, OperateAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(InstanceIdList, instanceIdList_);
      DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
    };
    OperateAppRequest() = default ;
    OperateAppRequest(const OperateAppRequest &) = default ;
    OperateAppRequest(OperateAppRequest &&) = default ;
    OperateAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateAppRequest() = default ;
    OperateAppRequest& operator=(const OperateAppRequest &) = default ;
    OperateAppRequest& operator=(OperateAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->instanceIdList_ != nullptr && this->operateType_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int32_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
    inline OperateAppRequest& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // instanceIdList Field Functions 
    bool hasInstanceIdList() const { return this->instanceIdList_ != nullptr;};
    void deleteInstanceIdList() { this->instanceIdList_ = nullptr;};
    inline const vector<string> & instanceIdList() const { DARABONBA_PTR_GET_CONST(instanceIdList_, vector<string>) };
    inline vector<string> instanceIdList() { DARABONBA_PTR_GET(instanceIdList_, vector<string>) };
    inline OperateAppRequest& setInstanceIdList(const vector<string> & instanceIdList) { DARABONBA_PTR_SET_VALUE(instanceIdList_, instanceIdList) };
    inline OperateAppRequest& setInstanceIdList(vector<string> && instanceIdList) { DARABONBA_PTR_SET_RVALUE(instanceIdList_, instanceIdList) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string operateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline OperateAppRequest& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


  protected:
    // The ID of the app.
    std::shared_ptr<int32_t> appId_ = nullptr;
    // The IDs of the cloud phone instances.
    std::shared_ptr<vector<string>> instanceIdList_ = nullptr;
    // The type of the operation.
    // 
    // Valid values:
    // 
    // *   stop: closes the app.
    // *   restart: reopens the app.
    // *   start: open the app.
    std::shared_ptr<string> operateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
