// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVISITUASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVISITUASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeVisitUasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVisitUasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Uas, uas_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVisitUasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Uas, uas_);
    };
    DescribeVisitUasResponseBody() = default ;
    DescribeVisitUasResponseBody(const DescribeVisitUasResponseBody &) = default ;
    DescribeVisitUasResponseBody(DescribeVisitUasResponseBody &&) = default ;
    DescribeVisitUasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVisitUasResponseBody() = default ;
    DescribeVisitUasResponseBody& operator=(const DescribeVisitUasResponseBody &) = default ;
    DescribeVisitUasResponseBody& operator=(DescribeVisitUasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Uas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Uas& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Ua, ua_);
      };
      friend void from_json(const Darabonba::Json& j, Uas& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Ua, ua_);
      };
      Uas() = default ;
      Uas(const Uas &) = default ;
      Uas(Uas &&) = default ;
      Uas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Uas() = default ;
      Uas& operator=(const Uas &) = default ;
      Uas& operator=(Uas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->ua_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline Uas& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // ua Field Functions 
      bool hasUa() const { return this->ua_ != nullptr;};
      void deleteUa() { this->ua_ = nullptr;};
      inline string getUa() const { DARABONBA_PTR_GET_DEFAULT(ua_, "") };
      inline Uas& setUa(string ua) { DARABONBA_PTR_SET_VALUE(ua_, ua) };


    protected:
      // The number of requests that use the user agent.
      shared_ptr<int64_t> count_ {};
      // The user agent.
      shared_ptr<string> ua_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->uas_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVisitUasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uas Field Functions 
    bool hasUas() const { return this->uas_ != nullptr;};
    void deleteUas() { this->uas_ = nullptr;};
    inline const vector<DescribeVisitUasResponseBody::Uas> & getUas() const { DARABONBA_PTR_GET_CONST(uas_, vector<DescribeVisitUasResponseBody::Uas>) };
    inline vector<DescribeVisitUasResponseBody::Uas> getUas() { DARABONBA_PTR_GET(uas_, vector<DescribeVisitUasResponseBody::Uas>) };
    inline DescribeVisitUasResponseBody& setUas(const vector<DescribeVisitUasResponseBody::Uas> & uas) { DARABONBA_PTR_SET_VALUE(uas_, uas) };
    inline DescribeVisitUasResponseBody& setUas(vector<DescribeVisitUasResponseBody::Uas> && uas) { DARABONBA_PTR_SET_RVALUE(uas_, uas) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The array of the top 10 user agents that are used to initiate requests.
    shared_ptr<vector<DescribeVisitUasResponseBody::Uas>> uas_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
