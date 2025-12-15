// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSREQUESTJOBFILTERDIAGNOSIS_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSREQUESTJOBFILTERDIAGNOSIS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListJobsRequestJobFilterDiagnosis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsRequestJobFilterDiagnosis& obj) { 
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsRequestJobFilterDiagnosis& obj) { 
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    ListJobsRequestJobFilterDiagnosis() = default ;
    ListJobsRequestJobFilterDiagnosis(const ListJobsRequestJobFilterDiagnosis &) = default ;
    ListJobsRequestJobFilterDiagnosis(ListJobsRequestJobFilterDiagnosis &&) = default ;
    ListJobsRequestJobFilterDiagnosis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsRequestJobFilterDiagnosis() = default ;
    ListJobsRequestJobFilterDiagnosis& operator=(const ListJobsRequestJobFilterDiagnosis &) = default ;
    ListJobsRequestJobFilterDiagnosis& operator=(ListJobsRequestJobFilterDiagnosis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operator_ == nullptr
        && return this->option_ == nullptr && return this->threshold_ == nullptr; };
    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline ListJobsRequestJobFilterDiagnosis& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline string option() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
    inline ListJobsRequestJobFilterDiagnosis& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline string threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
    inline ListJobsRequestJobFilterDiagnosis& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // Job diagnosis threshold comparator.
    std::shared_ptr<string> operator_ = nullptr;
    // Job diagnosis and analysis metrics
    std::shared_ptr<string> option_ = nullptr;
    // Job diagnosis threshold.
    std::shared_ptr<string> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
