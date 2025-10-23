// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDERSTATISTICSDETAILBYPARAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDERSTATISTICSDETAILBYPARAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SenderStatisticsDetailByParamResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SenderStatisticsDetailByParamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SenderStatisticsDetailByParamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextStart, nextStart_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, SenderStatisticsDetailByParamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextStart, nextStart_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    SenderStatisticsDetailByParamResponseBody() = default ;
    SenderStatisticsDetailByParamResponseBody(const SenderStatisticsDetailByParamResponseBody &) = default ;
    SenderStatisticsDetailByParamResponseBody(SenderStatisticsDetailByParamResponseBody &&) = default ;
    SenderStatisticsDetailByParamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SenderStatisticsDetailByParamResponseBody() = default ;
    SenderStatisticsDetailByParamResponseBody& operator=(const SenderStatisticsDetailByParamResponseBody &) = default ;
    SenderStatisticsDetailByParamResponseBody& operator=(SenderStatisticsDetailByParamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextStart_ == nullptr
        && return this->requestId_ == nullptr && return this->data_ == nullptr; };
    // nextStart Field Functions 
    bool hasNextStart() const { return this->nextStart_ != nullptr;};
    void deleteNextStart() { this->nextStart_ = nullptr;};
    inline string nextStart() const { DARABONBA_PTR_GET_DEFAULT(nextStart_, "") };
    inline SenderStatisticsDetailByParamResponseBody& setNextStart(string nextStart) { DARABONBA_PTR_SET_VALUE(nextStart_, nextStart) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SenderStatisticsDetailByParamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SenderStatisticsDetailByParamResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, SenderStatisticsDetailByParamResponseBodyData) };
    inline SenderStatisticsDetailByParamResponseBodyData data() { DARABONBA_PTR_GET(data_, SenderStatisticsDetailByParamResponseBodyData) };
    inline SenderStatisticsDetailByParamResponseBody& setData(const SenderStatisticsDetailByParamResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SenderStatisticsDetailByParamResponseBody& setData(SenderStatisticsDetailByParamResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // Used for pagination. If there are more results, set this returned value to the NextStart in the next request.
    std::shared_ptr<string> nextStart_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // Detailed records
    std::shared_ptr<SenderStatisticsDetailByParamResponseBodyData> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
