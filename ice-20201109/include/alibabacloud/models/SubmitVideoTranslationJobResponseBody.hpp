// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVIDEOTRANSLATIONJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVIDEOTRANSLATIONJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitVideoTranslationJobResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitVideoTranslationJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVideoTranslationJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVideoTranslationJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SubmitVideoTranslationJobResponseBody() = default ;
    SubmitVideoTranslationJobResponseBody(const SubmitVideoTranslationJobResponseBody &) = default ;
    SubmitVideoTranslationJobResponseBody(SubmitVideoTranslationJobResponseBody &&) = default ;
    SubmitVideoTranslationJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVideoTranslationJobResponseBody() = default ;
    SubmitVideoTranslationJobResponseBody& operator=(const SubmitVideoTranslationJobResponseBody &) = default ;
    SubmitVideoTranslationJobResponseBody& operator=(SubmitVideoTranslationJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SubmitVideoTranslationJobResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, SubmitVideoTranslationJobResponseBodyData) };
    inline SubmitVideoTranslationJobResponseBodyData data() { DARABONBA_PTR_GET(data_, SubmitVideoTranslationJobResponseBodyData) };
    inline SubmitVideoTranslationJobResponseBody& setData(const SubmitVideoTranslationJobResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SubmitVideoTranslationJobResponseBody& setData(SubmitVideoTranslationJobResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitVideoTranslationJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SubmitVideoTranslationJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    std::shared_ptr<SubmitVideoTranslationJobResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
