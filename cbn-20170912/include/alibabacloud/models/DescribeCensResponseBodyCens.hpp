// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENSRESPONSEBODYCENS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENSRESPONSEBODYCENS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCensResponseBodyCensCen.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCensResponseBodyCens : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCensResponseBodyCens& obj) { 
      DARABONBA_PTR_TO_JSON(Cen, cen_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCensResponseBodyCens& obj) { 
      DARABONBA_PTR_FROM_JSON(Cen, cen_);
    };
    DescribeCensResponseBodyCens() = default ;
    DescribeCensResponseBodyCens(const DescribeCensResponseBodyCens &) = default ;
    DescribeCensResponseBodyCens(DescribeCensResponseBodyCens &&) = default ;
    DescribeCensResponseBodyCens(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCensResponseBodyCens() = default ;
    DescribeCensResponseBodyCens& operator=(const DescribeCensResponseBodyCens &) = default ;
    DescribeCensResponseBodyCens& operator=(DescribeCensResponseBodyCens &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cen_ != nullptr; };
    // cen Field Functions 
    bool hasCen() const { return this->cen_ != nullptr;};
    void deleteCen() { this->cen_ = nullptr;};
    inline const vector<Models::DescribeCensResponseBodyCensCen> & cen() const { DARABONBA_PTR_GET_CONST(cen_, vector<Models::DescribeCensResponseBodyCensCen>) };
    inline vector<Models::DescribeCensResponseBodyCensCen> cen() { DARABONBA_PTR_GET(cen_, vector<Models::DescribeCensResponseBodyCensCen>) };
    inline DescribeCensResponseBodyCens& setCen(const vector<Models::DescribeCensResponseBodyCensCen> & cen) { DARABONBA_PTR_SET_VALUE(cen_, cen) };
    inline DescribeCensResponseBodyCens& setCen(vector<Models::DescribeCensResponseBodyCensCen> && cen) { DARABONBA_PTR_SET_RVALUE(cen_, cen) };


  protected:
    std::shared_ptr<vector<Models::DescribeCensResponseBodyCensCen>> cen_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
