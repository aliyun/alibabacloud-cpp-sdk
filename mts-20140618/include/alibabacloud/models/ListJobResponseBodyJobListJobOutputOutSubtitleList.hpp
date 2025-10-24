// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTOUTSUBTITLELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTOUTSUBTITLELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBodyJobListJobOutputOutSubtitleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBodyJobListJobOutputOutSubtitleList& obj) { 
      DARABONBA_PTR_TO_JSON(OutSubtitle, outSubtitle_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobResponseBodyJobListJobOutputOutSubtitleList& obj) { 
      DARABONBA_PTR_FROM_JSON(OutSubtitle, outSubtitle_);
    };
    ListJobResponseBodyJobListJobOutputOutSubtitleList() = default ;
    ListJobResponseBodyJobListJobOutputOutSubtitleList(const ListJobResponseBodyJobListJobOutputOutSubtitleList &) = default ;
    ListJobResponseBodyJobListJobOutputOutSubtitleList(ListJobResponseBodyJobListJobOutputOutSubtitleList &&) = default ;
    ListJobResponseBodyJobListJobOutputOutSubtitleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBodyJobListJobOutputOutSubtitleList() = default ;
    ListJobResponseBodyJobListJobOutputOutSubtitleList& operator=(const ListJobResponseBodyJobListJobOutputOutSubtitleList &) = default ;
    ListJobResponseBodyJobListJobOutputOutSubtitleList& operator=(ListJobResponseBodyJobListJobOutputOutSubtitleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outSubtitle_ == nullptr; };
    // outSubtitle Field Functions 
    bool hasOutSubtitle() const { return this->outSubtitle_ != nullptr;};
    void deleteOutSubtitle() { this->outSubtitle_ = nullptr;};
    inline const vector<Models::ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle> & outSubtitle() const { DARABONBA_PTR_GET_CONST(outSubtitle_, vector<Models::ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle>) };
    inline vector<Models::ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle> outSubtitle() { DARABONBA_PTR_GET(outSubtitle_, vector<Models::ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle>) };
    inline ListJobResponseBodyJobListJobOutputOutSubtitleList& setOutSubtitle(const vector<Models::ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle> & outSubtitle) { DARABONBA_PTR_SET_VALUE(outSubtitle_, outSubtitle) };
    inline ListJobResponseBodyJobListJobOutputOutSubtitleList& setOutSubtitle(vector<Models::ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle> && outSubtitle) { DARABONBA_PTR_SET_RVALUE(outSubtitle_, outSubtitle) };


  protected:
    std::shared_ptr<vector<Models::ListJobResponseBodyJobListJobOutputOutSubtitleListOutSubtitle>> outSubtitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
