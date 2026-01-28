// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINSUFFIXRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINSUFFIXRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainSuffixResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainSuffixResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuffixList, suffixList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainSuffixResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuffixList, suffixList_);
    };
    QueryDomainSuffixResponseBody() = default ;
    QueryDomainSuffixResponseBody(const QueryDomainSuffixResponseBody &) = default ;
    QueryDomainSuffixResponseBody(QueryDomainSuffixResponseBody &&) = default ;
    QueryDomainSuffixResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainSuffixResponseBody() = default ;
    QueryDomainSuffixResponseBody& operator=(const QueryDomainSuffixResponseBody &) = default ;
    QueryDomainSuffixResponseBody& operator=(QueryDomainSuffixResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SuffixList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SuffixList& obj) { 
        DARABONBA_PTR_TO_JSON(Suffix, suffix_);
      };
      friend void from_json(const Darabonba::Json& j, SuffixList& obj) { 
        DARABONBA_PTR_FROM_JSON(Suffix, suffix_);
      };
      SuffixList() = default ;
      SuffixList(const SuffixList &) = default ;
      SuffixList(SuffixList &&) = default ;
      SuffixList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SuffixList() = default ;
      SuffixList& operator=(const SuffixList &) = default ;
      SuffixList& operator=(SuffixList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->suffix_ == nullptr; };
      // suffix Field Functions 
      bool hasSuffix() const { return this->suffix_ != nullptr;};
      void deleteSuffix() { this->suffix_ = nullptr;};
      inline const vector<string> & getSuffix() const { DARABONBA_PTR_GET_CONST(suffix_, vector<string>) };
      inline vector<string> getSuffix() { DARABONBA_PTR_GET(suffix_, vector<string>) };
      inline SuffixList& setSuffix(const vector<string> & suffix) { DARABONBA_PTR_SET_VALUE(suffix_, suffix) };
      inline SuffixList& setSuffix(vector<string> && suffix) { DARABONBA_PTR_SET_RVALUE(suffix_, suffix) };


    protected:
      shared_ptr<vector<string>> suffix_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->suffixList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDomainSuffixResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // suffixList Field Functions 
    bool hasSuffixList() const { return this->suffixList_ != nullptr;};
    void deleteSuffixList() { this->suffixList_ = nullptr;};
    inline const QueryDomainSuffixResponseBody::SuffixList & getSuffixList() const { DARABONBA_PTR_GET_CONST(suffixList_, QueryDomainSuffixResponseBody::SuffixList) };
    inline QueryDomainSuffixResponseBody::SuffixList getSuffixList() { DARABONBA_PTR_GET(suffixList_, QueryDomainSuffixResponseBody::SuffixList) };
    inline QueryDomainSuffixResponseBody& setSuffixList(const QueryDomainSuffixResponseBody::SuffixList & suffixList) { DARABONBA_PTR_SET_VALUE(suffixList_, suffixList) };
    inline QueryDomainSuffixResponseBody& setSuffixList(QueryDomainSuffixResponseBody::SuffixList && suffixList) { DARABONBA_PTR_SET_RVALUE(suffixList_, suffixList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<QueryDomainSuffixResponseBody::SuffixList> suffixList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
