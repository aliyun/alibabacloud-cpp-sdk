// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTAGBYPARAMRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYTAGBYPARAMRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryTagByParamResponseBodyDataTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryTagByParamResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTagByParamResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTagByParamResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(tag, tag_);
    };
    QueryTagByParamResponseBodyData() = default ;
    QueryTagByParamResponseBodyData(const QueryTagByParamResponseBodyData &) = default ;
    QueryTagByParamResponseBodyData(QueryTagByParamResponseBodyData &&) = default ;
    QueryTagByParamResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTagByParamResponseBodyData() = default ;
    QueryTagByParamResponseBodyData& operator=(const QueryTagByParamResponseBodyData &) = default ;
    QueryTagByParamResponseBodyData& operator=(QueryTagByParamResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::QueryTagByParamResponseBodyDataTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::QueryTagByParamResponseBodyDataTag>) };
    inline vector<Models::QueryTagByParamResponseBodyDataTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::QueryTagByParamResponseBodyDataTag>) };
    inline QueryTagByParamResponseBodyData& setTag(const vector<Models::QueryTagByParamResponseBodyDataTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline QueryTagByParamResponseBodyData& setTag(vector<Models::QueryTagByParamResponseBodyDataTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::QueryTagByParamResponseBodyDataTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
