// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINBYINSTANCEIDRESPONSEBODYTAG_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINBYINSTANCEIDRESPONSEBODYTAG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDomainByInstanceIdResponseBodyTagTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainByInstanceIdResponseBodyTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainByInstanceIdResponseBodyTag& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainByInstanceIdResponseBodyTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    QueryDomainByInstanceIdResponseBodyTag() = default ;
    QueryDomainByInstanceIdResponseBodyTag(const QueryDomainByInstanceIdResponseBodyTag &) = default ;
    QueryDomainByInstanceIdResponseBodyTag(QueryDomainByInstanceIdResponseBodyTag &&) = default ;
    QueryDomainByInstanceIdResponseBodyTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainByInstanceIdResponseBodyTag() = default ;
    QueryDomainByInstanceIdResponseBodyTag& operator=(const QueryDomainByInstanceIdResponseBodyTag &) = default ;
    QueryDomainByInstanceIdResponseBodyTag& operator=(QueryDomainByInstanceIdResponseBodyTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::QueryDomainByInstanceIdResponseBodyTagTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::QueryDomainByInstanceIdResponseBodyTagTag>) };
    inline vector<Models::QueryDomainByInstanceIdResponseBodyTagTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::QueryDomainByInstanceIdResponseBodyTagTag>) };
    inline QueryDomainByInstanceIdResponseBodyTag& setTag(const vector<Models::QueryDomainByInstanceIdResponseBodyTagTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline QueryDomainByInstanceIdResponseBodyTag& setTag(vector<Models::QueryDomainByInstanceIdResponseBodyTagTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::QueryDomainByInstanceIdResponseBodyTagTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
