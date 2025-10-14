// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAININFORESPONSEBODYRECORDLINESRECORDLINE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAININFORESPONSEBODYRECORDLINESRECORDLINE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainInfoResponseBodyRecordLinesRecordLine : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainInfoResponseBodyRecordLinesRecordLine& obj) { 
      DARABONBA_PTR_TO_JSON(FatherCode, fatherCode_);
      DARABONBA_PTR_TO_JSON(LineCode, lineCode_);
      DARABONBA_PTR_TO_JSON(LineDisplayName, lineDisplayName_);
      DARABONBA_PTR_TO_JSON(LineName, lineName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainInfoResponseBodyRecordLinesRecordLine& obj) { 
      DARABONBA_PTR_FROM_JSON(FatherCode, fatherCode_);
      DARABONBA_PTR_FROM_JSON(LineCode, lineCode_);
      DARABONBA_PTR_FROM_JSON(LineDisplayName, lineDisplayName_);
      DARABONBA_PTR_FROM_JSON(LineName, lineName_);
    };
    DescribeDomainInfoResponseBodyRecordLinesRecordLine() = default ;
    DescribeDomainInfoResponseBodyRecordLinesRecordLine(const DescribeDomainInfoResponseBodyRecordLinesRecordLine &) = default ;
    DescribeDomainInfoResponseBodyRecordLinesRecordLine(DescribeDomainInfoResponseBodyRecordLinesRecordLine &&) = default ;
    DescribeDomainInfoResponseBodyRecordLinesRecordLine(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainInfoResponseBodyRecordLinesRecordLine() = default ;
    DescribeDomainInfoResponseBodyRecordLinesRecordLine& operator=(const DescribeDomainInfoResponseBodyRecordLinesRecordLine &) = default ;
    DescribeDomainInfoResponseBodyRecordLinesRecordLine& operator=(DescribeDomainInfoResponseBodyRecordLinesRecordLine &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fatherCode_ == nullptr
        && return this->lineCode_ == nullptr && return this->lineDisplayName_ == nullptr && return this->lineName_ == nullptr; };
    // fatherCode Field Functions 
    bool hasFatherCode() const { return this->fatherCode_ != nullptr;};
    void deleteFatherCode() { this->fatherCode_ = nullptr;};
    inline string fatherCode() const { DARABONBA_PTR_GET_DEFAULT(fatherCode_, "") };
    inline DescribeDomainInfoResponseBodyRecordLinesRecordLine& setFatherCode(string fatherCode) { DARABONBA_PTR_SET_VALUE(fatherCode_, fatherCode) };


    // lineCode Field Functions 
    bool hasLineCode() const { return this->lineCode_ != nullptr;};
    void deleteLineCode() { this->lineCode_ = nullptr;};
    inline string lineCode() const { DARABONBA_PTR_GET_DEFAULT(lineCode_, "") };
    inline DescribeDomainInfoResponseBodyRecordLinesRecordLine& setLineCode(string lineCode) { DARABONBA_PTR_SET_VALUE(lineCode_, lineCode) };


    // lineDisplayName Field Functions 
    bool hasLineDisplayName() const { return this->lineDisplayName_ != nullptr;};
    void deleteLineDisplayName() { this->lineDisplayName_ = nullptr;};
    inline string lineDisplayName() const { DARABONBA_PTR_GET_DEFAULT(lineDisplayName_, "") };
    inline DescribeDomainInfoResponseBodyRecordLinesRecordLine& setLineDisplayName(string lineDisplayName) { DARABONBA_PTR_SET_VALUE(lineDisplayName_, lineDisplayName) };


    // lineName Field Functions 
    bool hasLineName() const { return this->lineName_ != nullptr;};
    void deleteLineName() { this->lineName_ = nullptr;};
    inline string lineName() const { DARABONBA_PTR_GET_DEFAULT(lineName_, "") };
    inline DescribeDomainInfoResponseBodyRecordLinesRecordLine& setLineName(string lineName) { DARABONBA_PTR_SET_VALUE(lineName_, lineName) };


  protected:
    // The code of the parent line. This parameter is not returned if the line has no parent line.
    std::shared_ptr<string> fatherCode_ = nullptr;
    // The code of the line.
    std::shared_ptr<string> lineCode_ = nullptr;
    // The name of the parent line.
    std::shared_ptr<string> lineDisplayName_ = nullptr;
    // The name of the line.
    std::shared_ptr<string> lineName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
