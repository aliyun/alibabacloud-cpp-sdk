// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTDATASOURCECONNECTIVITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TESTDATASOURCECONNECTIVITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TestDataSourceConnectivityResponseBodyConnectivity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class TestDataSourceConnectivityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestDataSourceConnectivityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Connectivity, connectivity_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TestDataSourceConnectivityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Connectivity, connectivity_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    TestDataSourceConnectivityResponseBody() = default ;
    TestDataSourceConnectivityResponseBody(const TestDataSourceConnectivityResponseBody &) = default ;
    TestDataSourceConnectivityResponseBody(TestDataSourceConnectivityResponseBody &&) = default ;
    TestDataSourceConnectivityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestDataSourceConnectivityResponseBody() = default ;
    TestDataSourceConnectivityResponseBody& operator=(const TestDataSourceConnectivityResponseBody &) = default ;
    TestDataSourceConnectivityResponseBody& operator=(TestDataSourceConnectivityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectivity_ != nullptr
        && this->requestId_ != nullptr; };
    // connectivity Field Functions 
    bool hasConnectivity() const { return this->connectivity_ != nullptr;};
    void deleteConnectivity() { this->connectivity_ = nullptr;};
    inline const TestDataSourceConnectivityResponseBodyConnectivity & connectivity() const { DARABONBA_PTR_GET_CONST(connectivity_, TestDataSourceConnectivityResponseBodyConnectivity) };
    inline TestDataSourceConnectivityResponseBodyConnectivity connectivity() { DARABONBA_PTR_GET(connectivity_, TestDataSourceConnectivityResponseBodyConnectivity) };
    inline TestDataSourceConnectivityResponseBody& setConnectivity(const TestDataSourceConnectivityResponseBodyConnectivity & connectivity) { DARABONBA_PTR_SET_VALUE(connectivity_, connectivity) };
    inline TestDataSourceConnectivityResponseBody& setConnectivity(TestDataSourceConnectivityResponseBodyConnectivity && connectivity) { DARABONBA_PTR_SET_RVALUE(connectivity_, connectivity) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TestDataSourceConnectivityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the connectivity test.
    std::shared_ptr<TestDataSourceConnectivityResponseBodyConnectivity> connectivity_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
