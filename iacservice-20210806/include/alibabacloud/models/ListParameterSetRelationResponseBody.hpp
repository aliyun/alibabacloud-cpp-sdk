// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPARAMETERSETRELATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPARAMETERSETRELATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListParameterSetRelationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListParameterSetRelationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(parameterSets, parameterSets_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListParameterSetRelationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(parameterSets, parameterSets_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListParameterSetRelationResponseBody() = default ;
    ListParameterSetRelationResponseBody(const ListParameterSetRelationResponseBody &) = default ;
    ListParameterSetRelationResponseBody(ListParameterSetRelationResponseBody &&) = default ;
    ListParameterSetRelationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListParameterSetRelationResponseBody() = default ;
    ListParameterSetRelationResponseBody& operator=(const ListParameterSetRelationResponseBody &) = default ;
    ListParameterSetRelationResponseBody& operator=(ListParameterSetRelationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ParameterSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParameterSets& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(parameterSetId, parameterSetId_);
        DARABONBA_PTR_TO_JSON(parameters, parameters_);
      };
      friend void from_json(const Darabonba::Json& j, ParameterSets& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(parameterSetId, parameterSetId_);
        DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      };
      ParameterSets() = default ;
      ParameterSets(const ParameterSets &) = default ;
      ParameterSets(ParameterSets &&) = default ;
      ParameterSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ParameterSets() = default ;
      ParameterSets& operator=(const ParameterSets &) = default ;
      ParameterSets& operator=(ParameterSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->parameterSetId_ == nullptr && this->parameters_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ParameterSets& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ParameterSets& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ParameterSets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parameterSetId Field Functions 
      bool hasParameterSetId() const { return this->parameterSetId_ != nullptr;};
      void deleteParameterSetId() { this->parameterSetId_ = nullptr;};
      inline string getParameterSetId() const { DARABONBA_PTR_GET_DEFAULT(parameterSetId_, "") };
      inline ParameterSets& setParameterSetId(string parameterSetId) { DARABONBA_PTR_SET_VALUE(parameterSetId_, parameterSetId) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const map<string, string> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
      inline map<string, string> getParameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
      inline ParameterSets& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline ParameterSets& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> parameterSetId_ {};
      shared_ptr<map<string, string>> parameters_ {};
    };

    virtual bool empty() const override { return this->parameterSets_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // parameterSets Field Functions 
    bool hasParameterSets() const { return this->parameterSets_ != nullptr;};
    void deleteParameterSets() { this->parameterSets_ = nullptr;};
    inline const vector<ListParameterSetRelationResponseBody::ParameterSets> & getParameterSets() const { DARABONBA_PTR_GET_CONST(parameterSets_, vector<ListParameterSetRelationResponseBody::ParameterSets>) };
    inline vector<ListParameterSetRelationResponseBody::ParameterSets> getParameterSets() { DARABONBA_PTR_GET(parameterSets_, vector<ListParameterSetRelationResponseBody::ParameterSets>) };
    inline ListParameterSetRelationResponseBody& setParameterSets(const vector<ListParameterSetRelationResponseBody::ParameterSets> & parameterSets) { DARABONBA_PTR_SET_VALUE(parameterSets_, parameterSets) };
    inline ListParameterSetRelationResponseBody& setParameterSets(vector<ListParameterSetRelationResponseBody::ParameterSets> && parameterSets) { DARABONBA_PTR_SET_RVALUE(parameterSets_, parameterSets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListParameterSetRelationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListParameterSetRelationResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListParameterSetRelationResponseBody::ParameterSets>> parameterSets_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
