// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNACOSMCPSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNACOSMCPSERVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListNacosMcpServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNacosMcpServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNacosMcpServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListNacosMcpServersResponseBody() = default ;
    ListNacosMcpServersResponseBody(const ListNacosMcpServersResponseBody &) = default ;
    ListNacosMcpServersResponseBody(ListNacosMcpServersResponseBody &&) = default ;
    ListNacosMcpServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNacosMcpServersResponseBody() = default ;
    ListNacosMcpServersResponseBody& operator=(const ListNacosMcpServersResponseBody &) = default ;
    ListNacosMcpServersResponseBody& operator=(ListNacosMcpServersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageItems, pageItems_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PagesAvailable, pagesAvailable_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageItems, pageItems_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PagesAvailable, pagesAvailable_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class PageItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageItems& obj) { 
          DARABONBA_PTR_TO_JSON(Capabilities, capabilities_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(FrontProtocol, frontProtocol_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(Version, version_);
          DARABONBA_PTR_TO_JSON(VersionDetail, versionDetail_);
        };
        friend void from_json(const Darabonba::Json& j, PageItems& obj) { 
          DARABONBA_PTR_FROM_JSON(Capabilities, capabilities_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(FrontProtocol, frontProtocol_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
          DARABONBA_PTR_FROM_JSON(VersionDetail, versionDetail_);
        };
        PageItems() = default ;
        PageItems(const PageItems &) = default ;
        PageItems(PageItems &&) = default ;
        PageItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageItems() = default ;
        PageItems& operator=(const PageItems &) = default ;
        PageItems& operator=(PageItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VersionDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VersionDetail& obj) { 
            DARABONBA_PTR_TO_JSON(Is_latest, isLatest_);
            DARABONBA_PTR_TO_JSON(Release_date, releaseDate_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, VersionDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(Is_latest, isLatest_);
            DARABONBA_PTR_FROM_JSON(Release_date, releaseDate_);
            DARABONBA_PTR_FROM_JSON(Version, version_);
          };
          VersionDetail() = default ;
          VersionDetail(const VersionDetail &) = default ;
          VersionDetail(VersionDetail &&) = default ;
          VersionDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VersionDetail() = default ;
          VersionDetail& operator=(const VersionDetail &) = default ;
          VersionDetail& operator=(VersionDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->isLatest_ == nullptr
        && this->releaseDate_ == nullptr && this->version_ == nullptr; };
          // isLatest Field Functions 
          bool hasIsLatest() const { return this->isLatest_ != nullptr;};
          void deleteIsLatest() { this->isLatest_ = nullptr;};
          inline bool getIsLatest() const { DARABONBA_PTR_GET_DEFAULT(isLatest_, false) };
          inline VersionDetail& setIsLatest(bool isLatest) { DARABONBA_PTR_SET_VALUE(isLatest_, isLatest) };


          // releaseDate Field Functions 
          bool hasReleaseDate() const { return this->releaseDate_ != nullptr;};
          void deleteReleaseDate() { this->releaseDate_ = nullptr;};
          inline string getReleaseDate() const { DARABONBA_PTR_GET_DEFAULT(releaseDate_, "") };
          inline VersionDetail& setReleaseDate(string releaseDate) { DARABONBA_PTR_SET_VALUE(releaseDate_, releaseDate) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline VersionDetail& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          shared_ptr<bool> isLatest_ {};
          shared_ptr<string> releaseDate_ {};
          shared_ptr<string> version_ {};
        };

        virtual bool empty() const override { return this->capabilities_ == nullptr
        && this->description_ == nullptr && this->frontProtocol_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->protocol_ == nullptr
        && this->version_ == nullptr && this->versionDetail_ == nullptr; };
        // capabilities Field Functions 
        bool hasCapabilities() const { return this->capabilities_ != nullptr;};
        void deleteCapabilities() { this->capabilities_ = nullptr;};
        inline const vector<string> & getCapabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, vector<string>) };
        inline vector<string> getCapabilities() { DARABONBA_PTR_GET(capabilities_, vector<string>) };
        inline PageItems& setCapabilities(const vector<string> & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
        inline PageItems& setCapabilities(vector<string> && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PageItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // frontProtocol Field Functions 
        bool hasFrontProtocol() const { return this->frontProtocol_ != nullptr;};
        void deleteFrontProtocol() { this->frontProtocol_ = nullptr;};
        inline string getFrontProtocol() const { DARABONBA_PTR_GET_DEFAULT(frontProtocol_, "") };
        inline PageItems& setFrontProtocol(string frontProtocol) { DARABONBA_PTR_SET_VALUE(frontProtocol_, frontProtocol) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline PageItems& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PageItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline PageItems& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline PageItems& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // versionDetail Field Functions 
        bool hasVersionDetail() const { return this->versionDetail_ != nullptr;};
        void deleteVersionDetail() { this->versionDetail_ = nullptr;};
        inline const PageItems::VersionDetail & getVersionDetail() const { DARABONBA_PTR_GET_CONST(versionDetail_, PageItems::VersionDetail) };
        inline PageItems::VersionDetail getVersionDetail() { DARABONBA_PTR_GET(versionDetail_, PageItems::VersionDetail) };
        inline PageItems& setVersionDetail(const PageItems::VersionDetail & versionDetail) { DARABONBA_PTR_SET_VALUE(versionDetail_, versionDetail) };
        inline PageItems& setVersionDetail(PageItems::VersionDetail && versionDetail) { DARABONBA_PTR_SET_RVALUE(versionDetail_, versionDetail) };


      protected:
        shared_ptr<vector<string>> capabilities_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> frontProtocol_ {};
        // ID。
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> protocol_ {};
        shared_ptr<string> version_ {};
        shared_ptr<PageItems::VersionDetail> versionDetail_ {};
      };

      virtual bool empty() const override { return this->pageItems_ == nullptr
        && this->pageNumber_ == nullptr && this->pagesAvailable_ == nullptr && this->totalCount_ == nullptr; };
      // pageItems Field Functions 
      bool hasPageItems() const { return this->pageItems_ != nullptr;};
      void deletePageItems() { this->pageItems_ = nullptr;};
      inline const vector<Data::PageItems> & getPageItems() const { DARABONBA_PTR_GET_CONST(pageItems_, vector<Data::PageItems>) };
      inline vector<Data::PageItems> getPageItems() { DARABONBA_PTR_GET(pageItems_, vector<Data::PageItems>) };
      inline Data& setPageItems(const vector<Data::PageItems> & pageItems) { DARABONBA_PTR_SET_VALUE(pageItems_, pageItems) };
      inline Data& setPageItems(vector<Data::PageItems> && pageItems) { DARABONBA_PTR_SET_RVALUE(pageItems_, pageItems) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pagesAvailable Field Functions 
      bool hasPagesAvailable() const { return this->pagesAvailable_ != nullptr;};
      void deletePagesAvailable() { this->pagesAvailable_ = nullptr;};
      inline int32_t getPagesAvailable() const { DARABONBA_PTR_GET_DEFAULT(pagesAvailable_, 0) };
      inline Data& setPagesAvailable(int32_t pagesAvailable) { DARABONBA_PTR_SET_VALUE(pagesAvailable_, pagesAvailable) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::PageItems>> pageItems_ {};
      // pageNumber.
      shared_ptr<int32_t> pageNumber_ {};
      // pagesAvailable.
      shared_ptr<int32_t> pagesAvailable_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListNacosMcpServersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListNacosMcpServersResponseBody::Data) };
    inline ListNacosMcpServersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListNacosMcpServersResponseBody::Data) };
    inline ListNacosMcpServersResponseBody& setData(const ListNacosMcpServersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListNacosMcpServersResponseBody& setData(ListNacosMcpServersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNacosMcpServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListNacosMcpServersResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
