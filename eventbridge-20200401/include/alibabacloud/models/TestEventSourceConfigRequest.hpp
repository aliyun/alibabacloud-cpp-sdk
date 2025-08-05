// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTEVENTSOURCECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TESTEVENTSOURCECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TestEventSourceConfigRequestSourceMySQLParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class TestEventSourceConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestEventSourceConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceMySQLParameters, sourceMySQLParameters_);
    };
    friend void from_json(const Darabonba::Json& j, TestEventSourceConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceMySQLParameters, sourceMySQLParameters_);
    };
    TestEventSourceConfigRequest() = default ;
    TestEventSourceConfigRequest(const TestEventSourceConfigRequest &) = default ;
    TestEventSourceConfigRequest(TestEventSourceConfigRequest &&) = default ;
    TestEventSourceConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestEventSourceConfigRequest() = default ;
    TestEventSourceConfigRequest& operator=(const TestEventSourceConfigRequest &) = default ;
    TestEventSourceConfigRequest& operator=(TestEventSourceConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceMySQLParameters_ != nullptr; };
    // sourceMySQLParameters Field Functions 
    bool hasSourceMySQLParameters() const { return this->sourceMySQLParameters_ != nullptr;};
    void deleteSourceMySQLParameters() { this->sourceMySQLParameters_ = nullptr;};
    inline const TestEventSourceConfigRequestSourceMySQLParameters & sourceMySQLParameters() const { DARABONBA_PTR_GET_CONST(sourceMySQLParameters_, TestEventSourceConfigRequestSourceMySQLParameters) };
    inline TestEventSourceConfigRequestSourceMySQLParameters sourceMySQLParameters() { DARABONBA_PTR_GET(sourceMySQLParameters_, TestEventSourceConfigRequestSourceMySQLParameters) };
    inline TestEventSourceConfigRequest& setSourceMySQLParameters(const TestEventSourceConfigRequestSourceMySQLParameters & sourceMySQLParameters) { DARABONBA_PTR_SET_VALUE(sourceMySQLParameters_, sourceMySQLParameters) };
    inline TestEventSourceConfigRequest& setSourceMySQLParameters(TestEventSourceConfigRequestSourceMySQLParameters && sourceMySQLParameters) { DARABONBA_PTR_SET_RVALUE(sourceMySQLParameters_, sourceMySQLParameters) };


  protected:
    // The parameters that are configured if you specify MySQL as the event source.
    std::shared_ptr<TestEventSourceConfigRequestSourceMySQLParameters> sourceMySQLParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
