// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINTOPREFERVISITRESPONSEBODYTOPREFERLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINTOPREFERVISITRESPONSEBODYTOPREFERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainTopReferVisitResponseBodyTopReferListReferList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainTopReferVisitResponseBodyTopReferList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainTopReferVisitResponseBodyTopReferList& obj) { 
      DARABONBA_PTR_TO_JSON(ReferList, referList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainTopReferVisitResponseBodyTopReferList& obj) { 
      DARABONBA_PTR_FROM_JSON(ReferList, referList_);
    };
    DescribeVodDomainTopReferVisitResponseBodyTopReferList() = default ;
    DescribeVodDomainTopReferVisitResponseBodyTopReferList(const DescribeVodDomainTopReferVisitResponseBodyTopReferList &) = default ;
    DescribeVodDomainTopReferVisitResponseBodyTopReferList(DescribeVodDomainTopReferVisitResponseBodyTopReferList &&) = default ;
    DescribeVodDomainTopReferVisitResponseBodyTopReferList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainTopReferVisitResponseBodyTopReferList() = default ;
    DescribeVodDomainTopReferVisitResponseBodyTopReferList& operator=(const DescribeVodDomainTopReferVisitResponseBodyTopReferList &) = default ;
    DescribeVodDomainTopReferVisitResponseBodyTopReferList& operator=(DescribeVodDomainTopReferVisitResponseBodyTopReferList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->referList_ != nullptr; };
    // referList Field Functions 
    bool hasReferList() const { return this->referList_ != nullptr;};
    void deleteReferList() { this->referList_ = nullptr;};
    inline const vector<Models::DescribeVodDomainTopReferVisitResponseBodyTopReferListReferList> & referList() const { DARABONBA_PTR_GET_CONST(referList_, vector<Models::DescribeVodDomainTopReferVisitResponseBodyTopReferListReferList>) };
    inline vector<Models::DescribeVodDomainTopReferVisitResponseBodyTopReferListReferList> referList() { DARABONBA_PTR_GET(referList_, vector<Models::DescribeVodDomainTopReferVisitResponseBodyTopReferListReferList>) };
    inline DescribeVodDomainTopReferVisitResponseBodyTopReferList& setReferList(const vector<Models::DescribeVodDomainTopReferVisitResponseBodyTopReferListReferList> & referList) { DARABONBA_PTR_SET_VALUE(referList_, referList) };
    inline DescribeVodDomainTopReferVisitResponseBodyTopReferList& setReferList(vector<Models::DescribeVodDomainTopReferVisitResponseBodyTopReferListReferList> && referList) { DARABONBA_PTR_SET_RVALUE(referList_, referList) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainTopReferVisitResponseBodyTopReferListReferList>> referList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
