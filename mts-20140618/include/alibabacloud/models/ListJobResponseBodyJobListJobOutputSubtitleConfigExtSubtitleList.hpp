// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTSUBTITLECONFIGEXTSUBTITLELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTSUBTITLECONFIGEXTSUBTITLELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList& obj) { 
      DARABONBA_PTR_TO_JSON(ExtSubtitle, extSubtitle_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtSubtitle, extSubtitle_);
    };
    ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList() = default ;
    ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList(const ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList &) = default ;
    ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList(ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList &&) = default ;
    ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList() = default ;
    ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList& operator=(const ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList &) = default ;
    ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList& operator=(ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extSubtitle_ == nullptr; };
    // extSubtitle Field Functions 
    bool hasExtSubtitle() const { return this->extSubtitle_ != nullptr;};
    void deleteExtSubtitle() { this->extSubtitle_ = nullptr;};
    inline const vector<Models::ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle> & extSubtitle() const { DARABONBA_PTR_GET_CONST(extSubtitle_, vector<Models::ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle>) };
    inline vector<Models::ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle> extSubtitle() { DARABONBA_PTR_GET(extSubtitle_, vector<Models::ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle>) };
    inline ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList& setExtSubtitle(const vector<Models::ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle> & extSubtitle) { DARABONBA_PTR_SET_VALUE(extSubtitle_, extSubtitle) };
    inline ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList& setExtSubtitle(vector<Models::ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle> && extSubtitle) { DARABONBA_PTR_SET_RVALUE(extSubtitle_, extSubtitle) };


  protected:
    std::shared_ptr<vector<Models::ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle>> extSubtitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
