// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEK8SACCESSINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEK8SACCESSINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GenerateK8sAccessInfoResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GenerateK8sAccessInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateK8sAccessInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateK8sAccessInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateK8sAccessInfoResponseBody() = default ;
    GenerateK8sAccessInfoResponseBody(const GenerateK8sAccessInfoResponseBody &) = default ;
    GenerateK8sAccessInfoResponseBody(GenerateK8sAccessInfoResponseBody &&) = default ;
    GenerateK8sAccessInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateK8sAccessInfoResponseBody() = default ;
    GenerateK8sAccessInfoResponseBody& operator=(const GenerateK8sAccessInfoResponseBody &) = default ;
    GenerateK8sAccessInfoResponseBody& operator=(GenerateK8sAccessInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GenerateK8sAccessInfoResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GenerateK8sAccessInfoResponseBodyData) };
    inline GenerateK8sAccessInfoResponseBodyData data() { DARABONBA_PTR_GET(data_, GenerateK8sAccessInfoResponseBodyData) };
    inline GenerateK8sAccessInfoResponseBody& setData(const GenerateK8sAccessInfoResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GenerateK8sAccessInfoResponseBody& setData(GenerateK8sAccessInfoResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateK8sAccessInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<GenerateK8sAccessInfoResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
