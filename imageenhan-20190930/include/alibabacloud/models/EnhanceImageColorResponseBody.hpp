// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENHANCEIMAGECOLORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENHANCEIMAGECOLORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EnhanceImageColorResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class EnhanceImageColorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnhanceImageColorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EnhanceImageColorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    EnhanceImageColorResponseBody() = default ;
    EnhanceImageColorResponseBody(const EnhanceImageColorResponseBody &) = default ;
    EnhanceImageColorResponseBody(EnhanceImageColorResponseBody &&) = default ;
    EnhanceImageColorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnhanceImageColorResponseBody() = default ;
    EnhanceImageColorResponseBody& operator=(const EnhanceImageColorResponseBody &) = default ;
    EnhanceImageColorResponseBody& operator=(EnhanceImageColorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const EnhanceImageColorResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, EnhanceImageColorResponseBodyData) };
    inline EnhanceImageColorResponseBodyData data() { DARABONBA_PTR_GET(data_, EnhanceImageColorResponseBodyData) };
    inline EnhanceImageColorResponseBody& setData(const EnhanceImageColorResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline EnhanceImageColorResponseBody& setData(EnhanceImageColorResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnhanceImageColorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<EnhanceImageColorResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
