// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALLBACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCALLBACKRESPONSEBODY_HPP_
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
  class ListCallbackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCallbackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCallbackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCallbackResponseBody() = default ;
    ListCallbackResponseBody(const ListCallbackResponseBody &) = default ;
    ListCallbackResponseBody(ListCallbackResponseBody &&) = default ;
    ListCallbackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCallbackResponseBody() = default ;
    ListCallbackResponseBody& operator=(const ListCallbackResponseBody &) = default ;
    ListCallbackResponseBody& operator=(ListCallbackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CryptType, cryptType_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
        DARABONBA_PTR_TO_JSON(Seed, seed_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CryptType, cryptType_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
        DARABONBA_PTR_FROM_JSON(Seed, seed_);
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
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
      virtual bool empty() const override { return this->cryptType_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->scope_ == nullptr
        && this->seed_ == nullptr && this->uid_ == nullptr && this->url_ == nullptr; };
      // cryptType Field Functions 
      bool hasCryptType() const { return this->cryptType_ != nullptr;};
      void deleteCryptType() { this->cryptType_ = nullptr;};
      inline string getCryptType() const { DARABONBA_PTR_GET_DEFAULT(cryptType_, "") };
      inline Data& setCryptType(string cryptType) { DARABONBA_PTR_SET_VALUE(cryptType_, cryptType) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline Data& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // seed Field Functions 
      bool hasSeed() const { return this->seed_ != nullptr;};
      void deleteSeed() { this->seed_ = nullptr;};
      inline string getSeed() const { DARABONBA_PTR_GET_DEFAULT(seed_, "") };
      inline Data& setSeed(string seed) { DARABONBA_PTR_SET_VALUE(seed_, seed) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Data& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Data& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // Encryption algorithm.
      shared_ptr<string> cryptType_ {};
      // Creation time.
      shared_ptr<string> gmtCreate_ {};
      // Modification time.
      shared_ptr<string> gmtModified_ {};
      // Primary key ID.
      shared_ptr<int64_t> id_ {};
      // Name.
      shared_ptr<string> name_ {};
      // Result scope.
      shared_ptr<string> scope_ {};
      // Seed.
      shared_ptr<string> seed_ {};
      // UID.
      shared_ptr<string> uid_ {};
      // Callback URL.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListCallbackResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListCallbackResponseBody::Data>) };
    inline vector<ListCallbackResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListCallbackResponseBody::Data>) };
    inline ListCallbackResponseBody& setData(const vector<ListCallbackResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCallbackResponseBody& setData(vector<ListCallbackResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCallbackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned data.
    shared_ptr<vector<ListCallbackResponseBody::Data>> data_ {};
    // Backend-assigned ID, used to uniquely identify a request. Can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
