// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINSUFFIXRESPONSEBODYSUFFIXLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINSUFFIXRESPONSEBODYSUFFIXLIST_HPP_
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
  class QueryDomainSuffixResponseBodySuffixList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainSuffixResponseBodySuffixList& obj) { 
      DARABONBA_PTR_TO_JSON(Suffix, suffix_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainSuffixResponseBodySuffixList& obj) { 
      DARABONBA_PTR_FROM_JSON(Suffix, suffix_);
    };
    QueryDomainSuffixResponseBodySuffixList() = default ;
    QueryDomainSuffixResponseBodySuffixList(const QueryDomainSuffixResponseBodySuffixList &) = default ;
    QueryDomainSuffixResponseBodySuffixList(QueryDomainSuffixResponseBodySuffixList &&) = default ;
    QueryDomainSuffixResponseBodySuffixList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainSuffixResponseBodySuffixList() = default ;
    QueryDomainSuffixResponseBodySuffixList& operator=(const QueryDomainSuffixResponseBodySuffixList &) = default ;
    QueryDomainSuffixResponseBodySuffixList& operator=(QueryDomainSuffixResponseBodySuffixList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->suffix_ == nullptr; };
    // suffix Field Functions 
    bool hasSuffix() const { return this->suffix_ != nullptr;};
    void deleteSuffix() { this->suffix_ = nullptr;};
    inline const vector<string> & suffix() const { DARABONBA_PTR_GET_CONST(suffix_, vector<string>) };
    inline vector<string> suffix() { DARABONBA_PTR_GET(suffix_, vector<string>) };
    inline QueryDomainSuffixResponseBodySuffixList& setSuffix(const vector<string> & suffix) { DARABONBA_PTR_SET_VALUE(suffix_, suffix) };
    inline QueryDomainSuffixResponseBodySuffixList& setSuffix(vector<string> && suffix) { DARABONBA_PTR_SET_RVALUE(suffix_, suffix) };


  protected:
    std::shared_ptr<vector<string>> suffix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
