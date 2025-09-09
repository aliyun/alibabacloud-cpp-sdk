// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAININFORESPONSEBODYRECORDLINES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAININFORESPONSEBODYRECORDLINES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainInfoResponseBodyRecordLinesRecordLine.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainInfoResponseBodyRecordLines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainInfoResponseBodyRecordLines& obj) { 
      DARABONBA_PTR_TO_JSON(RecordLine, recordLine_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainInfoResponseBodyRecordLines& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordLine, recordLine_);
    };
    DescribeDomainInfoResponseBodyRecordLines() = default ;
    DescribeDomainInfoResponseBodyRecordLines(const DescribeDomainInfoResponseBodyRecordLines &) = default ;
    DescribeDomainInfoResponseBodyRecordLines(DescribeDomainInfoResponseBodyRecordLines &&) = default ;
    DescribeDomainInfoResponseBodyRecordLines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainInfoResponseBodyRecordLines() = default ;
    DescribeDomainInfoResponseBodyRecordLines& operator=(const DescribeDomainInfoResponseBodyRecordLines &) = default ;
    DescribeDomainInfoResponseBodyRecordLines& operator=(DescribeDomainInfoResponseBodyRecordLines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->recordLine_ != nullptr; };
    // recordLine Field Functions 
    bool hasRecordLine() const { return this->recordLine_ != nullptr;};
    void deleteRecordLine() { this->recordLine_ = nullptr;};
    inline const vector<Models::DescribeDomainInfoResponseBodyRecordLinesRecordLine> & recordLine() const { DARABONBA_PTR_GET_CONST(recordLine_, vector<Models::DescribeDomainInfoResponseBodyRecordLinesRecordLine>) };
    inline vector<Models::DescribeDomainInfoResponseBodyRecordLinesRecordLine> recordLine() { DARABONBA_PTR_GET(recordLine_, vector<Models::DescribeDomainInfoResponseBodyRecordLinesRecordLine>) };
    inline DescribeDomainInfoResponseBodyRecordLines& setRecordLine(const vector<Models::DescribeDomainInfoResponseBodyRecordLinesRecordLine> & recordLine) { DARABONBA_PTR_SET_VALUE(recordLine_, recordLine) };
    inline DescribeDomainInfoResponseBodyRecordLines& setRecordLine(vector<Models::DescribeDomainInfoResponseBodyRecordLinesRecordLine> && recordLine) { DARABONBA_PTR_SET_RVALUE(recordLine_, recordLine) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainInfoResponseBodyRecordLinesRecordLine>> recordLine_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
