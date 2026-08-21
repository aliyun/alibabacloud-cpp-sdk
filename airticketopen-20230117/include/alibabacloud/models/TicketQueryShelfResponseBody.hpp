// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETQUERYSHELFRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TICKETQUERYSHELFRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class TicketQueryShelfResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketQueryShelfResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, TicketQueryShelfResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    TicketQueryShelfResponseBody() = default ;
    TicketQueryShelfResponseBody(const TicketQueryShelfResponseBody &) = default ;
    TicketQueryShelfResponseBody(TicketQueryShelfResponseBody &&) = default ;
    TicketQueryShelfResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketQueryShelfResponseBody() = default ;
    TicketQueryShelfResponseBody& operator=(const TicketQueryShelfResponseBody &) = default ;
    TicketQueryShelfResponseBody& operator=(TicketQueryShelfResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Shelves, shelves_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Shelves, shelves_);
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
      class Shelves : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Shelves& obj) { 
          DARABONBA_PTR_TO_JSON(ShelfId, shelfId_);
          DARABONBA_PTR_TO_JSON(ShelfIndex, shelfIndex_);
          DARABONBA_PTR_TO_JSON(ShelfName, shelfName_);
          DARABONBA_PTR_TO_JSON(Tabs, tabs_);
        };
        friend void from_json(const Darabonba::Json& j, Shelves& obj) { 
          DARABONBA_PTR_FROM_JSON(ShelfId, shelfId_);
          DARABONBA_PTR_FROM_JSON(ShelfIndex, shelfIndex_);
          DARABONBA_PTR_FROM_JSON(ShelfName, shelfName_);
          DARABONBA_PTR_FROM_JSON(Tabs, tabs_);
        };
        Shelves() = default ;
        Shelves(const Shelves &) = default ;
        Shelves(Shelves &&) = default ;
        Shelves(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Shelves() = default ;
        Shelves& operator=(const Shelves &) = default ;
        Shelves& operator=(Shelves &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tabs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tabs& obj) { 
            DARABONBA_PTR_TO_JSON(Cells, cells_);
            DARABONBA_PTR_TO_JSON(TabIndex, tabIndex_);
            DARABONBA_PTR_TO_JSON(TabName, tabName_);
          };
          friend void from_json(const Darabonba::Json& j, Tabs& obj) { 
            DARABONBA_PTR_FROM_JSON(Cells, cells_);
            DARABONBA_PTR_FROM_JSON(TabIndex, tabIndex_);
            DARABONBA_PTR_FROM_JSON(TabName, tabName_);
          };
          Tabs() = default ;
          Tabs(const Tabs &) = default ;
          Tabs(Tabs &&) = default ;
          Tabs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tabs() = default ;
          Tabs& operator=(const Tabs &) = default ;
          Tabs& operator=(Tabs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Cells : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Cells& obj) { 
              DARABONBA_PTR_TO_JSON(SpuId, spuId_);
              DARABONBA_PTR_TO_JSON(TicketKindId, ticketKindId_);
            };
            friend void from_json(const Darabonba::Json& j, Cells& obj) { 
              DARABONBA_PTR_FROM_JSON(SpuId, spuId_);
              DARABONBA_PTR_FROM_JSON(TicketKindId, ticketKindId_);
            };
            Cells() = default ;
            Cells(const Cells &) = default ;
            Cells(Cells &&) = default ;
            Cells(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Cells() = default ;
            Cells& operator=(const Cells &) = default ;
            Cells& operator=(Cells &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->spuId_ == nullptr
        && this->ticketKindId_ == nullptr; };
            // spuId Field Functions 
            bool hasSpuId() const { return this->spuId_ != nullptr;};
            void deleteSpuId() { this->spuId_ = nullptr;};
            inline int64_t getSpuId() const { DARABONBA_PTR_GET_DEFAULT(spuId_, 0L) };
            inline Cells& setSpuId(int64_t spuId) { DARABONBA_PTR_SET_VALUE(spuId_, spuId) };


            // ticketKindId Field Functions 
            bool hasTicketKindId() const { return this->ticketKindId_ != nullptr;};
            void deleteTicketKindId() { this->ticketKindId_ = nullptr;};
            inline int64_t getTicketKindId() const { DARABONBA_PTR_GET_DEFAULT(ticketKindId_, 0L) };
            inline Cells& setTicketKindId(int64_t ticketKindId) { DARABONBA_PTR_SET_VALUE(ticketKindId_, ticketKindId) };


          protected:
            shared_ptr<int64_t> spuId_ {};
            shared_ptr<int64_t> ticketKindId_ {};
          };

          virtual bool empty() const override { return this->cells_ == nullptr
        && this->tabIndex_ == nullptr && this->tabName_ == nullptr; };
          // cells Field Functions 
          bool hasCells() const { return this->cells_ != nullptr;};
          void deleteCells() { this->cells_ = nullptr;};
          inline const vector<Tabs::Cells> & getCells() const { DARABONBA_PTR_GET_CONST(cells_, vector<Tabs::Cells>) };
          inline vector<Tabs::Cells> getCells() { DARABONBA_PTR_GET(cells_, vector<Tabs::Cells>) };
          inline Tabs& setCells(const vector<Tabs::Cells> & cells) { DARABONBA_PTR_SET_VALUE(cells_, cells) };
          inline Tabs& setCells(vector<Tabs::Cells> && cells) { DARABONBA_PTR_SET_RVALUE(cells_, cells) };


          // tabIndex Field Functions 
          bool hasTabIndex() const { return this->tabIndex_ != nullptr;};
          void deleteTabIndex() { this->tabIndex_ = nullptr;};
          inline int32_t getTabIndex() const { DARABONBA_PTR_GET_DEFAULT(tabIndex_, 0) };
          inline Tabs& setTabIndex(int32_t tabIndex) { DARABONBA_PTR_SET_VALUE(tabIndex_, tabIndex) };


          // tabName Field Functions 
          bool hasTabName() const { return this->tabName_ != nullptr;};
          void deleteTabName() { this->tabName_ = nullptr;};
          inline string getTabName() const { DARABONBA_PTR_GET_DEFAULT(tabName_, "") };
          inline Tabs& setTabName(string tabName) { DARABONBA_PTR_SET_VALUE(tabName_, tabName) };


        protected:
          shared_ptr<vector<Tabs::Cells>> cells_ {};
          shared_ptr<int32_t> tabIndex_ {};
          shared_ptr<string> tabName_ {};
        };

        virtual bool empty() const override { return this->shelfId_ == nullptr
        && this->shelfIndex_ == nullptr && this->shelfName_ == nullptr && this->tabs_ == nullptr; };
        // shelfId Field Functions 
        bool hasShelfId() const { return this->shelfId_ != nullptr;};
        void deleteShelfId() { this->shelfId_ = nullptr;};
        inline int64_t getShelfId() const { DARABONBA_PTR_GET_DEFAULT(shelfId_, 0L) };
        inline Shelves& setShelfId(int64_t shelfId) { DARABONBA_PTR_SET_VALUE(shelfId_, shelfId) };


        // shelfIndex Field Functions 
        bool hasShelfIndex() const { return this->shelfIndex_ != nullptr;};
        void deleteShelfIndex() { this->shelfIndex_ = nullptr;};
        inline int32_t getShelfIndex() const { DARABONBA_PTR_GET_DEFAULT(shelfIndex_, 0) };
        inline Shelves& setShelfIndex(int32_t shelfIndex) { DARABONBA_PTR_SET_VALUE(shelfIndex_, shelfIndex) };


        // shelfName Field Functions 
        bool hasShelfName() const { return this->shelfName_ != nullptr;};
        void deleteShelfName() { this->shelfName_ = nullptr;};
        inline string getShelfName() const { DARABONBA_PTR_GET_DEFAULT(shelfName_, "") };
        inline Shelves& setShelfName(string shelfName) { DARABONBA_PTR_SET_VALUE(shelfName_, shelfName) };


        // tabs Field Functions 
        bool hasTabs() const { return this->tabs_ != nullptr;};
        void deleteTabs() { this->tabs_ = nullptr;};
        inline const vector<Shelves::Tabs> & getTabs() const { DARABONBA_PTR_GET_CONST(tabs_, vector<Shelves::Tabs>) };
        inline vector<Shelves::Tabs> getTabs() { DARABONBA_PTR_GET(tabs_, vector<Shelves::Tabs>) };
        inline Shelves& setTabs(const vector<Shelves::Tabs> & tabs) { DARABONBA_PTR_SET_VALUE(tabs_, tabs) };
        inline Shelves& setTabs(vector<Shelves::Tabs> && tabs) { DARABONBA_PTR_SET_RVALUE(tabs_, tabs) };


      protected:
        shared_ptr<int64_t> shelfId_ {};
        shared_ptr<int32_t> shelfIndex_ {};
        shared_ptr<string> shelfName_ {};
        shared_ptr<vector<Shelves::Tabs>> tabs_ {};
      };

      virtual bool empty() const override { return this->shelves_ == nullptr; };
      // shelves Field Functions 
      bool hasShelves() const { return this->shelves_ != nullptr;};
      void deleteShelves() { this->shelves_ = nullptr;};
      inline const vector<Data::Shelves> & getShelves() const { DARABONBA_PTR_GET_CONST(shelves_, vector<Data::Shelves>) };
      inline vector<Data::Shelves> getShelves() { DARABONBA_PTR_GET(shelves_, vector<Data::Shelves>) };
      inline Data& setShelves(const vector<Data::Shelves> & shelves) { DARABONBA_PTR_SET_VALUE(shelves_, shelves) };
      inline Data& setShelves(vector<Data::Shelves> && shelves) { DARABONBA_PTR_SET_RVALUE(shelves_, shelves) };


    protected:
      shared_ptr<vector<Data::Shelves>> shelves_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TicketQueryShelfResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TicketQueryShelfResponseBody::Data) };
    inline TicketQueryShelfResponseBody::Data getData() { DARABONBA_PTR_GET(data_, TicketQueryShelfResponseBody::Data) };
    inline TicketQueryShelfResponseBody& setData(const TicketQueryShelfResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TicketQueryShelfResponseBody& setData(TicketQueryShelfResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline TicketQueryShelfResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline TicketQueryShelfResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TicketQueryShelfResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TicketQueryShelfResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<TicketQueryShelfResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
