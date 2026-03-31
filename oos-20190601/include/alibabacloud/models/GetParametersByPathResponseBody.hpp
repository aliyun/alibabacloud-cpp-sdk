// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPARAMETERSBYPATHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPARAMETERSBYPATHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetParametersByPathResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetParametersByPathResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetParametersByPathResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetParametersByPathResponseBody() = default ;
    GetParametersByPathResponseBody(const GetParametersByPathResponseBody &) = default ;
    GetParametersByPathResponseBody(GetParametersByPathResponseBody &&) = default ;
    GetParametersByPathResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetParametersByPathResponseBody() = default ;
    GetParametersByPathResponseBody& operator=(const GetParametersByPathResponseBody &) = default ;
    GetParametersByPathResponseBody& operator=(GetParametersByPathResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(Constraints, constraints_);
        DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
        DARABONBA_PTR_TO_JSON(CreatedDate, createdDate_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ParameterVersion, parameterVersion_);
        DARABONBA_PTR_TO_JSON(ShareType, shareType_);
        DARABONBA_ANY_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UpdatedBy, updatedBy_);
        DARABONBA_PTR_TO_JSON(UpdatedDate, updatedDate_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
        DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
        DARABONBA_PTR_FROM_JSON(CreatedDate, createdDate_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ParameterVersion, parameterVersion_);
        DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
        DARABONBA_ANY_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UpdatedBy, updatedBy_);
        DARABONBA_PTR_FROM_JSON(UpdatedDate, updatedDate_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Parameters() = default ;
      Parameters(const Parameters &) = default ;
      Parameters(Parameters &&) = default ;
      Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameters() = default ;
      Parameters& operator=(const Parameters &) = default ;
      Parameters& operator=(Parameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->constraints_ == nullptr
        && this->createdBy_ == nullptr && this->createdDate_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->parameterVersion_ == nullptr && this->shareType_ == nullptr && this->tags_ == nullptr && this->type_ == nullptr && this->updatedBy_ == nullptr
        && this->updatedDate_ == nullptr && this->value_ == nullptr; };
      // constraints Field Functions 
      bool hasConstraints() const { return this->constraints_ != nullptr;};
      void deleteConstraints() { this->constraints_ = nullptr;};
      inline string getConstraints() const { DARABONBA_PTR_GET_DEFAULT(constraints_, "") };
      inline Parameters& setConstraints(string constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };


      // createdBy Field Functions 
      bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
      void deleteCreatedBy() { this->createdBy_ = nullptr;};
      inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
      inline Parameters& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


      // createdDate Field Functions 
      bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
      void deleteCreatedDate() { this->createdDate_ = nullptr;};
      inline string getCreatedDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, "") };
      inline Parameters& setCreatedDate(string createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Parameters& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Parameters& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Parameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parameterVersion Field Functions 
      bool hasParameterVersion() const { return this->parameterVersion_ != nullptr;};
      void deleteParameterVersion() { this->parameterVersion_ = nullptr;};
      inline int32_t getParameterVersion() const { DARABONBA_PTR_GET_DEFAULT(parameterVersion_, 0) };
      inline Parameters& setParameterVersion(int32_t parameterVersion) { DARABONBA_PTR_SET_VALUE(parameterVersion_, parameterVersion) };


      // shareType Field Functions 
      bool hasShareType() const { return this->shareType_ != nullptr;};
      void deleteShareType() { this->shareType_ = nullptr;};
      inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
      inline Parameters& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline       const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
      Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
      inline Parameters& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
      inline Parameters& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Parameters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updatedBy Field Functions 
      bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
      void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
      inline string getUpdatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
      inline Parameters& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


      // updatedDate Field Functions 
      bool hasUpdatedDate() const { return this->updatedDate_ != nullptr;};
      void deleteUpdatedDate() { this->updatedDate_ = nullptr;};
      inline string getUpdatedDate() const { DARABONBA_PTR_GET_DEFAULT(updatedDate_, "") };
      inline Parameters& setUpdatedDate(string updatedDate) { DARABONBA_PTR_SET_VALUE(updatedDate_, updatedDate) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Parameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The constraints of the common parameter.
      shared_ptr<string> constraints_ {};
      // The user who created the common parameter.
      shared_ptr<string> createdBy_ {};
      // The time when the common parameter was created.
      shared_ptr<string> createdDate_ {};
      // The description of the common parameter.
      shared_ptr<string> description_ {};
      // The ID of the common parameter.
      shared_ptr<string> id_ {};
      // The name of the common parameter.
      shared_ptr<string> name_ {};
      // The version number of the common parameter.
      shared_ptr<int32_t> parameterVersion_ {};
      // The share type of the common parameter.
      shared_ptr<string> shareType_ {};
      // The tags added to the common parameters.
      Darabonba::Json tags_ {};
      // The type of the common parameter.
      shared_ptr<string> type_ {};
      // The user who updated the common parameter.
      shared_ptr<string> updatedBy_ {};
      // The time when the common parameter was last updated.
      shared_ptr<string> updatedDate_ {};
      // The value of the common parameter.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->parameters_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetParametersByPathResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetParametersByPathResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<GetParametersByPathResponseBody::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<GetParametersByPathResponseBody::Parameters>) };
    inline vector<GetParametersByPathResponseBody::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<GetParametersByPathResponseBody::Parameters>) };
    inline GetParametersByPathResponseBody& setParameters(const vector<GetParametersByPathResponseBody::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetParametersByPathResponseBody& setParameters(vector<GetParametersByPathResponseBody::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetParametersByPathResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetParametersByPathResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The information about the common parameters.
    shared_ptr<vector<GetParametersByPathResponseBody::Parameters>> parameters_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
