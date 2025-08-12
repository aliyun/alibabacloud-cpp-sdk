// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTERPROGRAMRESPONSEBODYEPISODEIDS_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTERPROGRAMRESPONSEBODYEPISODEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddCasterProgramResponseBodyEpisodeIdsEpisodeId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddCasterProgramResponseBodyEpisodeIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasterProgramResponseBodyEpisodeIds& obj) { 
      DARABONBA_PTR_TO_JSON(EpisodeId, episodeId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasterProgramResponseBodyEpisodeIds& obj) { 
      DARABONBA_PTR_FROM_JSON(EpisodeId, episodeId_);
    };
    AddCasterProgramResponseBodyEpisodeIds() = default ;
    AddCasterProgramResponseBodyEpisodeIds(const AddCasterProgramResponseBodyEpisodeIds &) = default ;
    AddCasterProgramResponseBodyEpisodeIds(AddCasterProgramResponseBodyEpisodeIds &&) = default ;
    AddCasterProgramResponseBodyEpisodeIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasterProgramResponseBodyEpisodeIds() = default ;
    AddCasterProgramResponseBodyEpisodeIds& operator=(const AddCasterProgramResponseBodyEpisodeIds &) = default ;
    AddCasterProgramResponseBodyEpisodeIds& operator=(AddCasterProgramResponseBodyEpisodeIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->episodeId_ != nullptr; };
    // episodeId Field Functions 
    bool hasEpisodeId() const { return this->episodeId_ != nullptr;};
    void deleteEpisodeId() { this->episodeId_ = nullptr;};
    inline const vector<Models::AddCasterProgramResponseBodyEpisodeIdsEpisodeId> & episodeId() const { DARABONBA_PTR_GET_CONST(episodeId_, vector<Models::AddCasterProgramResponseBodyEpisodeIdsEpisodeId>) };
    inline vector<Models::AddCasterProgramResponseBodyEpisodeIdsEpisodeId> episodeId() { DARABONBA_PTR_GET(episodeId_, vector<Models::AddCasterProgramResponseBodyEpisodeIdsEpisodeId>) };
    inline AddCasterProgramResponseBodyEpisodeIds& setEpisodeId(const vector<Models::AddCasterProgramResponseBodyEpisodeIdsEpisodeId> & episodeId) { DARABONBA_PTR_SET_VALUE(episodeId_, episodeId) };
    inline AddCasterProgramResponseBodyEpisodeIds& setEpisodeId(vector<Models::AddCasterProgramResponseBodyEpisodeIdsEpisodeId> && episodeId) { DARABONBA_PTR_SET_RVALUE(episodeId_, episodeId) };


  protected:
    std::shared_ptr<vector<Models::AddCasterProgramResponseBodyEpisodeIdsEpisodeId>> episodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
