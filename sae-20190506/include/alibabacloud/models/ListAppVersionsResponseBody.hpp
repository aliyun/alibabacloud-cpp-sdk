// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListAppVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAppVersionsResponseBody() = default ;
    ListAppVersionsResponseBody(const ListAppVersionsResponseBody &) = default ;
    ListAppVersionsResponseBody(ListAppVersionsResponseBody &&) = default ;
    ListAppVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppVersionsResponseBody() = default ;
    ListAppVersionsResponseBody& operator=(const ListAppVersionsResponseBody &) = default ;
    ListAppVersionsResponseBody& operator=(ListAppVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BuildPackageUrl, buildPackageUrl_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(WarUrl, warUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BuildPackageUrl, buildPackageUrl_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(WarUrl, warUrl_);
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
      virtual bool empty() const override { return this->buildPackageUrl_ == nullptr
        && this->createTime_ == nullptr && this->id_ == nullptr && this->type_ == nullptr && this->warUrl_ == nullptr; };
      // buildPackageUrl Field Functions 
      bool hasBuildPackageUrl() const { return this->buildPackageUrl_ != nullptr;};
      void deleteBuildPackageUrl() { this->buildPackageUrl_ = nullptr;};
      inline string getBuildPackageUrl() const { DARABONBA_PTR_GET_DEFAULT(buildPackageUrl_, "") };
      inline Data& setBuildPackageUrl(string buildPackageUrl) { DARABONBA_PTR_SET_VALUE(buildPackageUrl_, buildPackageUrl) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // warUrl Field Functions 
      bool hasWarUrl() const { return this->warUrl_ != nullptr;};
      void deleteWarUrl() { this->warUrl_ = nullptr;};
      inline string getWarUrl() const { DARABONBA_PTR_GET_DEFAULT(warUrl_, "") };
      inline Data& setWarUrl(string warUrl) { DARABONBA_PTR_SET_VALUE(warUrl_, warUrl) };


    protected:
      // The URL of the code package. If you use the SAE console to upload the code package, take note of the following items:
      // 
      // *   You cannot download the URL. You must call the GetPackageVersionAccessableUrl operation to obtain the URL. The obtained URL is valid for 10 minutes.
      // *   SAE can retain the package up to 90 days. After 90 days, the URL cannot be returned or downloaded.
      shared_ptr<string> buildPackageUrl_ {};
      // The download link of the WAR or JAR package. This parameter is returned when the **Type** parameter is set to **url**.
      shared_ptr<string> createTime_ {};
      // The error code.
      // 
      // *   The **ErrorCode** parameter is not returned when the request succeeds.
      // *   The **ErrorCode** parameter is returned when the request fails. For more information, see **Error codes** in this topic.
      shared_ptr<string> id_ {};
      // The deployment method of the application. Valid values:
      // 
      // *   **image**: indicates that the application is deployed by using an image.
      // *   **url**: indicates that the application is deployed by using a code package.
      shared_ptr<string> type_ {};
      // The URL of the image.
      shared_ptr<string> warUrl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAppVersionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAppVersionsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAppVersionsResponseBody::Data>) };
    inline vector<ListAppVersionsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAppVersionsResponseBody::Data>) };
    inline ListAppVersionsResponseBody& setData(const vector<ListAppVersionsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAppVersionsResponseBody& setData(vector<ListAppVersionsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListAppVersionsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAppVersionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAppVersionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates whether the historical versions of the application were obtained. Valid values:
    // 
    // *   **true**: indicates that the historical versions of the application were obtained.
    // *   **false**: indicates that the historical versions of the application could not be obtained.
    shared_ptr<string> code_ {};
    // The information about the versions.
    shared_ptr<vector<ListAppVersionsResponseBody::Data>> data_ {};
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: indicates that the request was successful.
    // *   **3xx**: indicates that the request was redirected.
    // *   **4xx**: indicates that the request was invalid.
    // *   **5xx**: indicates that a server error occurred.
    shared_ptr<string> errorCode_ {};
    // The ID of the request.
    shared_ptr<string> message_ {};
    // The information about the versions.
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
