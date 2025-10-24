// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTSUBTITLECONFIGEXTSUBTITLELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTSUBTITLECONFIGEXTSUBTITLELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList& obj) { 
      DARABONBA_PTR_TO_JSON(ExtSubtitle, extSubtitle_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtSubtitle, extSubtitle_);
    };
    QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList() = default ;
    QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList(const QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList &) = default ;
    QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList(QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList &&) = default ;
    QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList() = default ;
    QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList& operator=(const QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList &) = default ;
    QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList& operator=(QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extSubtitle_ == nullptr; };
    // extSubtitle Field Functions 
    bool hasExtSubtitle() const { return this->extSubtitle_ != nullptr;};
    void deleteExtSubtitle() { this->extSubtitle_ = nullptr;};
    inline const vector<Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle> & extSubtitle() const { DARABONBA_PTR_GET_CONST(extSubtitle_, vector<Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle>) };
    inline vector<Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle> extSubtitle() { DARABONBA_PTR_GET(extSubtitle_, vector<Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle>) };
    inline QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList& setExtSubtitle(const vector<Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle> & extSubtitle) { DARABONBA_PTR_SET_VALUE(extSubtitle_, extSubtitle) };
    inline QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList& setExtSubtitle(vector<Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle> && extSubtitle) { DARABONBA_PTR_SET_RVALUE(extSubtitle_, extSubtitle) };


  protected:
    std::shared_ptr<vector<Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle>> extSubtitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
