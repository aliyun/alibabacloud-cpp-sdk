// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTERPROGRAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTERPROGRAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddCasterProgramResponseBodyEpisodeIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddCasterProgramResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasterProgramResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EpisodeIds, episodeIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasterProgramResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EpisodeIds, episodeIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddCasterProgramResponseBody() = default ;
    AddCasterProgramResponseBody(const AddCasterProgramResponseBody &) = default ;
    AddCasterProgramResponseBody(AddCasterProgramResponseBody &&) = default ;
    AddCasterProgramResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasterProgramResponseBody() = default ;
    AddCasterProgramResponseBody& operator=(const AddCasterProgramResponseBody &) = default ;
    AddCasterProgramResponseBody& operator=(AddCasterProgramResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->episodeIds_ == nullptr
        && return this->requestId_ == nullptr; };
    // episodeIds Field Functions 
    bool hasEpisodeIds() const { return this->episodeIds_ != nullptr;};
    void deleteEpisodeIds() { this->episodeIds_ = nullptr;};
    inline const AddCasterProgramResponseBodyEpisodeIds & episodeIds() const { DARABONBA_PTR_GET_CONST(episodeIds_, AddCasterProgramResponseBodyEpisodeIds) };
    inline AddCasterProgramResponseBodyEpisodeIds episodeIds() { DARABONBA_PTR_GET(episodeIds_, AddCasterProgramResponseBodyEpisodeIds) };
    inline AddCasterProgramResponseBody& setEpisodeIds(const AddCasterProgramResponseBodyEpisodeIds & episodeIds) { DARABONBA_PTR_SET_VALUE(episodeIds_, episodeIds) };
    inline AddCasterProgramResponseBody& setEpisodeIds(AddCasterProgramResponseBodyEpisodeIds && episodeIds) { DARABONBA_PTR_SET_RVALUE(episodeIds_, episodeIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddCasterProgramResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the episodes. The episode IDs are listed in the same order as specified by the variable N.
    std::shared_ptr<AddCasterProgramResponseBodyEpisodeIds> episodeIds_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
