// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRDDEFAULTSYNCLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRDDEFAULTSYNCLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListRdDefaultSyncListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRdDefaultSyncListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRdDefaultSyncListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRdDefaultSyncListResponseBody() = default ;
    ListRdDefaultSyncListResponseBody(const ListRdDefaultSyncListResponseBody &) = default ;
    ListRdDefaultSyncListResponseBody(ListRdDefaultSyncListResponseBody &&) = default ;
    ListRdDefaultSyncListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRdDefaultSyncListResponseBody() = default ;
    ListRdDefaultSyncListResponseBody& operator=(const ListRdDefaultSyncListResponseBody &) = default ;
    ListRdDefaultSyncListResponseBody& operator=(ListRdDefaultSyncListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FolderIds, folderIds_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FolderIds, folderIds_);
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
      virtual bool empty() const override { return this->folderIds_ == nullptr; };
      // folderIds Field Functions 
      bool hasFolderIds() const { return this->folderIds_ != nullptr;};
      void deleteFolderIds() { this->folderIds_ = nullptr;};
      inline string getFolderIds() const { DARABONBA_PTR_GET_DEFAULT(folderIds_, "") };
      inline Data& setFolderIds(string folderIds) { DARABONBA_PTR_SET_VALUE(folderIds_, folderIds) };


    protected:
      // The IDs of the folders in the resource directory.
      shared_ptr<string> folderIds_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListRdDefaultSyncListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListRdDefaultSyncListResponseBody::Data) };
    inline ListRdDefaultSyncListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListRdDefaultSyncListResponseBody::Data) };
    inline ListRdDefaultSyncListResponseBody& setData(const ListRdDefaultSyncListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListRdDefaultSyncListResponseBody& setData(ListRdDefaultSyncListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRdDefaultSyncListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned if the call is successful.
    shared_ptr<ListRdDefaultSyncListResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
