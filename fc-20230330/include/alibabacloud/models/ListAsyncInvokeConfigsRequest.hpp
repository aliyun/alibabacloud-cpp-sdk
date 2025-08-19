// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASYNCINVOKECONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTASYNCINVOKECONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListAsyncInvokeConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAsyncInvokeConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(functionName, functionName_);
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListAsyncInvokeConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(functionName, functionName_);
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ListAsyncInvokeConfigsRequest() = default ;
    ListAsyncInvokeConfigsRequest(const ListAsyncInvokeConfigsRequest &) = default ;
    ListAsyncInvokeConfigsRequest(ListAsyncInvokeConfigsRequest &&) = default ;
    ListAsyncInvokeConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAsyncInvokeConfigsRequest() = default ;
    ListAsyncInvokeConfigsRequest& operator=(const ListAsyncInvokeConfigsRequest &) = default ;
    ListAsyncInvokeConfigsRequest& operator=(ListAsyncInvokeConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->functionName_ != nullptr
        && this->limit_ != nullptr && this->nextToken_ != nullptr; };
    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline ListAsyncInvokeConfigsRequest& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListAsyncInvokeConfigsRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAsyncInvokeConfigsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The function name. If you do not configure this parameter, the asynchronous invocation configurations of all functions are displayed.
    std::shared_ptr<string> functionName_ = nullptr;
    // The maximum number of entries to be returned.
    std::shared_ptr<int32_t> limit_ = nullptr;
    // The paging information. This parameter specifies the start point of the query.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
