// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMGSAPIRESTRESPONSEBODYRESULTCONTENTVALUEAPIINVOKER_HPP_
#define ALIBABACLOUD_MODELS_QUERYMGSAPIRESTRESPONSEBODYRESULTCONTENTVALUEAPIINVOKER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMgsApirestResponseBodyResultContentValueApiInvoker : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMgsApirestResponseBodyResultContentValueApiInvoker& obj) { 
      DARABONBA_PTR_TO_JSON(HttpInvoker, httpInvoker_);
      DARABONBA_PTR_TO_JSON(RpcInvoker, rpcInvoker_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMgsApirestResponseBodyResultContentValueApiInvoker& obj) { 
      DARABONBA_PTR_FROM_JSON(HttpInvoker, httpInvoker_);
      DARABONBA_PTR_FROM_JSON(RpcInvoker, rpcInvoker_);
    };
    QueryMgsApirestResponseBodyResultContentValueApiInvoker() = default ;
    QueryMgsApirestResponseBodyResultContentValueApiInvoker(const QueryMgsApirestResponseBodyResultContentValueApiInvoker &) = default ;
    QueryMgsApirestResponseBodyResultContentValueApiInvoker(QueryMgsApirestResponseBodyResultContentValueApiInvoker &&) = default ;
    QueryMgsApirestResponseBodyResultContentValueApiInvoker(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMgsApirestResponseBodyResultContentValueApiInvoker() = default ;
    QueryMgsApirestResponseBodyResultContentValueApiInvoker& operator=(const QueryMgsApirestResponseBodyResultContentValueApiInvoker &) = default ;
    QueryMgsApirestResponseBodyResultContentValueApiInvoker& operator=(QueryMgsApirestResponseBodyResultContentValueApiInvoker &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->httpInvoker_ != nullptr
        && this->rpcInvoker_ != nullptr; };
    // httpInvoker Field Functions 
    bool hasHttpInvoker() const { return this->httpInvoker_ != nullptr;};
    void deleteHttpInvoker() { this->httpInvoker_ = nullptr;};
    inline const Models::QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker & httpInvoker() const { DARABONBA_PTR_GET_CONST(httpInvoker_, Models::QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker) };
    inline Models::QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker httpInvoker() { DARABONBA_PTR_GET(httpInvoker_, Models::QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker) };
    inline QueryMgsApirestResponseBodyResultContentValueApiInvoker& setHttpInvoker(const Models::QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker & httpInvoker) { DARABONBA_PTR_SET_VALUE(httpInvoker_, httpInvoker) };
    inline QueryMgsApirestResponseBodyResultContentValueApiInvoker& setHttpInvoker(Models::QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker && httpInvoker) { DARABONBA_PTR_SET_RVALUE(httpInvoker_, httpInvoker) };


    // rpcInvoker Field Functions 
    bool hasRpcInvoker() const { return this->rpcInvoker_ != nullptr;};
    void deleteRpcInvoker() { this->rpcInvoker_ = nullptr;};
    inline string rpcInvoker() const { DARABONBA_PTR_GET_DEFAULT(rpcInvoker_, "") };
    inline QueryMgsApirestResponseBodyResultContentValueApiInvoker& setRpcInvoker(string rpcInvoker) { DARABONBA_PTR_SET_VALUE(rpcInvoker_, rpcInvoker) };


  protected:
    std::shared_ptr<Models::QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker> httpInvoker_ = nullptr;
    std::shared_ptr<string> rpcInvoker_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
