// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPARKAPPINFO_HPP_
#define ALIBABACLOUD_MODELS_SPARKAPPINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Detail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class SparkAppInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SparkAppInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, SparkAppInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    SparkAppInfo() = default ;
    SparkAppInfo(const SparkAppInfo &) = default ;
    SparkAppInfo(SparkAppInfo &&) = default ;
    SparkAppInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SparkAppInfo() = default ;
    SparkAppInfo& operator=(const SparkAppInfo &) = default ;
    SparkAppInfo& operator=(SparkAppInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->DBClusterId_ == nullptr && return this->detail_ == nullptr && return this->message_ == nullptr && return this->priority_ == nullptr
        && return this->state_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SparkAppInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline SparkAppInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline SparkAppInfo& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const Detail & detail() const { DARABONBA_PTR_GET_CONST(detail_, Detail) };
    inline Detail detail() { DARABONBA_PTR_GET(detail_, Detail) };
    inline SparkAppInfo& setDetail(const Detail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline SparkAppInfo& setDetail(Detail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SparkAppInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline SparkAppInfo& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline SparkAppInfo& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<Detail> detail_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> priority_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
