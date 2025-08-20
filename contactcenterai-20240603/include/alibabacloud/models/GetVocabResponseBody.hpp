// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVOCABRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVOCABRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVocabResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class GetVocabResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVocabResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetVocabResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetVocabResponseBody() = default ;
    GetVocabResponseBody(const GetVocabResponseBody &) = default ;
    GetVocabResponseBody(GetVocabResponseBody &&) = default ;
    GetVocabResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVocabResponseBody() = default ;
    GetVocabResponseBody& operator=(const GetVocabResponseBody &) = default ;
    GetVocabResponseBody& operator=(GetVocabResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetVocabResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetVocabResponseBodyData) };
    inline GetVocabResponseBodyData data() { DARABONBA_PTR_GET(data_, GetVocabResponseBodyData) };
    inline GetVocabResponseBody& setData(const GetVocabResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetVocabResponseBody& setData(GetVocabResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVocabResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetVocabResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<GetVocabResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
