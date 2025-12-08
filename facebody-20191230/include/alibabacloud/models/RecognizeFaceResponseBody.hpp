// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEFACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEFACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RecognizeFaceResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class RecognizeFaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeFaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeFaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RecognizeFaceResponseBody() = default ;
    RecognizeFaceResponseBody(const RecognizeFaceResponseBody &) = default ;
    RecognizeFaceResponseBody(RecognizeFaceResponseBody &&) = default ;
    RecognizeFaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeFaceResponseBody() = default ;
    RecognizeFaceResponseBody& operator=(const RecognizeFaceResponseBody &) = default ;
    RecognizeFaceResponseBody& operator=(RecognizeFaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RecognizeFaceResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, RecognizeFaceResponseBodyData) };
    inline RecognizeFaceResponseBodyData data() { DARABONBA_PTR_GET(data_, RecognizeFaceResponseBodyData) };
    inline RecognizeFaceResponseBody& setData(const RecognizeFaceResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RecognizeFaceResponseBody& setData(RecognizeFaceResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RecognizeFaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RecognizeFaceResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
