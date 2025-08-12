// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTHISTOGRAMRESPONSEBODYSYSTEMEVENTHISTOGRAMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTHISTOGRAMRESPONSEBODYSYSTEMEVENTHISTOGRAMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSystemEventHistogramResponseBodySystemEventHistograms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemEventHistogramResponseBodySystemEventHistograms& obj) { 
      DARABONBA_PTR_TO_JSON(SystemEventHistogram, systemEventHistogram_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemEventHistogramResponseBodySystemEventHistograms& obj) { 
      DARABONBA_PTR_FROM_JSON(SystemEventHistogram, systemEventHistogram_);
    };
    DescribeSystemEventHistogramResponseBodySystemEventHistograms() = default ;
    DescribeSystemEventHistogramResponseBodySystemEventHistograms(const DescribeSystemEventHistogramResponseBodySystemEventHistograms &) = default ;
    DescribeSystemEventHistogramResponseBodySystemEventHistograms(DescribeSystemEventHistogramResponseBodySystemEventHistograms &&) = default ;
    DescribeSystemEventHistogramResponseBodySystemEventHistograms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemEventHistogramResponseBodySystemEventHistograms() = default ;
    DescribeSystemEventHistogramResponseBodySystemEventHistograms& operator=(const DescribeSystemEventHistogramResponseBodySystemEventHistograms &) = default ;
    DescribeSystemEventHistogramResponseBodySystemEventHistograms& operator=(DescribeSystemEventHistogramResponseBodySystemEventHistograms &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->systemEventHistogram_ != nullptr; };
    // systemEventHistogram Field Functions 
    bool hasSystemEventHistogram() const { return this->systemEventHistogram_ != nullptr;};
    void deleteSystemEventHistogram() { this->systemEventHistogram_ = nullptr;};
    inline const vector<Models::DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram> & systemEventHistogram() const { DARABONBA_PTR_GET_CONST(systemEventHistogram_, vector<Models::DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram>) };
    inline vector<Models::DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram> systemEventHistogram() { DARABONBA_PTR_GET(systemEventHistogram_, vector<Models::DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram>) };
    inline DescribeSystemEventHistogramResponseBodySystemEventHistograms& setSystemEventHistogram(const vector<Models::DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram> & systemEventHistogram) { DARABONBA_PTR_SET_VALUE(systemEventHistogram_, systemEventHistogram) };
    inline DescribeSystemEventHistogramResponseBodySystemEventHistograms& setSystemEventHistogram(vector<Models::DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram> && systemEventHistogram) { DARABONBA_PTR_SET_RVALUE(systemEventHistogram_, systemEventHistogram) };


  protected:
    std::shared_ptr<vector<Models::DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram>> systemEventHistogram_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
