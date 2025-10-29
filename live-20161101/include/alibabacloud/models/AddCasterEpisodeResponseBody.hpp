// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTEREPISODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTEREPISODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddCasterEpisodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasterEpisodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EpisodeId, episodeId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasterEpisodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EpisodeId, episodeId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddCasterEpisodeResponseBody() = default ;
    AddCasterEpisodeResponseBody(const AddCasterEpisodeResponseBody &) = default ;
    AddCasterEpisodeResponseBody(AddCasterEpisodeResponseBody &&) = default ;
    AddCasterEpisodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasterEpisodeResponseBody() = default ;
    AddCasterEpisodeResponseBody& operator=(const AddCasterEpisodeResponseBody &) = default ;
    AddCasterEpisodeResponseBody& operator=(AddCasterEpisodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->episodeId_ == nullptr
        && return this->requestId_ == nullptr; };
    // episodeId Field Functions 
    bool hasEpisodeId() const { return this->episodeId_ != nullptr;};
    void deleteEpisodeId() { this->episodeId_ = nullptr;};
    inline string episodeId() const { DARABONBA_PTR_GET_DEFAULT(episodeId_, "") };
    inline AddCasterEpisodeResponseBody& setEpisodeId(string episodeId) { DARABONBA_PTR_SET_VALUE(episodeId_, episodeId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddCasterEpisodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the episode. You can use the ID as a request parameter in the API operation that is used to query the information about the episode list, modify the configurations of the episode, and delete the episode.
    std::shared_ptr<string> episodeId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
