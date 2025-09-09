// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUPPORTLINESRESPONSEBODYRECORDLINES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUPPORTLINESRESPONSEBODYRECORDLINES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSupportLinesResponseBodyRecordLinesRecordLine.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeSupportLinesResponseBodyRecordLines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSupportLinesResponseBodyRecordLines& obj) { 
      DARABONBA_PTR_TO_JSON(RecordLine, recordLine_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSupportLinesResponseBodyRecordLines& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordLine, recordLine_);
    };
    DescribeSupportLinesResponseBodyRecordLines() = default ;
    DescribeSupportLinesResponseBodyRecordLines(const DescribeSupportLinesResponseBodyRecordLines &) = default ;
    DescribeSupportLinesResponseBodyRecordLines(DescribeSupportLinesResponseBodyRecordLines &&) = default ;
    DescribeSupportLinesResponseBodyRecordLines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSupportLinesResponseBodyRecordLines() = default ;
    DescribeSupportLinesResponseBodyRecordLines& operator=(const DescribeSupportLinesResponseBodyRecordLines &) = default ;
    DescribeSupportLinesResponseBodyRecordLines& operator=(DescribeSupportLinesResponseBodyRecordLines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->recordLine_ != nullptr; };
    // recordLine Field Functions 
    bool hasRecordLine() const { return this->recordLine_ != nullptr;};
    void deleteRecordLine() { this->recordLine_ = nullptr;};
    inline const vector<Models::DescribeSupportLinesResponseBodyRecordLinesRecordLine> & recordLine() const { DARABONBA_PTR_GET_CONST(recordLine_, vector<Models::DescribeSupportLinesResponseBodyRecordLinesRecordLine>) };
    inline vector<Models::DescribeSupportLinesResponseBodyRecordLinesRecordLine> recordLine() { DARABONBA_PTR_GET(recordLine_, vector<Models::DescribeSupportLinesResponseBodyRecordLinesRecordLine>) };
    inline DescribeSupportLinesResponseBodyRecordLines& setRecordLine(const vector<Models::DescribeSupportLinesResponseBodyRecordLinesRecordLine> & recordLine) { DARABONBA_PTR_SET_VALUE(recordLine_, recordLine) };
    inline DescribeSupportLinesResponseBodyRecordLines& setRecordLine(vector<Models::DescribeSupportLinesResponseBodyRecordLinesRecordLine> && recordLine) { DARABONBA_PTR_SET_RVALUE(recordLine_, recordLine) };


  protected:
    std::shared_ptr<vector<Models::DescribeSupportLinesResponseBodyRecordLinesRecordLine>> recordLine_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
