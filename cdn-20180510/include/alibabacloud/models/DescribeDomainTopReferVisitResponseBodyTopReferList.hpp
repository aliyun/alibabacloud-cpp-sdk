// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPREFERVISITRESPONSEBODYTOPREFERLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPREFERVISITRESPONSEBODYTOPREFERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainTopReferVisitResponseBodyTopReferListReferList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainTopReferVisitResponseBodyTopReferList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopReferVisitResponseBodyTopReferList& obj) { 
      DARABONBA_PTR_TO_JSON(ReferList, referList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopReferVisitResponseBodyTopReferList& obj) { 
      DARABONBA_PTR_FROM_JSON(ReferList, referList_);
    };
    DescribeDomainTopReferVisitResponseBodyTopReferList() = default ;
    DescribeDomainTopReferVisitResponseBodyTopReferList(const DescribeDomainTopReferVisitResponseBodyTopReferList &) = default ;
    DescribeDomainTopReferVisitResponseBodyTopReferList(DescribeDomainTopReferVisitResponseBodyTopReferList &&) = default ;
    DescribeDomainTopReferVisitResponseBodyTopReferList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopReferVisitResponseBodyTopReferList() = default ;
    DescribeDomainTopReferVisitResponseBodyTopReferList& operator=(const DescribeDomainTopReferVisitResponseBodyTopReferList &) = default ;
    DescribeDomainTopReferVisitResponseBodyTopReferList& operator=(DescribeDomainTopReferVisitResponseBodyTopReferList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->referList_ != nullptr; };
    // referList Field Functions 
    bool hasReferList() const { return this->referList_ != nullptr;};
    void deleteReferList() { this->referList_ = nullptr;};
    inline const vector<Models::DescribeDomainTopReferVisitResponseBodyTopReferListReferList> & referList() const { DARABONBA_PTR_GET_CONST(referList_, vector<Models::DescribeDomainTopReferVisitResponseBodyTopReferListReferList>) };
    inline vector<Models::DescribeDomainTopReferVisitResponseBodyTopReferListReferList> referList() { DARABONBA_PTR_GET(referList_, vector<Models::DescribeDomainTopReferVisitResponseBodyTopReferListReferList>) };
    inline DescribeDomainTopReferVisitResponseBodyTopReferList& setReferList(const vector<Models::DescribeDomainTopReferVisitResponseBodyTopReferListReferList> & referList) { DARABONBA_PTR_SET_VALUE(referList_, referList) };
    inline DescribeDomainTopReferVisitResponseBodyTopReferList& setReferList(vector<Models::DescribeDomainTopReferVisitResponseBodyTopReferListReferList> && referList) { DARABONBA_PTR_SET_RVALUE(referList_, referList) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainTopReferVisitResponseBodyTopReferListReferList>> referList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
