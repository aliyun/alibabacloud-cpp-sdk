// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTELLIGENTSTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINTELLIGENTSTRATEGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetIntelligentStrategyResponseBodyIntelligentStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetIntelligentStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIntelligentStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IntelligentStrategy, intelligentStrategy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIntelligentStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IntelligentStrategy, intelligentStrategy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetIntelligentStrategyResponseBody() = default ;
    GetIntelligentStrategyResponseBody(const GetIntelligentStrategyResponseBody &) = default ;
    GetIntelligentStrategyResponseBody(GetIntelligentStrategyResponseBody &&) = default ;
    GetIntelligentStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIntelligentStrategyResponseBody() = default ;
    GetIntelligentStrategyResponseBody& operator=(const GetIntelligentStrategyResponseBody &) = default ;
    GetIntelligentStrategyResponseBody& operator=(GetIntelligentStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->intelligentStrategy_ != nullptr
        && this->requestId_ != nullptr; };
    // intelligentStrategy Field Functions 
    bool hasIntelligentStrategy() const { return this->intelligentStrategy_ != nullptr;};
    void deleteIntelligentStrategy() { this->intelligentStrategy_ = nullptr;};
    inline const GetIntelligentStrategyResponseBodyIntelligentStrategy & intelligentStrategy() const { DARABONBA_PTR_GET_CONST(intelligentStrategy_, GetIntelligentStrategyResponseBodyIntelligentStrategy) };
    inline GetIntelligentStrategyResponseBodyIntelligentStrategy intelligentStrategy() { DARABONBA_PTR_GET(intelligentStrategy_, GetIntelligentStrategyResponseBodyIntelligentStrategy) };
    inline GetIntelligentStrategyResponseBody& setIntelligentStrategy(const GetIntelligentStrategyResponseBodyIntelligentStrategy & intelligentStrategy) { DARABONBA_PTR_SET_VALUE(intelligentStrategy_, intelligentStrategy) };
    inline GetIntelligentStrategyResponseBody& setIntelligentStrategy(GetIntelligentStrategyResponseBodyIntelligentStrategy && intelligentStrategy) { DARABONBA_PTR_SET_RVALUE(intelligentStrategy_, intelligentStrategy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIntelligentStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetIntelligentStrategyResponseBodyIntelligentStrategy> intelligentStrategy_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
