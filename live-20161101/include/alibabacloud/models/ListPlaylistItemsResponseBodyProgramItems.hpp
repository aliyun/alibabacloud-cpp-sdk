// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLAYLISTITEMSRESPONSEBODYPROGRAMITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTPLAYLISTITEMSRESPONSEBODYPROGRAMITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListPlaylistItemsResponseBodyProgramItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPlaylistItemsResponseBodyProgramItems& obj) { 
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(ProgramId, programId_);
      DARABONBA_PTR_TO_JSON(ProgramItemId, programItemId_);
      DARABONBA_PTR_TO_JSON(ProgramItemName, programItemName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ResourceValue, resourceValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListPlaylistItemsResponseBodyProgramItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(ProgramId, programId_);
      DARABONBA_PTR_FROM_JSON(ProgramItemId, programItemId_);
      DARABONBA_PTR_FROM_JSON(ProgramItemName, programItemName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ResourceValue, resourceValue_);
    };
    ListPlaylistItemsResponseBodyProgramItems() = default ;
    ListPlaylistItemsResponseBodyProgramItems(const ListPlaylistItemsResponseBodyProgramItems &) = default ;
    ListPlaylistItemsResponseBodyProgramItems(ListPlaylistItemsResponseBodyProgramItems &&) = default ;
    ListPlaylistItemsResponseBodyProgramItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPlaylistItemsResponseBodyProgramItems() = default ;
    ListPlaylistItemsResponseBodyProgramItems& operator=(const ListPlaylistItemsResponseBodyProgramItems &) = default ;
    ListPlaylistItemsResponseBodyProgramItems& operator=(ListPlaylistItemsResponseBodyProgramItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->index_ != nullptr
        && this->programId_ != nullptr && this->programItemId_ != nullptr && this->programItemName_ != nullptr && this->resourceType_ != nullptr && this->resourceValue_ != nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline ListPlaylistItemsResponseBodyProgramItems& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // programId Field Functions 
    bool hasProgramId() const { return this->programId_ != nullptr;};
    void deleteProgramId() { this->programId_ = nullptr;};
    inline string programId() const { DARABONBA_PTR_GET_DEFAULT(programId_, "") };
    inline ListPlaylistItemsResponseBodyProgramItems& setProgramId(string programId) { DARABONBA_PTR_SET_VALUE(programId_, programId) };


    // programItemId Field Functions 
    bool hasProgramItemId() const { return this->programItemId_ != nullptr;};
    void deleteProgramItemId() { this->programItemId_ = nullptr;};
    inline string programItemId() const { DARABONBA_PTR_GET_DEFAULT(programItemId_, "") };
    inline ListPlaylistItemsResponseBodyProgramItems& setProgramItemId(string programItemId) { DARABONBA_PTR_SET_VALUE(programItemId_, programItemId) };


    // programItemName Field Functions 
    bool hasProgramItemName() const { return this->programItemName_ != nullptr;};
    void deleteProgramItemName() { this->programItemName_ = nullptr;};
    inline string programItemName() const { DARABONBA_PTR_GET_DEFAULT(programItemName_, "") };
    inline ListPlaylistItemsResponseBodyProgramItems& setProgramItemName(string programItemName) { DARABONBA_PTR_SET_VALUE(programItemName_, programItemName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListPlaylistItemsResponseBodyProgramItems& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resourceValue Field Functions 
    bool hasResourceValue() const { return this->resourceValue_ != nullptr;};
    void deleteResourceValue() { this->resourceValue_ = nullptr;};
    inline string resourceValue() const { DARABONBA_PTR_GET_DEFAULT(resourceValue_, "") };
    inline ListPlaylistItemsResponseBodyProgramItems& setResourceValue(string resourceValue) { DARABONBA_PTR_SET_VALUE(resourceValue_, resourceValue) };


  protected:
    // The sequence number of the episode in the query result.
    std::shared_ptr<int32_t> index_ = nullptr;
    // The ID of the episode list. You can use the ID as a request parameter in the API operation that is used to edit the episode list, delete the episode list, query the information about the episode list, start the episode list, or stop the episode list.
    std::shared_ptr<string> programId_ = nullptr;
    // The ID of the episode.
    std::shared_ptr<string> programItemId_ = nullptr;
    // The name of the episode.
    std::shared_ptr<string> programItemName_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> resourceValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
