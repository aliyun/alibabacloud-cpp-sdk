// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRENDERINGPROJECTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRENDERINGPROJECTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRenderingProjectInstancesResponseBodyRenderingInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListRenderingProjectInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRenderingProjectInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RenderingInstances, renderingInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRenderingProjectInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RenderingInstances, renderingInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRenderingProjectInstancesResponseBody() = default ;
    ListRenderingProjectInstancesResponseBody(const ListRenderingProjectInstancesResponseBody &) = default ;
    ListRenderingProjectInstancesResponseBody(ListRenderingProjectInstancesResponseBody &&) = default ;
    ListRenderingProjectInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRenderingProjectInstancesResponseBody() = default ;
    ListRenderingProjectInstancesResponseBody& operator=(const ListRenderingProjectInstancesResponseBody &) = default ;
    ListRenderingProjectInstancesResponseBody& operator=(ListRenderingProjectInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->renderingInstances_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // renderingInstances Field Functions 
    bool hasRenderingInstances() const { return this->renderingInstances_ != nullptr;};
    void deleteRenderingInstances() { this->renderingInstances_ = nullptr;};
    inline const vector<ListRenderingProjectInstancesResponseBodyRenderingInstances> & renderingInstances() const { DARABONBA_PTR_GET_CONST(renderingInstances_, vector<ListRenderingProjectInstancesResponseBodyRenderingInstances>) };
    inline vector<ListRenderingProjectInstancesResponseBodyRenderingInstances> renderingInstances() { DARABONBA_PTR_GET(renderingInstances_, vector<ListRenderingProjectInstancesResponseBodyRenderingInstances>) };
    inline ListRenderingProjectInstancesResponseBody& setRenderingInstances(const vector<ListRenderingProjectInstancesResponseBodyRenderingInstances> & renderingInstances) { DARABONBA_PTR_SET_VALUE(renderingInstances_, renderingInstances) };
    inline ListRenderingProjectInstancesResponseBody& setRenderingInstances(vector<ListRenderingProjectInstancesResponseBodyRenderingInstances> && renderingInstances) { DARABONBA_PTR_SET_RVALUE(renderingInstances_, renderingInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRenderingProjectInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRenderingProjectInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListRenderingProjectInstancesResponseBodyRenderingInstances>> renderingInstances_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
