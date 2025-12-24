// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEGMENTSKYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEGMENTSKYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SegmentSkyResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class SegmentSkyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SegmentSkyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SegmentSkyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SegmentSkyResponseBody() = default ;
    SegmentSkyResponseBody(const SegmentSkyResponseBody &) = default ;
    SegmentSkyResponseBody(SegmentSkyResponseBody &&) = default ;
    SegmentSkyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SegmentSkyResponseBody() = default ;
    SegmentSkyResponseBody& operator=(const SegmentSkyResponseBody &) = default ;
    SegmentSkyResponseBody& operator=(SegmentSkyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SegmentSkyResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, SegmentSkyResponseBodyData) };
    inline SegmentSkyResponseBodyData data() { DARABONBA_PTR_GET(data_, SegmentSkyResponseBodyData) };
    inline SegmentSkyResponseBody& setData(const SegmentSkyResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SegmentSkyResponseBody& setData(SegmentSkyResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SegmentSkyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<SegmentSkyResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
