// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAVATARTRAININGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAVATARTRAININGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitAvatarTrainingJobResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitAvatarTrainingJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAvatarTrainingJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAvatarTrainingJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SubmitAvatarTrainingJobResponseBody() = default ;
    SubmitAvatarTrainingJobResponseBody(const SubmitAvatarTrainingJobResponseBody &) = default ;
    SubmitAvatarTrainingJobResponseBody(SubmitAvatarTrainingJobResponseBody &&) = default ;
    SubmitAvatarTrainingJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAvatarTrainingJobResponseBody() = default ;
    SubmitAvatarTrainingJobResponseBody& operator=(const SubmitAvatarTrainingJobResponseBody &) = default ;
    SubmitAvatarTrainingJobResponseBody& operator=(SubmitAvatarTrainingJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SubmitAvatarTrainingJobResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, SubmitAvatarTrainingJobResponseBodyData) };
    inline SubmitAvatarTrainingJobResponseBodyData data() { DARABONBA_PTR_GET(data_, SubmitAvatarTrainingJobResponseBodyData) };
    inline SubmitAvatarTrainingJobResponseBody& setData(const SubmitAvatarTrainingJobResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SubmitAvatarTrainingJobResponseBody& setData(SubmitAvatarTrainingJobResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitAvatarTrainingJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SubmitAvatarTrainingJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    std::shared_ptr<SubmitAvatarTrainingJobResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
