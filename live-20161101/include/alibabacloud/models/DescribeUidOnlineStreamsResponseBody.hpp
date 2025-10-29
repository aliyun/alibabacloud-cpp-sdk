// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUIDONLINESTREAMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUIDONLINESTREAMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUidOnlineStreamsResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeUidOnlineStreamsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUidOnlineStreamsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUidOnlineStreamsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    DescribeUidOnlineStreamsResponseBody() = default ;
    DescribeUidOnlineStreamsResponseBody(const DescribeUidOnlineStreamsResponseBody &) = default ;
    DescribeUidOnlineStreamsResponseBody(DescribeUidOnlineStreamsResponseBody &&) = default ;
    DescribeUidOnlineStreamsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUidOnlineStreamsResponseBody() = default ;
    DescribeUidOnlineStreamsResponseBody& operator=(const DescribeUidOnlineStreamsResponseBody &) = default ;
    DescribeUidOnlineStreamsResponseBody& operator=(DescribeUidOnlineStreamsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr && return this->totalNum_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeUidOnlineStreamsResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeUidOnlineStreamsResponseBodyData>) };
    inline vector<DescribeUidOnlineStreamsResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeUidOnlineStreamsResponseBodyData>) };
    inline DescribeUidOnlineStreamsResponseBody& setData(const vector<DescribeUidOnlineStreamsResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeUidOnlineStreamsResponseBody& setData(vector<DescribeUidOnlineStreamsResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUidOnlineStreamsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline DescribeUidOnlineStreamsResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    std::shared_ptr<vector<DescribeUidOnlineStreamsResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
