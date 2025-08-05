// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYMMSJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RETRYMMSJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class RetryMmsJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryMmsJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RetryMmsJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    RetryMmsJobResponseBody() = default ;
    RetryMmsJobResponseBody(const RetryMmsJobResponseBody &) = default ;
    RetryMmsJobResponseBody(RetryMmsJobResponseBody &&) = default ;
    RetryMmsJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryMmsJobResponseBody() = default ;
    RetryMmsJobResponseBody& operator=(const RetryMmsJobResponseBody &) = default ;
    RetryMmsJobResponseBody& operator=(RetryMmsJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline int64_t data() const { DARABONBA_PTR_GET_DEFAULT(data_, 0L) };
    inline RetryMmsJobResponseBody& setData(int64_t data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RetryMmsJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int64_t> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
