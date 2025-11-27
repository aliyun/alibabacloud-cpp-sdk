// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSREQUESTSORTBY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSREQUESTSORTBY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListJobsRequestSortBy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsRequestSortBy& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Order, order_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsRequestSortBy& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
    };
    ListJobsRequestSortBy() = default ;
    ListJobsRequestSortBy(const ListJobsRequestSortBy &) = default ;
    ListJobsRequestSortBy(ListJobsRequestSortBy &&) = default ;
    ListJobsRequestSortBy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsRequestSortBy() = default ;
    ListJobsRequestSortBy& operator=(const ListJobsRequestSortBy &) = default ;
    ListJobsRequestSortBy& operator=(ListJobsRequestSortBy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->label_ == nullptr
        && return this->order_ == nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ListJobsRequestSortBy& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListJobsRequestSortBy& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


  protected:
    // The sorting label. Valid values:
    // 
    // *   time_start
    // *   job_name
    std::shared_ptr<string> label_ = nullptr;
    // The sorting order. Valid values:
    // 
    // *   ASC (default): ascending order
    // *   DESC: descending order
    std::shared_ptr<string> order_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
