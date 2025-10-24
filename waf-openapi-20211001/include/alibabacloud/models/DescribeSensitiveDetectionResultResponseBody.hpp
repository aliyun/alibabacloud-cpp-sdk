// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVEDETECTIONRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVEDETECTIONRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSensitiveDetectionResultResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSensitiveDetectionResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveDetectionResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveDetectionResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSensitiveDetectionResultResponseBody() = default ;
    DescribeSensitiveDetectionResultResponseBody(const DescribeSensitiveDetectionResultResponseBody &) = default ;
    DescribeSensitiveDetectionResultResponseBody(DescribeSensitiveDetectionResultResponseBody &&) = default ;
    DescribeSensitiveDetectionResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveDetectionResultResponseBody() = default ;
    DescribeSensitiveDetectionResultResponseBody& operator=(const DescribeSensitiveDetectionResultResponseBody &) = default ;
    DescribeSensitiveDetectionResultResponseBody& operator=(DescribeSensitiveDetectionResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSensitiveDetectionResultResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeSensitiveDetectionResultResponseBodyData) };
    inline DescribeSensitiveDetectionResultResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeSensitiveDetectionResultResponseBodyData) };
    inline DescribeSensitiveDetectionResultResponseBody& setData(const DescribeSensitiveDetectionResultResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSensitiveDetectionResultResponseBody& setData(DescribeSensitiveDetectionResultResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSensitiveDetectionResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The compliance check results.
    std::shared_ptr<DescribeSensitiveDetectionResultResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
