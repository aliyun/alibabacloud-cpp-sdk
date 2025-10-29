// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERPROGRAMRESPONSEBODYEPISODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERPROGRAMRESPONSEBODYEPISODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCasterProgramResponseBodyEpisodesEpisode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterProgramResponseBodyEpisodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterProgramResponseBodyEpisodes& obj) { 
      DARABONBA_PTR_TO_JSON(Episode, episode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterProgramResponseBodyEpisodes& obj) { 
      DARABONBA_PTR_FROM_JSON(Episode, episode_);
    };
    DescribeCasterProgramResponseBodyEpisodes() = default ;
    DescribeCasterProgramResponseBodyEpisodes(const DescribeCasterProgramResponseBodyEpisodes &) = default ;
    DescribeCasterProgramResponseBodyEpisodes(DescribeCasterProgramResponseBodyEpisodes &&) = default ;
    DescribeCasterProgramResponseBodyEpisodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterProgramResponseBodyEpisodes() = default ;
    DescribeCasterProgramResponseBodyEpisodes& operator=(const DescribeCasterProgramResponseBodyEpisodes &) = default ;
    DescribeCasterProgramResponseBodyEpisodes& operator=(DescribeCasterProgramResponseBodyEpisodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->episode_ == nullptr; };
    // episode Field Functions 
    bool hasEpisode() const { return this->episode_ != nullptr;};
    void deleteEpisode() { this->episode_ = nullptr;};
    inline const vector<Models::DescribeCasterProgramResponseBodyEpisodesEpisode> & episode() const { DARABONBA_PTR_GET_CONST(episode_, vector<Models::DescribeCasterProgramResponseBodyEpisodesEpisode>) };
    inline vector<Models::DescribeCasterProgramResponseBodyEpisodesEpisode> episode() { DARABONBA_PTR_GET(episode_, vector<Models::DescribeCasterProgramResponseBodyEpisodesEpisode>) };
    inline DescribeCasterProgramResponseBodyEpisodes& setEpisode(const vector<Models::DescribeCasterProgramResponseBodyEpisodesEpisode> & episode) { DARABONBA_PTR_SET_VALUE(episode_, episode) };
    inline DescribeCasterProgramResponseBodyEpisodes& setEpisode(vector<Models::DescribeCasterProgramResponseBodyEpisodesEpisode> && episode) { DARABONBA_PTR_SET_RVALUE(episode_, episode) };


  protected:
    std::shared_ptr<vector<Models::DescribeCasterProgramResponseBodyEpisodesEpisode>> episode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
