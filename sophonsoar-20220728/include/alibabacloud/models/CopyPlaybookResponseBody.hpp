// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYPLAYBOOKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COPYPLAYBOOKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CopyPlaybookResponseBodyData.hpp>
#include <alibabacloud/models/CopyPlaybookResponseBodyPage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class CopyPlaybookResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyPlaybookResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyPlaybookResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CopyPlaybookResponseBody() = default ;
    CopyPlaybookResponseBody(const CopyPlaybookResponseBody &) = default ;
    CopyPlaybookResponseBody(CopyPlaybookResponseBody &&) = default ;
    CopyPlaybookResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyPlaybookResponseBody() = default ;
    CopyPlaybookResponseBody& operator=(const CopyPlaybookResponseBody &) = default ;
    CopyPlaybookResponseBody& operator=(CopyPlaybookResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->page_ == nullptr && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CopyPlaybookResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CopyPlaybookResponseBodyData) };
    inline CopyPlaybookResponseBodyData data() { DARABONBA_PTR_GET(data_, CopyPlaybookResponseBodyData) };
    inline CopyPlaybookResponseBody& setData(const CopyPlaybookResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CopyPlaybookResponseBody& setData(CopyPlaybookResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const CopyPlaybookResponseBodyPage & page() const { DARABONBA_PTR_GET_CONST(page_, CopyPlaybookResponseBodyPage) };
    inline CopyPlaybookResponseBodyPage page() { DARABONBA_PTR_GET(page_, CopyPlaybookResponseBodyPage) };
    inline CopyPlaybookResponseBody& setPage(const CopyPlaybookResponseBodyPage & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline CopyPlaybookResponseBody& setPage(CopyPlaybookResponseBodyPage && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CopyPlaybookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    std::shared_ptr<CopyPlaybookResponseBodyData> data_ = nullptr;
    // The pagination information.
    std::shared_ptr<CopyPlaybookResponseBodyPage> page_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
