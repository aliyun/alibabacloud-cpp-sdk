// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRUNCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRunConfigurationResponseBodyRunConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetRunConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRunConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(runConfiguration, runConfiguration_);
    };
    friend void from_json(const Darabonba::Json& j, GetRunConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(runConfiguration, runConfiguration_);
    };
    GetRunConfigurationResponseBody() = default ;
    GetRunConfigurationResponseBody(const GetRunConfigurationResponseBody &) = default ;
    GetRunConfigurationResponseBody(GetRunConfigurationResponseBody &&) = default ;
    GetRunConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRunConfigurationResponseBody() = default ;
    GetRunConfigurationResponseBody& operator=(const GetRunConfigurationResponseBody &) = default ;
    GetRunConfigurationResponseBody& operator=(GetRunConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->runConfiguration_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRunConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runConfiguration Field Functions 
    bool hasRunConfiguration() const { return this->runConfiguration_ != nullptr;};
    void deleteRunConfiguration() { this->runConfiguration_ = nullptr;};
    inline const GetRunConfigurationResponseBodyRunConfiguration & runConfiguration() const { DARABONBA_PTR_GET_CONST(runConfiguration_, GetRunConfigurationResponseBodyRunConfiguration) };
    inline GetRunConfigurationResponseBodyRunConfiguration runConfiguration() { DARABONBA_PTR_GET(runConfiguration_, GetRunConfigurationResponseBodyRunConfiguration) };
    inline GetRunConfigurationResponseBody& setRunConfiguration(const GetRunConfigurationResponseBodyRunConfiguration & runConfiguration) { DARABONBA_PTR_SET_VALUE(runConfiguration_, runConfiguration) };
    inline GetRunConfigurationResponseBody& setRunConfiguration(GetRunConfigurationResponseBodyRunConfiguration && runConfiguration) { DARABONBA_PTR_SET_RVALUE(runConfiguration_, runConfiguration) };


  protected:
    // 请求ID。
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetRunConfigurationResponseBodyRunConfiguration> runConfiguration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
