// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARTASKANDACTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARTASKANDACTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSoarTaskAndActionsResponseBodyDetails.hpp>
#include <alibabacloud/models/DescribeSoarTaskAndActionsResponseBodyPage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeSoarTaskAndActionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarTaskAndActionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarTaskAndActionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSoarTaskAndActionsResponseBody() = default ;
    DescribeSoarTaskAndActionsResponseBody(const DescribeSoarTaskAndActionsResponseBody &) = default ;
    DescribeSoarTaskAndActionsResponseBody(DescribeSoarTaskAndActionsResponseBody &&) = default ;
    DescribeSoarTaskAndActionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarTaskAndActionsResponseBody() = default ;
    DescribeSoarTaskAndActionsResponseBody& operator=(const DescribeSoarTaskAndActionsResponseBody &) = default ;
    DescribeSoarTaskAndActionsResponseBody& operator=(DescribeSoarTaskAndActionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->details_ == nullptr
        && return this->page_ == nullptr && return this->requestId_ == nullptr; };
    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const DescribeSoarTaskAndActionsResponseBodyDetails & details() const { DARABONBA_PTR_GET_CONST(details_, DescribeSoarTaskAndActionsResponseBodyDetails) };
    inline DescribeSoarTaskAndActionsResponseBodyDetails details() { DARABONBA_PTR_GET(details_, DescribeSoarTaskAndActionsResponseBodyDetails) };
    inline DescribeSoarTaskAndActionsResponseBody& setDetails(const DescribeSoarTaskAndActionsResponseBodyDetails & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline DescribeSoarTaskAndActionsResponseBody& setDetails(DescribeSoarTaskAndActionsResponseBodyDetails && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const DescribeSoarTaskAndActionsResponseBodyPage & page() const { DARABONBA_PTR_GET_CONST(page_, DescribeSoarTaskAndActionsResponseBodyPage) };
    inline DescribeSoarTaskAndActionsResponseBodyPage page() { DARABONBA_PTR_GET(page_, DescribeSoarTaskAndActionsResponseBodyPage) };
    inline DescribeSoarTaskAndActionsResponseBody& setPage(const DescribeSoarTaskAndActionsResponseBodyPage & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline DescribeSoarTaskAndActionsResponseBody& setPage(DescribeSoarTaskAndActionsResponseBodyPage && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSoarTaskAndActionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The execution details of each task.
    std::shared_ptr<DescribeSoarTaskAndActionsResponseBodyDetails> details_ = nullptr;
    std::shared_ptr<DescribeSoarTaskAndActionsResponseBodyPage> page_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
