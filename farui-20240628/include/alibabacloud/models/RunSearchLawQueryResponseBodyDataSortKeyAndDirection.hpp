// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHLAWQUERYRESPONSEBODYDATASORTKEYANDDIRECTION_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHLAWQUERYRESPONSEBODYDATASORTKEYANDDIRECTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunSearchLawQueryResponseBodyDataSortKeyAndDirection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchLawQueryResponseBodyDataSortKeyAndDirection& obj) { 
      DARABONBA_PTR_TO_JSON(releaseYearMonthDate, releaseYearMonthDate_);
      DARABONBA_PTR_TO_JSON(similarity, similarity_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchLawQueryResponseBodyDataSortKeyAndDirection& obj) { 
      DARABONBA_PTR_FROM_JSON(releaseYearMonthDate, releaseYearMonthDate_);
      DARABONBA_PTR_FROM_JSON(similarity, similarity_);
    };
    RunSearchLawQueryResponseBodyDataSortKeyAndDirection() = default ;
    RunSearchLawQueryResponseBodyDataSortKeyAndDirection(const RunSearchLawQueryResponseBodyDataSortKeyAndDirection &) = default ;
    RunSearchLawQueryResponseBodyDataSortKeyAndDirection(RunSearchLawQueryResponseBodyDataSortKeyAndDirection &&) = default ;
    RunSearchLawQueryResponseBodyDataSortKeyAndDirection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchLawQueryResponseBodyDataSortKeyAndDirection() = default ;
    RunSearchLawQueryResponseBodyDataSortKeyAndDirection& operator=(const RunSearchLawQueryResponseBodyDataSortKeyAndDirection &) = default ;
    RunSearchLawQueryResponseBodyDataSortKeyAndDirection& operator=(RunSearchLawQueryResponseBodyDataSortKeyAndDirection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->releaseYearMonthDate_ == nullptr
        && return this->similarity_ == nullptr; };
    // releaseYearMonthDate Field Functions 
    bool hasReleaseYearMonthDate() const { return this->releaseYearMonthDate_ != nullptr;};
    void deleteReleaseYearMonthDate() { this->releaseYearMonthDate_ = nullptr;};
    inline string releaseYearMonthDate() const { DARABONBA_PTR_GET_DEFAULT(releaseYearMonthDate_, "") };
    inline RunSearchLawQueryResponseBodyDataSortKeyAndDirection& setReleaseYearMonthDate(string releaseYearMonthDate) { DARABONBA_PTR_SET_VALUE(releaseYearMonthDate_, releaseYearMonthDate) };


    // similarity Field Functions 
    bool hasSimilarity() const { return this->similarity_ != nullptr;};
    void deleteSimilarity() { this->similarity_ = nullptr;};
    inline string similarity() const { DARABONBA_PTR_GET_DEFAULT(similarity_, "") };
    inline RunSearchLawQueryResponseBodyDataSortKeyAndDirection& setSimilarity(string similarity) { DARABONBA_PTR_SET_VALUE(similarity_, similarity) };


  protected:
    std::shared_ptr<string> releaseYearMonthDate_ = nullptr;
    std::shared_ptr<string> similarity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
