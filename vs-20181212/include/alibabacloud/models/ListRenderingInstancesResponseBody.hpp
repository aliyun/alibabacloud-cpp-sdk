// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRENDERINGINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRENDERINGINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRenderingInstancesResponseBodyRenderingInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListRenderingInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRenderingInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RenderingInstances, renderingInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRenderingInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RenderingInstances, renderingInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRenderingInstancesResponseBody() = default ;
    ListRenderingInstancesResponseBody(const ListRenderingInstancesResponseBody &) = default ;
    ListRenderingInstancesResponseBody(ListRenderingInstancesResponseBody &&) = default ;
    ListRenderingInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRenderingInstancesResponseBody() = default ;
    ListRenderingInstancesResponseBody& operator=(const ListRenderingInstancesResponseBody &) = default ;
    ListRenderingInstancesResponseBody& operator=(ListRenderingInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->renderingInstances_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // renderingInstances Field Functions 
    bool hasRenderingInstances() const { return this->renderingInstances_ != nullptr;};
    void deleteRenderingInstances() { this->renderingInstances_ = nullptr;};
    inline const vector<ListRenderingInstancesResponseBodyRenderingInstances> & renderingInstances() const { DARABONBA_PTR_GET_CONST(renderingInstances_, vector<ListRenderingInstancesResponseBodyRenderingInstances>) };
    inline vector<ListRenderingInstancesResponseBodyRenderingInstances> renderingInstances() { DARABONBA_PTR_GET(renderingInstances_, vector<ListRenderingInstancesResponseBodyRenderingInstances>) };
    inline ListRenderingInstancesResponseBody& setRenderingInstances(const vector<ListRenderingInstancesResponseBodyRenderingInstances> & renderingInstances) { DARABONBA_PTR_SET_VALUE(renderingInstances_, renderingInstances) };
    inline ListRenderingInstancesResponseBody& setRenderingInstances(vector<ListRenderingInstancesResponseBodyRenderingInstances> && renderingInstances) { DARABONBA_PTR_SET_RVALUE(renderingInstances_, renderingInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRenderingInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRenderingInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListRenderingInstancesResponseBodyRenderingInstances>> renderingInstances_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
