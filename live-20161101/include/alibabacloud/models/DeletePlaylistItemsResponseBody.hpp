// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPLAYLISTITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEPLAYLISTITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeletePlaylistItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePlaylistItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProgramId, programId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePlaylistItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProgramId, programId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeletePlaylistItemsResponseBody() = default ;
    DeletePlaylistItemsResponseBody(const DeletePlaylistItemsResponseBody &) = default ;
    DeletePlaylistItemsResponseBody(DeletePlaylistItemsResponseBody &&) = default ;
    DeletePlaylistItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePlaylistItemsResponseBody() = default ;
    DeletePlaylistItemsResponseBody& operator=(const DeletePlaylistItemsResponseBody &) = default ;
    DeletePlaylistItemsResponseBody& operator=(DeletePlaylistItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->programId_ == nullptr
        && return this->requestId_ == nullptr; };
    // programId Field Functions 
    bool hasProgramId() const { return this->programId_ != nullptr;};
    void deleteProgramId() { this->programId_ = nullptr;};
    inline string programId() const { DARABONBA_PTR_GET_DEFAULT(programId_, "") };
    inline DeletePlaylistItemsResponseBody& setProgramId(string programId) { DARABONBA_PTR_SET_VALUE(programId_, programId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeletePlaylistItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the episode list. You can use the ID as a request parameter in the API operation that is used to query the episodes in the episode list, edit the episode list, delete the episode list, query the information about the episode list, or stop the episode list.
    std::shared_ptr<string> programId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
