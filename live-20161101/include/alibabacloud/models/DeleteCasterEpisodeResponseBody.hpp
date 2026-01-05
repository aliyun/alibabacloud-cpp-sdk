// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECASTEREPISODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETECASTEREPISODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteCasterEpisodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCasterEpisodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(EpisodeId, episodeId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCasterEpisodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(EpisodeId, episodeId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteCasterEpisodeResponseBody() = default ;
    DeleteCasterEpisodeResponseBody(const DeleteCasterEpisodeResponseBody &) = default ;
    DeleteCasterEpisodeResponseBody(DeleteCasterEpisodeResponseBody &&) = default ;
    DeleteCasterEpisodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCasterEpisodeResponseBody() = default ;
    DeleteCasterEpisodeResponseBody& operator=(const DeleteCasterEpisodeResponseBody &) = default ;
    DeleteCasterEpisodeResponseBody& operator=(DeleteCasterEpisodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casterId_ == nullptr
        && this->episodeId_ == nullptr && this->requestId_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline DeleteCasterEpisodeResponseBody& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // episodeId Field Functions 
    bool hasEpisodeId() const { return this->episodeId_ != nullptr;};
    void deleteEpisodeId() { this->episodeId_ = nullptr;};
    inline string getEpisodeId() const { DARABONBA_PTR_GET_DEFAULT(episodeId_, "") };
    inline DeleteCasterEpisodeResponseBody& setEpisodeId(string episodeId) { DARABONBA_PTR_SET_VALUE(episodeId_, episodeId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteCasterEpisodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the production studio. You can specify the ID as a parameter in the request to modify the episode in the production studio.
    shared_ptr<string> casterId_ {};
    // The ID of the episode. You can specify the ID as a parameter in the request to modify the episode in the production studio.
    shared_ptr<string> episodeId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
