// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPEXPORTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPEXPORTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackUpExportInfoResponseBodyData.hpp>
#include <alibabacloud/models/DescribeBackUpExportInfoResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBackUpExportInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackUpExportInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackUpExportInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackUpExportInfoResponseBody() = default ;
    DescribeBackUpExportInfoResponseBody(const DescribeBackUpExportInfoResponseBody &) = default ;
    DescribeBackUpExportInfoResponseBody(DescribeBackUpExportInfoResponseBody &&) = default ;
    DescribeBackUpExportInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackUpExportInfoResponseBody() = default ;
    DescribeBackUpExportInfoResponseBody& operator=(const DescribeBackUpExportInfoResponseBody &) = default ;
    DescribeBackUpExportInfoResponseBody& operator=(DescribeBackUpExportInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeBackUpExportInfoResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeBackUpExportInfoResponseBodyData>) };
    inline vector<DescribeBackUpExportInfoResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeBackUpExportInfoResponseBodyData>) };
    inline DescribeBackUpExportInfoResponseBody& setData(const vector<DescribeBackUpExportInfoResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeBackUpExportInfoResponseBody& setData(vector<DescribeBackUpExportInfoResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeBackUpExportInfoResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeBackUpExportInfoResponseBodyPageInfo) };
    inline DescribeBackUpExportInfoResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeBackUpExportInfoResponseBodyPageInfo) };
    inline DescribeBackUpExportInfoResponseBody& setPageInfo(const DescribeBackUpExportInfoResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeBackUpExportInfoResponseBody& setPageInfo(DescribeBackUpExportInfoResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackUpExportInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<vector<DescribeBackUpExportInfoResponseBodyData>> data_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeBackUpExportInfoResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
