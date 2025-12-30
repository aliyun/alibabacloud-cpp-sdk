// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDNADBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDNADBRESPONSEBODY_HPP_
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
  class ListDNADBResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDNADBResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBList, DBList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDNADBResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBList, DBList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDNADBResponseBody() = default ;
    ListDNADBResponseBody(const ListDNADBResponseBody &) = default ;
    ListDNADBResponseBody(ListDNADBResponseBody &&) = default ;
    ListDNADBResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDNADBResponseBody() = default ;
    ListDNADBResponseBody& operator=(const ListDNADBResponseBody &) = default ;
    ListDNADBResponseBody& operator=(ListDNADBResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBList& obj) { 
        DARABONBA_PTR_TO_JSON(DBId, DBId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DBList& obj) { 
        DARABONBA_PTR_FROM_JSON(DBId, DBId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DBList() = default ;
      DBList(const DBList &) = default ;
      DBList(DBList &&) = default ;
      DBList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBList() = default ;
      DBList& operator=(const DBList &) = default ;
      DBList& operator=(DBList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBId_ == nullptr
        && this->description_ == nullptr && this->model_ == nullptr && this->name_ == nullptr && this->status_ == nullptr; };
      // DBId Field Functions 
      bool hasDBId() const { return this->DBId_ != nullptr;};
      void deleteDBId() { this->DBId_ = nullptr;};
      inline string getDBId() const { DARABONBA_PTR_GET_DEFAULT(DBId_, "") };
      inline DBList& setDBId(string DBId) { DARABONBA_PTR_SET_VALUE(DBId_, DBId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DBList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline DBList& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DBList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DBList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the media fingerprint library.
      shared_ptr<string> DBId_ {};
      // The description of the media fingerprint library.
      shared_ptr<string> description_ {};
      // The model of the media fingerprint library. Valid values:
      // 
      // *   **Video**
      // *   **Audio**
      // *   **Image**
      // *   **Text** (supported only in the China (Shanghai) region)
      shared_ptr<string> model_ {};
      // The name of the media fingerprint library.
      shared_ptr<string> name_ {};
      // The state of the media fingerprint library. Default value: **offline**. ****Valid values:
      // 
      // *   **offline**: The media fingerprint library is offline.
      // *   **active**: The media fingerprint library is online.
      // *   **deleted**: The media fingerprint library is deleted.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->DBList_ == nullptr
        && this->requestId_ == nullptr; };
    // DBList Field Functions 
    bool hasDBList() const { return this->DBList_ != nullptr;};
    void deleteDBList() { this->DBList_ = nullptr;};
    inline const vector<ListDNADBResponseBody::DBList> & getDBList() const { DARABONBA_PTR_GET_CONST(DBList_, vector<ListDNADBResponseBody::DBList>) };
    inline vector<ListDNADBResponseBody::DBList> getDBList() { DARABONBA_PTR_GET(DBList_, vector<ListDNADBResponseBody::DBList>) };
    inline ListDNADBResponseBody& setDBList(const vector<ListDNADBResponseBody::DBList> & dBList) { DARABONBA_PTR_SET_VALUE(DBList_, dBList) };
    inline ListDNADBResponseBody& setDBList(vector<ListDNADBResponseBody::DBList> && dBList) { DARABONBA_PTR_SET_RVALUE(DBList_, dBList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDNADBResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried media fingerprint libraries.
    shared_ptr<vector<ListDNADBResponseBody::DBList>> DBList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
