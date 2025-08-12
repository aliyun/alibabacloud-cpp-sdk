// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTERPROGRAMRESPONSEBODYEPISODEIDSEPISODEID_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTERPROGRAMRESPONSEBODYEPISODEIDSEPISODEID_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddCasterProgramResponseBodyEpisodeIdsEpisodeId : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasterProgramResponseBodyEpisodeIdsEpisodeId& obj) { 
      DARABONBA_PTR_TO_JSON(EpisodeId, episodeId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasterProgramResponseBodyEpisodeIdsEpisodeId& obj) { 
      DARABONBA_PTR_FROM_JSON(EpisodeId, episodeId_);
    };
    AddCasterProgramResponseBodyEpisodeIdsEpisodeId() = default ;
    AddCasterProgramResponseBodyEpisodeIdsEpisodeId(const AddCasterProgramResponseBodyEpisodeIdsEpisodeId &) = default ;
    AddCasterProgramResponseBodyEpisodeIdsEpisodeId(AddCasterProgramResponseBodyEpisodeIdsEpisodeId &&) = default ;
    AddCasterProgramResponseBodyEpisodeIdsEpisodeId(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasterProgramResponseBodyEpisodeIdsEpisodeId() = default ;
    AddCasterProgramResponseBodyEpisodeIdsEpisodeId& operator=(const AddCasterProgramResponseBodyEpisodeIdsEpisodeId &) = default ;
    AddCasterProgramResponseBodyEpisodeIdsEpisodeId& operator=(AddCasterProgramResponseBodyEpisodeIdsEpisodeId &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->episodeId_ != nullptr; };
    // episodeId Field Functions 
    bool hasEpisodeId() const { return this->episodeId_ != nullptr;};
    void deleteEpisodeId() { this->episodeId_ = nullptr;};
    inline string episodeId() const { DARABONBA_PTR_GET_DEFAULT(episodeId_, "") };
    inline AddCasterProgramResponseBodyEpisodeIdsEpisodeId& setEpisodeId(string episodeId) { DARABONBA_PTR_SET_VALUE(episodeId_, episodeId) };


  protected:
    // The ID of the episode. You can use the ID as a request parameter in the API operation that is used to modify the episode list, query the information about the episode list, delete the episode, or modify the configurations of the episode.
    std::shared_ptr<string> episodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
