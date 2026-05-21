// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUPGRADERELEASEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUPGRADERELEASEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ListUpgradeReleaseVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUpgradeReleaseVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListUpgradeReleaseVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListUpgradeReleaseVersionsResponseBody() = default ;
    ListUpgradeReleaseVersionsResponseBody(const ListUpgradeReleaseVersionsResponseBody &) = default ;
    ListUpgradeReleaseVersionsResponseBody(ListUpgradeReleaseVersionsResponseBody &&) = default ;
    ListUpgradeReleaseVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUpgradeReleaseVersionsResponseBody() = default ;
    ListUpgradeReleaseVersionsResponseBody& operator=(const ListUpgradeReleaseVersionsResponseBody &) = default ;
    ListUpgradeReleaseVersionsResponseBody& operator=(ListUpgradeReleaseVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ReleaseNotesUrl, releaseNotesUrl_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UpgradeStrategy, upgradeStrategy_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ReleaseNotesUrl, releaseNotesUrl_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UpgradeStrategy, upgradeStrategy_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
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
      virtual bool empty() const override { return this->releaseNotesUrl_ == nullptr
        && this->type_ == nullptr && this->upgradeStrategy_ == nullptr && this->version_ == nullptr; };
      // releaseNotesUrl Field Functions 
      bool hasReleaseNotesUrl() const { return this->releaseNotesUrl_ != nullptr;};
      void deleteReleaseNotesUrl() { this->releaseNotesUrl_ = nullptr;};
      inline string getReleaseNotesUrl() const { DARABONBA_PTR_GET_DEFAULT(releaseNotesUrl_, "") };
      inline Data& setReleaseNotesUrl(string releaseNotesUrl) { DARABONBA_PTR_SET_VALUE(releaseNotesUrl_, releaseNotesUrl) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // upgradeStrategy Field Functions 
      bool hasUpgradeStrategy() const { return this->upgradeStrategy_ != nullptr;};
      void deleteUpgradeStrategy() { this->upgradeStrategy_ = nullptr;};
      inline const vector<string> & getUpgradeStrategy() const { DARABONBA_PTR_GET_CONST(upgradeStrategy_, vector<string>) };
      inline vector<string> getUpgradeStrategy() { DARABONBA_PTR_GET(upgradeStrategy_, vector<string>) };
      inline Data& setUpgradeStrategy(const vector<string> & upgradeStrategy) { DARABONBA_PTR_SET_VALUE(upgradeStrategy_, upgradeStrategy) };
      inline Data& setUpgradeStrategy(vector<string> && upgradeStrategy) { DARABONBA_PTR_SET_RVALUE(upgradeStrategy_, upgradeStrategy) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> releaseNotesUrl_ {};
      shared_ptr<string> type_ {};
      shared_ptr<vector<string>> upgradeStrategy_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListUpgradeReleaseVersionsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListUpgradeReleaseVersionsResponseBody::Data>) };
    inline vector<ListUpgradeReleaseVersionsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListUpgradeReleaseVersionsResponseBody::Data>) };
    inline ListUpgradeReleaseVersionsResponseBody& setData(const vector<ListUpgradeReleaseVersionsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListUpgradeReleaseVersionsResponseBody& setData(vector<ListUpgradeReleaseVersionsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListUpgradeReleaseVersionsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListUpgradeReleaseVersionsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline ListUpgradeReleaseVersionsResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUpgradeReleaseVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListUpgradeReleaseVersionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<ListUpgradeReleaseVersionsResponseBody::Data>> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> httpStatusCode_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
