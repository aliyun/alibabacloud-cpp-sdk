// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBCREVIEWLISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_PBCREVIEWLISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PbcReview.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PbcReviewListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PbcReviewListResult& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, PbcReviewListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    PbcReviewListResult() = default ;
    PbcReviewListResult(const PbcReviewListResult &) = default ;
    PbcReviewListResult(PbcReviewListResult &&) = default ;
    PbcReviewListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PbcReviewListResult() = default ;
    PbcReviewListResult& operator=(const PbcReviewListResult &) = default ;
    PbcReviewListResult& operator=(PbcReviewListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->total_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<PbcReview> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<PbcReview>) };
    inline vector<PbcReview> getData() { DARABONBA_PTR_GET(data_, vector<PbcReview>) };
    inline PbcReviewListResult& setData(const vector<PbcReview> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PbcReviewListResult& setData(vector<PbcReview> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline PbcReviewListResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<PbcReview>> data_ {};
    // 总数量
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
