// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOSSSCANCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOSSSCANCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOssScanConfigResponseBodyData.hpp>
#include <alibabacloud/models/ListOssScanConfigResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOssScanConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOssScanConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOssScanConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListOssScanConfigResponseBody() = default ;
    ListOssScanConfigResponseBody(const ListOssScanConfigResponseBody &) = default ;
    ListOssScanConfigResponseBody(ListOssScanConfigResponseBody &&) = default ;
    ListOssScanConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOssScanConfigResponseBody() = default ;
    ListOssScanConfigResponseBody& operator=(const ListOssScanConfigResponseBody &) = default ;
    ListOssScanConfigResponseBody& operator=(ListOssScanConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListOssScanConfigResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListOssScanConfigResponseBodyData>) };
    inline vector<ListOssScanConfigResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListOssScanConfigResponseBodyData>) };
    inline ListOssScanConfigResponseBody& setData(const vector<ListOssScanConfigResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListOssScanConfigResponseBody& setData(vector<ListOssScanConfigResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListOssScanConfigResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListOssScanConfigResponseBodyPageInfo) };
    inline ListOssScanConfigResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListOssScanConfigResponseBodyPageInfo) };
    inline ListOssScanConfigResponseBody& setPageInfo(const ListOssScanConfigResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListOssScanConfigResponseBody& setPageInfo(ListOssScanConfigResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOssScanConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<vector<ListOssScanConfigResponseBodyData>> data_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListOssScanConfigResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
