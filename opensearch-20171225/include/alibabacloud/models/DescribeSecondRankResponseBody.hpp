// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECONDRANKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECONDRANKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class DescribeSecondRankResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecondRankResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecondRankResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    DescribeSecondRankResponseBody() = default ;
    DescribeSecondRankResponseBody(const DescribeSecondRankResponseBody &) = default ;
    DescribeSecondRankResponseBody(DescribeSecondRankResponseBody &&) = default ;
    DescribeSecondRankResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecondRankResponseBody() = default ;
    DescribeSecondRankResponseBody& operator=(const DescribeSecondRankResponseBody &) = default ;
    DescribeSecondRankResponseBody& operator=(DescribeSecondRankResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(active, active_);
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(isDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(isSys, isSys_);
        DARABONBA_PTR_TO_JSON(meta, meta_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(updated, updated_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(active, active_);
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(isDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(isSys, isSys_);
        DARABONBA_PTR_FROM_JSON(meta, meta_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(updated, updated_);
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
      virtual bool empty() const override { return this->active_ == nullptr
        && this->created_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->isDefault_ == nullptr && this->isSys_ == nullptr
        && this->meta_ == nullptr && this->name_ == nullptr && this->updated_ == nullptr; };
      // active Field Functions 
      bool hasActive() const { return this->active_ != nullptr;};
      void deleteActive() { this->active_ = nullptr;};
      inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
      inline Result& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline int32_t getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, 0) };
      inline Result& setCreated(int32_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Result& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline string getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
      inline Result& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // isSys Field Functions 
      bool hasIsSys() const { return this->isSys_ != nullptr;};
      void deleteIsSys() { this->isSys_ = nullptr;};
      inline string getIsSys() const { DARABONBA_PTR_GET_DEFAULT(isSys_, "") };
      inline Result& setIsSys(string isSys) { DARABONBA_PTR_SET_VALUE(isSys_, isSys) };


      // meta Field Functions 
      bool hasMeta() const { return this->meta_ != nullptr;};
      void deleteMeta() { this->meta_ = nullptr;};
      inline string getMeta() const { DARABONBA_PTR_GET_DEFAULT(meta_, "") };
      inline Result& setMeta(string meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // updated Field Functions 
      bool hasUpdated() const { return this->updated_ != nullptr;};
      void deleteUpdated() { this->updated_ = nullptr;};
      inline int32_t getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0) };
      inline Result& setUpdated(int32_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    protected:
      // Indicates whether the expression is active.
      shared_ptr<bool> active_ {};
      // The time when the expression was created.
      shared_ptr<int32_t> created_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The ID of the expression. This parameter is returned only in the response.
      shared_ptr<string> id_ {};
      // Indicates whether the expression is the default one. This parameter is returned only in the response.
      // 
      // - true
      // 
      // - false
      shared_ptr<string> isDefault_ {};
      // Indicates whether the expression is a system expression. This parameter is returned only in the response.
      // 
      // - true
      // 
      // - false
      shared_ptr<string> isSys_ {};
      // The second-rank expression. You can write an expression that contains fields, feature functions, and mathematical functions to implement complex sort logic.
      shared_ptr<string> meta_ {};
      // The name of the expression.
      shared_ptr<string> name_ {};
      // The time when the expression was updated.
      shared_ptr<int32_t> updated_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecondRankResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribeSecondRankResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DescribeSecondRankResponseBody::Result) };
    inline DescribeSecondRankResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DescribeSecondRankResponseBody::Result) };
    inline DescribeSecondRankResponseBody& setResult(const DescribeSecondRankResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeSecondRankResponseBody& setResult(DescribeSecondRankResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the second-rank expression.
    shared_ptr<DescribeSecondRankResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
