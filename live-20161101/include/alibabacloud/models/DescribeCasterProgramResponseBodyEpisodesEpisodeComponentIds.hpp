// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERPROGRAMRESPONSEBODYEPISODESEPISODECOMPONENTIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERPROGRAMRESPONSEBODYEPISODESEPISODECOMPONENTIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
    };
    DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds() = default ;
    DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds(const DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds &) = default ;
    DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds(DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds &&) = default ;
    DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds() = default ;
    DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds& operator=(const DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds &) = default ;
    DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds& operator=(DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentId_ == nullptr; };
    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline const vector<string> & componentId() const { DARABONBA_PTR_GET_CONST(componentId_, vector<string>) };
    inline vector<string> componentId() { DARABONBA_PTR_GET(componentId_, vector<string>) };
    inline DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds& setComponentId(const vector<string> & componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };
    inline DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds& setComponentId(vector<string> && componentId) { DARABONBA_PTR_SET_RVALUE(componentId_, componentId) };


  protected:
    std::shared_ptr<vector<string>> componentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
