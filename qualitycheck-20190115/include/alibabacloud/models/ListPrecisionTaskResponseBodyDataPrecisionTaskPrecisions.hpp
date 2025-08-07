// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRECISIONTASKRESPONSEBODYDATAPRECISIONTASKPRECISIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTPRECISIONTASKRESPONSEBODYDATAPRECISIONTASKPRECISIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions& obj) { 
      DARABONBA_PTR_TO_JSON(Precision, precision_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions& obj) { 
      DARABONBA_PTR_FROM_JSON(Precision, precision_);
    };
    ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions() = default ;
    ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions(const ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions &) = default ;
    ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions(ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions &&) = default ;
    ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions() = default ;
    ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions& operator=(const ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions &) = default ;
    ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions& operator=(ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->precision_ != nullptr; };
    // precision Field Functions 
    bool hasPrecision() const { return this->precision_ != nullptr;};
    void deletePrecision() { this->precision_ = nullptr;};
    inline const vector<Models::ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision> & precision() const { DARABONBA_PTR_GET_CONST(precision_, vector<Models::ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision>) };
    inline vector<Models::ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision> precision() { DARABONBA_PTR_GET(precision_, vector<Models::ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision>) };
    inline ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions& setPrecision(const vector<Models::ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision> & precision) { DARABONBA_PTR_SET_VALUE(precision_, precision) };
    inline ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions& setPrecision(vector<Models::ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision> && precision) { DARABONBA_PTR_SET_RVALUE(precision_, precision) };


  protected:
    std::shared_ptr<vector<Models::ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision>> precision_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
