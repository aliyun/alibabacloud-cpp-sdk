// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLAYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPLAYLISTRESPONSEBODY_HPP_
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
    class ProgramList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProgramList& obj) { 
        DARABONBA_PTR_TO_JSON(CasterId, casterId_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(ProgramId, programId_);
        DARABONBA_PTR_TO_JSON(ProgramName, programName_);
        DARABONBA_PTR_TO_JSON(RepeatNumber, repeatNumber_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ProgramList& obj) { 
        DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(ProgramId, programId_);
        DARABONBA_PTR_FROM_JSON(ProgramName, programName_);
        DARABONBA_PTR_FROM_JSON(RepeatNumber, repeatNumber_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ProgramList() = default ;
      ProgramList(const ProgramList &) = default ;
      ProgramList(ProgramList &&) = default ;
      ProgramList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProgramList() = default ;
      ProgramList& operator=(const ProgramList &) = default ;
      ProgramList& operator=(ProgramList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->casterId_ == nullptr
        && this->domainName_ == nullptr && this->programId_ == nullptr && this->programName_ == nullptr && this->repeatNumber_ == nullptr && this->status_ == nullptr; };
      // casterId Field Functions 
      bool hasCasterId() const { return this->casterId_ != nullptr;};
      void deleteCasterId() { this->casterId_ = nullptr;};
      inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
      inline ProgramList& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline ProgramList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // programId Field Functions 
      bool hasProgramId() const { return this->programId_ != nullptr;};
      void deleteProgramId() { this->programId_ = nullptr;};
      inline string getProgramId() const { DARABONBA_PTR_GET_DEFAULT(programId_, "") };
      inline ProgramList& setProgramId(string programId) { DARABONBA_PTR_SET_VALUE(programId_, programId) };


      // programName Field Functions 
      bool hasProgramName() const { return this->programName_ != nullptr;};
      void deleteProgramName() { this->programName_ = nullptr;};
      inline string getProgramName() const { DARABONBA_PTR_GET_DEFAULT(programName_, "") };
      inline ProgramList& setProgramName(string programName) { DARABONBA_PTR_SET_VALUE(programName_, programName) };


      // repeatNumber Field Functions 
      bool hasRepeatNumber() const { return this->repeatNumber_ != nullptr;};
      void deleteRepeatNumber() { this->repeatNumber_ = nullptr;};
      inline int32_t getRepeatNumber() const { DARABONBA_PTR_GET_DEFAULT(repeatNumber_, 0) };
      inline ProgramList& setRepeatNumber(int32_t repeatNumber) { DARABONBA_PTR_SET_VALUE(repeatNumber_, repeatNumber) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline ProgramList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the production studio to which the episode list belongs. You can use the ID as a request parameter in the API operation that is used to add a layout to the virtual studio, delete a layout in the virtual studio, modify a layout of the virtual studio, or query layouts of the virtual studio.
      shared_ptr<string> casterId_ {};
      // The main streaming domain.
      shared_ptr<string> domainName_ {};
      // The ID of the episode list.
      shared_ptr<string> programId_ {};
      // The name of the episode list.
      shared_ptr<string> programName_ {};
      // The number of playbacks after the first playback is complete. Valid values:
      // 
      // *   **0** (default): specifies that the episode list is played only once.
      // *   **-1**: specifies that the episode list is played in loop mode.
      // *   Positive integer: specifies the number of times the episode list repeats after the first playback is complete.
      shared_ptr<int32_t> repeatNumber_ {};
      // The status of the episode list. Valid values:
      // 
      // *   **0**: stopped
      // *   **1**: running
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->programList_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // programList Field Functions 
    bool hasProgramList() const { return this->programList_ != nullptr;};
    void deleteProgramList() { this->programList_ = nullptr;};
    inline const vector<ListPlaylistResponseBody::ProgramList> & getProgramList() const { DARABONBA_PTR_GET_CONST(programList_, vector<ListPlaylistResponseBody::ProgramList>) };
    inline vector<ListPlaylistResponseBody::ProgramList> getProgramList() { DARABONBA_PTR_GET(programList_, vector<ListPlaylistResponseBody::ProgramList>) };
    inline ListPlaylistResponseBody& setProgramList(const vector<ListPlaylistResponseBody::ProgramList> & programList) { DARABONBA_PTR_SET_VALUE(programList_, programList) };
    inline ListPlaylistResponseBody& setProgramList(vector<ListPlaylistResponseBody::ProgramList> && programList) { DARABONBA_PTR_SET_RVALUE(programList_, programList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPlaylistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListPlaylistResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The episode lists.
    shared_ptr<vector<ListPlaylistResponseBody::ProgramList>> programList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of episode lists returned.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
