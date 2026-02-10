// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMRULEAGGREGATIONTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMRULEAGGREGATIONTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListSystemRuleAggregationTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemRuleAggregationTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AggregationTypeList, aggregationTypeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemRuleAggregationTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregationTypeList, aggregationTypeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSystemRuleAggregationTypesResponseBody() = default ;
    ListSystemRuleAggregationTypesResponseBody(const ListSystemRuleAggregationTypesResponseBody &) = default ;
    ListSystemRuleAggregationTypesResponseBody(ListSystemRuleAggregationTypesResponseBody &&) = default ;
    ListSystemRuleAggregationTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemRuleAggregationTypesResponseBody() = default ;
    ListSystemRuleAggregationTypesResponseBody& operator=(const ListSystemRuleAggregationTypesResponseBody &) = default ;
    ListSystemRuleAggregationTypesResponseBody& operator=(ListSystemRuleAggregationTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AggregationTypeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AggregationTypeList& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, AggregationTypeList& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      AggregationTypeList() = default ;
      AggregationTypeList(const AggregationTypeList &) = default ;
      AggregationTypeList(AggregationTypeList &&) = default ;
      AggregationTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AggregationTypeList() = default ;
      AggregationTypeList& operator=(const AggregationTypeList &) = default ;
      AggregationTypeList& operator=(AggregationTypeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
      inline AggregationTypeList& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline AggregationTypeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The ID of the aggregation type.
      shared_ptr<int32_t> id_ {};
      // The name of the aggregation type.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->aggregationTypeList_ == nullptr
        && this->requestId_ == nullptr; };
    // aggregationTypeList Field Functions 
    bool hasAggregationTypeList() const { return this->aggregationTypeList_ != nullptr;};
    void deleteAggregationTypeList() { this->aggregationTypeList_ = nullptr;};
    inline const vector<ListSystemRuleAggregationTypesResponseBody::AggregationTypeList> & getAggregationTypeList() const { DARABONBA_PTR_GET_CONST(aggregationTypeList_, vector<ListSystemRuleAggregationTypesResponseBody::AggregationTypeList>) };
    inline vector<ListSystemRuleAggregationTypesResponseBody::AggregationTypeList> getAggregationTypeList() { DARABONBA_PTR_GET(aggregationTypeList_, vector<ListSystemRuleAggregationTypesResponseBody::AggregationTypeList>) };
    inline ListSystemRuleAggregationTypesResponseBody& setAggregationTypeList(const vector<ListSystemRuleAggregationTypesResponseBody::AggregationTypeList> & aggregationTypeList) { DARABONBA_PTR_SET_VALUE(aggregationTypeList_, aggregationTypeList) };
    inline ListSystemRuleAggregationTypesResponseBody& setAggregationTypeList(vector<ListSystemRuleAggregationTypesResponseBody::AggregationTypeList> && aggregationTypeList) { DARABONBA_PTR_SET_RVALUE(aggregationTypeList_, aggregationTypeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSystemRuleAggregationTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the aggregation types.
    shared_ptr<vector<ListSystemRuleAggregationTypesResponseBody::AggregationTypeList>> aggregationTypeList_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
