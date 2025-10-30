// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODYMATCHESMATCHLISTVECTOR_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODYMATCHESMATCHLISTVECTOR_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryContentResponseBodyMatchesMatchListVector : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryContentResponseBodyMatchesMatchListVector& obj) { 
      DARABONBA_PTR_TO_JSON(VectorList, vectorList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryContentResponseBodyMatchesMatchListVector& obj) { 
      DARABONBA_PTR_FROM_JSON(VectorList, vectorList_);
    };
    QueryContentResponseBodyMatchesMatchListVector() = default ;
    QueryContentResponseBodyMatchesMatchListVector(const QueryContentResponseBodyMatchesMatchListVector &) = default ;
    QueryContentResponseBodyMatchesMatchListVector(QueryContentResponseBodyMatchesMatchListVector &&) = default ;
    QueryContentResponseBodyMatchesMatchListVector(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryContentResponseBodyMatchesMatchListVector() = default ;
    QueryContentResponseBodyMatchesMatchListVector& operator=(const QueryContentResponseBodyMatchesMatchListVector &) = default ;
    QueryContentResponseBodyMatchesMatchListVector& operator=(QueryContentResponseBodyMatchesMatchListVector &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vectorList_ == nullptr; };
    // vectorList Field Functions 
    bool hasVectorList() const { return this->vectorList_ != nullptr;};
    void deleteVectorList() { this->vectorList_ = nullptr;};
    inline const vector<double> & vectorList() const { DARABONBA_PTR_GET_CONST(vectorList_, vector<double>) };
    inline vector<double> vectorList() { DARABONBA_PTR_GET(vectorList_, vector<double>) };
    inline QueryContentResponseBodyMatchesMatchListVector& setVectorList(const vector<double> & vectorList) { DARABONBA_PTR_SET_VALUE(vectorList_, vectorList) };
    inline QueryContentResponseBodyMatchesMatchListVector& setVectorList(vector<double> && vectorList) { DARABONBA_PTR_SET_RVALUE(vectorList_, vectorList) };


  protected:
    std::shared_ptr<vector<double>> vectorList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
