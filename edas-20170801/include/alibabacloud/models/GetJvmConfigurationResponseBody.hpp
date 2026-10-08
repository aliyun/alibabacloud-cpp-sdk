// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJVMCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJVMCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetJvmConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJvmConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(JvmConfiguration, jvmConfiguration_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJvmConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(JvmConfiguration, jvmConfiguration_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetJvmConfigurationResponseBody() = default ;
    GetJvmConfigurationResponseBody(const GetJvmConfigurationResponseBody &) = default ;
    GetJvmConfigurationResponseBody(GetJvmConfigurationResponseBody &&) = default ;
    GetJvmConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJvmConfigurationResponseBody() = default ;
    GetJvmConfigurationResponseBody& operator=(const GetJvmConfigurationResponseBody &) = default ;
    GetJvmConfigurationResponseBody& operator=(GetJvmConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JvmConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JvmConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(MaxHeapSize, maxHeapSize_);
        DARABONBA_PTR_TO_JSON(MaxPermSize, maxPermSize_);
        DARABONBA_PTR_TO_JSON(MinHeapSize, minHeapSize_);
        DARABONBA_PTR_TO_JSON(Options, options_);
      };
      friend void from_json(const Darabonba::Json& j, JvmConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxHeapSize, maxHeapSize_);
        DARABONBA_PTR_FROM_JSON(MaxPermSize, maxPermSize_);
        DARABONBA_PTR_FROM_JSON(MinHeapSize, minHeapSize_);
        DARABONBA_PTR_FROM_JSON(Options, options_);
      };
      JvmConfiguration() = default ;
      JvmConfiguration(const JvmConfiguration &) = default ;
      JvmConfiguration(JvmConfiguration &&) = default ;
      JvmConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JvmConfiguration() = default ;
      JvmConfiguration& operator=(const JvmConfiguration &) = default ;
      JvmConfiguration& operator=(JvmConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->maxHeapSize_ == nullptr
        && this->maxPermSize_ == nullptr && this->minHeapSize_ == nullptr && this->options_ == nullptr; };
      // maxHeapSize Field Functions 
      bool hasMaxHeapSize() const { return this->maxHeapSize_ != nullptr;};
      void deleteMaxHeapSize() { this->maxHeapSize_ = nullptr;};
      inline int32_t getMaxHeapSize() const { DARABONBA_PTR_GET_DEFAULT(maxHeapSize_, 0) };
      inline JvmConfiguration& setMaxHeapSize(int32_t maxHeapSize) { DARABONBA_PTR_SET_VALUE(maxHeapSize_, maxHeapSize) };


      // maxPermSize Field Functions 
      bool hasMaxPermSize() const { return this->maxPermSize_ != nullptr;};
      void deleteMaxPermSize() { this->maxPermSize_ = nullptr;};
      inline int32_t getMaxPermSize() const { DARABONBA_PTR_GET_DEFAULT(maxPermSize_, 0) };
      inline JvmConfiguration& setMaxPermSize(int32_t maxPermSize) { DARABONBA_PTR_SET_VALUE(maxPermSize_, maxPermSize) };


      // minHeapSize Field Functions 
      bool hasMinHeapSize() const { return this->minHeapSize_ != nullptr;};
      void deleteMinHeapSize() { this->minHeapSize_ = nullptr;};
      inline int32_t getMinHeapSize() const { DARABONBA_PTR_GET_DEFAULT(minHeapSize_, 0) };
      inline JvmConfiguration& setMinHeapSize(int32_t minHeapSize) { DARABONBA_PTR_SET_VALUE(minHeapSize_, minHeapSize) };


      // options Field Functions 
      bool hasOptions() const { return this->options_ != nullptr;};
      void deleteOptions() { this->options_ = nullptr;};
      inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
      inline JvmConfiguration& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    protected:
      // The maximum size of the heap memory. Unit: MB.
      shared_ptr<int32_t> maxHeapSize_ {};
      // The size of the permanent generation heap memory. Unit: MB.
      shared_ptr<int32_t> maxPermSize_ {};
      // The initial size of the heap memory. Unit: MB.
      shared_ptr<int32_t> minHeapSize_ {};
      // The custom parameter.
      shared_ptr<string> options_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->jvmConfiguration_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetJvmConfigurationResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // jvmConfiguration Field Functions 
    bool hasJvmConfiguration() const { return this->jvmConfiguration_ != nullptr;};
    void deleteJvmConfiguration() { this->jvmConfiguration_ = nullptr;};
    inline const GetJvmConfigurationResponseBody::JvmConfiguration & getJvmConfiguration() const { DARABONBA_PTR_GET_CONST(jvmConfiguration_, GetJvmConfigurationResponseBody::JvmConfiguration) };
    inline GetJvmConfigurationResponseBody::JvmConfiguration getJvmConfiguration() { DARABONBA_PTR_GET(jvmConfiguration_, GetJvmConfigurationResponseBody::JvmConfiguration) };
    inline GetJvmConfigurationResponseBody& setJvmConfiguration(const GetJvmConfigurationResponseBody::JvmConfiguration & jvmConfiguration) { DARABONBA_PTR_SET_VALUE(jvmConfiguration_, jvmConfiguration) };
    inline GetJvmConfigurationResponseBody& setJvmConfiguration(GetJvmConfigurationResponseBody::JvmConfiguration && jvmConfiguration) { DARABONBA_PTR_SET_RVALUE(jvmConfiguration_, jvmConfiguration) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetJvmConfigurationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJvmConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The JVM configuration of the application or instance group.
    shared_ptr<GetJvmConfigurationResponseBody::JvmConfiguration> jvmConfiguration_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
