// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARSEFACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PARSEFACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ParseFaceResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class ParseFaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ParseFaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ParseFaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ParseFaceResponseBody() = default ;
    ParseFaceResponseBody(const ParseFaceResponseBody &) = default ;
    ParseFaceResponseBody(ParseFaceResponseBody &&) = default ;
    ParseFaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ParseFaceResponseBody() = default ;
    ParseFaceResponseBody& operator=(const ParseFaceResponseBody &) = default ;
    ParseFaceResponseBody& operator=(ParseFaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ParseFaceResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ParseFaceResponseBodyData) };
    inline ParseFaceResponseBodyData data() { DARABONBA_PTR_GET(data_, ParseFaceResponseBodyData) };
    inline ParseFaceResponseBody& setData(const ParseFaceResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ParseFaceResponseBody& setData(ParseFaceResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ParseFaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ParseFaceResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
