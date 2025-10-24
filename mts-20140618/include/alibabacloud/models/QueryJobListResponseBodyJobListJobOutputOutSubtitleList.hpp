// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTOUTSUBTITLELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTOUTSUBTITLELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputOutSubtitleListOutSubtitle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputOutSubtitleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputOutSubtitleList& obj) { 
      DARABONBA_PTR_TO_JSON(OutSubtitle, outSubtitle_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputOutSubtitleList& obj) { 
      DARABONBA_PTR_FROM_JSON(OutSubtitle, outSubtitle_);
    };
    QueryJobListResponseBodyJobListJobOutputOutSubtitleList() = default ;
    QueryJobListResponseBodyJobListJobOutputOutSubtitleList(const QueryJobListResponseBodyJobListJobOutputOutSubtitleList &) = default ;
    QueryJobListResponseBodyJobListJobOutputOutSubtitleList(QueryJobListResponseBodyJobListJobOutputOutSubtitleList &&) = default ;
    QueryJobListResponseBodyJobListJobOutputOutSubtitleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputOutSubtitleList() = default ;
    QueryJobListResponseBodyJobListJobOutputOutSubtitleList& operator=(const QueryJobListResponseBodyJobListJobOutputOutSubtitleList &) = default ;
    QueryJobListResponseBodyJobListJobOutputOutSubtitleList& operator=(QueryJobListResponseBodyJobListJobOutputOutSubtitleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outSubtitle_ == nullptr; };
    // outSubtitle Field Functions 
    bool hasOutSubtitle() const { return this->outSubtitle_ != nullptr;};
    void deleteOutSubtitle() { this->outSubtitle_ = nullptr;};
    inline const vector<Models::QueryJobListResponseBodyJobListJobOutputOutSubtitleListOutSubtitle> & outSubtitle() const { DARABONBA_PTR_GET_CONST(outSubtitle_, vector<Models::QueryJobListResponseBodyJobListJobOutputOutSubtitleListOutSubtitle>) };
    inline vector<Models::QueryJobListResponseBodyJobListJobOutputOutSubtitleListOutSubtitle> outSubtitle() { DARABONBA_PTR_GET(outSubtitle_, vector<Models::QueryJobListResponseBodyJobListJobOutputOutSubtitleListOutSubtitle>) };
    inline QueryJobListResponseBodyJobListJobOutputOutSubtitleList& setOutSubtitle(const vector<Models::QueryJobListResponseBodyJobListJobOutputOutSubtitleListOutSubtitle> & outSubtitle) { DARABONBA_PTR_SET_VALUE(outSubtitle_, outSubtitle) };
    inline QueryJobListResponseBodyJobListJobOutputOutSubtitleList& setOutSubtitle(vector<Models::QueryJobListResponseBodyJobListJobOutputOutSubtitleListOutSubtitle> && outSubtitle) { DARABONBA_PTR_SET_RVALUE(outSubtitle_, outSubtitle) };


  protected:
    std::shared_ptr<vector<Models::QueryJobListResponseBodyJobListJobOutputOutSubtitleListOutSubtitle>> outSubtitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
