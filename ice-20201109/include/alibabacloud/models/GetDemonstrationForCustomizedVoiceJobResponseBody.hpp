// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEMONSTRATIONFORCUSTOMIZEDVOICEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEMONSTRATIONFORCUSTOMIZEDVOICEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDemonstrationForCustomizedVoiceJobResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetDemonstrationForCustomizedVoiceJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDemonstrationForCustomizedVoiceJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDemonstrationForCustomizedVoiceJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDemonstrationForCustomizedVoiceJobResponseBody() = default ;
    GetDemonstrationForCustomizedVoiceJobResponseBody(const GetDemonstrationForCustomizedVoiceJobResponseBody &) = default ;
    GetDemonstrationForCustomizedVoiceJobResponseBody(GetDemonstrationForCustomizedVoiceJobResponseBody &&) = default ;
    GetDemonstrationForCustomizedVoiceJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDemonstrationForCustomizedVoiceJobResponseBody() = default ;
    GetDemonstrationForCustomizedVoiceJobResponseBody& operator=(const GetDemonstrationForCustomizedVoiceJobResponseBody &) = default ;
    GetDemonstrationForCustomizedVoiceJobResponseBody& operator=(GetDemonstrationForCustomizedVoiceJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDemonstrationForCustomizedVoiceJobResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetDemonstrationForCustomizedVoiceJobResponseBodyData) };
    inline GetDemonstrationForCustomizedVoiceJobResponseBodyData data() { DARABONBA_PTR_GET(data_, GetDemonstrationForCustomizedVoiceJobResponseBodyData) };
    inline GetDemonstrationForCustomizedVoiceJobResponseBody& setData(const GetDemonstrationForCustomizedVoiceJobResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDemonstrationForCustomizedVoiceJobResponseBody& setData(GetDemonstrationForCustomizedVoiceJobResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDemonstrationForCustomizedVoiceJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDemonstrationForCustomizedVoiceJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    std::shared_ptr<GetDemonstrationForCustomizedVoiceJobResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
