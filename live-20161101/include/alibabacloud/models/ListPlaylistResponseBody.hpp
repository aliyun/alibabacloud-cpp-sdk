// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLAYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPLAYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPlaylistResponseBodyProgramList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListPlaylistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPlaylistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProgramList, programList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListPlaylistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProgramList, programList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListPlaylistResponseBody() = default ;
    ListPlaylistResponseBody(const ListPlaylistResponseBody &) = default ;
    ListPlaylistResponseBody(ListPlaylistResponseBody &&) = default ;
    ListPlaylistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPlaylistResponseBody() = default ;
    ListPlaylistResponseBody& operator=(const ListPlaylistResponseBody &) = default ;
    ListPlaylistResponseBody& operator=(ListPlaylistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->programList_ == nullptr
        && return this->requestId_ == nullptr && return this->total_ == nullptr; };
    // programList Field Functions 
    bool hasProgramList() const { return this->programList_ != nullptr;};
    void deleteProgramList() { this->programList_ = nullptr;};
    inline const vector<ListPlaylistResponseBodyProgramList> & programList() const { DARABONBA_PTR_GET_CONST(programList_, vector<ListPlaylistResponseBodyProgramList>) };
    inline vector<ListPlaylistResponseBodyProgramList> programList() { DARABONBA_PTR_GET(programList_, vector<ListPlaylistResponseBodyProgramList>) };
    inline ListPlaylistResponseBody& setProgramList(const vector<ListPlaylistResponseBodyProgramList> & programList) { DARABONBA_PTR_SET_VALUE(programList_, programList) };
    inline ListPlaylistResponseBody& setProgramList(vector<ListPlaylistResponseBodyProgramList> && programList) { DARABONBA_PTR_SET_RVALUE(programList_, programList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPlaylistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListPlaylistResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The episode lists.
    std::shared_ptr<vector<ListPlaylistResponseBodyProgramList>> programList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of episode lists returned.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
