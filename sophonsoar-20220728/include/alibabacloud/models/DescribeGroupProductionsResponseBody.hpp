// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPPRODUCTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPPRODUCTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGroupProductionsResponseBodyData.hpp>
#include <alibabacloud/models/DescribeGroupProductionsResponseBodyPage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeGroupProductionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupProductionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupProductionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGroupProductionsResponseBody() = default ;
    DescribeGroupProductionsResponseBody(const DescribeGroupProductionsResponseBody &) = default ;
    DescribeGroupProductionsResponseBody(DescribeGroupProductionsResponseBody &&) = default ;
    DescribeGroupProductionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupProductionsResponseBody() = default ;
    DescribeGroupProductionsResponseBody& operator=(const DescribeGroupProductionsResponseBody &) = default ;
    DescribeGroupProductionsResponseBody& operator=(DescribeGroupProductionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->page_ == nullptr && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeGroupProductionsResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeGroupProductionsResponseBodyData>) };
    inline vector<DescribeGroupProductionsResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeGroupProductionsResponseBodyData>) };
    inline DescribeGroupProductionsResponseBody& setData(const vector<DescribeGroupProductionsResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeGroupProductionsResponseBody& setData(vector<DescribeGroupProductionsResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const DescribeGroupProductionsResponseBodyPage & page() const { DARABONBA_PTR_GET_CONST(page_, DescribeGroupProductionsResponseBodyPage) };
    inline DescribeGroupProductionsResponseBodyPage page() { DARABONBA_PTR_GET(page_, DescribeGroupProductionsResponseBodyPage) };
    inline DescribeGroupProductionsResponseBody& setPage(const DescribeGroupProductionsResponseBodyPage & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline DescribeGroupProductionsResponseBody& setPage(DescribeGroupProductionsResponseBodyPage && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupProductionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the groups.
    std::shared_ptr<vector<DescribeGroupProductionsResponseBodyData>> data_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeGroupProductionsResponseBodyPage> page_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
