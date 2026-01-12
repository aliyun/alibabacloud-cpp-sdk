// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSANITYCHECKRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSANITYCHECKRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ListJobSanityCheckResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobSanityCheckResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Order, order_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobSanityCheckResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Order, order_);
    };
    ListJobSanityCheckResultsRequest() = default ;
    ListJobSanityCheckResultsRequest(const ListJobSanityCheckResultsRequest &) = default ;
    ListJobSanityCheckResultsRequest(ListJobSanityCheckResultsRequest &&) = default ;
    ListJobSanityCheckResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobSanityCheckResultsRequest() = default ;
    ListJobSanityCheckResultsRequest& operator=(const ListJobSanityCheckResultsRequest &) = default ;
    ListJobSanityCheckResultsRequest& operator=(ListJobSanityCheckResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->order_ == nullptr; };
    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListJobSanityCheckResultsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


  protected:
    // The sorting order:
    // 
    // *   desc: descending order
    // *   asc: ascending order
    shared_ptr<string> order_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
