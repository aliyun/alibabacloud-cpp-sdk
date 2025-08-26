// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZETRAINTICKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZETRAINTICKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RecognizeTrainTicketResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeTrainTicketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeTrainTicketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeTrainTicketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RecognizeTrainTicketResponseBody() = default ;
    RecognizeTrainTicketResponseBody(const RecognizeTrainTicketResponseBody &) = default ;
    RecognizeTrainTicketResponseBody(RecognizeTrainTicketResponseBody &&) = default ;
    RecognizeTrainTicketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeTrainTicketResponseBody() = default ;
    RecognizeTrainTicketResponseBody& operator=(const RecognizeTrainTicketResponseBody &) = default ;
    RecognizeTrainTicketResponseBody& operator=(RecognizeTrainTicketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RecognizeTrainTicketResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, RecognizeTrainTicketResponseBodyData) };
    inline RecognizeTrainTicketResponseBodyData data() { DARABONBA_PTR_GET(data_, RecognizeTrainTicketResponseBodyData) };
    inline RecognizeTrainTicketResponseBody& setData(const RecognizeTrainTicketResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RecognizeTrainTicketResponseBody& setData(RecognizeTrainTicketResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RecognizeTrainTicketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RecognizeTrainTicketResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
