// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTPLAYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTPLAYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartPlaylistResponseBodyStreamInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartPlaylistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartPlaylistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProgramId, programId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StreamInfo, streamInfo_);
    };
    friend void from_json(const Darabonba::Json& j, StartPlaylistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProgramId, programId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StreamInfo, streamInfo_);
    };
    StartPlaylistResponseBody() = default ;
    StartPlaylistResponseBody(const StartPlaylistResponseBody &) = default ;
    StartPlaylistResponseBody(StartPlaylistResponseBody &&) = default ;
    StartPlaylistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartPlaylistResponseBody() = default ;
    StartPlaylistResponseBody& operator=(const StartPlaylistResponseBody &) = default ;
    StartPlaylistResponseBody& operator=(StartPlaylistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->programId_ != nullptr
        && this->requestId_ != nullptr && this->streamInfo_ != nullptr; };
    // programId Field Functions 
    bool hasProgramId() const { return this->programId_ != nullptr;};
    void deleteProgramId() { this->programId_ = nullptr;};
    inline string programId() const { DARABONBA_PTR_GET_DEFAULT(programId_, "") };
    inline StartPlaylistResponseBody& setProgramId(string programId) { DARABONBA_PTR_SET_VALUE(programId_, programId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartPlaylistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streamInfo Field Functions 
    bool hasStreamInfo() const { return this->streamInfo_ != nullptr;};
    void deleteStreamInfo() { this->streamInfo_ = nullptr;};
    inline const StartPlaylistResponseBodyStreamInfo & streamInfo() const { DARABONBA_PTR_GET_CONST(streamInfo_, StartPlaylistResponseBodyStreamInfo) };
    inline StartPlaylistResponseBodyStreamInfo streamInfo() { DARABONBA_PTR_GET(streamInfo_, StartPlaylistResponseBodyStreamInfo) };
    inline StartPlaylistResponseBody& setStreamInfo(const StartPlaylistResponseBodyStreamInfo & streamInfo) { DARABONBA_PTR_SET_VALUE(streamInfo_, streamInfo) };
    inline StartPlaylistResponseBody& setStreamInfo(StartPlaylistResponseBodyStreamInfo && streamInfo) { DARABONBA_PTR_SET_RVALUE(streamInfo_, streamInfo) };


  protected:
    // The ID of the episode list. You can use the ID as a request parameter in the API operation that is used to stop playing the episode list.
    std::shared_ptr<string> programId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the live stream.
    std::shared_ptr<StartPlaylistResponseBodyStreamInfo> streamInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
