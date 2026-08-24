// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRUSSCANADDITIONALLISTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRUSSCANADDITIONALLISTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListVirusScanAdditionalListsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirusScanAdditionalListsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalLists, additionalLists_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirusScanAdditionalListsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalLists, additionalLists_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListVirusScanAdditionalListsResponseBody() = default ;
    ListVirusScanAdditionalListsResponseBody(const ListVirusScanAdditionalListsResponseBody &) = default ;
    ListVirusScanAdditionalListsResponseBody(ListVirusScanAdditionalListsResponseBody &&) = default ;
    ListVirusScanAdditionalListsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirusScanAdditionalListsResponseBody() = default ;
    ListVirusScanAdditionalListsResponseBody& operator=(const ListVirusScanAdditionalListsResponseBody &) = default ;
    ListVirusScanAdditionalListsResponseBody& operator=(ListVirusScanAdditionalListsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AdditionalLists : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdditionalLists& obj) { 
        DARABONBA_PTR_TO_JSON(AdditionalType, additionalType_);
        DARABONBA_PTR_TO_JSON(Lists, lists_);
      };
      friend void from_json(const Darabonba::Json& j, AdditionalLists& obj) { 
        DARABONBA_PTR_FROM_JSON(AdditionalType, additionalType_);
        DARABONBA_PTR_FROM_JSON(Lists, lists_);
      };
      AdditionalLists() = default ;
      AdditionalLists(const AdditionalLists &) = default ;
      AdditionalLists(AdditionalLists &&) = default ;
      AdditionalLists(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdditionalLists() = default ;
      AdditionalLists& operator=(const AdditionalLists &) = default ;
      AdditionalLists& operator=(AdditionalLists &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Lists : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Lists& obj) { 
          DARABONBA_PTR_TO_JSON(ListDetail, listDetail_);
          DARABONBA_PTR_TO_JSON(ListType, listType_);
        };
        friend void from_json(const Darabonba::Json& j, Lists& obj) { 
          DARABONBA_PTR_FROM_JSON(ListDetail, listDetail_);
          DARABONBA_PTR_FROM_JSON(ListType, listType_);
        };
        Lists() = default ;
        Lists(const Lists &) = default ;
        Lists(Lists &&) = default ;
        Lists(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Lists() = default ;
        Lists& operator=(const Lists &) = default ;
        Lists& operator=(Lists &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ListDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ListDetail& obj) { 
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(Detail, detail_);
            DARABONBA_PTR_TO_JSON(ListId, listId_);
          };
          friend void from_json(const Darabonba::Json& j, ListDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(Detail, detail_);
            DARABONBA_PTR_FROM_JSON(ListId, listId_);
          };
          ListDetail() = default ;
          ListDetail(const ListDetail &) = default ;
          ListDetail(ListDetail &&) = default ;
          ListDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ListDetail() = default ;
          ListDetail& operator=(const ListDetail &) = default ;
          ListDetail& operator=(ListDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->createTime_ == nullptr
        && this->detail_ == nullptr && this->listId_ == nullptr; };
          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline ListDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // detail Field Functions 
          bool hasDetail() const { return this->detail_ != nullptr;};
          void deleteDetail() { this->detail_ = nullptr;};
          inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
          inline ListDetail& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


          // listId Field Functions 
          bool hasListId() const { return this->listId_ != nullptr;};
          void deleteListId() { this->listId_ = nullptr;};
          inline string getListId() const { DARABONBA_PTR_GET_DEFAULT(listId_, "") };
          inline ListDetail& setListId(string listId) { DARABONBA_PTR_SET_VALUE(listId_, listId) };


        protected:
          shared_ptr<string> createTime_ {};
          shared_ptr<string> detail_ {};
          shared_ptr<string> listId_ {};
        };

        virtual bool empty() const override { return this->listDetail_ == nullptr
        && this->listType_ == nullptr; };
        // listDetail Field Functions 
        bool hasListDetail() const { return this->listDetail_ != nullptr;};
        void deleteListDetail() { this->listDetail_ = nullptr;};
        inline const vector<Lists::ListDetail> & getListDetail() const { DARABONBA_PTR_GET_CONST(listDetail_, vector<Lists::ListDetail>) };
        inline vector<Lists::ListDetail> getListDetail() { DARABONBA_PTR_GET(listDetail_, vector<Lists::ListDetail>) };
        inline Lists& setListDetail(const vector<Lists::ListDetail> & listDetail) { DARABONBA_PTR_SET_VALUE(listDetail_, listDetail) };
        inline Lists& setListDetail(vector<Lists::ListDetail> && listDetail) { DARABONBA_PTR_SET_RVALUE(listDetail_, listDetail) };


        // listType Field Functions 
        bool hasListType() const { return this->listType_ != nullptr;};
        void deleteListType() { this->listType_ = nullptr;};
        inline string getListType() const { DARABONBA_PTR_GET_DEFAULT(listType_, "") };
        inline Lists& setListType(string listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


      protected:
        shared_ptr<vector<Lists::ListDetail>> listDetail_ {};
        shared_ptr<string> listType_ {};
      };

      virtual bool empty() const override { return this->additionalType_ == nullptr
        && this->lists_ == nullptr; };
      // additionalType Field Functions 
      bool hasAdditionalType() const { return this->additionalType_ != nullptr;};
      void deleteAdditionalType() { this->additionalType_ = nullptr;};
      inline string getAdditionalType() const { DARABONBA_PTR_GET_DEFAULT(additionalType_, "") };
      inline AdditionalLists& setAdditionalType(string additionalType) { DARABONBA_PTR_SET_VALUE(additionalType_, additionalType) };


      // lists Field Functions 
      bool hasLists() const { return this->lists_ != nullptr;};
      void deleteLists() { this->lists_ = nullptr;};
      inline const vector<AdditionalLists::Lists> & getLists() const { DARABONBA_PTR_GET_CONST(lists_, vector<AdditionalLists::Lists>) };
      inline vector<AdditionalLists::Lists> getLists() { DARABONBA_PTR_GET(lists_, vector<AdditionalLists::Lists>) };
      inline AdditionalLists& setLists(const vector<AdditionalLists::Lists> & lists) { DARABONBA_PTR_SET_VALUE(lists_, lists) };
      inline AdditionalLists& setLists(vector<AdditionalLists::Lists> && lists) { DARABONBA_PTR_SET_RVALUE(lists_, lists) };


    protected:
      shared_ptr<string> additionalType_ {};
      shared_ptr<vector<AdditionalLists::Lists>> lists_ {};
    };

    virtual bool empty() const override { return this->additionalLists_ == nullptr
        && this->requestId_ == nullptr; };
    // additionalLists Field Functions 
    bool hasAdditionalLists() const { return this->additionalLists_ != nullptr;};
    void deleteAdditionalLists() { this->additionalLists_ = nullptr;};
    inline const vector<ListVirusScanAdditionalListsResponseBody::AdditionalLists> & getAdditionalLists() const { DARABONBA_PTR_GET_CONST(additionalLists_, vector<ListVirusScanAdditionalListsResponseBody::AdditionalLists>) };
    inline vector<ListVirusScanAdditionalListsResponseBody::AdditionalLists> getAdditionalLists() { DARABONBA_PTR_GET(additionalLists_, vector<ListVirusScanAdditionalListsResponseBody::AdditionalLists>) };
    inline ListVirusScanAdditionalListsResponseBody& setAdditionalLists(const vector<ListVirusScanAdditionalListsResponseBody::AdditionalLists> & additionalLists) { DARABONBA_PTR_SET_VALUE(additionalLists_, additionalLists) };
    inline ListVirusScanAdditionalListsResponseBody& setAdditionalLists(vector<ListVirusScanAdditionalListsResponseBody::AdditionalLists> && additionalLists) { DARABONBA_PTR_SET_RVALUE(additionalLists_, additionalLists) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVirusScanAdditionalListsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListVirusScanAdditionalListsResponseBody::AdditionalLists>> additionalLists_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
