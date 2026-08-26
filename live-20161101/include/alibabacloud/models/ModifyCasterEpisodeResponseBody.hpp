// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCASTEREPISODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCASTEREPISODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyCasterEpisodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCasterEpisodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(EpisodeId, episodeId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCasterEpisodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(EpisodeId, episodeId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyCasterEpisodeResponseBody() = default ;
    ModifyCasterEpisodeResponseBody(const ModifyCasterEpisodeResponseBody &) = default ;
    ModifyCasterEpisodeResponseBody(ModifyCasterEpisodeResponseBody &&) = default ;
    ModifyCasterEpisodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCasterEpisodeResponseBody() = default ;
    ModifyCasterEpisodeResponseBody& operator=(const ModifyCasterEpisodeResponseBody &) = default ;
    ModifyCasterEpisodeResponseBody& operator=(ModifyCasterEpisodeResponseBody &&) = default ;
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
    inline ModifyCasterEpisodeResponseBody& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // episodeId Field Functions 
    bool hasEpisodeId() const { return this->episodeId_ != nullptr;};
    void deleteEpisodeId() { this->episodeId_ = nullptr;};
    inline string getEpisodeId() const { DARABONBA_PTR_GET_DEFAULT(episodeId_, "") };
    inline ModifyCasterEpisodeResponseBody& setEpisodeId(string episodeId) { DARABONBA_PTR_SET_VALUE(episodeId_, episodeId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyCasterEpisodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the production studio. You can use this ID to perform operations on the scenario. These operations include copying, updating, querying, starting, and stopping the scenario. You can also use the ID to query the audio configuration of the scenario.
    shared_ptr<string> casterId_ {};
    // The ID of the episode. You can use this ID to manage the episode list and its items. For the episode list, you can perform operations such as query, edit, delete, start, and stop. For episode items, you can perform operations such as create, add, delete, and query.
    shared_ptr<string> episodeId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
