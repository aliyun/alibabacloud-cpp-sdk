// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHINDEXJOBRERUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHINDEXJOBRERUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchIndexJobRerunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchIndexJobRerunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SearchIndexJobRerunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SearchIndexJobRerunResponseBody() = default ;
    SearchIndexJobRerunResponseBody(const SearchIndexJobRerunResponseBody &) = default ;
    SearchIndexJobRerunResponseBody(SearchIndexJobRerunResponseBody &&) = default ;
    SearchIndexJobRerunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchIndexJobRerunResponseBody() = default ;
    SearchIndexJobRerunResponseBody& operator=(const SearchIndexJobRerunResponseBody &) = default ;
    SearchIndexJobRerunResponseBody& operator=(SearchIndexJobRerunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MediaIdsNoExist, mediaIdsNoExist_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MediaIdsNoExist, mediaIdsNoExist_);
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
      virtual bool empty() const override { return this->mediaIdsNoExist_ == nullptr; };
      // mediaIdsNoExist Field Functions 
      bool hasMediaIdsNoExist() const { return this->mediaIdsNoExist_ != nullptr;};
      void deleteMediaIdsNoExist() { this->mediaIdsNoExist_ = nullptr;};
      inline const vector<string> & getMediaIdsNoExist() const { DARABONBA_PTR_GET_CONST(mediaIdsNoExist_, vector<string>) };
      inline vector<string> getMediaIdsNoExist() { DARABONBA_PTR_GET(mediaIdsNoExist_, vector<string>) };
      inline Data& setMediaIdsNoExist(const vector<string> & mediaIdsNoExist) { DARABONBA_PTR_SET_VALUE(mediaIdsNoExist_, mediaIdsNoExist) };
      inline Data& setMediaIdsNoExist(vector<string> && mediaIdsNoExist) { DARABONBA_PTR_SET_RVALUE(mediaIdsNoExist_, mediaIdsNoExist) };


    protected:
      // The media asset IDs that do not exist.
      shared_ptr<vector<string>> mediaIdsNoExist_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SearchIndexJobRerunResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SearchIndexJobRerunResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SearchIndexJobRerunResponseBody::Data) };
    inline SearchIndexJobRerunResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SearchIndexJobRerunResponseBody::Data) };
    inline SearchIndexJobRerunResponseBody& setData(const SearchIndexJobRerunResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SearchIndexJobRerunResponseBody& setData(SearchIndexJobRerunResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchIndexJobRerunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline SearchIndexJobRerunResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<SearchIndexJobRerunResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
