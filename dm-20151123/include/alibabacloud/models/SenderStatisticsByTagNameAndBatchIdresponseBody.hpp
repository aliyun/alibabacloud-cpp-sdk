// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDERSTATISTICSBYTAGNAMEANDBATCHIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDERSTATISTICSBYTAGNAMEANDBATCHIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SenderStatisticsByTagNameAndBatchIDResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SenderStatisticsByTagNameAndBatchIDResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SenderStatisticsByTagNameAndBatchIDResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, SenderStatisticsByTagNameAndBatchIDResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    SenderStatisticsByTagNameAndBatchIDResponseBody() = default ;
    SenderStatisticsByTagNameAndBatchIDResponseBody(const SenderStatisticsByTagNameAndBatchIDResponseBody &) = default ;
    SenderStatisticsByTagNameAndBatchIDResponseBody(SenderStatisticsByTagNameAndBatchIDResponseBody &&) = default ;
    SenderStatisticsByTagNameAndBatchIDResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SenderStatisticsByTagNameAndBatchIDResponseBody() = default ;
    SenderStatisticsByTagNameAndBatchIDResponseBody& operator=(const SenderStatisticsByTagNameAndBatchIDResponseBody &) = default ;
    SenderStatisticsByTagNameAndBatchIDResponseBody& operator=(SenderStatisticsByTagNameAndBatchIDResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->totalCount_ != nullptr && this->data_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SenderStatisticsByTagNameAndBatchIDResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline SenderStatisticsByTagNameAndBatchIDResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SenderStatisticsByTagNameAndBatchIDResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, SenderStatisticsByTagNameAndBatchIDResponseBodyData) };
    inline SenderStatisticsByTagNameAndBatchIDResponseBodyData data() { DARABONBA_PTR_GET(data_, SenderStatisticsByTagNameAndBatchIDResponseBodyData) };
    inline SenderStatisticsByTagNameAndBatchIDResponseBody& setData(const SenderStatisticsByTagNameAndBatchIDResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SenderStatisticsByTagNameAndBatchIDResponseBody& setData(SenderStatisticsByTagNameAndBatchIDResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // Total count
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // Data records
    std::shared_ptr<SenderStatisticsByTagNameAndBatchIDResponseBodyData> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
