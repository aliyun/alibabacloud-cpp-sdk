// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAYER7CCRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAYER7CCRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeLayer7CCRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLayer7CCRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Layer7CCRules, layer7CCRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLayer7CCRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Layer7CCRules, layer7CCRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeLayer7CCRulesResponseBody() = default ;
    DescribeLayer7CCRulesResponseBody(const DescribeLayer7CCRulesResponseBody &) = default ;
    DescribeLayer7CCRulesResponseBody(DescribeLayer7CCRulesResponseBody &&) = default ;
    DescribeLayer7CCRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLayer7CCRulesResponseBody() = default ;
    DescribeLayer7CCRulesResponseBody& operator=(const DescribeLayer7CCRulesResponseBody &) = default ;
    DescribeLayer7CCRulesResponseBody& operator=(DescribeLayer7CCRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Layer7CCRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Layer7CCRules& obj) { 
        DARABONBA_PTR_TO_JSON(Act, act_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Interval, interval_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Ttl, ttl_);
        DARABONBA_PTR_TO_JSON(Uri, uri_);
      };
      friend void from_json(const Darabonba::Json& j, Layer7CCRules& obj) { 
        DARABONBA_PTR_FROM_JSON(Act, act_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Interval, interval_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
        DARABONBA_PTR_FROM_JSON(Uri, uri_);
      };
      Layer7CCRules() = default ;
      Layer7CCRules(const Layer7CCRules &) = default ;
      Layer7CCRules(Layer7CCRules &&) = default ;
      Layer7CCRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Layer7CCRules() = default ;
      Layer7CCRules& operator=(const Layer7CCRules &) = default ;
      Layer7CCRules& operator=(Layer7CCRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->act_ == nullptr
        && this->count_ == nullptr && this->interval_ == nullptr && this->mode_ == nullptr && this->name_ == nullptr && this->ttl_ == nullptr
        && this->uri_ == nullptr; };
      // act Field Functions 
      bool hasAct() const { return this->act_ != nullptr;};
      void deleteAct() { this->act_ = nullptr;};
      inline string getAct() const { DARABONBA_PTR_GET_DEFAULT(act_, "") };
      inline Layer7CCRules& setAct(string act) { DARABONBA_PTR_SET_VALUE(act_, act) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Layer7CCRules& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
      inline Layer7CCRules& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Layer7CCRules& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Layer7CCRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ttl Field Functions 
      bool hasTtl() const { return this->ttl_ != nullptr;};
      void deleteTtl() { this->ttl_ = nullptr;};
      inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
      inline Layer7CCRules& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


      // uri Field Functions 
      bool hasUri() const { return this->uri_ != nullptr;};
      void deleteUri() { this->uri_ = nullptr;};
      inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
      inline Layer7CCRules& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    protected:
      shared_ptr<string> act_ {};
      shared_ptr<int32_t> count_ {};
      shared_ptr<int32_t> interval_ {};
      shared_ptr<string> mode_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int32_t> ttl_ {};
      shared_ptr<string> uri_ {};
    };

    virtual bool empty() const override { return this->layer7CCRules_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // layer7CCRules Field Functions 
    bool hasLayer7CCRules() const { return this->layer7CCRules_ != nullptr;};
    void deleteLayer7CCRules() { this->layer7CCRules_ = nullptr;};
    inline const vector<DescribeLayer7CCRulesResponseBody::Layer7CCRules> & getLayer7CCRules() const { DARABONBA_PTR_GET_CONST(layer7CCRules_, vector<DescribeLayer7CCRulesResponseBody::Layer7CCRules>) };
    inline vector<DescribeLayer7CCRulesResponseBody::Layer7CCRules> getLayer7CCRules() { DARABONBA_PTR_GET(layer7CCRules_, vector<DescribeLayer7CCRulesResponseBody::Layer7CCRules>) };
    inline DescribeLayer7CCRulesResponseBody& setLayer7CCRules(const vector<DescribeLayer7CCRulesResponseBody::Layer7CCRules> & layer7CCRules) { DARABONBA_PTR_SET_VALUE(layer7CCRules_, layer7CCRules) };
    inline DescribeLayer7CCRulesResponseBody& setLayer7CCRules(vector<DescribeLayer7CCRulesResponseBody::Layer7CCRules> && layer7CCRules) { DARABONBA_PTR_SET_RVALUE(layer7CCRules_, layer7CCRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLayer7CCRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeLayer7CCRulesResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<DescribeLayer7CCRulesResponseBody::Layer7CCRules>> layer7CCRules_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
