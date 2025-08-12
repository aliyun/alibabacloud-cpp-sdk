// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLAYLISTRESPONSEBODYPROGRAMLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPLAYLISTRESPONSEBODYPROGRAMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListPlaylistResponseBodyProgramList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPlaylistResponseBodyProgramList& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ProgramId, programId_);
      DARABONBA_PTR_TO_JSON(ProgramName, programName_);
      DARABONBA_PTR_TO_JSON(RepeatNumber, repeatNumber_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListPlaylistResponseBodyProgramList& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ProgramId, programId_);
      DARABONBA_PTR_FROM_JSON(ProgramName, programName_);
      DARABONBA_PTR_FROM_JSON(RepeatNumber, repeatNumber_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListPlaylistResponseBodyProgramList() = default ;
    ListPlaylistResponseBodyProgramList(const ListPlaylistResponseBodyProgramList &) = default ;
    ListPlaylistResponseBodyProgramList(ListPlaylistResponseBodyProgramList &&) = default ;
    ListPlaylistResponseBodyProgramList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPlaylistResponseBodyProgramList() = default ;
    ListPlaylistResponseBodyProgramList& operator=(const ListPlaylistResponseBodyProgramList &) = default ;
    ListPlaylistResponseBodyProgramList& operator=(ListPlaylistResponseBodyProgramList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->casterId_ != nullptr
        && this->domainName_ != nullptr && this->programId_ != nullptr && this->programName_ != nullptr && this->repeatNumber_ != nullptr && this->status_ != nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline ListPlaylistResponseBodyProgramList& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ListPlaylistResponseBodyProgramList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // programId Field Functions 
    bool hasProgramId() const { return this->programId_ != nullptr;};
    void deleteProgramId() { this->programId_ = nullptr;};
    inline string programId() const { DARABONBA_PTR_GET_DEFAULT(programId_, "") };
    inline ListPlaylistResponseBodyProgramList& setProgramId(string programId) { DARABONBA_PTR_SET_VALUE(programId_, programId) };


    // programName Field Functions 
    bool hasProgramName() const { return this->programName_ != nullptr;};
    void deleteProgramName() { this->programName_ = nullptr;};
    inline string programName() const { DARABONBA_PTR_GET_DEFAULT(programName_, "") };
    inline ListPlaylistResponseBodyProgramList& setProgramName(string programName) { DARABONBA_PTR_SET_VALUE(programName_, programName) };


    // repeatNumber Field Functions 
    bool hasRepeatNumber() const { return this->repeatNumber_ != nullptr;};
    void deleteRepeatNumber() { this->repeatNumber_ = nullptr;};
    inline int32_t repeatNumber() const { DARABONBA_PTR_GET_DEFAULT(repeatNumber_, 0) };
    inline ListPlaylistResponseBodyProgramList& setRepeatNumber(int32_t repeatNumber) { DARABONBA_PTR_SET_VALUE(repeatNumber_, repeatNumber) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListPlaylistResponseBodyProgramList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the production studio to which the episode list belongs. You can use the ID as a request parameter in the API operation that is used to add a layout to the virtual studio, delete a layout in the virtual studio, modify a layout of the virtual studio, or query layouts of the virtual studio.
    std::shared_ptr<string> casterId_ = nullptr;
    // The main streaming domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the episode list.
    std::shared_ptr<string> programId_ = nullptr;
    // The name of the episode list.
    std::shared_ptr<string> programName_ = nullptr;
    // The number of playbacks after the first playback is complete. Valid values:
    // 
    // *   **0** (default): specifies that the episode list is played only once.
    // *   **-1**: specifies that the episode list is played in loop mode.
    // *   Positive integer: specifies the number of times the episode list repeats after the first playback is complete.
    std::shared_ptr<int32_t> repeatNumber_ = nullptr;
    // The status of the episode list. Valid values:
    // 
    // *   **0**: stopped
    // *   **1**: running
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
