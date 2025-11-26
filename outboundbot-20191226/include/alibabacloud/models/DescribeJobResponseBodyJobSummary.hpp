// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBRESPONSEBODYJOBSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBRESPONSEBODYJOBSUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeJobResponseBodyJobSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobResponseBodyJobSummary& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(SummaryName, summaryName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobResponseBodyJobSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(SummaryName, summaryName_);
    };
    DescribeJobResponseBodyJobSummary() = default ;
    DescribeJobResponseBodyJobSummary(const DescribeJobResponseBodyJobSummary &) = default ;
    DescribeJobResponseBodyJobSummary(DescribeJobResponseBodyJobSummary &&) = default ;
    DescribeJobResponseBodyJobSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobResponseBodyJobSummary() = default ;
    DescribeJobResponseBodyJobSummary& operator=(const DescribeJobResponseBodyJobSummary &) = default ;
    DescribeJobResponseBodyJobSummary& operator=(DescribeJobResponseBodyJobSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->content_ == nullptr && return this->summaryName_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeJobResponseBodyJobSummary& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeJobResponseBodyJobSummary& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // summaryName Field Functions 
    bool hasSummaryName() const { return this->summaryName_ != nullptr;};
    void deleteSummaryName() { this->summaryName_ = nullptr;};
    inline string summaryName() const { DARABONBA_PTR_GET_DEFAULT(summaryName_, "") };
    inline DescribeJobResponseBodyJobSummary& setSummaryName(string summaryName) { DARABONBA_PTR_SET_VALUE(summaryName_, summaryName) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> summaryName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
