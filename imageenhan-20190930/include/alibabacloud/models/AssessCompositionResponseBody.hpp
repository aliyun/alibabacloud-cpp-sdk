// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSESSCOMPOSITIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSESSCOMPOSITIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AssessCompositionResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class AssessCompositionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssessCompositionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AssessCompositionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AssessCompositionResponseBody() = default ;
    AssessCompositionResponseBody(const AssessCompositionResponseBody &) = default ;
    AssessCompositionResponseBody(AssessCompositionResponseBody &&) = default ;
    AssessCompositionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssessCompositionResponseBody() = default ;
    AssessCompositionResponseBody& operator=(const AssessCompositionResponseBody &) = default ;
    AssessCompositionResponseBody& operator=(AssessCompositionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AssessCompositionResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, AssessCompositionResponseBodyData) };
    inline AssessCompositionResponseBodyData data() { DARABONBA_PTR_GET(data_, AssessCompositionResponseBodyData) };
    inline AssessCompositionResponseBody& setData(const AssessCompositionResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AssessCompositionResponseBody& setData(AssessCompositionResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssessCompositionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<AssessCompositionResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
