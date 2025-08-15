// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCENESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCENESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScenesResponseBodySceneList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DescribeScenesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScenesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SceneList, sceneList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScenesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SceneList, sceneList_);
    };
    DescribeScenesResponseBody() = default ;
    DescribeScenesResponseBody(const DescribeScenesResponseBody &) = default ;
    DescribeScenesResponseBody(DescribeScenesResponseBody &&) = default ;
    DescribeScenesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScenesResponseBody() = default ;
    DescribeScenesResponseBody& operator=(const DescribeScenesResponseBody &) = default ;
    DescribeScenesResponseBody& operator=(DescribeScenesResponseBody &&) = default ;
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
    inline DescribeScenesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sceneList Field Functions 
    bool hasSceneList() const { return this->sceneList_ != nullptr;};
    void deleteSceneList() { this->sceneList_ = nullptr;};
    inline const vector<DescribeScenesResponseBodySceneList> & sceneList() const { DARABONBA_PTR_GET_CONST(sceneList_, vector<DescribeScenesResponseBodySceneList>) };
    inline vector<DescribeScenesResponseBodySceneList> sceneList() { DARABONBA_PTR_GET(sceneList_, vector<DescribeScenesResponseBodySceneList>) };
    inline DescribeScenesResponseBody& setSceneList(const vector<DescribeScenesResponseBodySceneList> & sceneList) { DARABONBA_PTR_SET_VALUE(sceneList_, sceneList) };
    inline DescribeScenesResponseBody& setSceneList(vector<DescribeScenesResponseBodySceneList> && sceneList) { DARABONBA_PTR_SET_RVALUE(sceneList_, sceneList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeScenesResponseBodySceneList>> sceneList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
