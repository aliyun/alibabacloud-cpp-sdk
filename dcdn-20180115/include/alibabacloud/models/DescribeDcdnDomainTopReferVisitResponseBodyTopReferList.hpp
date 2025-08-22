// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINTOPREFERVISITRESPONSEBODYTOPREFERLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINTOPREFERVISITRESPONSEBODYTOPREFERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainTopReferVisitResponseBodyTopReferListReferList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainTopReferVisitResponseBodyTopReferList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainTopReferVisitResponseBodyTopReferList& obj) { 
      DARABONBA_PTR_TO_JSON(ReferList, referList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainTopReferVisitResponseBodyTopReferList& obj) { 
      DARABONBA_PTR_FROM_JSON(ReferList, referList_);
    };
    DescribeDcdnDomainTopReferVisitResponseBodyTopReferList() = default ;
    DescribeDcdnDomainTopReferVisitResponseBodyTopReferList(const DescribeDcdnDomainTopReferVisitResponseBodyTopReferList &) = default ;
    DescribeDcdnDomainTopReferVisitResponseBodyTopReferList(DescribeDcdnDomainTopReferVisitResponseBodyTopReferList &&) = default ;
    DescribeDcdnDomainTopReferVisitResponseBodyTopReferList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainTopReferVisitResponseBodyTopReferList() = default ;
    DescribeDcdnDomainTopReferVisitResponseBodyTopReferList& operator=(const DescribeDcdnDomainTopReferVisitResponseBodyTopReferList &) = default ;
    DescribeDcdnDomainTopReferVisitResponseBodyTopReferList& operator=(DescribeDcdnDomainTopReferVisitResponseBodyTopReferList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->referList_ != nullptr; };
    // referList Field Functions 
    bool hasReferList() const { return this->referList_ != nullptr;};
    void deleteReferList() { this->referList_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainTopReferVisitResponseBodyTopReferListReferList> & referList() const { DARABONBA_PTR_GET_CONST(referList_, vector<Models::DescribeDcdnDomainTopReferVisitResponseBodyTopReferListReferList>) };
    inline vector<Models::DescribeDcdnDomainTopReferVisitResponseBodyTopReferListReferList> referList() { DARABONBA_PTR_GET(referList_, vector<Models::DescribeDcdnDomainTopReferVisitResponseBodyTopReferListReferList>) };
    inline DescribeDcdnDomainTopReferVisitResponseBodyTopReferList& setReferList(const vector<Models::DescribeDcdnDomainTopReferVisitResponseBodyTopReferListReferList> & referList) { DARABONBA_PTR_SET_VALUE(referList_, referList) };
    inline DescribeDcdnDomainTopReferVisitResponseBodyTopReferList& setReferList(vector<Models::DescribeDcdnDomainTopReferVisitResponseBodyTopReferListReferList> && referList) { DARABONBA_PTR_SET_RVALUE(referList_, referList) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainTopReferVisitResponseBodyTopReferListReferList>> referList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
