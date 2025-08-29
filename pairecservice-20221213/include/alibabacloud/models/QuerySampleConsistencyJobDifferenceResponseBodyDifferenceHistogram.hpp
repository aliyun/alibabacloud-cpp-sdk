// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSAMPLECONSISTENCYJOBDIFFERENCERESPONSEBODYDIFFERENCEHISTOGRAM_HPP_
#define ALIBABACLOUD_MODELS_QUERYSAMPLECONSISTENCYJOBDIFFERENCERESPONSEBODYDIFFERENCEHISTOGRAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram& obj) { 
      DARABONBA_PTR_TO_JSON(Abscissa, abscissa_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram& obj) { 
      DARABONBA_PTR_FROM_JSON(Abscissa, abscissa_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram() = default ;
    QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram(const QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram &) = default ;
    QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram(QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram &&) = default ;
    QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram() = default ;
    QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram& operator=(const QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram &) = default ;
    QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram& operator=(QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->abscissa_ != nullptr
        && this->value_ != nullptr; };
    // abscissa Field Functions 
    bool hasAbscissa() const { return this->abscissa_ != nullptr;};
    void deleteAbscissa() { this->abscissa_ = nullptr;};
    inline string abscissa() const { DARABONBA_PTR_GET_DEFAULT(abscissa_, "") };
    inline QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram& setAbscissa(string abscissa) { DARABONBA_PTR_SET_VALUE(abscissa_, abscissa) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int64_t value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
    inline QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> abscissa_ = nullptr;
    std::shared_ptr<int64_t> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
