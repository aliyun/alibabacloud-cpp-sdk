// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSPARKAPPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSPARKAPPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class SubmitSparkAppResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSparkAppResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSparkAppResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    SubmitSparkAppResponseBodyData() = default ;
    SubmitSparkAppResponseBodyData(const SubmitSparkAppResponseBodyData &) = default ;
    SubmitSparkAppResponseBodyData(SubmitSparkAppResponseBodyData &&) = default ;
    SubmitSparkAppResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSparkAppResponseBodyData() = default ;
    SubmitSparkAppResponseBodyData& operator=(const SubmitSparkAppResponseBodyData &) = default ;
    SubmitSparkAppResponseBodyData& operator=(SubmitSparkAppResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->message_ == nullptr && return this->state_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SubmitSparkAppResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline SubmitSparkAppResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SubmitSparkAppResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline SubmitSparkAppResponseBodyData& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The alert message returned for the operation, such as task execution failure or insufficient resources. If no alert occurs, null is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The execution state of the application. Valid values:
    // 
    // *   **SUBMITTED**
    // *   **STARTING**
    // *   **RUNNING**
    // *   **FAILING**
    // *   **FAILED**
    // *   **KILLING**
    // *   **KILLED**
    // *   **SUCCEEDING**
    // *   **COMPLETED**
    // *   **FATAL**
    // *   **UNKNOWN**
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
