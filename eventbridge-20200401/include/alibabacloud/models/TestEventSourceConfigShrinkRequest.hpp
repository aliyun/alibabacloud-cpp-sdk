// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTEVENTSOURCECONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TESTEVENTSOURCECONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class TestEventSourceConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestEventSourceConfigShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceMySQLParameters, sourceMySQLParametersShrink_);
    };
    friend void from_json(const Darabonba::Json& j, TestEventSourceConfigShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceMySQLParameters, sourceMySQLParametersShrink_);
    };
    TestEventSourceConfigShrinkRequest() = default ;
    TestEventSourceConfigShrinkRequest(const TestEventSourceConfigShrinkRequest &) = default ;
    TestEventSourceConfigShrinkRequest(TestEventSourceConfigShrinkRequest &&) = default ;
    TestEventSourceConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestEventSourceConfigShrinkRequest() = default ;
    TestEventSourceConfigShrinkRequest& operator=(const TestEventSourceConfigShrinkRequest &) = default ;
    TestEventSourceConfigShrinkRequest& operator=(TestEventSourceConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceMySQLParametersShrink_ != nullptr; };
    // sourceMySQLParametersShrink Field Functions 
    bool hasSourceMySQLParametersShrink() const { return this->sourceMySQLParametersShrink_ != nullptr;};
    void deleteSourceMySQLParametersShrink() { this->sourceMySQLParametersShrink_ = nullptr;};
    inline string sourceMySQLParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceMySQLParametersShrink_, "") };
    inline TestEventSourceConfigShrinkRequest& setSourceMySQLParametersShrink(string sourceMySQLParametersShrink) { DARABONBA_PTR_SET_VALUE(sourceMySQLParametersShrink_, sourceMySQLParametersShrink) };


  protected:
    // The parameters that are configured if you specify MySQL as the event source.
    std::shared_ptr<string> sourceMySQLParametersShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
