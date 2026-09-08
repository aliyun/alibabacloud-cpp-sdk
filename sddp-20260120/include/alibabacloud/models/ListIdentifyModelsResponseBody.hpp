// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIDENTIFYMODELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIDENTIFYMODELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class ListIdentifyModelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIdentifyModelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
    };
    friend void from_json(const Darabonba::Json& j, ListIdentifyModelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
    };
    ListIdentifyModelsResponseBody() = default ;
    ListIdentifyModelsResponseBody(const ListIdentifyModelsResponseBody &) = default ;
    ListIdentifyModelsResponseBody(ListIdentifyModelsResponseBody &&) = default ;
    ListIdentifyModelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIdentifyModelsResponseBody() = default ;
    ListIdentifyModelsResponseBody& operator=(const ListIdentifyModelsResponseBody &) = default ;
    ListIdentifyModelsResponseBody& operator=(ListIdentifyModelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleList& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, RuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      RuleList() = default ;
      RuleList(const RuleList &) = default ;
      RuleList(RuleList &&) = default ;
      RuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleList() = default ;
      RuleList& operator=(const RuleList &) = default ;
      RuleList& operator=(RuleList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline RuleList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RuleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->ruleList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIdentifyModelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<ListIdentifyModelsResponseBody::RuleList> & getRuleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<ListIdentifyModelsResponseBody::RuleList>) };
    inline vector<ListIdentifyModelsResponseBody::RuleList> getRuleList() { DARABONBA_PTR_GET(ruleList_, vector<ListIdentifyModelsResponseBody::RuleList>) };
    inline ListIdentifyModelsResponseBody& setRuleList(const vector<ListIdentifyModelsResponseBody::RuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline ListIdentifyModelsResponseBody& setRuleList(vector<ListIdentifyModelsResponseBody::RuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListIdentifyModelsResponseBody::RuleList>> ruleList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
