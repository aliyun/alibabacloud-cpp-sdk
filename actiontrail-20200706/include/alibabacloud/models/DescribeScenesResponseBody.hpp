// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCENESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCENESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class SceneList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SceneList& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
        DARABONBA_PTR_TO_JSON(Token, token_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, SceneList& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
        DARABONBA_PTR_FROM_JSON(Token, token_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      SceneList() = default ;
      SceneList(const SceneList &) = default ;
      SceneList(SceneList &&) = default ;
      SceneList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SceneList() = default ;
      SceneList& operator=(const SceneList &) = default ;
      SceneList& operator=(SceneList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->sceneId_ == nullptr && this->token_ == nullptr && this->type_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SceneList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SceneList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // sceneId Field Functions 
      bool hasSceneId() const { return this->sceneId_ != nullptr;};
      void deleteSceneId() { this->sceneId_ = nullptr;};
      inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
      inline SceneList& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline SceneList& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline SceneList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> sceneId_ {};
      shared_ptr<string> token_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sceneList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScenesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sceneList Field Functions 
    bool hasSceneList() const { return this->sceneList_ != nullptr;};
    void deleteSceneList() { this->sceneList_ = nullptr;};
    inline const vector<DescribeScenesResponseBody::SceneList> & getSceneList() const { DARABONBA_PTR_GET_CONST(sceneList_, vector<DescribeScenesResponseBody::SceneList>) };
    inline vector<DescribeScenesResponseBody::SceneList> getSceneList() { DARABONBA_PTR_GET(sceneList_, vector<DescribeScenesResponseBody::SceneList>) };
    inline DescribeScenesResponseBody& setSceneList(const vector<DescribeScenesResponseBody::SceneList> & sceneList) { DARABONBA_PTR_SET_VALUE(sceneList_, sceneList) };
    inline DescribeScenesResponseBody& setSceneList(vector<DescribeScenesResponseBody::SceneList> && sceneList) { DARABONBA_PTR_SET_RVALUE(sceneList_, sceneList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeScenesResponseBody::SceneList>> sceneList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
