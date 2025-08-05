// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTORAGEPROJECTSINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTORAGEPROJECTSINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListStorageProjectsInfoResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListStorageProjectsInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStorageProjectsInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListStorageProjectsInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListStorageProjectsInfoResponseBody() = default ;
    ListStorageProjectsInfoResponseBody(const ListStorageProjectsInfoResponseBody &) = default ;
    ListStorageProjectsInfoResponseBody(ListStorageProjectsInfoResponseBody &&) = default ;
    ListStorageProjectsInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStorageProjectsInfoResponseBody() = default ;
    ListStorageProjectsInfoResponseBody& operator=(const ListStorageProjectsInfoResponseBody &) = default ;
    ListStorageProjectsInfoResponseBody& operator=(ListStorageProjectsInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->errorCode_ != nullptr && this->errorMsg_ != nullptr && this->httpCode_ != nullptr && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListStorageProjectsInfoResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ListStorageProjectsInfoResponseBodyData) };
    inline ListStorageProjectsInfoResponseBodyData data() { DARABONBA_PTR_GET(data_, ListStorageProjectsInfoResponseBodyData) };
    inline ListStorageProjectsInfoResponseBody& setData(const ListStorageProjectsInfoResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListStorageProjectsInfoResponseBody& setData(ListStorageProjectsInfoResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListStorageProjectsInfoResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ListStorageProjectsInfoResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t httpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline ListStorageProjectsInfoResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStorageProjectsInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListStorageProjectsInfoResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<int32_t> httpCode_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
