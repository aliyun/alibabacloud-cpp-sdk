// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSESSEXPOSURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSESSEXPOSURERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AssessExposureResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class AssessExposureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssessExposureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AssessExposureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AssessExposureResponseBody() = default ;
    AssessExposureResponseBody(const AssessExposureResponseBody &) = default ;
    AssessExposureResponseBody(AssessExposureResponseBody &&) = default ;
    AssessExposureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssessExposureResponseBody() = default ;
    AssessExposureResponseBody& operator=(const AssessExposureResponseBody &) = default ;
    AssessExposureResponseBody& operator=(AssessExposureResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AssessExposureResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, AssessExposureResponseBodyData) };
    inline AssessExposureResponseBodyData data() { DARABONBA_PTR_GET(data_, AssessExposureResponseBodyData) };
    inline AssessExposureResponseBody& setData(const AssessExposureResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AssessExposureResponseBody& setData(AssessExposureResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssessExposureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<AssessExposureResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
