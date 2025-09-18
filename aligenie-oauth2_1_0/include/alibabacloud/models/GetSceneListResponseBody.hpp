// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCENELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCENELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSceneListResponseBodySceneList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieoauth2_1_0
{
namespace Models
{
  class GetSceneListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSceneListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SceneList, sceneList_);
    };
    friend void from_json(const Darabonba::Json& j, GetSceneListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SceneList, sceneList_);
    };
    GetSceneListResponseBody() = default ;
    GetSceneListResponseBody(const GetSceneListResponseBody &) = default ;
    GetSceneListResponseBody(GetSceneListResponseBody &&) = default ;
    GetSceneListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSceneListResponseBody() = default ;
    GetSceneListResponseBody& operator=(const GetSceneListResponseBody &) = default ;
    GetSceneListResponseBody& operator=(GetSceneListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->sceneList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSceneListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sceneList Field Functions 
    bool hasSceneList() const { return this->sceneList_ != nullptr;};
    void deleteSceneList() { this->sceneList_ = nullptr;};
    inline const vector<GetSceneListResponseBodySceneList> & sceneList() const { DARABONBA_PTR_GET_CONST(sceneList_, vector<GetSceneListResponseBodySceneList>) };
    inline vector<GetSceneListResponseBodySceneList> sceneList() { DARABONBA_PTR_GET(sceneList_, vector<GetSceneListResponseBodySceneList>) };
    inline GetSceneListResponseBody& setSceneList(const vector<GetSceneListResponseBodySceneList> & sceneList) { DARABONBA_PTR_SET_VALUE(sceneList_, sceneList) };
    inline GetSceneListResponseBody& setSceneList(vector<GetSceneListResponseBodySceneList> && sceneList) { DARABONBA_PTR_SET_RVALUE(sceneList_, sceneList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<GetSceneListResponseBodySceneList>> sceneList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieoauth2_1_0
#endif
