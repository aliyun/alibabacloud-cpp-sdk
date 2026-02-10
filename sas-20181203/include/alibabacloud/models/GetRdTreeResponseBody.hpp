// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRDTREERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRDTREERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetRdTreeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRdTreeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRdTreeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRdTreeResponseBody() = default ;
    GetRdTreeResponseBody(const GetRdTreeResponseBody &) = default ;
    GetRdTreeResponseBody(GetRdTreeResponseBody &&) = default ;
    GetRdTreeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRdTreeResponseBody() = default ;
    GetRdTreeResponseBody& operator=(const GetRdTreeResponseBody &) = default ;
    GetRdTreeResponseBody& operator=(GetRdTreeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Children, children_);
        DARABONBA_PTR_TO_JSON(FolderId, folderId_);
        DARABONBA_PTR_TO_JSON(FolderName, folderName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Children, children_);
        DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
        DARABONBA_PTR_FROM_JSON(FolderName, folderName_);
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
      virtual bool empty() const override { return this->children_ == nullptr
        && this->folderId_ == nullptr && this->folderName_ == nullptr; };
      // children Field Functions 
      bool hasChildren() const { return this->children_ != nullptr;};
      void deleteChildren() { this->children_ = nullptr;};
      inline const vector<Darabonba::Json> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getChildren() { DARABONBA_PTR_GET(children_, vector<Darabonba::Json>) };
      inline Data& setChildren(const vector<Darabonba::Json> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
      inline Data& setChildren(vector<Darabonba::Json> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


      // folderId Field Functions 
      bool hasFolderId() const { return this->folderId_ != nullptr;};
      void deleteFolderId() { this->folderId_ = nullptr;};
      inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
      inline Data& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


      // folderName Field Functions 
      bool hasFolderName() const { return this->folderName_ != nullptr;};
      void deleteFolderName() { this->folderName_ = nullptr;};
      inline string getFolderName() const { DARABONBA_PTR_GET_DEFAULT(folderName_, "") };
      inline Data& setFolderName(string folderName) { DARABONBA_PTR_SET_VALUE(folderName_, folderName) };


    protected:
      // The subfolder.
      shared_ptr<vector<Darabonba::Json>> children_ {};
      // The ID of the folder in the resource directory.
      shared_ptr<string> folderId_ {};
      // The name of the folder.
      shared_ptr<string> folderName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRdTreeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRdTreeResponseBody::Data) };
    inline GetRdTreeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRdTreeResponseBody::Data) };
    inline GetRdTreeResponseBody& setData(const GetRdTreeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRdTreeResponseBody& setData(GetRdTreeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRdTreeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The processing result.
    shared_ptr<GetRdTreeResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
