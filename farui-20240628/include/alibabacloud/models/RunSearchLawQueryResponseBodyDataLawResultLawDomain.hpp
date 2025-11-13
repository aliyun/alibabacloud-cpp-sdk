// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHLAWQUERYRESPONSEBODYDATALAWRESULTLAWDOMAIN_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHLAWQUERYRESPONSEBODYDATALAWRESULTLAWDOMAIN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunSearchLawQueryResponseBodyDataLawResultLawDomain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchLawQueryResponseBodyDataLawResultLawDomain& obj) { 
      DARABONBA_PTR_TO_JSON(abolitionBasis, abolitionBasis_);
      DARABONBA_PTR_TO_JSON(implementYearMonthDate, implementYearMonthDate_);
      DARABONBA_PTR_TO_JSON(invalidBasis, invalidBasis_);
      DARABONBA_PTR_TO_JSON(issuingNo, issuingNo_);
      DARABONBA_PTR_TO_JSON(issuingOrgan, issuingOrgan_);
      DARABONBA_PTR_TO_JSON(lawId, lawId_);
      DARABONBA_PTR_TO_JSON(lawItemId, lawItemId_);
      DARABONBA_PTR_TO_JSON(lawName, lawName_);
      DARABONBA_PTR_TO_JSON(lawOrder, lawOrder_);
      DARABONBA_PTR_TO_JSON(lawSourceContent, lawSourceContent_);
      DARABONBA_PTR_TO_JSON(lawTitle, lawTitle_);
      DARABONBA_PTR_TO_JSON(modifyBasis, modifyBasis_);
      DARABONBA_PTR_TO_JSON(potencyLevel, potencyLevel_);
      DARABONBA_PTR_TO_JSON(releaseYearMonthDate, releaseYearMonthDate_);
      DARABONBA_PTR_TO_JSON(thematicClassify, thematicClassify_);
      DARABONBA_PTR_TO_JSON(timeliness, timeliness_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchLawQueryResponseBodyDataLawResultLawDomain& obj) { 
      DARABONBA_PTR_FROM_JSON(abolitionBasis, abolitionBasis_);
      DARABONBA_PTR_FROM_JSON(implementYearMonthDate, implementYearMonthDate_);
      DARABONBA_PTR_FROM_JSON(invalidBasis, invalidBasis_);
      DARABONBA_PTR_FROM_JSON(issuingNo, issuingNo_);
      DARABONBA_PTR_FROM_JSON(issuingOrgan, issuingOrgan_);
      DARABONBA_PTR_FROM_JSON(lawId, lawId_);
      DARABONBA_PTR_FROM_JSON(lawItemId, lawItemId_);
      DARABONBA_PTR_FROM_JSON(lawName, lawName_);
      DARABONBA_PTR_FROM_JSON(lawOrder, lawOrder_);
      DARABONBA_PTR_FROM_JSON(lawSourceContent, lawSourceContent_);
      DARABONBA_PTR_FROM_JSON(lawTitle, lawTitle_);
      DARABONBA_PTR_FROM_JSON(modifyBasis, modifyBasis_);
      DARABONBA_PTR_FROM_JSON(potencyLevel, potencyLevel_);
      DARABONBA_PTR_FROM_JSON(releaseYearMonthDate, releaseYearMonthDate_);
      DARABONBA_PTR_FROM_JSON(thematicClassify, thematicClassify_);
      DARABONBA_PTR_FROM_JSON(timeliness, timeliness_);
    };
    RunSearchLawQueryResponseBodyDataLawResultLawDomain() = default ;
    RunSearchLawQueryResponseBodyDataLawResultLawDomain(const RunSearchLawQueryResponseBodyDataLawResultLawDomain &) = default ;
    RunSearchLawQueryResponseBodyDataLawResultLawDomain(RunSearchLawQueryResponseBodyDataLawResultLawDomain &&) = default ;
    RunSearchLawQueryResponseBodyDataLawResultLawDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchLawQueryResponseBodyDataLawResultLawDomain() = default ;
    RunSearchLawQueryResponseBodyDataLawResultLawDomain& operator=(const RunSearchLawQueryResponseBodyDataLawResultLawDomain &) = default ;
    RunSearchLawQueryResponseBodyDataLawResultLawDomain& operator=(RunSearchLawQueryResponseBodyDataLawResultLawDomain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abolitionBasis_ == nullptr
        && return this->implementYearMonthDate_ == nullptr && return this->invalidBasis_ == nullptr && return this->issuingNo_ == nullptr && return this->issuingOrgan_ == nullptr && return this->lawId_ == nullptr
        && return this->lawItemId_ == nullptr && return this->lawName_ == nullptr && return this->lawOrder_ == nullptr && return this->lawSourceContent_ == nullptr && return this->lawTitle_ == nullptr
        && return this->modifyBasis_ == nullptr && return this->potencyLevel_ == nullptr && return this->releaseYearMonthDate_ == nullptr && return this->thematicClassify_ == nullptr && return this->timeliness_ == nullptr; };
    // abolitionBasis Field Functions 
    bool hasAbolitionBasis() const { return this->abolitionBasis_ != nullptr;};
    void deleteAbolitionBasis() { this->abolitionBasis_ = nullptr;};
    inline string abolitionBasis() const { DARABONBA_PTR_GET_DEFAULT(abolitionBasis_, "") };
    inline RunSearchLawQueryResponseBodyDataLawResultLawDomain& setAbolitionBasis(string abolitionBasis) { DARABONBA_PTR_SET_VALUE(abolitionBasis_, abolitionBasis) };


    // implementYearMonthDate Field Functions 
    bool hasImplementYearMonthDate() const { return this->implementYearMonthDate_ != nullptr;};
    void deleteImplementYearMonthDate() { this->implementYearMonthDate_ = nullptr;};
    inline string implementYearMonthDate() const { DARABONBA_PTR_GET_DEFAULT(implementYearMonthDate_, "") };
    inline RunSearchLawQueryResponseBodyDataLawResultLawDomain& setImplementYearMonthDate(string implementYearMonthDate) { DARABONBA_PTR_SET_VALUE(implementYearMonthDate_, implementYearMonthDate) };


    // invalidBasis Field Functions 
    bool hasInvalidBasis() const { return this->invalidBasis_ != nullptr;};
    void deleteInvalidBasis() { this->invalidBasis_ = nullptr;};
    inline string invalidBasis() const { DARABONBA_PTR_GET_DEFAULT(invalidBasis_, "") };
    inline RunSearchLawQueryResponseBodyDataLawResultLawDomain& setInvalidBasis(string invalidBasis) { DARABONBA_PTR_SET_VALUE(invalidBasis_, invalidBasis) };


    // issuingNo Field Functions 
    bool hasIssuingNo() const { return this->issuingNo_ != nullptr;};
    void deleteIssuingNo() { this->issuingNo_ = nullptr;};
    inline string issuingNo() const { DARABONBA_PTR_GET_DEFAULT(issuingNo_, "") };
    inline RunSearchLawQueryResponseBodyDataLawResultLawDomain& setIssuingNo(string issuingNo) { DARABONBA_PTR_SET_VALUE(issuingNo_, issuingNo) };


    // issuingOrgan Field Functions 
    bool hasIssuingOrgan() const { return this->issuingOrgan_ != nullptr;};
    void deleteIssuingOrgan() { this->issuingOrgan_ = nullptr;};
    inline string issuingOrgan() const { DARABONBA_PTR_GET_DEFAULT(issuingOrgan_, "") };
    inline RunSearchLawQueryResponseBodyDataLawResultLawDomain& setIssuingOrgan(string issuingOrgan) { DARABONBA_PTR_SET_VALUE(issuingOrgan_, issuingOrgan) };


    // lawId Field Functions 
    bool hasLawId() const { return this->lawId_ != nullptr;};
    void deleteLawId() { this->lawId_ = nullptr;};
    inline string lawId() const { DARABONBA_PTR_GET_DEFAULT(lawId_, "") };
    inline RunSearchLawQueryResponseBodyDataLawResultLawDomain& setLawId(string lawId) { DARABONBA_PTR_SET_VALUE(lawId_, lawId) };


    // lawItemId Field Functions 
    bool hasLawItemId() const { return this->lawItemId_ != nullptr;};
    void deleteLawItemId() { this->lawItemId_ = nullptr;};
    inline string lawItemId() const { DARABONBA_PTR_GET_DEFAULT(lawItemId_, "") };
    inline RunSearchLawQueryResponseBodyDataLawResultLawDomain& setLawItemId(string lawItemId) { DARABONBA_PTR_SET_VALUE(lawItemId_, lawItemId) };


    // lawName Field Functions 
    bool hasLawName() const { return this->lawName_ != nullptr;};
    void deleteLawName() { this->lawName_ = nullptr;};
    inline string lawName() const { DARABONBA_PTR_GET_DEFAULT(lawName_, "") };
    inline RunSearchLawQueryResponseBodyDataLawResultLawDomain& setLawName(string lawName) { DARABONBA_PTR_SET_VALUE(lawName_, lawName) };


    // lawOrder Field Functions 
    bool hasLawOrder() const { return this->lawOrder_ != nullptr;};
    void deleteLawOrder() { this->lawOrder_ = nullptr;};
    inline string lawOrder() const { DARABONBA_PTR_GET_DEFAULT(lawOrder_, "") };
    inline RunSearchLawQueryResponseBodyDataLawResultLawDomain& setLawOrder(string lawOrder) { DARABONBA_PTR_SET_VALUE(lawOrder_, lawOrder) };


    // lawSourceContent Field Functions 
    bool hasLawSourceContent() const { return this->lawSourceContent_ != nullptr;};
    void deleteLawSourceContent() { this->lawSourceContent_ = nullptr;};
    inline string lawSourceContent() const { DARABONBA_PTR_GET_DEFAULT(lawSourceContent_, "") };
    inline RunSearchLawQueryResponseBodyDataLawResultLawDomain& setLawSourceContent(string lawSourceContent) { DARABONBA_PTR_SET_VALUE(lawSourceContent_, lawSourceContent) };


    // lawTitle Field Functions 
    bool hasLawTitle() const { return this->lawTitle_ != nullptr;};
    void deleteLawTitle() { this->lawTitle_ = nullptr;};
    inline string lawTitle() const { DARABONBA_PTR_GET_DEFAULT(lawTitle_, "") };
    inline RunSearchLawQueryResponseBodyDataLawResultLawDomain& setLawTitle(string lawTitle) { DARABONBA_PTR_SET_VALUE(lawTitle_, lawTitle) };


    // modifyBasis Field Functions 
    bool hasModifyBasis() const { return this->modifyBasis_ != nullptr;};
    void deleteModifyBasis() { this->modifyBasis_ = nullptr;};
    inline string modifyBasis() const { DARABONBA_PTR_GET_DEFAULT(modifyBasis_, "") };
    inline RunSearchLawQueryResponseBodyDataLawResultLawDomain& setModifyBasis(string modifyBasis) { DARABONBA_PTR_SET_VALUE(modifyBasis_, modifyBasis) };


    // potencyLevel Field Functions 
    bool hasPotencyLevel() const { return this->potencyLevel_ != nullptr;};
    void deletePotencyLevel() { this->potencyLevel_ = nullptr;};
    inline string potencyLevel() const { DARABONBA_PTR_GET_DEFAULT(potencyLevel_, "") };
    inline RunSearchLawQueryResponseBodyDataLawResultLawDomain& setPotencyLevel(string potencyLevel) { DARABONBA_PTR_SET_VALUE(potencyLevel_, potencyLevel) };


    // releaseYearMonthDate Field Functions 
    bool hasReleaseYearMonthDate() const { return this->releaseYearMonthDate_ != nullptr;};
    void deleteReleaseYearMonthDate() { this->releaseYearMonthDate_ = nullptr;};
    inline string releaseYearMonthDate() const { DARABONBA_PTR_GET_DEFAULT(releaseYearMonthDate_, "") };
    inline RunSearchLawQueryResponseBodyDataLawResultLawDomain& setReleaseYearMonthDate(string releaseYearMonthDate) { DARABONBA_PTR_SET_VALUE(releaseYearMonthDate_, releaseYearMonthDate) };


    // thematicClassify Field Functions 
    bool hasThematicClassify() const { return this->thematicClassify_ != nullptr;};
    void deleteThematicClassify() { this->thematicClassify_ = nullptr;};
    inline string thematicClassify() const { DARABONBA_PTR_GET_DEFAULT(thematicClassify_, "") };
    inline RunSearchLawQueryResponseBodyDataLawResultLawDomain& setThematicClassify(string thematicClassify) { DARABONBA_PTR_SET_VALUE(thematicClassify_, thematicClassify) };


    // timeliness Field Functions 
    bool hasTimeliness() const { return this->timeliness_ != nullptr;};
    void deleteTimeliness() { this->timeliness_ = nullptr;};
    inline string timeliness() const { DARABONBA_PTR_GET_DEFAULT(timeliness_, "") };
    inline RunSearchLawQueryResponseBodyDataLawResultLawDomain& setTimeliness(string timeliness) { DARABONBA_PTR_SET_VALUE(timeliness_, timeliness) };


  protected:
    std::shared_ptr<string> abolitionBasis_ = nullptr;
    std::shared_ptr<string> implementYearMonthDate_ = nullptr;
    std::shared_ptr<string> invalidBasis_ = nullptr;
    std::shared_ptr<string> issuingNo_ = nullptr;
    std::shared_ptr<string> issuingOrgan_ = nullptr;
    std::shared_ptr<string> lawId_ = nullptr;
    std::shared_ptr<string> lawItemId_ = nullptr;
    std::shared_ptr<string> lawName_ = nullptr;
    std::shared_ptr<string> lawOrder_ = nullptr;
    std::shared_ptr<string> lawSourceContent_ = nullptr;
    std::shared_ptr<string> lawTitle_ = nullptr;
    std::shared_ptr<string> modifyBasis_ = nullptr;
    std::shared_ptr<string> potencyLevel_ = nullptr;
    std::shared_ptr<string> releaseYearMonthDate_ = nullptr;
    std::shared_ptr<string> thematicClassify_ = nullptr;
    std::shared_ptr<string> timeliness_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
