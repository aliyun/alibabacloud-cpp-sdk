// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ABOLISHCROSSPROJECTPIPELINERUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ABOLISHCROSSPROJECTPIPELINERUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class AbolishCrossProjectPipelineRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AbolishCrossProjectPipelineRunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AbolishCrossProjectPipelineRunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AbolishCrossProjectPipelineRunResponseBody() = default ;
    AbolishCrossProjectPipelineRunResponseBody(const AbolishCrossProjectPipelineRunResponseBody &) = default ;
    AbolishCrossProjectPipelineRunResponseBody(AbolishCrossProjectPipelineRunResponseBody &&) = default ;
    AbolishCrossProjectPipelineRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AbolishCrossProjectPipelineRunResponseBody() = default ;
    AbolishCrossProjectPipelineRunResponseBody& operator=(const AbolishCrossProjectPipelineRunResponseBody &) = default ;
    AbolishCrossProjectPipelineRunResponseBody& operator=(AbolishCrossProjectPipelineRunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
      virtual bool empty() const override { return this->requestId_ == nullptr; };
      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    protected:
      // The request ID.
      shared_ptr<string> requestId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AbolishCrossProjectPipelineRunResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AbolishCrossProjectPipelineRunResponseBody::Data) };
    inline AbolishCrossProjectPipelineRunResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AbolishCrossProjectPipelineRunResponseBody::Data) };
    inline AbolishCrossProjectPipelineRunResponseBody& setData(const AbolishCrossProjectPipelineRunResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AbolishCrossProjectPipelineRunResponseBody& setData(AbolishCrossProjectPipelineRunResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AbolishCrossProjectPipelineRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AbolishCrossProjectPipelineRunResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business response.
    shared_ptr<AbolishCrossProjectPipelineRunResponseBody::Data> data_ {};
    // The request ID, which is used to locate and troubleshoot this API call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
