// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENCINFORMATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENCINFORMATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNCInformationResponseBodyData.hpp>
#include <alibabacloud/models/DescribeNCInformationResponseBodyPager.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNCInformationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNCInformationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(Pager, pager_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNCInformationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(Pager, pager_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNCInformationResponseBody() = default ;
    DescribeNCInformationResponseBody(const DescribeNCInformationResponseBody &) = default ;
    DescribeNCInformationResponseBody(DescribeNCInformationResponseBody &&) = default ;
    DescribeNCInformationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNCInformationResponseBody() = default ;
    DescribeNCInformationResponseBody& operator=(const DescribeNCInformationResponseBody &) = default ;
    DescribeNCInformationResponseBody& operator=(DescribeNCInformationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->data_ != nullptr && this->desc_ != nullptr && this->msg_ != nullptr && this->pager_ != nullptr && this->requestId_ != nullptr
        && this->totalCount_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeNCInformationResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeNCInformationResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeNCInformationResponseBodyData>) };
    inline vector<DescribeNCInformationResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeNCInformationResponseBodyData>) };
    inline DescribeNCInformationResponseBody& setData(const vector<DescribeNCInformationResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeNCInformationResponseBody& setData(vector<DescribeNCInformationResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline DescribeNCInformationResponseBody& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline DescribeNCInformationResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // pager Field Functions 
    bool hasPager() const { return this->pager_ != nullptr;};
    void deletePager() { this->pager_ = nullptr;};
    inline const DescribeNCInformationResponseBodyPager & pager() const { DARABONBA_PTR_GET_CONST(pager_, DescribeNCInformationResponseBodyPager) };
    inline DescribeNCInformationResponseBodyPager pager() { DARABONBA_PTR_GET(pager_, DescribeNCInformationResponseBodyPager) };
    inline DescribeNCInformationResponseBody& setPager(const DescribeNCInformationResponseBodyPager & pager) { DARABONBA_PTR_SET_VALUE(pager_, pager) };
    inline DescribeNCInformationResponseBody& setPager(DescribeNCInformationResponseBodyPager && pager) { DARABONBA_PTR_SET_RVALUE(pager_, pager) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNCInformationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeNCInformationResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<vector<DescribeNCInformationResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<string> msg_ = nullptr;
    std::shared_ptr<DescribeNCInformationResponseBodyPager> pager_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
