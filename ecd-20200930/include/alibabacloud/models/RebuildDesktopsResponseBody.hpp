// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBUILDDESKTOPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REBUILDDESKTOPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RebuildDesktopsResponseBodyRebuildResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class RebuildDesktopsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebuildDesktopsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RebuildResults, rebuildResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RebuildDesktopsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RebuildResults, rebuildResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RebuildDesktopsResponseBody() = default ;
    RebuildDesktopsResponseBody(const RebuildDesktopsResponseBody &) = default ;
    RebuildDesktopsResponseBody(RebuildDesktopsResponseBody &&) = default ;
    RebuildDesktopsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebuildDesktopsResponseBody() = default ;
    RebuildDesktopsResponseBody& operator=(const RebuildDesktopsResponseBody &) = default ;
    RebuildDesktopsResponseBody& operator=(RebuildDesktopsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rebuildResults_ != nullptr
        && this->requestId_ != nullptr; };
    // rebuildResults Field Functions 
    bool hasRebuildResults() const { return this->rebuildResults_ != nullptr;};
    void deleteRebuildResults() { this->rebuildResults_ = nullptr;};
    inline const vector<RebuildDesktopsResponseBodyRebuildResults> & rebuildResults() const { DARABONBA_PTR_GET_CONST(rebuildResults_, vector<RebuildDesktopsResponseBodyRebuildResults>) };
    inline vector<RebuildDesktopsResponseBodyRebuildResults> rebuildResults() { DARABONBA_PTR_GET(rebuildResults_, vector<RebuildDesktopsResponseBodyRebuildResults>) };
    inline RebuildDesktopsResponseBody& setRebuildResults(const vector<RebuildDesktopsResponseBodyRebuildResults> & rebuildResults) { DARABONBA_PTR_SET_VALUE(rebuildResults_, rebuildResults) };
    inline RebuildDesktopsResponseBody& setRebuildResults(vector<RebuildDesktopsResponseBodyRebuildResults> && rebuildResults) { DARABONBA_PTR_SET_RVALUE(rebuildResults_, rebuildResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RebuildDesktopsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The recreation results.
    std::shared_ptr<vector<RebuildDesktopsResponseBodyRebuildResults>> rebuildResults_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
