// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEDYNAMICIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEDYNAMICIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GenerateDynamicImageResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class GenerateDynamicImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateDynamicImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDynamicImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateDynamicImageResponseBody() = default ;
    GenerateDynamicImageResponseBody(const GenerateDynamicImageResponseBody &) = default ;
    GenerateDynamicImageResponseBody(GenerateDynamicImageResponseBody &&) = default ;
    GenerateDynamicImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateDynamicImageResponseBody() = default ;
    GenerateDynamicImageResponseBody& operator=(const GenerateDynamicImageResponseBody &) = default ;
    GenerateDynamicImageResponseBody& operator=(GenerateDynamicImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GenerateDynamicImageResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GenerateDynamicImageResponseBodyData) };
    inline GenerateDynamicImageResponseBodyData data() { DARABONBA_PTR_GET(data_, GenerateDynamicImageResponseBodyData) };
    inline GenerateDynamicImageResponseBody& setData(const GenerateDynamicImageResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GenerateDynamicImageResponseBody& setData(GenerateDynamicImageResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateDynamicImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GenerateDynamicImageResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
