// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINBYDOMAINNAMERESPONSEBODYTAG_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINBYDOMAINNAMERESPONSEBODYTAG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDomainByDomainNameResponseBodyTagTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainByDomainNameResponseBodyTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainByDomainNameResponseBodyTag& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainByDomainNameResponseBodyTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    QueryDomainByDomainNameResponseBodyTag() = default ;
    QueryDomainByDomainNameResponseBodyTag(const QueryDomainByDomainNameResponseBodyTag &) = default ;
    QueryDomainByDomainNameResponseBodyTag(QueryDomainByDomainNameResponseBodyTag &&) = default ;
    QueryDomainByDomainNameResponseBodyTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainByDomainNameResponseBodyTag() = default ;
    QueryDomainByDomainNameResponseBodyTag& operator=(const QueryDomainByDomainNameResponseBodyTag &) = default ;
    QueryDomainByDomainNameResponseBodyTag& operator=(QueryDomainByDomainNameResponseBodyTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::QueryDomainByDomainNameResponseBodyTagTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::QueryDomainByDomainNameResponseBodyTagTag>) };
    inline vector<Models::QueryDomainByDomainNameResponseBodyTagTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::QueryDomainByDomainNameResponseBodyTagTag>) };
    inline QueryDomainByDomainNameResponseBodyTag& setTag(const vector<Models::QueryDomainByDomainNameResponseBodyTagTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline QueryDomainByDomainNameResponseBodyTag& setTag(vector<Models::QueryDomainByDomainNameResponseBodyTagTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::QueryDomainByDomainNameResponseBodyTagTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
