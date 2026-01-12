// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANSWERLIBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTANSWERLIBRESPONSEBODY_HPP_
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
  class ListAnswerLibResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnswerLibResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnswerLibResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAnswerLibResponseBody() = default ;
    ListAnswerLibResponseBody(const ListAnswerLibResponseBody &) = default ;
    ListAnswerLibResponseBody(ListAnswerLibResponseBody &&) = default ;
    ListAnswerLibResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnswerLibResponseBody() = default ;
    ListAnswerLibResponseBody& operator=(const ListAnswerLibResponseBody &) = default ;
    ListAnswerLibResponseBody& operator=(ListAnswerLibResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AnswerCount, answerCount_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(LibId, libId_);
        DARABONBA_PTR_TO_JSON(LibName, libName_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AnswerCount, answerCount_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(LibId, libId_);
        DARABONBA_PTR_FROM_JSON(LibName, libName_);
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
      virtual bool empty() const override { return this->answerCount_ == nullptr
        && this->gmtModified_ == nullptr && this->libId_ == nullptr && this->libName_ == nullptr && this->uid_ == nullptr; };
      // answerCount Field Functions 
      bool hasAnswerCount() const { return this->answerCount_ != nullptr;};
      void deleteAnswerCount() { this->answerCount_ = nullptr;};
      inline int32_t getAnswerCount() const { DARABONBA_PTR_GET_DEFAULT(answerCount_, 0) };
      inline Data& setAnswerCount(int32_t answerCount) { DARABONBA_PTR_SET_VALUE(answerCount_, answerCount) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


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


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Data& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    protected:
      shared_ptr<int32_t> answerCount_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> libId_ {};
      shared_ptr<string> libName_ {};
      // UID。
      shared_ptr<string> uid_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAnswerLibResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAnswerLibResponseBody::Data>) };
    inline vector<ListAnswerLibResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAnswerLibResponseBody::Data>) };
    inline ListAnswerLibResponseBody& setData(const vector<ListAnswerLibResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAnswerLibResponseBody& setData(vector<ListAnswerLibResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAnswerLibResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListAnswerLibResponseBody::Data>> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
