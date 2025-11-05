// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPORTRESPONSEBODYDATASDATA_HPP_
#define ALIBABACLOUD_MODELS_GETREPORTRESPONSEBODYDATASDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class GetReportResponseBodyDatasData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReportResponseBodyDatasData& obj) { 
      DARABONBA_ANY_TO_JSON(DataPoints, dataPoints_);
      DARABONBA_ANY_TO_JSON(Labels, labels_);
    };
    friend void from_json(const Darabonba::Json& j, GetReportResponseBodyDatasData& obj) { 
      DARABONBA_ANY_FROM_JSON(DataPoints, dataPoints_);
      DARABONBA_ANY_FROM_JSON(Labels, labels_);
    };
    GetReportResponseBodyDatasData() = default ;
    GetReportResponseBodyDatasData(const GetReportResponseBodyDatasData &) = default ;
    GetReportResponseBodyDatasData(GetReportResponseBodyDatasData &&) = default ;
    GetReportResponseBodyDatasData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReportResponseBodyDatasData() = default ;
    GetReportResponseBodyDatasData& operator=(const GetReportResponseBodyDatasData &) = default ;
    GetReportResponseBodyDatasData& operator=(GetReportResponseBodyDatasData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataPoints_ == nullptr
        && return this->labels_ == nullptr; };
    // dataPoints Field Functions 
    bool hasDataPoints() const { return this->dataPoints_ != nullptr;};
    void deleteDataPoints() { this->dataPoints_ = nullptr;};
    inline     const Darabonba::Json & dataPoints() const { DARABONBA_GET(dataPoints_) };
    Darabonba::Json & dataPoints() { DARABONBA_GET(dataPoints_) };
    inline GetReportResponseBodyDatasData& setDataPoints(const Darabonba::Json & dataPoints) { DARABONBA_SET_VALUE(dataPoints_, dataPoints) };
    inline GetReportResponseBodyDatasData& setDataPoints(Darabonba::Json & dataPoints) { DARABONBA_SET_RVALUE(dataPoints_, dataPoints) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline     const Darabonba::Json & labels() const { DARABONBA_GET(labels_) };
    Darabonba::Json & labels() { DARABONBA_GET(labels_) };
    inline GetReportResponseBodyDatasData& setLabels(const Darabonba::Json & labels) { DARABONBA_SET_VALUE(labels_, labels) };
    inline GetReportResponseBodyDatasData& setLabels(Darabonba::Json & labels) { DARABONBA_SET_RVALUE(labels_, labels) };


  protected:
    // Data Points.
    Darabonba::Json dataPoints_ = nullptr;
    // Data Labels.
    Darabonba::Json labels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
