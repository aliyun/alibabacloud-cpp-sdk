// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSCENECONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSCENECONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySceneConfigsResponseBodySceneConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class QuerySceneConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySceneConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(sceneConfigs, sceneConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySceneConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sceneConfigs, sceneConfigs_);
    };
    QuerySceneConfigsResponseBody() = default ;
    QuerySceneConfigsResponseBody(const QuerySceneConfigsResponseBody &) = default ;
    QuerySceneConfigsResponseBody(QuerySceneConfigsResponseBody &&) = default ;
    QuerySceneConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySceneConfigsResponseBody() = default ;
    QuerySceneConfigsResponseBody& operator=(const QuerySceneConfigsResponseBody &) = default ;
    QuerySceneConfigsResponseBody& operator=(QuerySceneConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->sceneConfigs_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySceneConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sceneConfigs Field Functions 
    bool hasSceneConfigs() const { return this->sceneConfigs_ != nullptr;};
    void deleteSceneConfigs() { this->sceneConfigs_ = nullptr;};
    inline const vector<QuerySceneConfigsResponseBodySceneConfigs> & sceneConfigs() const { DARABONBA_PTR_GET_CONST(sceneConfigs_, vector<QuerySceneConfigsResponseBodySceneConfigs>) };
    inline vector<QuerySceneConfigsResponseBodySceneConfigs> sceneConfigs() { DARABONBA_PTR_GET(sceneConfigs_, vector<QuerySceneConfigsResponseBodySceneConfigs>) };
    inline QuerySceneConfigsResponseBody& setSceneConfigs(const vector<QuerySceneConfigsResponseBodySceneConfigs> & sceneConfigs) { DARABONBA_PTR_SET_VALUE(sceneConfigs_, sceneConfigs) };
    inline QuerySceneConfigsResponseBody& setSceneConfigs(vector<QuerySceneConfigsResponseBodySceneConfigs> && sceneConfigs) { DARABONBA_PTR_SET_RVALUE(sceneConfigs_, sceneConfigs) };


  protected:
    // ID of this request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Willingness configuration list.
    std::shared_ptr<vector<QuerySceneConfigsResponseBodySceneConfigs>> sceneConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
