// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXTERNALAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXTERNALAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeExternalAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExternalAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExternalAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
    };
    DescribeExternalAgentResponseBody() = default ;
    DescribeExternalAgentResponseBody(const DescribeExternalAgentResponseBody &) = default ;
    DescribeExternalAgentResponseBody(DescribeExternalAgentResponseBody &&) = default ;
    DescribeExternalAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExternalAgentResponseBody() = default ;
    DescribeExternalAgentResponseBody& operator=(const DescribeExternalAgentResponseBody &) = default ;
    DescribeExternalAgentResponseBody& operator=(DescribeExternalAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribeExternalAgentResponseBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


  protected:
    // The agent configurations in the YAML format.
    shared_ptr<string> config_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
