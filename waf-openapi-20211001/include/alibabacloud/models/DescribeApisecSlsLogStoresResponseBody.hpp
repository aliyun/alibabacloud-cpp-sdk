// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECSLSLOGSTORESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECSLSLOGSTORESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecSlsLogStoresResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecSlsLogStoresResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogStores, logStores_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecSlsLogStoresResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogStores, logStores_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApisecSlsLogStoresResponseBody() = default ;
    DescribeApisecSlsLogStoresResponseBody(const DescribeApisecSlsLogStoresResponseBody &) = default ;
    DescribeApisecSlsLogStoresResponseBody(DescribeApisecSlsLogStoresResponseBody &&) = default ;
    DescribeApisecSlsLogStoresResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecSlsLogStoresResponseBody() = default ;
    DescribeApisecSlsLogStoresResponseBody& operator=(const DescribeApisecSlsLogStoresResponseBody &) = default ;
    DescribeApisecSlsLogStoresResponseBody& operator=(DescribeApisecSlsLogStoresResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logStores_ == nullptr
        && return this->requestId_ == nullptr; };
    // logStores Field Functions 
    bool hasLogStores() const { return this->logStores_ != nullptr;};
    void deleteLogStores() { this->logStores_ = nullptr;};
    inline const vector<string> & logStores() const { DARABONBA_PTR_GET_CONST(logStores_, vector<string>) };
    inline vector<string> logStores() { DARABONBA_PTR_GET(logStores_, vector<string>) };
    inline DescribeApisecSlsLogStoresResponseBody& setLogStores(const vector<string> & logStores) { DARABONBA_PTR_SET_VALUE(logStores_, logStores) };
    inline DescribeApisecSlsLogStoresResponseBody& setLogStores(vector<string> && logStores) { DARABONBA_PTR_SET_RVALUE(logStores_, logStores) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisecSlsLogStoresResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The names of the Logstores in Simple Log Service.
    std::shared_ptr<vector<string>> logStores_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
