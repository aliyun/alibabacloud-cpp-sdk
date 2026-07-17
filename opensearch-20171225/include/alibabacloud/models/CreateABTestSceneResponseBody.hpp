// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEABTESTSCENERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEABTESTSCENERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateABTestSceneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateABTestSceneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CreateABTestSceneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    CreateABTestSceneResponseBody() = default ;
    CreateABTestSceneResponseBody(const CreateABTestSceneResponseBody &) = default ;
    CreateABTestSceneResponseBody(CreateABTestSceneResponseBody &&) = default ;
    CreateABTestSceneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateABTestSceneResponseBody() = default ;
    CreateABTestSceneResponseBody& operator=(const CreateABTestSceneResponseBody &) = default ;
    CreateABTestSceneResponseBody& operator=(CreateABTestSceneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(updated, updated_);
        DARABONBA_PTR_TO_JSON(values, values_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(updated, updated_);
        DARABONBA_PTR_FROM_JSON(values, values_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->created_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->status_ == nullptr && this->updated_ == nullptr && this->values_ == nullptr; };
      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline int32_t getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, 0) };
      inline Result& setCreated(int32_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Result& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Result& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updated Field Functions 
      bool hasUpdated() const { return this->updated_ != nullptr;};
      void deleteUpdated() { this->updated_ = nullptr;};
      inline int32_t getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0) };
      inline Result& setUpdated(int32_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
      inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
      inline Result& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline Result& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      // The time when the scene was created.
      shared_ptr<int32_t> created_ {};
      // The ID of the group.
      shared_ptr<string> id_ {};
      // The name of the group.
      shared_ptr<string> name_ {};
      // The status of the scene. Valid values:
      // 
      // - 0: disabled
      // 
      // - 1: enabled
      shared_ptr<int32_t> status_ {};
      // The time when the scene was last updated.
      shared_ptr<int32_t> updated_ {};
      // The IDs of the scenes.
      shared_ptr<vector<string>> values_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateABTestSceneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CreateABTestSceneResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, CreateABTestSceneResponseBody::Result) };
    inline CreateABTestSceneResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, CreateABTestSceneResponseBody::Result) };
    inline CreateABTestSceneResponseBody& setResult(const CreateABTestSceneResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CreateABTestSceneResponseBody& setResult(CreateABTestSceneResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The result of the request.
    shared_ptr<CreateABTestSceneResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
