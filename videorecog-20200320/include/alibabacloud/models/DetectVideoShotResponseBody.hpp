// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVIDEOSHOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETECTVIDEOSHOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class DetectVideoShotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVideoShotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVideoShotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DetectVideoShotResponseBody() = default ;
    DetectVideoShotResponseBody(const DetectVideoShotResponseBody &) = default ;
    DetectVideoShotResponseBody(DetectVideoShotResponseBody &&) = default ;
    DetectVideoShotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVideoShotResponseBody() = default ;
    DetectVideoShotResponseBody& operator=(const DetectVideoShotResponseBody &) = default ;
    DetectVideoShotResponseBody& operator=(DetectVideoShotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ShotFrameIds, shotFrameIds_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ShotFrameIds, shotFrameIds_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->shotFrameIds_ == nullptr; };
      // shotFrameIds Field Functions 
      bool hasShotFrameIds() const { return this->shotFrameIds_ != nullptr;};
      void deleteShotFrameIds() { this->shotFrameIds_ = nullptr;};
      inline const vector<int32_t> & getShotFrameIds() const { DARABONBA_PTR_GET_CONST(shotFrameIds_, vector<int32_t>) };
      inline vector<int32_t> getShotFrameIds() { DARABONBA_PTR_GET(shotFrameIds_, vector<int32_t>) };
      inline Data& setShotFrameIds(const vector<int32_t> & shotFrameIds) { DARABONBA_PTR_SET_VALUE(shotFrameIds_, shotFrameIds) };
      inline Data& setShotFrameIds(vector<int32_t> && shotFrameIds) { DARABONBA_PTR_SET_RVALUE(shotFrameIds_, shotFrameIds) };


    protected:
      // 1
      shared_ptr<vector<int32_t>> shotFrameIds_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DetectVideoShotResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DetectVideoShotResponseBody::Data) };
    inline DetectVideoShotResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DetectVideoShotResponseBody::Data) };
    inline DetectVideoShotResponseBody& setData(const DetectVideoShotResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DetectVideoShotResponseBody& setData(DetectVideoShotResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DetectVideoShotResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetectVideoShotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DetectVideoShotResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
