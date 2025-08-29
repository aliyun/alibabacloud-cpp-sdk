// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCENESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCENESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListScenesResponseBodyScenes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListScenesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScenesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Scenes, scenes_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListScenesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Scenes, scenes_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListScenesResponseBody() = default ;
    ListScenesResponseBody(const ListScenesResponseBody &) = default ;
    ListScenesResponseBody(ListScenesResponseBody &&) = default ;
    ListScenesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScenesResponseBody() = default ;
    ListScenesResponseBody& operator=(const ListScenesResponseBody &) = default ;
    ListScenesResponseBody& operator=(ListScenesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->scenes_ != nullptr && this->totalCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScenesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scenes Field Functions 
    bool hasScenes() const { return this->scenes_ != nullptr;};
    void deleteScenes() { this->scenes_ = nullptr;};
    inline const vector<ListScenesResponseBodyScenes> & scenes() const { DARABONBA_PTR_GET_CONST(scenes_, vector<ListScenesResponseBodyScenes>) };
    inline vector<ListScenesResponseBodyScenes> scenes() { DARABONBA_PTR_GET(scenes_, vector<ListScenesResponseBodyScenes>) };
    inline ListScenesResponseBody& setScenes(const vector<ListScenesResponseBodyScenes> & scenes) { DARABONBA_PTR_SET_VALUE(scenes_, scenes) };
    inline ListScenesResponseBody& setScenes(vector<ListScenesResponseBodyScenes> && scenes) { DARABONBA_PTR_SET_RVALUE(scenes_, scenes) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListScenesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListScenesResponseBodyScenes>> scenes_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
