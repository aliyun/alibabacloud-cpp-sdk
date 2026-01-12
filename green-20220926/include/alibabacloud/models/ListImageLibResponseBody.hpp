// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGELIBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGELIBRESPONSEBODY_HPP_
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
  class ListImageLibResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageLibResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(LibList, libList_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageLibResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(LibList, libList_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListImageLibResponseBody() = default ;
    ListImageLibResponseBody(const ListImageLibResponseBody &) = default ;
    ListImageLibResponseBody(ListImageLibResponseBody &&) = default ;
    ListImageLibResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageLibResponseBody() = default ;
    ListImageLibResponseBody& operator=(const ListImageLibResponseBody &) = default ;
    ListImageLibResponseBody& operator=(ListImageLibResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LibList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LibList& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(FreeInspection, freeInspection_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(ImageNum, imageNum_);
        DARABONBA_PTR_TO_JSON(LibId, libId_);
        DARABONBA_PTR_TO_JSON(LibName, libName_);
      };
      friend void from_json(const Darabonba::Json& j, LibList& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(FreeInspection, freeInspection_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(ImageNum, imageNum_);
        DARABONBA_PTR_FROM_JSON(LibId, libId_);
        DARABONBA_PTR_FROM_JSON(LibName, libName_);
      };
      LibList() = default ;
      LibList(const LibList &) = default ;
      LibList(LibList &&) = default ;
      LibList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LibList() = default ;
      LibList& operator=(const LibList &) = default ;
      LibList& operator=(LibList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->freeInspection_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->imageNum_ == nullptr && this->libId_ == nullptr
        && this->libName_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline LibList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // freeInspection Field Functions 
      bool hasFreeInspection() const { return this->freeInspection_ != nullptr;};
      void deleteFreeInspection() { this->freeInspection_ = nullptr;};
      inline int32_t getFreeInspection() const { DARABONBA_PTR_GET_DEFAULT(freeInspection_, 0) };
      inline LibList& setFreeInspection(int32_t freeInspection) { DARABONBA_PTR_SET_VALUE(freeInspection_, freeInspection) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline LibList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline LibList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // imageNum Field Functions 
      bool hasImageNum() const { return this->imageNum_ != nullptr;};
      void deleteImageNum() { this->imageNum_ = nullptr;};
      inline int64_t getImageNum() const { DARABONBA_PTR_GET_DEFAULT(imageNum_, 0L) };
      inline LibList& setImageNum(int64_t imageNum) { DARABONBA_PTR_SET_VALUE(imageNum_, imageNum) };


      // libId Field Functions 
      bool hasLibId() const { return this->libId_ != nullptr;};
      void deleteLibId() { this->libId_ = nullptr;};
      inline string getLibId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
      inline LibList& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


      // libName Field Functions 
      bool hasLibName() const { return this->libName_ != nullptr;};
      void deleteLibName() { this->libName_ = nullptr;};
      inline string getLibName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
      inline LibList& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


    protected:
      // Comment.
      shared_ptr<string> comment_ {};
      // Exempt from inspection configuration.
      shared_ptr<int32_t> freeInspection_ {};
      // Creation time.
      shared_ptr<string> gmtCreate_ {};
      // Modification time.
      shared_ptr<string> gmtModified_ {};
      // Number of images in the library.
      shared_ptr<int64_t> imageNum_ {};
      // Library ID.
      shared_ptr<string> libId_ {};
      // Library name.
      shared_ptr<string> libName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->libList_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListImageLibResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListImageLibResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // libList Field Functions 
    bool hasLibList() const { return this->libList_ != nullptr;};
    void deleteLibList() { this->libList_ = nullptr;};
    inline const vector<ListImageLibResponseBody::LibList> & getLibList() const { DARABONBA_PTR_GET_CONST(libList_, vector<ListImageLibResponseBody::LibList>) };
    inline vector<ListImageLibResponseBody::LibList> getLibList() { DARABONBA_PTR_GET(libList_, vector<ListImageLibResponseBody::LibList>) };
    inline ListImageLibResponseBody& setLibList(const vector<ListImageLibResponseBody::LibList> & libList) { DARABONBA_PTR_SET_VALUE(libList_, libList) };
    inline ListImageLibResponseBody& setLibList(vector<ListImageLibResponseBody::LibList> && libList) { DARABONBA_PTR_SET_RVALUE(libList_, libList) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline ListImageLibResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListImageLibResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListImageLibResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Error code, consistent with HTTP status.
    shared_ptr<int32_t> code_ {};
    // HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // List of image library information.
    shared_ptr<vector<ListImageLibResponseBody::LibList>> libList_ {};
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
