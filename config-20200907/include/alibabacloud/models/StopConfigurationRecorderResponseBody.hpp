// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPCONFIGURATIONRECORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STOPCONFIGURATIONRECORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class StopConfigurationRecorderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopConfigurationRecorderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StopConfigurationRecorderResult, stopConfigurationRecorderResult_);
    };
    friend void from_json(const Darabonba::Json& j, StopConfigurationRecorderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StopConfigurationRecorderResult, stopConfigurationRecorderResult_);
    };
    StopConfigurationRecorderResponseBody() = default ;
    StopConfigurationRecorderResponseBody(const StopConfigurationRecorderResponseBody &) = default ;
    StopConfigurationRecorderResponseBody(StopConfigurationRecorderResponseBody &&) = default ;
    StopConfigurationRecorderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopConfigurationRecorderResponseBody() = default ;
    StopConfigurationRecorderResponseBody& operator=(const StopConfigurationRecorderResponseBody &) = default ;
    StopConfigurationRecorderResponseBody& operator=(StopConfigurationRecorderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->stopConfigurationRecorderResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StopConfigurationRecorderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stopConfigurationRecorderResult Field Functions 
    bool hasStopConfigurationRecorderResult() const { return this->stopConfigurationRecorderResult_ != nullptr;};
    void deleteStopConfigurationRecorderResult() { this->stopConfigurationRecorderResult_ = nullptr;};
    inline bool stopConfigurationRecorderResult() const { DARABONBA_PTR_GET_DEFAULT(stopConfigurationRecorderResult_, false) };
    inline StopConfigurationRecorderResponseBody& setStopConfigurationRecorderResult(bool stopConfigurationRecorderResult) { DARABONBA_PTR_SET_VALUE(stopConfigurationRecorderResult_, stopConfigurationRecorderResult) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    std::shared_ptr<bool> stopConfigurationRecorderResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
