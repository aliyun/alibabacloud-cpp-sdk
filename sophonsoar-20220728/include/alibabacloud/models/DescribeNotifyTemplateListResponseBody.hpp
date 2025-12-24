// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENOTIFYTEMPLATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENOTIFYTEMPLATELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNotifyTemplateListResponseBodyData.hpp>
#include <alibabacloud/models/DescribeNotifyTemplateListResponseBodyPage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeNotifyTemplateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNotifyTemplateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNotifyTemplateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNotifyTemplateListResponseBody() = default ;
    DescribeNotifyTemplateListResponseBody(const DescribeNotifyTemplateListResponseBody &) = default ;
    DescribeNotifyTemplateListResponseBody(DescribeNotifyTemplateListResponseBody &&) = default ;
    DescribeNotifyTemplateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNotifyTemplateListResponseBody() = default ;
    DescribeNotifyTemplateListResponseBody& operator=(const DescribeNotifyTemplateListResponseBody &) = default ;
    DescribeNotifyTemplateListResponseBody& operator=(DescribeNotifyTemplateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->page_ == nullptr && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeNotifyTemplateListResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeNotifyTemplateListResponseBodyData>) };
    inline vector<DescribeNotifyTemplateListResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeNotifyTemplateListResponseBodyData>) };
    inline DescribeNotifyTemplateListResponseBody& setData(const vector<DescribeNotifyTemplateListResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeNotifyTemplateListResponseBody& setData(vector<DescribeNotifyTemplateListResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const DescribeNotifyTemplateListResponseBodyPage & page() const { DARABONBA_PTR_GET_CONST(page_, DescribeNotifyTemplateListResponseBodyPage) };
    inline DescribeNotifyTemplateListResponseBodyPage page() { DARABONBA_PTR_GET(page_, DescribeNotifyTemplateListResponseBodyPage) };
    inline DescribeNotifyTemplateListResponseBody& setPage(const DescribeNotifyTemplateListResponseBodyPage & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline DescribeNotifyTemplateListResponseBody& setPage(DescribeNotifyTemplateListResponseBodyPage && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNotifyTemplateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<vector<DescribeNotifyTemplateListResponseBodyData>> data_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeNotifyTemplateListResponseBodyPage> page_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
