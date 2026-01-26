// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENVCUSTOMJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENVCUSTOMJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeEnvCustomJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnvCustomJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnvCustomJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEnvCustomJobResponseBody() = default ;
    DescribeEnvCustomJobResponseBody(const DescribeEnvCustomJobResponseBody &) = default ;
    DescribeEnvCustomJobResponseBody(DescribeEnvCustomJobResponseBody &&) = default ;
    DescribeEnvCustomJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnvCustomJobResponseBody() = default ;
    DescribeEnvCustomJobResponseBody& operator=(const DescribeEnvCustomJobResponseBody &) = default ;
    DescribeEnvCustomJobResponseBody& operator=(DescribeEnvCustomJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigYaml, configYaml_);
        DARABONBA_PTR_TO_JSON(CustomJobName, customJobName_);
        DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigYaml, configYaml_);
        DARABONBA_PTR_FROM_JSON(CustomJobName, customJobName_);
        DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configYaml_ == nullptr
        && this->customJobName_ == nullptr && this->environmentId_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr; };
      // configYaml Field Functions 
      bool hasConfigYaml() const { return this->configYaml_ != nullptr;};
      void deleteConfigYaml() { this->configYaml_ = nullptr;};
      inline string getConfigYaml() const { DARABONBA_PTR_GET_DEFAULT(configYaml_, "") };
      inline Data& setConfigYaml(string configYaml) { DARABONBA_PTR_SET_VALUE(configYaml_, configYaml) };


      // customJobName Field Functions 
      bool hasCustomJobName() const { return this->customJobName_ != nullptr;};
      void deleteCustomJobName() { this->customJobName_ = nullptr;};
      inline string getCustomJobName() const { DARABONBA_PTR_GET_DEFAULT(customJobName_, "") };
      inline Data& setCustomJobName(string customJobName) { DARABONBA_PTR_SET_VALUE(customJobName_, customJobName) };


      // environmentId Field Functions 
      bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
      void deleteEnvironmentId() { this->environmentId_ = nullptr;};
      inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
      inline Data& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // If the **encryptYaml** parameter is set to `true`, a Base64-encoded YAML string is returned. Otherwise, a plaintext YAML string is returned.
      shared_ptr<string> configYaml_ {};
      // The name of the custom job.
      shared_ptr<string> customJobName_ {};
      // The ID of the environment instance.
      shared_ptr<string> environmentId_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The status. Valid values:
      // 
      // *   run
      // *   stop
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeEnvCustomJobResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeEnvCustomJobResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeEnvCustomJobResponseBody::Data) };
    inline DescribeEnvCustomJobResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeEnvCustomJobResponseBody::Data) };
    inline DescribeEnvCustomJobResponseBody& setData(const DescribeEnvCustomJobResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeEnvCustomJobResponseBody& setData(DescribeEnvCustomJobResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeEnvCustomJobResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnvCustomJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The returned struct.
    shared_ptr<DescribeEnvCustomJobResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
