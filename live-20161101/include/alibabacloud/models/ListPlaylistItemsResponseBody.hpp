// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLAYLISTITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPLAYLISTITEMSRESPONSEBODY_HPP_
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
  class ListPlaylistItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPlaylistItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProgramItems, programItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListPlaylistItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProgramItems, programItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListPlaylistItemsResponseBody() = default ;
    ListPlaylistItemsResponseBody(const ListPlaylistItemsResponseBody &) = default ;
    ListPlaylistItemsResponseBody(ListPlaylistItemsResponseBody &&) = default ;
    ListPlaylistItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPlaylistItemsResponseBody() = default ;
    ListPlaylistItemsResponseBody& operator=(const ListPlaylistItemsResponseBody &) = default ;
    ListPlaylistItemsResponseBody& operator=(ListPlaylistItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProgramItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProgramItems& obj) { 
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(ProgramId, programId_);
        DARABONBA_PTR_TO_JSON(ProgramItemId, programItemId_);
        DARABONBA_PTR_TO_JSON(ProgramItemName, programItemName_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(ResourceValue, resourceValue_);
      };
      friend void from_json(const Darabonba::Json& j, ProgramItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(ProgramId, programId_);
        DARABONBA_PTR_FROM_JSON(ProgramItemId, programItemId_);
        DARABONBA_PTR_FROM_JSON(ProgramItemName, programItemName_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(ResourceValue, resourceValue_);
      };
      ProgramItems() = default ;
      ProgramItems(const ProgramItems &) = default ;
      ProgramItems(ProgramItems &&) = default ;
      ProgramItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProgramItems() = default ;
      ProgramItems& operator=(const ProgramItems &) = default ;
      ProgramItems& operator=(ProgramItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->index_ == nullptr
        && this->programId_ == nullptr && this->programItemId_ == nullptr && this->programItemName_ == nullptr && this->resourceType_ == nullptr && this->resourceValue_ == nullptr; };
      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
      inline ProgramItems& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // programId Field Functions 
      bool hasProgramId() const { return this->programId_ != nullptr;};
      void deleteProgramId() { this->programId_ = nullptr;};
      inline string getProgramId() const { DARABONBA_PTR_GET_DEFAULT(programId_, "") };
      inline ProgramItems& setProgramId(string programId) { DARABONBA_PTR_SET_VALUE(programId_, programId) };


      // programItemId Field Functions 
      bool hasProgramItemId() const { return this->programItemId_ != nullptr;};
      void deleteProgramItemId() { this->programItemId_ = nullptr;};
      inline string getProgramItemId() const { DARABONBA_PTR_GET_DEFAULT(programItemId_, "") };
      inline ProgramItems& setProgramItemId(string programItemId) { DARABONBA_PTR_SET_VALUE(programItemId_, programItemId) };


      // programItemName Field Functions 
      bool hasProgramItemName() const { return this->programItemName_ != nullptr;};
      void deleteProgramItemName() { this->programItemName_ = nullptr;};
      inline string getProgramItemName() const { DARABONBA_PTR_GET_DEFAULT(programItemName_, "") };
      inline ProgramItems& setProgramItemName(string programItemName) { DARABONBA_PTR_SET_VALUE(programItemName_, programItemName) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ProgramItems& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // resourceValue Field Functions 
      bool hasResourceValue() const { return this->resourceValue_ != nullptr;};
      void deleteResourceValue() { this->resourceValue_ = nullptr;};
      inline string getResourceValue() const { DARABONBA_PTR_GET_DEFAULT(resourceValue_, "") };
      inline ProgramItems& setResourceValue(string resourceValue) { DARABONBA_PTR_SET_VALUE(resourceValue_, resourceValue) };


    protected:
      // The sequence number of the episode in the query result.
      shared_ptr<int32_t> index_ {};
      // The ID of the episode list. You can use the ID as a request parameter in the API operation that is used to edit the episode list, delete the episode list, query the information about the episode list, start the episode list, or stop the episode list.
      shared_ptr<string> programId_ {};
      // The ID of the episode.
      shared_ptr<string> programItemId_ {};
      // The name of the episode.
      shared_ptr<string> programItemName_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
      // The resource ID.
      shared_ptr<string> resourceValue_ {};
    };

    virtual bool empty() const override { return this->programItems_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // programItems Field Functions 
    bool hasProgramItems() const { return this->programItems_ != nullptr;};
    void deleteProgramItems() { this->programItems_ = nullptr;};
    inline const vector<ListPlaylistItemsResponseBody::ProgramItems> & getProgramItems() const { DARABONBA_PTR_GET_CONST(programItems_, vector<ListPlaylistItemsResponseBody::ProgramItems>) };
    inline vector<ListPlaylistItemsResponseBody::ProgramItems> getProgramItems() { DARABONBA_PTR_GET(programItems_, vector<ListPlaylistItemsResponseBody::ProgramItems>) };
    inline ListPlaylistItemsResponseBody& setProgramItems(const vector<ListPlaylistItemsResponseBody::ProgramItems> & programItems) { DARABONBA_PTR_SET_VALUE(programItems_, programItems) };
    inline ListPlaylistItemsResponseBody& setProgramItems(vector<ListPlaylistItemsResponseBody::ProgramItems> && programItems) { DARABONBA_PTR_SET_RVALUE(programItems_, programItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPlaylistItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListPlaylistItemsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The episodes.
    shared_ptr<vector<ListPlaylistItemsResponseBody::ProgramItems>> programItems_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of episodes.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
