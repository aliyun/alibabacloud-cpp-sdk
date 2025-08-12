// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERPROGRAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERPROGRAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCasterProgramResponseBodyEpisodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterProgramResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterProgramResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(Episodes, episodes_);
      DARABONBA_PTR_TO_JSON(ProgramEffect, programEffect_);
      DARABONBA_PTR_TO_JSON(ProgramName, programName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterProgramResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(Episodes, episodes_);
      DARABONBA_PTR_FROM_JSON(ProgramEffect, programEffect_);
      DARABONBA_PTR_FROM_JSON(ProgramName, programName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeCasterProgramResponseBody() = default ;
    DescribeCasterProgramResponseBody(const DescribeCasterProgramResponseBody &) = default ;
    DescribeCasterProgramResponseBody(DescribeCasterProgramResponseBody &&) = default ;
    DescribeCasterProgramResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterProgramResponseBody() = default ;
    DescribeCasterProgramResponseBody& operator=(const DescribeCasterProgramResponseBody &) = default ;
    DescribeCasterProgramResponseBody& operator=(DescribeCasterProgramResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->casterId_ != nullptr
        && this->episodes_ != nullptr && this->programEffect_ != nullptr && this->programName_ != nullptr && this->requestId_ != nullptr && this->total_ != nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline DescribeCasterProgramResponseBody& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // episodes Field Functions 
    bool hasEpisodes() const { return this->episodes_ != nullptr;};
    void deleteEpisodes() { this->episodes_ = nullptr;};
    inline const DescribeCasterProgramResponseBodyEpisodes & episodes() const { DARABONBA_PTR_GET_CONST(episodes_, DescribeCasterProgramResponseBodyEpisodes) };
    inline DescribeCasterProgramResponseBodyEpisodes episodes() { DARABONBA_PTR_GET(episodes_, DescribeCasterProgramResponseBodyEpisodes) };
    inline DescribeCasterProgramResponseBody& setEpisodes(const DescribeCasterProgramResponseBodyEpisodes & episodes) { DARABONBA_PTR_SET_VALUE(episodes_, episodes) };
    inline DescribeCasterProgramResponseBody& setEpisodes(DescribeCasterProgramResponseBodyEpisodes && episodes) { DARABONBA_PTR_SET_RVALUE(episodes_, episodes) };


    // programEffect Field Functions 
    bool hasProgramEffect() const { return this->programEffect_ != nullptr;};
    void deleteProgramEffect() { this->programEffect_ = nullptr;};
    inline int32_t programEffect() const { DARABONBA_PTR_GET_DEFAULT(programEffect_, 0) };
    inline DescribeCasterProgramResponseBody& setProgramEffect(int32_t programEffect) { DARABONBA_PTR_SET_VALUE(programEffect_, programEffect) };


    // programName Field Functions 
    bool hasProgramName() const { return this->programName_ != nullptr;};
    void deleteProgramName() { this->programName_ = nullptr;};
    inline string programName() const { DARABONBA_PTR_GET_DEFAULT(programName_, "") };
    inline DescribeCasterProgramResponseBody& setProgramName(string programName) { DARABONBA_PTR_SET_VALUE(programName_, programName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCasterProgramResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeCasterProgramResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The ID of the production studio.
    std::shared_ptr<string> casterId_ = nullptr;
    // The list of the episodes.
    std::shared_ptr<DescribeCasterProgramResponseBodyEpisodes> episodes_ = nullptr;
    // Indicates whether carousel playback is enabled.
    // 
    // *   **0**: Carousel playback is disabled.
    // *   **1**: Carousel playback is enabled.
    std::shared_ptr<int32_t> programEffect_ = nullptr;
    // The name of the episode list.
    std::shared_ptr<string> programName_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
