// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODYBACKENDINFOBACKENDMODELSBACKENDCONFIGMOCKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODYBACKENDINFOBACKENDMODELSBACKENDCONFIGMOCKCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfigMockHeaders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig& obj) { 
      DARABONBA_PTR_TO_JSON(MockHeaders, mockHeaders_);
      DARABONBA_PTR_TO_JSON(MockResult, mockResult_);
      DARABONBA_PTR_TO_JSON(MockStatusCode, mockStatusCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(MockHeaders, mockHeaders_);
      DARABONBA_PTR_FROM_JSON(MockResult, mockResult_);
      DARABONBA_PTR_FROM_JSON(MockStatusCode, mockStatusCode_);
    };
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig() = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig(const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig &) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig(DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig &&) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig() = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig& operator=(const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig &) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig& operator=(DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mockHeaders_ == nullptr
        && return this->mockResult_ == nullptr && return this->mockStatusCode_ == nullptr; };
    // mockHeaders Field Functions 
    bool hasMockHeaders() const { return this->mockHeaders_ != nullptr;};
    void deleteMockHeaders() { this->mockHeaders_ = nullptr;};
    inline const vector<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfigMockHeaders> & mockHeaders() const { DARABONBA_PTR_GET_CONST(mockHeaders_, vector<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfigMockHeaders>) };
    inline vector<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfigMockHeaders> mockHeaders() { DARABONBA_PTR_GET(mockHeaders_, vector<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfigMockHeaders>) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig& setMockHeaders(const vector<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfigMockHeaders> & mockHeaders) { DARABONBA_PTR_SET_VALUE(mockHeaders_, mockHeaders) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig& setMockHeaders(vector<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfigMockHeaders> && mockHeaders) { DARABONBA_PTR_SET_RVALUE(mockHeaders_, mockHeaders) };


    // mockResult Field Functions 
    bool hasMockResult() const { return this->mockResult_ != nullptr;};
    void deleteMockResult() { this->mockResult_ = nullptr;};
    inline string mockResult() const { DARABONBA_PTR_GET_DEFAULT(mockResult_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig& setMockResult(string mockResult) { DARABONBA_PTR_SET_VALUE(mockResult_, mockResult) };


    // mockStatusCode Field Functions 
    bool hasMockStatusCode() const { return this->mockStatusCode_ != nullptr;};
    void deleteMockStatusCode() { this->mockStatusCode_ = nullptr;};
    inline string mockStatusCode() const { DARABONBA_PTR_GET_DEFAULT(mockStatusCode_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig& setMockStatusCode(string mockStatusCode) { DARABONBA_PTR_SET_VALUE(mockStatusCode_, mockStatusCode) };


  protected:
    // The header in the mocked response.
    std::shared_ptr<vector<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfigMockHeaders>> mockHeaders_ = nullptr;
    // The mocked response.
    std::shared_ptr<string> mockResult_ = nullptr;
    // The status code in the mocked response.
    std::shared_ptr<string> mockStatusCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
