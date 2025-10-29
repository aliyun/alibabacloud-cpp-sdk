// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLAYLISTITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPLAYLISTITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPlaylistItemsResponseBodyProgramItems.hpp>
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
    virtual bool empty() const override { return this->programItems_ == nullptr
        && return this->requestId_ == nullptr && return this->total_ == nullptr; };
    // programItems Field Functions 
    bool hasProgramItems() const { return this->programItems_ != nullptr;};
    void deleteProgramItems() { this->programItems_ = nullptr;};
    inline const vector<ListPlaylistItemsResponseBodyProgramItems> & programItems() const { DARABONBA_PTR_GET_CONST(programItems_, vector<ListPlaylistItemsResponseBodyProgramItems>) };
    inline vector<ListPlaylistItemsResponseBodyProgramItems> programItems() { DARABONBA_PTR_GET(programItems_, vector<ListPlaylistItemsResponseBodyProgramItems>) };
    inline ListPlaylistItemsResponseBody& setProgramItems(const vector<ListPlaylistItemsResponseBodyProgramItems> & programItems) { DARABONBA_PTR_SET_VALUE(programItems_, programItems) };
    inline ListPlaylistItemsResponseBody& setProgramItems(vector<ListPlaylistItemsResponseBodyProgramItems> && programItems) { DARABONBA_PTR_SET_RVALUE(programItems_, programItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPlaylistItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListPlaylistItemsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The episodes.
    std::shared_ptr<vector<ListPlaylistItemsResponseBodyProgramItems>> programItems_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of episodes.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
