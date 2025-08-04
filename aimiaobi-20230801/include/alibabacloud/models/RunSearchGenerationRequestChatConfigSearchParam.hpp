// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONREQUESTCHATCONFIGSEARCHPARAM_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONREQUESTCHATCONFIGSEARCHPARAM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchGenerationRequestChatConfigSearchParamSearchSources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationRequestChatConfigSearchParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationRequestChatConfigSearchParam& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MultimodalSearchTypes, multimodalSearchTypes_);
      DARABONBA_PTR_TO_JSON(SearchSources, searchSources_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationRequestChatConfigSearchParam& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MultimodalSearchTypes, multimodalSearchTypes_);
      DARABONBA_PTR_FROM_JSON(SearchSources, searchSources_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    RunSearchGenerationRequestChatConfigSearchParam() = default ;
    RunSearchGenerationRequestChatConfigSearchParam(const RunSearchGenerationRequestChatConfigSearchParam &) = default ;
    RunSearchGenerationRequestChatConfigSearchParam(RunSearchGenerationRequestChatConfigSearchParam &&) = default ;
    RunSearchGenerationRequestChatConfigSearchParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationRequestChatConfigSearchParam() = default ;
    RunSearchGenerationRequestChatConfigSearchParam& operator=(const RunSearchGenerationRequestChatConfigSearchParam &) = default ;
    RunSearchGenerationRequestChatConfigSearchParam& operator=(RunSearchGenerationRequestChatConfigSearchParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->multimodalSearchTypes_ != nullptr && this->searchSources_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline RunSearchGenerationRequestChatConfigSearchParam& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // multimodalSearchTypes Field Functions 
    bool hasMultimodalSearchTypes() const { return this->multimodalSearchTypes_ != nullptr;};
    void deleteMultimodalSearchTypes() { this->multimodalSearchTypes_ = nullptr;};
    inline const vector<string> & multimodalSearchTypes() const { DARABONBA_PTR_GET_CONST(multimodalSearchTypes_, vector<string>) };
    inline vector<string> multimodalSearchTypes() { DARABONBA_PTR_GET(multimodalSearchTypes_, vector<string>) };
    inline RunSearchGenerationRequestChatConfigSearchParam& setMultimodalSearchTypes(const vector<string> & multimodalSearchTypes) { DARABONBA_PTR_SET_VALUE(multimodalSearchTypes_, multimodalSearchTypes) };
    inline RunSearchGenerationRequestChatConfigSearchParam& setMultimodalSearchTypes(vector<string> && multimodalSearchTypes) { DARABONBA_PTR_SET_RVALUE(multimodalSearchTypes_, multimodalSearchTypes) };


    // searchSources Field Functions 
    bool hasSearchSources() const { return this->searchSources_ != nullptr;};
    void deleteSearchSources() { this->searchSources_ = nullptr;};
    inline const vector<Models::RunSearchGenerationRequestChatConfigSearchParamSearchSources> & searchSources() const { DARABONBA_PTR_GET_CONST(searchSources_, vector<Models::RunSearchGenerationRequestChatConfigSearchParamSearchSources>) };
    inline vector<Models::RunSearchGenerationRequestChatConfigSearchParamSearchSources> searchSources() { DARABONBA_PTR_GET(searchSources_, vector<Models::RunSearchGenerationRequestChatConfigSearchParamSearchSources>) };
    inline RunSearchGenerationRequestChatConfigSearchParam& setSearchSources(const vector<Models::RunSearchGenerationRequestChatConfigSearchParamSearchSources> & searchSources) { DARABONBA_PTR_SET_VALUE(searchSources_, searchSources) };
    inline RunSearchGenerationRequestChatConfigSearchParam& setSearchSources(vector<Models::RunSearchGenerationRequestChatConfigSearchParamSearchSources> && searchSources) { DARABONBA_PTR_SET_RVALUE(searchSources_, searchSources) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline RunSearchGenerationRequestChatConfigSearchParam& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<vector<string>> multimodalSearchTypes_ = nullptr;
    std::shared_ptr<vector<Models::RunSearchGenerationRequestChatConfigSearchParamSearchSources>> searchSources_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
