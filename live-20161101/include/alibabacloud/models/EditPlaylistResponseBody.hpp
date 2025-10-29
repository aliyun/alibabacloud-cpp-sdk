// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITPLAYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EDITPLAYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EditPlaylistResponseBodyItems.hpp>
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
    virtual bool empty() const override { return this->casterId_ == nullptr
        && return this->items_ == nullptr && return this->programId_ == nullptr && return this->requestId_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline EditPlaylistResponseBody& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const EditPlaylistResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, EditPlaylistResponseBodyItems) };
    inline EditPlaylistResponseBodyItems items() { DARABONBA_PTR_GET(items_, EditPlaylistResponseBodyItems) };
    inline EditPlaylistResponseBody& setItems(const EditPlaylistResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline EditPlaylistResponseBody& setItems(EditPlaylistResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // programId Field Functions 
    bool hasProgramId() const { return this->programId_ != nullptr;};
    void deleteProgramId() { this->programId_ = nullptr;};
    inline string programId() const { DARABONBA_PTR_GET_DEFAULT(programId_, "") };
    inline EditPlaylistResponseBody& setProgramId(string programId) { DARABONBA_PTR_SET_VALUE(programId_, programId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EditPlaylistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the production studio. You can use the ID as a request parameter in the API operation that is used to configure callbacks or add a virtual studio layout.
    std::shared_ptr<string> casterId_ = nullptr;
    // The information about the episodes.
    std::shared_ptr<EditPlaylistResponseBodyItems> items_ = nullptr;
    // The ID of the episode list. You can use the ID as a request parameter in the API operation that is used to delete the episode list, query the information about the episode list, start the episode list, or stop the episode list.
    std::shared_ptr<string> programId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
