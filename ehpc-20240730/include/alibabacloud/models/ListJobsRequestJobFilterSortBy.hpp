// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSREQUESTJOBFILTERSORTBY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSREQUESTJOBFILTERSORTBY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListJobsRequestJobFilterSortBy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsRequestJobFilterSortBy& obj) { 
      DARABONBA_PTR_TO_JSON(ExecuteOrder, executeOrder_);
      DARABONBA_PTR_TO_JSON(PendOrder, pendOrder_);
      DARABONBA_PTR_TO_JSON(SubmitOrder, submitOrder_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsRequestJobFilterSortBy& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecuteOrder, executeOrder_);
      DARABONBA_PTR_FROM_JSON(PendOrder, pendOrder_);
      DARABONBA_PTR_FROM_JSON(SubmitOrder, submitOrder_);
    };
    ListJobsRequestJobFilterSortBy() = default ;
    ListJobsRequestJobFilterSortBy(const ListJobsRequestJobFilterSortBy &) = default ;
    ListJobsRequestJobFilterSortBy(ListJobsRequestJobFilterSortBy &&) = default ;
    ListJobsRequestJobFilterSortBy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsRequestJobFilterSortBy() = default ;
    ListJobsRequestJobFilterSortBy& operator=(const ListJobsRequestJobFilterSortBy &) = default ;
    ListJobsRequestJobFilterSortBy& operator=(ListJobsRequestJobFilterSortBy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executeOrder_ == nullptr
        && return this->pendOrder_ == nullptr && return this->submitOrder_ == nullptr; };
    // executeOrder Field Functions 
    bool hasExecuteOrder() const { return this->executeOrder_ != nullptr;};
    void deleteExecuteOrder() { this->executeOrder_ = nullptr;};
    inline string executeOrder() const { DARABONBA_PTR_GET_DEFAULT(executeOrder_, "") };
    inline ListJobsRequestJobFilterSortBy& setExecuteOrder(string executeOrder) { DARABONBA_PTR_SET_VALUE(executeOrder_, executeOrder) };


    // pendOrder Field Functions 
    bool hasPendOrder() const { return this->pendOrder_ != nullptr;};
    void deletePendOrder() { this->pendOrder_ = nullptr;};
    inline string pendOrder() const { DARABONBA_PTR_GET_DEFAULT(pendOrder_, "") };
    inline ListJobsRequestJobFilterSortBy& setPendOrder(string pendOrder) { DARABONBA_PTR_SET_VALUE(pendOrder_, pendOrder) };


    // submitOrder Field Functions 
    bool hasSubmitOrder() const { return this->submitOrder_ != nullptr;};
    void deleteSubmitOrder() { this->submitOrder_ = nullptr;};
    inline string submitOrder() const { DARABONBA_PTR_GET_DEFAULT(submitOrder_, "") };
    inline ListJobsRequestJobFilterSortBy& setSubmitOrder(string submitOrder) { DARABONBA_PTR_SET_VALUE(submitOrder_, submitOrder) };


  protected:
    // The order in which jobs are sorted based on their execution time. Valid values:
    // 
    // *   asc: in ascending order.
    // *   desc: in descending order.
    // 
    // Default value: desc.
    std::shared_ptr<string> executeOrder_ = nullptr;
    // The order in which jobs are sorted based on their queuing time. Valid values:
    // 
    // *   asc: in ascending order.
    // *   desc: in descending order.
    // 
    // Default value: desc.
    std::shared_ptr<string> pendOrder_ = nullptr;
    // The order in which jobs are sorted based on their submitting time. Valid values:
    // 
    // *   asc: in ascending order.
    // *   desc: in descending order.
    // 
    // Default value: desc.
    std::shared_ptr<string> submitOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
