// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEDEFAULTSERVICETESTCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEDEFAULTSERVICETESTCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GenerateDefaultServiceTestConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateDefaultServiceTestConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TestConfig, testConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDefaultServiceTestConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TestConfig, testConfig_);
    };
    GenerateDefaultServiceTestConfigResponseBody() = default ;
    GenerateDefaultServiceTestConfigResponseBody(const GenerateDefaultServiceTestConfigResponseBody &) = default ;
    GenerateDefaultServiceTestConfigResponseBody(GenerateDefaultServiceTestConfigResponseBody &&) = default ;
    GenerateDefaultServiceTestConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateDefaultServiceTestConfigResponseBody() = default ;
    GenerateDefaultServiceTestConfigResponseBody& operator=(const GenerateDefaultServiceTestConfigResponseBody &) = default ;
    GenerateDefaultServiceTestConfigResponseBody& operator=(GenerateDefaultServiceTestConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->testConfig_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateDefaultServiceTestConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // testConfig Field Functions 
    bool hasTestConfig() const { return this->testConfig_ != nullptr;};
    void deleteTestConfig() { this->testConfig_ = nullptr;};
    inline string testConfig() const { DARABONBA_PTR_GET_DEFAULT(testConfig_, "") };
    inline GenerateDefaultServiceTestConfigResponseBody& setTestConfig(string testConfig) { DARABONBA_PTR_SET_VALUE(testConfig_, testConfig) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The service test config
    std::shared_ptr<string> testConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
