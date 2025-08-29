// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLAYERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLAYERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLayersResponseBodyLayers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListLayersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLayersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Layers, layers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLayersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Layers, layers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLayersResponseBody() = default ;
    ListLayersResponseBody(const ListLayersResponseBody &) = default ;
    ListLayersResponseBody(ListLayersResponseBody &&) = default ;
    ListLayersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLayersResponseBody() = default ;
    ListLayersResponseBody& operator=(const ListLayersResponseBody &) = default ;
    ListLayersResponseBody& operator=(ListLayersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->layers_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // layers Field Functions 
    bool hasLayers() const { return this->layers_ != nullptr;};
    void deleteLayers() { this->layers_ = nullptr;};
    inline const vector<ListLayersResponseBodyLayers> & layers() const { DARABONBA_PTR_GET_CONST(layers_, vector<ListLayersResponseBodyLayers>) };
    inline vector<ListLayersResponseBodyLayers> layers() { DARABONBA_PTR_GET(layers_, vector<ListLayersResponseBodyLayers>) };
    inline ListLayersResponseBody& setLayers(const vector<ListLayersResponseBodyLayers> & layers) { DARABONBA_PTR_SET_VALUE(layers_, layers) };
    inline ListLayersResponseBody& setLayers(vector<ListLayersResponseBodyLayers> && layers) { DARABONBA_PTR_SET_RVALUE(layers_, layers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLayersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLayersResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListLayersResponseBodyLayers>> layers_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
