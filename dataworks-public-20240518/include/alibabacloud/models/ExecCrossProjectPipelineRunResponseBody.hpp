// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECCROSSPROJECTPIPELINERUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECCROSSPROJECTPIPELINERUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ExecCrossProjectPipelineRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecCrossProjectPipelineRunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ExecCrossProjectPipelineRunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ExecCrossProjectPipelineRunResponseBody() = default ;
    ExecCrossProjectPipelineRunResponseBody(const ExecCrossProjectPipelineRunResponseBody &) = default ;
    ExecCrossProjectPipelineRunResponseBody(ExecCrossProjectPipelineRunResponseBody &&) = default ;
    ExecCrossProjectPipelineRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecCrossProjectPipelineRunResponseBody() = default ;
    ExecCrossProjectPipelineRunResponseBody& operator=(const ExecCrossProjectPipelineRunResponseBody &) = default ;
    ExecCrossProjectPipelineRunResponseBody& operator=(ExecCrossProjectPipelineRunResponseBody &&) = default ;
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
    inline const ExecCrossProjectPipelineRunResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ExecCrossProjectPipelineRunResponseBody::Data) };
    inline ExecCrossProjectPipelineRunResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ExecCrossProjectPipelineRunResponseBody::Data) };
    inline ExecCrossProjectPipelineRunResponseBody& setData(const ExecCrossProjectPipelineRunResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ExecCrossProjectPipelineRunResponseBody& setData(ExecCrossProjectPipelineRunResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecCrossProjectPipelineRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ExecCrossProjectPipelineRunResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business response.
    shared_ptr<ExecCrossProjectPipelineRunResponseBody::Data> data_ {};
    // The request ID, which is used to locate and troubleshoot this API call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
