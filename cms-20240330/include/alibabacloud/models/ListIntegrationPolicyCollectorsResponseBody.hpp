// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYCOLLECTORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYCOLLECTORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIntegrationPolicyCollectorsResponseBodyCollectors.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyCollectorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyCollectorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(collectors, collectors_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyCollectorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(collectors, collectors_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListIntegrationPolicyCollectorsResponseBody() = default ;
    ListIntegrationPolicyCollectorsResponseBody(const ListIntegrationPolicyCollectorsResponseBody &) = default ;
    ListIntegrationPolicyCollectorsResponseBody(ListIntegrationPolicyCollectorsResponseBody &&) = default ;
    ListIntegrationPolicyCollectorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyCollectorsResponseBody() = default ;
    ListIntegrationPolicyCollectorsResponseBody& operator=(const ListIntegrationPolicyCollectorsResponseBody &) = default ;
    ListIntegrationPolicyCollectorsResponseBody& operator=(ListIntegrationPolicyCollectorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collectors_ == nullptr
        && return this->requestId_ == nullptr; };
    // collectors Field Functions 
    bool hasCollectors() const { return this->collectors_ != nullptr;};
    void deleteCollectors() { this->collectors_ = nullptr;};
    inline const vector<ListIntegrationPolicyCollectorsResponseBodyCollectors> & collectors() const { DARABONBA_PTR_GET_CONST(collectors_, vector<ListIntegrationPolicyCollectorsResponseBodyCollectors>) };
    inline vector<ListIntegrationPolicyCollectorsResponseBodyCollectors> collectors() { DARABONBA_PTR_GET(collectors_, vector<ListIntegrationPolicyCollectorsResponseBodyCollectors>) };
    inline ListIntegrationPolicyCollectorsResponseBody& setCollectors(const vector<ListIntegrationPolicyCollectorsResponseBodyCollectors> & collectors) { DARABONBA_PTR_SET_VALUE(collectors_, collectors) };
    inline ListIntegrationPolicyCollectorsResponseBody& setCollectors(vector<ListIntegrationPolicyCollectorsResponseBodyCollectors> && collectors) { DARABONBA_PTR_SET_RVALUE(collectors_, collectors) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntegrationPolicyCollectorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListIntegrationPolicyCollectorsResponseBodyCollectors>> collectors_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
