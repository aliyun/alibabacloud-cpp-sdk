// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNREPORTLISTRESPONSEBODYCONTENTDATADELIVERREPORT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNREPORTLISTRESPONSEBODYCONTENTDATADELIVERREPORT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnReportListResponseBodyContentDataDeliverReport : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnReportListResponseBodyContentDataDeliverReport& obj) { 
      DARABONBA_PTR_TO_JSON(format, format_);
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(outLine, outLine_);
      DARABONBA_PTR_TO_JSON(outSize, outSize_);
      DARABONBA_PTR_TO_JSON(shape, shape_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnReportListResponseBodyContentDataDeliverReport& obj) { 
      DARABONBA_PTR_FROM_JSON(format, format_);
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(outLine, outLine_);
      DARABONBA_PTR_FROM_JSON(outSize, outSize_);
      DARABONBA_PTR_FROM_JSON(shape, shape_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    DescribeCdnReportListResponseBodyContentDataDeliverReport() = default ;
    DescribeCdnReportListResponseBodyContentDataDeliverReport(const DescribeCdnReportListResponseBodyContentDataDeliverReport &) = default ;
    DescribeCdnReportListResponseBodyContentDataDeliverReport(DescribeCdnReportListResponseBodyContentDataDeliverReport &&) = default ;
    DescribeCdnReportListResponseBodyContentDataDeliverReport(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnReportListResponseBodyContentDataDeliverReport() = default ;
    DescribeCdnReportListResponseBodyContentDataDeliverReport& operator=(const DescribeCdnReportListResponseBodyContentDataDeliverReport &) = default ;
    DescribeCdnReportListResponseBodyContentDataDeliverReport& operator=(DescribeCdnReportListResponseBodyContentDataDeliverReport &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->format_ == nullptr
        && return this->header_ == nullptr && return this->outLine_ == nullptr && return this->outSize_ == nullptr && return this->shape_ == nullptr && return this->title_ == nullptr; };
    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline DescribeCdnReportListResponseBodyContentDataDeliverReport& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const vector<string> & header() const { DARABONBA_PTR_GET_CONST(header_, vector<string>) };
    inline vector<string> header() { DARABONBA_PTR_GET(header_, vector<string>) };
    inline DescribeCdnReportListResponseBodyContentDataDeliverReport& setHeader(const vector<string> & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline DescribeCdnReportListResponseBodyContentDataDeliverReport& setHeader(vector<string> && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // outLine Field Functions 
    bool hasOutLine() const { return this->outLine_ != nullptr;};
    void deleteOutLine() { this->outLine_ = nullptr;};
    inline int64_t outLine() const { DARABONBA_PTR_GET_DEFAULT(outLine_, 0L) };
    inline DescribeCdnReportListResponseBodyContentDataDeliverReport& setOutLine(int64_t outLine) { DARABONBA_PTR_SET_VALUE(outLine_, outLine) };


    // outSize Field Functions 
    bool hasOutSize() const { return this->outSize_ != nullptr;};
    void deleteOutSize() { this->outSize_ = nullptr;};
    inline int64_t outSize() const { DARABONBA_PTR_GET_DEFAULT(outSize_, 0L) };
    inline DescribeCdnReportListResponseBodyContentDataDeliverReport& setOutSize(int64_t outSize) { DARABONBA_PTR_SET_VALUE(outSize_, outSize) };


    // shape Field Functions 
    bool hasShape() const { return this->shape_ != nullptr;};
    void deleteShape() { this->shape_ = nullptr;};
    inline string shape() const { DARABONBA_PTR_GET_DEFAULT(shape_, "") };
    inline DescribeCdnReportListResponseBodyContentDataDeliverReport& setShape(string shape) { DARABONBA_PTR_SET_VALUE(shape_, shape) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeCdnReportListResponseBodyContentDataDeliverReport& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> format_ = nullptr;
    std::shared_ptr<vector<string>> header_ = nullptr;
    std::shared_ptr<int64_t> outLine_ = nullptr;
    std::shared_ptr<int64_t> outSize_ = nullptr;
    std::shared_ptr<string> shape_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
