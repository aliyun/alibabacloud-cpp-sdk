// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEGMENTFOODRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEGMENTFOODRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SegmentFoodResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class SegmentFoodResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SegmentFoodResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SegmentFoodResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SegmentFoodResponseBody() = default ;
    SegmentFoodResponseBody(const SegmentFoodResponseBody &) = default ;
    SegmentFoodResponseBody(SegmentFoodResponseBody &&) = default ;
    SegmentFoodResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SegmentFoodResponseBody() = default ;
    SegmentFoodResponseBody& operator=(const SegmentFoodResponseBody &) = default ;
    SegmentFoodResponseBody& operator=(SegmentFoodResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SegmentFoodResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, SegmentFoodResponseBodyData) };
    inline SegmentFoodResponseBodyData data() { DARABONBA_PTR_GET(data_, SegmentFoodResponseBodyData) };
    inline SegmentFoodResponseBody& setData(const SegmentFoodResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SegmentFoodResponseBody& setData(SegmentFoodResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SegmentFoodResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<SegmentFoodResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
