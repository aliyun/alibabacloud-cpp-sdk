// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEGMENTCOMMONIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEGMENTCOMMONIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SegmentCommonImageResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class SegmentCommonImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SegmentCommonImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SegmentCommonImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SegmentCommonImageResponseBody() = default ;
    SegmentCommonImageResponseBody(const SegmentCommonImageResponseBody &) = default ;
    SegmentCommonImageResponseBody(SegmentCommonImageResponseBody &&) = default ;
    SegmentCommonImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SegmentCommonImageResponseBody() = default ;
    SegmentCommonImageResponseBody& operator=(const SegmentCommonImageResponseBody &) = default ;
    SegmentCommonImageResponseBody& operator=(SegmentCommonImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SegmentCommonImageResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, SegmentCommonImageResponseBodyData) };
    inline SegmentCommonImageResponseBodyData data() { DARABONBA_PTR_GET(data_, SegmentCommonImageResponseBodyData) };
    inline SegmentCommonImageResponseBody& setData(const SegmentCommonImageResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SegmentCommonImageResponseBody& setData(SegmentCommonImageResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SegmentCommonImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<SegmentCommonImageResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
