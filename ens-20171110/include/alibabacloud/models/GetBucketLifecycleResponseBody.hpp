// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUCKETLIFECYCLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBUCKETLIFECYCLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class GetBucketLifecycleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBucketLifecycleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, GetBucketLifecycleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    GetBucketLifecycleResponseBody() = default ;
    GetBucketLifecycleResponseBody(const GetBucketLifecycleResponseBody &) = default ;
    GetBucketLifecycleResponseBody(GetBucketLifecycleResponseBody &&) = default ;
    GetBucketLifecycleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBucketLifecycleResponseBody() = default ;
    GetBucketLifecycleResponseBody& operator=(const GetBucketLifecycleResponseBody &) = default ;
    GetBucketLifecycleResponseBody& operator=(GetBucketLifecycleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rule& obj) { 
        DARABONBA_PTR_TO_JSON(Expiration, expiration_);
        DARABONBA_PTR_TO_JSON(ID, ID_);
        DARABONBA_PTR_TO_JSON(Prefix, prefix_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Rule& obj) { 
        DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
        DARABONBA_PTR_FROM_JSON(ID, ID_);
        DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Rule() = default ;
      Rule(const Rule &) = default ;
      Rule(Rule &&) = default ;
      Rule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rule() = default ;
      Rule& operator=(const Rule &) = default ;
      Rule& operator=(Rule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Expiration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Expiration& obj) { 
          DARABONBA_PTR_TO_JSON(CreatedBeforeDate, createdBeforeDate_);
          DARABONBA_PTR_TO_JSON(Days, days_);
        };
        friend void from_json(const Darabonba::Json& j, Expiration& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatedBeforeDate, createdBeforeDate_);
          DARABONBA_PTR_FROM_JSON(Days, days_);
        };
        Expiration() = default ;
        Expiration(const Expiration &) = default ;
        Expiration(Expiration &&) = default ;
        Expiration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Expiration() = default ;
        Expiration& operator=(const Expiration &) = default ;
        Expiration& operator=(Expiration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createdBeforeDate_ == nullptr
        && this->days_ == nullptr; };
        // createdBeforeDate Field Functions 
        bool hasCreatedBeforeDate() const { return this->createdBeforeDate_ != nullptr;};
        void deleteCreatedBeforeDate() { this->createdBeforeDate_ = nullptr;};
        inline string getCreatedBeforeDate() const { DARABONBA_PTR_GET_DEFAULT(createdBeforeDate_, "") };
        inline Expiration& setCreatedBeforeDate(string createdBeforeDate) { DARABONBA_PTR_SET_VALUE(createdBeforeDate_, createdBeforeDate) };


        // days Field Functions 
        bool hasDays() const { return this->days_ != nullptr;};
        void deleteDays() { this->days_ = nullptr;};
        inline string getDays() const { DARABONBA_PTR_GET_DEFAULT(days_, "") };
        inline Expiration& setDays(string days) { DARABONBA_PTR_SET_VALUE(days_, days) };


      protected:
        // The expiration date.
        shared_ptr<string> createdBeforeDate_ {};
        // The validity period, in days.
        shared_ptr<string> days_ {};
      };

      virtual bool empty() const override { return this->expiration_ == nullptr
        && this->ID_ == nullptr && this->prefix_ == nullptr && this->status_ == nullptr; };
      // expiration Field Functions 
      bool hasExpiration() const { return this->expiration_ != nullptr;};
      void deleteExpiration() { this->expiration_ = nullptr;};
      inline const Rule::Expiration & getExpiration() const { DARABONBA_PTR_GET_CONST(expiration_, Rule::Expiration) };
      inline Rule::Expiration getExpiration() { DARABONBA_PTR_GET(expiration_, Rule::Expiration) };
      inline Rule& setExpiration(const Rule::Expiration & expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };
      inline Rule& setExpiration(Rule::Expiration && expiration) { DARABONBA_PTR_SET_RVALUE(expiration_, expiration) };


      // ID Field Functions 
      bool hasID() const { return this->ID_ != nullptr;};
      void deleteID() { this->ID_ = nullptr;};
      inline string getID() const { DARABONBA_PTR_GET_DEFAULT(ID_, "") };
      inline Rule& setID(string ID) { DARABONBA_PTR_SET_VALUE(ID_, ID) };


      // prefix Field Functions 
      bool hasPrefix() const { return this->prefix_ != nullptr;};
      void deletePrefix() { this->prefix_ = nullptr;};
      inline string getPrefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
      inline Rule& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Rule& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The expiration time.
      shared_ptr<Rule::Expiration> expiration_ {};
      // The unique ID of the rule.
      shared_ptr<string> ID_ {};
      // The prefix that is applied to the rule.
      shared_ptr<string> prefix_ {};
      // The status of the rule. Valid values:
      // 
      // *   **Enabled**: The rule is periodically executed.
      // *   **Disabled**: The rule is ignored.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->rule_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBucketLifecycleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const vector<GetBucketLifecycleResponseBody::Rule> & getRule() const { DARABONBA_PTR_GET_CONST(rule_, vector<GetBucketLifecycleResponseBody::Rule>) };
    inline vector<GetBucketLifecycleResponseBody::Rule> getRule() { DARABONBA_PTR_GET(rule_, vector<GetBucketLifecycleResponseBody::Rule>) };
    inline GetBucketLifecycleResponseBody& setRule(const vector<GetBucketLifecycleResponseBody::Rule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline GetBucketLifecycleResponseBody& setRule(vector<GetBucketLifecycleResponseBody::Rule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The detailed information about the rule.
    shared_ptr<vector<GetBucketLifecycleResponseBody::Rule>> rule_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
