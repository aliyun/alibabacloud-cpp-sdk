// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMGSAPIRESPONSEBODYRESULTCONTENTVALUEAPIINVOKER_HPP_
#define ALIBABACLOUD_MODELS_LISTMGSAPIRESPONSEBODYRESULTCONTENTVALUEAPIINVOKER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMgsApiResponseBodyResultContentValueApiInvokerHttpInvoker.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMgsApiResponseBodyResultContentValueApiInvoker : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMgsApiResponseBodyResultContentValueApiInvoker& obj) { 
      DARABONBA_PTR_TO_JSON(HttpInvoker, httpInvoker_);
      DARABONBA_PTR_TO_JSON(RpcInvoker, rpcInvoker_);
    };
    friend void from_json(const Darabonba::Json& j, ListMgsApiResponseBodyResultContentValueApiInvoker& obj) { 
      DARABONBA_PTR_FROM_JSON(HttpInvoker, httpInvoker_);
      DARABONBA_PTR_FROM_JSON(RpcInvoker, rpcInvoker_);
    };
    ListMgsApiResponseBodyResultContentValueApiInvoker() = default ;
    ListMgsApiResponseBodyResultContentValueApiInvoker(const ListMgsApiResponseBodyResultContentValueApiInvoker &) = default ;
    ListMgsApiResponseBodyResultContentValueApiInvoker(ListMgsApiResponseBodyResultContentValueApiInvoker &&) = default ;
    ListMgsApiResponseBodyResultContentValueApiInvoker(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMgsApiResponseBodyResultContentValueApiInvoker() = default ;
    ListMgsApiResponseBodyResultContentValueApiInvoker& operator=(const ListMgsApiResponseBodyResultContentValueApiInvoker &) = default ;
    ListMgsApiResponseBodyResultContentValueApiInvoker& operator=(ListMgsApiResponseBodyResultContentValueApiInvoker &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->httpInvoker_ != nullptr
        && this->rpcInvoker_ != nullptr; };
    // httpInvoker Field Functions 
    bool hasHttpInvoker() const { return this->httpInvoker_ != nullptr;};
    void deleteHttpInvoker() { this->httpInvoker_ = nullptr;};
    inline const Models::ListMgsApiResponseBodyResultContentValueApiInvokerHttpInvoker & httpInvoker() const { DARABONBA_PTR_GET_CONST(httpInvoker_, Models::ListMgsApiResponseBodyResultContentValueApiInvokerHttpInvoker) };
    inline Models::ListMgsApiResponseBodyResultContentValueApiInvokerHttpInvoker httpInvoker() { DARABONBA_PTR_GET(httpInvoker_, Models::ListMgsApiResponseBodyResultContentValueApiInvokerHttpInvoker) };
    inline ListMgsApiResponseBodyResultContentValueApiInvoker& setHttpInvoker(const Models::ListMgsApiResponseBodyResultContentValueApiInvokerHttpInvoker & httpInvoker) { DARABONBA_PTR_SET_VALUE(httpInvoker_, httpInvoker) };
    inline ListMgsApiResponseBodyResultContentValueApiInvoker& setHttpInvoker(Models::ListMgsApiResponseBodyResultContentValueApiInvokerHttpInvoker && httpInvoker) { DARABONBA_PTR_SET_RVALUE(httpInvoker_, httpInvoker) };


    // rpcInvoker Field Functions 
    bool hasRpcInvoker() const { return this->rpcInvoker_ != nullptr;};
    void deleteRpcInvoker() { this->rpcInvoker_ = nullptr;};
    inline string rpcInvoker() const { DARABONBA_PTR_GET_DEFAULT(rpcInvoker_, "") };
    inline ListMgsApiResponseBodyResultContentValueApiInvoker& setRpcInvoker(string rpcInvoker) { DARABONBA_PTR_SET_VALUE(rpcInvoker_, rpcInvoker) };


  protected:
    std::shared_ptr<Models::ListMgsApiResponseBodyResultContentValueApiInvokerHttpInvoker> httpInvoker_ = nullptr;
    std::shared_ptr<string> rpcInvoker_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
