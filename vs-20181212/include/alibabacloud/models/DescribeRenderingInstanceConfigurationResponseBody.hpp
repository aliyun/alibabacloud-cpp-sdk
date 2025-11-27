// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCECONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCECONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRenderingInstanceConfigurationResponseBodyConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeRenderingInstanceConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenderingInstanceConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenderingInstanceConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRenderingInstanceConfigurationResponseBody() = default ;
    DescribeRenderingInstanceConfigurationResponseBody(const DescribeRenderingInstanceConfigurationResponseBody &) = default ;
    DescribeRenderingInstanceConfigurationResponseBody(DescribeRenderingInstanceConfigurationResponseBody &&) = default ;
    DescribeRenderingInstanceConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenderingInstanceConfigurationResponseBody() = default ;
    DescribeRenderingInstanceConfigurationResponseBody& operator=(const DescribeRenderingInstanceConfigurationResponseBody &) = default ;
    DescribeRenderingInstanceConfigurationResponseBody& operator=(DescribeRenderingInstanceConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configuration_ == nullptr
        && return this->requestId_ == nullptr; };
    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const vector<DescribeRenderingInstanceConfigurationResponseBodyConfiguration> & configuration() const { DARABONBA_PTR_GET_CONST(configuration_, vector<DescribeRenderingInstanceConfigurationResponseBodyConfiguration>) };
    inline vector<DescribeRenderingInstanceConfigurationResponseBodyConfiguration> configuration() { DARABONBA_PTR_GET(configuration_, vector<DescribeRenderingInstanceConfigurationResponseBodyConfiguration>) };
    inline DescribeRenderingInstanceConfigurationResponseBody& setConfiguration(const vector<DescribeRenderingInstanceConfigurationResponseBodyConfiguration> & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline DescribeRenderingInstanceConfigurationResponseBody& setConfiguration(vector<DescribeRenderingInstanceConfigurationResponseBodyConfiguration> && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRenderingInstanceConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeRenderingInstanceConfigurationResponseBodyConfiguration>> configuration_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
