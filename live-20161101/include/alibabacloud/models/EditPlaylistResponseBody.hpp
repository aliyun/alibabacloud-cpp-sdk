// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITPLAYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EDITPLAYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class EditPlaylistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditPlaylistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(ProgramId, programId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EditPlaylistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(ProgramId, programId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    EditPlaylistResponseBody() = default ;
    EditPlaylistResponseBody(const EditPlaylistResponseBody &) = default ;
    EditPlaylistResponseBody(EditPlaylistResponseBody &&) = default ;
    EditPlaylistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditPlaylistResponseBody() = default ;
    EditPlaylistResponseBody& operator=(const EditPlaylistResponseBody &) = default ;
    EditPlaylistResponseBody& operator=(EditPlaylistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(FailedItems, failedItems_);
        DARABONBA_PTR_TO_JSON(SuccessItems, successItems_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(FailedItems, failedItems_);
        DARABONBA_PTR_FROM_JSON(SuccessItems, successItems_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SuccessItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SuccessItems& obj) { 
          DARABONBA_PTR_TO_JSON(ItemId, itemId_);
          DARABONBA_PTR_TO_JSON(ItemName, itemName_);
        };
        friend void from_json(const Darabonba::Json& j, SuccessItems& obj) { 
          DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
          DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
        };
        SuccessItems() = default ;
        SuccessItems(const SuccessItems &) = default ;
        SuccessItems(SuccessItems &&) = default ;
        SuccessItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SuccessItems() = default ;
        SuccessItems& operator=(const SuccessItems &) = default ;
        SuccessItems& operator=(SuccessItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->itemId_ == nullptr
        && this->itemName_ == nullptr; };
        // itemId Field Functions 
        bool hasItemId() const { return this->itemId_ != nullptr;};
        void deleteItemId() { this->itemId_ = nullptr;};
        inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
        inline SuccessItems& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


        // itemName Field Functions 
        bool hasItemName() const { return this->itemName_ != nullptr;};
        void deleteItemName() { this->itemName_ = nullptr;};
        inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
        inline SuccessItems& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


      protected:
        // The ID of the episode.
        shared_ptr<string> itemId_ {};
        // The name of the episode.
        shared_ptr<string> itemName_ {};
      };

      class FailedItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FailedItems& obj) { 
          DARABONBA_PTR_TO_JSON(ItemId, itemId_);
          DARABONBA_PTR_TO_JSON(ItemName, itemName_);
        };
        friend void from_json(const Darabonba::Json& j, FailedItems& obj) { 
          DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
          DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
        };
        FailedItems() = default ;
        FailedItems(const FailedItems &) = default ;
        FailedItems(FailedItems &&) = default ;
        FailedItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FailedItems() = default ;
        FailedItems& operator=(const FailedItems &) = default ;
        FailedItems& operator=(FailedItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->itemId_ == nullptr
        && this->itemName_ == nullptr; };
        // itemId Field Functions 
        bool hasItemId() const { return this->itemId_ != nullptr;};
        void deleteItemId() { this->itemId_ = nullptr;};
        inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
        inline FailedItems& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


        // itemName Field Functions 
        bool hasItemName() const { return this->itemName_ != nullptr;};
        void deleteItemName() { this->itemName_ = nullptr;};
        inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
        inline FailedItems& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


      protected:
        // The ID of the episode.
        shared_ptr<string> itemId_ {};
        // The name of the episode.
        shared_ptr<string> itemName_ {};
      };

      virtual bool empty() const override { return this->failedItems_ == nullptr
        && this->successItems_ == nullptr; };
      // failedItems Field Functions 
      bool hasFailedItems() const { return this->failedItems_ != nullptr;};
      void deleteFailedItems() { this->failedItems_ = nullptr;};
      inline const vector<Items::FailedItems> & getFailedItems() const { DARABONBA_PTR_GET_CONST(failedItems_, vector<Items::FailedItems>) };
      inline vector<Items::FailedItems> getFailedItems() { DARABONBA_PTR_GET(failedItems_, vector<Items::FailedItems>) };
      inline Items& setFailedItems(const vector<Items::FailedItems> & failedItems) { DARABONBA_PTR_SET_VALUE(failedItems_, failedItems) };
      inline Items& setFailedItems(vector<Items::FailedItems> && failedItems) { DARABONBA_PTR_SET_RVALUE(failedItems_, failedItems) };


      // successItems Field Functions 
      bool hasSuccessItems() const { return this->successItems_ != nullptr;};
      void deleteSuccessItems() { this->successItems_ = nullptr;};
      inline const vector<Items::SuccessItems> & getSuccessItems() const { DARABONBA_PTR_GET_CONST(successItems_, vector<Items::SuccessItems>) };
      inline vector<Items::SuccessItems> getSuccessItems() { DARABONBA_PTR_GET(successItems_, vector<Items::SuccessItems>) };
      inline Items& setSuccessItems(const vector<Items::SuccessItems> & successItems) { DARABONBA_PTR_SET_VALUE(successItems_, successItems) };
      inline Items& setSuccessItems(vector<Items::SuccessItems> && successItems) { DARABONBA_PTR_SET_RVALUE(successItems_, successItems) };


    protected:
      // The episodes that failed to be added.
      shared_ptr<vector<Items::FailedItems>> failedItems_ {};
      // The episodes that were added.
      shared_ptr<vector<Items::SuccessItems>> successItems_ {};
    };

    virtual bool empty() const override { return this->casterId_ == nullptr
        && this->items_ == nullptr && this->programId_ == nullptr && this->requestId_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline EditPlaylistResponseBody& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const EditPlaylistResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, EditPlaylistResponseBody::Items) };
    inline EditPlaylistResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, EditPlaylistResponseBody::Items) };
    inline EditPlaylistResponseBody& setItems(const EditPlaylistResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline EditPlaylistResponseBody& setItems(EditPlaylistResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // programId Field Functions 
    bool hasProgramId() const { return this->programId_ != nullptr;};
    void deleteProgramId() { this->programId_ = nullptr;};
    inline string getProgramId() const { DARABONBA_PTR_GET_DEFAULT(programId_, "") };
    inline EditPlaylistResponseBody& setProgramId(string programId) { DARABONBA_PTR_SET_VALUE(programId_, programId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EditPlaylistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the production studio. You can use the ID as a request parameter in the API operation that is used to configure callbacks or add a virtual studio layout.
    shared_ptr<string> casterId_ {};
    // The information about the episodes.
    shared_ptr<EditPlaylistResponseBody::Items> items_ {};
    // The ID of the episode list. You can use the ID as a request parameter in the API operation that is used to delete the episode list, query the information about the episode list, start the episode list, or stop the episode list.
    shared_ptr<string> programId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
