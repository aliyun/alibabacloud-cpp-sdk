// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKEYWORDLIBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKEYWORDLIBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListKeywordLibsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKeywordLibsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListKeywordLibsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListKeywordLibsResponseBody() = default ;
    ListKeywordLibsResponseBody(const ListKeywordLibsResponseBody &) = default ;
    ListKeywordLibsResponseBody(ListKeywordLibsResponseBody &&) = default ;
    ListKeywordLibsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKeywordLibsResponseBody() = default ;
    ListKeywordLibsResponseBody& operator=(const ListKeywordLibsResponseBody &) = default ;
    ListKeywordLibsResponseBody& operator=(ListKeywordLibsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(KeywordCount, keywordCount_);
        DARABONBA_PTR_TO_JSON(LibId, libId_);
        DARABONBA_PTR_TO_JSON(LibName, libName_);
        DARABONBA_PTR_TO_JSON(ServiceCodes, serviceCodes_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(KeywordCount, keywordCount_);
        DARABONBA_PTR_FROM_JSON(LibId, libId_);
        DARABONBA_PTR_FROM_JSON(LibName, libName_);
        DARABONBA_PTR_FROM_JSON(ServiceCodes, serviceCodes_);
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
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
      virtual bool empty() const override { return this->gmtModified_ == nullptr
        && this->keywordCount_ == nullptr && this->libId_ == nullptr && this->libName_ == nullptr && this->serviceCodes_ == nullptr && this->uid_ == nullptr; };
      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // keywordCount Field Functions 
      bool hasKeywordCount() const { return this->keywordCount_ != nullptr;};
      void deleteKeywordCount() { this->keywordCount_ = nullptr;};
      inline string getKeywordCount() const { DARABONBA_PTR_GET_DEFAULT(keywordCount_, "") };
      inline Data& setKeywordCount(string keywordCount) { DARABONBA_PTR_SET_VALUE(keywordCount_, keywordCount) };


      // libId Field Functions 
      bool hasLibId() const { return this->libId_ != nullptr;};
      void deleteLibId() { this->libId_ = nullptr;};
      inline string getLibId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
      inline Data& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


      // libName Field Functions 
      bool hasLibName() const { return this->libName_ != nullptr;};
      void deleteLibName() { this->libName_ = nullptr;};
      inline string getLibName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
      inline Data& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


      // serviceCodes Field Functions 
      bool hasServiceCodes() const { return this->serviceCodes_ != nullptr;};
      void deleteServiceCodes() { this->serviceCodes_ = nullptr;};
      inline string getServiceCodes() const { DARABONBA_PTR_GET_DEFAULT(serviceCodes_, "") };
      inline Data& setServiceCodes(string serviceCodes) { DARABONBA_PTR_SET_VALUE(serviceCodes_, serviceCodes) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Data& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    protected:
      // Modification time.
      shared_ptr<string> gmtModified_ {};
      // Number of keywords.
      shared_ptr<string> keywordCount_ {};
      // Library ID.
      shared_ptr<string> libId_ {};
      // Library name.
      shared_ptr<string> libName_ {};
      // Service codes.
      shared_ptr<string> serviceCodes_ {};
      // UID.
      shared_ptr<string> uid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListKeywordLibsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListKeywordLibsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListKeywordLibsResponseBody::Data>) };
    inline vector<ListKeywordLibsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListKeywordLibsResponseBody::Data>) };
    inline ListKeywordLibsResponseBody& setData(const vector<ListKeywordLibsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListKeywordLibsResponseBody& setData(vector<ListKeywordLibsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline ListKeywordLibsResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKeywordLibsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListKeywordLibsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Error code.
    shared_ptr<int32_t> code_ {};
    // Returned data.
    shared_ptr<vector<ListKeywordLibsResponseBody::Data>> data_ {};
    // Further description of the error code.
    shared_ptr<string> msg_ {};
    // ID assigned by the backend to uniquely identify a request. Can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Success indicator.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
