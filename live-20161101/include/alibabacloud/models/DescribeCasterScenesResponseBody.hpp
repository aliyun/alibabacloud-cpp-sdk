// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSCENESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSCENESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCasterScenesResponseBodySceneList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterScenesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterScenesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SceneList, sceneList_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterScenesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SceneList, sceneList_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeCasterScenesResponseBody() = default ;
    DescribeCasterScenesResponseBody(const DescribeCasterScenesResponseBody &) = default ;
    DescribeCasterScenesResponseBody(DescribeCasterScenesResponseBody &&) = default ;
    DescribeCasterScenesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterScenesResponseBody() = default ;
    DescribeCasterScenesResponseBody& operator=(const DescribeCasterScenesResponseBody &) = default ;
    DescribeCasterScenesResponseBody& operator=(DescribeCasterScenesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->sceneList_ == nullptr && return this->total_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCasterScenesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sceneList Field Functions 
    bool hasSceneList() const { return this->sceneList_ != nullptr;};
    void deleteSceneList() { this->sceneList_ = nullptr;};
    inline const DescribeCasterScenesResponseBodySceneList & sceneList() const { DARABONBA_PTR_GET_CONST(sceneList_, DescribeCasterScenesResponseBodySceneList) };
    inline DescribeCasterScenesResponseBodySceneList sceneList() { DARABONBA_PTR_GET(sceneList_, DescribeCasterScenesResponseBodySceneList) };
    inline DescribeCasterScenesResponseBody& setSceneList(const DescribeCasterScenesResponseBodySceneList & sceneList) { DARABONBA_PTR_SET_VALUE(sceneList_, sceneList) };
    inline DescribeCasterScenesResponseBody& setSceneList(DescribeCasterScenesResponseBodySceneList && sceneList) { DARABONBA_PTR_SET_RVALUE(sceneList_, sceneList) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeCasterScenesResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The scenes.
    std::shared_ptr<DescribeCasterScenesResponseBodySceneList> sceneList_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
