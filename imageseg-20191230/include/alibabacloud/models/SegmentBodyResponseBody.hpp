// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEGMENTBODYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEGMENTBODYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SegmentBodyResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class SegmentBodyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SegmentBodyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SegmentBodyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SegmentBodyResponseBody() = default ;
    SegmentBodyResponseBody(const SegmentBodyResponseBody &) = default ;
    SegmentBodyResponseBody(SegmentBodyResponseBody &&) = default ;
    SegmentBodyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SegmentBodyResponseBody() = default ;
    SegmentBodyResponseBody& operator=(const SegmentBodyResponseBody &) = default ;
    SegmentBodyResponseBody& operator=(SegmentBodyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SegmentBodyResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, SegmentBodyResponseBodyData) };
    inline SegmentBodyResponseBodyData data() { DARABONBA_PTR_GET(data_, SegmentBodyResponseBodyData) };
    inline SegmentBodyResponseBody& setData(const SegmentBodyResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SegmentBodyResponseBody& setData(SegmentBodyResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SegmentBodyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<SegmentBodyResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
