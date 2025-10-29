// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPLAYLISTITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDPLAYLISTITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddPlaylistItemsResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddPlaylistItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPlaylistItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(ProgramId, programId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddPlaylistItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(ProgramId, programId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddPlaylistItemsResponseBody() = default ;
    AddPlaylistItemsResponseBody(const AddPlaylistItemsResponseBody &) = default ;
    AddPlaylistItemsResponseBody(AddPlaylistItemsResponseBody &&) = default ;
    AddPlaylistItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPlaylistItemsResponseBody() = default ;
    AddPlaylistItemsResponseBody& operator=(const AddPlaylistItemsResponseBody &) = default ;
    AddPlaylistItemsResponseBody& operator=(AddPlaylistItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->programId_ == nullptr && return this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const AddPlaylistItemsResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, AddPlaylistItemsResponseBodyItems) };
    inline AddPlaylistItemsResponseBodyItems items() { DARABONBA_PTR_GET(items_, AddPlaylistItemsResponseBodyItems) };
    inline AddPlaylistItemsResponseBody& setItems(const AddPlaylistItemsResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline AddPlaylistItemsResponseBody& setItems(AddPlaylistItemsResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // programId Field Functions 
    bool hasProgramId() const { return this->programId_ != nullptr;};
    void deleteProgramId() { this->programId_ = nullptr;};
    inline string programId() const { DARABONBA_PTR_GET_DEFAULT(programId_, "") };
    inline AddPlaylistItemsResponseBody& setProgramId(string programId) { DARABONBA_PTR_SET_VALUE(programId_, programId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddPlaylistItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the episodes.
    std::shared_ptr<AddPlaylistItemsResponseBodyItems> items_ = nullptr;
    // The ID of the episode list. You can use the ID as a request parameter in the API operation that is used to remove episodes, query episodes, edit an episode list, delete an episode list, query the information about an episode list, start playing an episode list, or stop playing an episode list.
    std::shared_ptr<string> programId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
