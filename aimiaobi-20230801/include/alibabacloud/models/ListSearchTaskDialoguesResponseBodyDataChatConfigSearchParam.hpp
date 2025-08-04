// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHTASKDIALOGUESRESPONSEBODYDATACHATCONFIGSEARCHPARAM_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHTASKDIALOGUESRESPONSEBODYDATACHATCONFIGSEARCHPARAM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParamSearchSources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MultimodalSearchTypes, multimodalSearchTypes_);
      DARABONBA_PTR_TO_JSON(SearchSources, searchSources_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MultimodalSearchTypes, multimodalSearchTypes_);
      DARABONBA_PTR_FROM_JSON(SearchSources, searchSources_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam() = default ;
    ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam(const ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam &) = default ;
    ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam(ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam &&) = default ;
    ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam() = default ;
    ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam& operator=(const ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam &) = default ;
    ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam& operator=(ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->multimodalSearchTypes_ != nullptr && this->searchSources_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // multimodalSearchTypes Field Functions 
    bool hasMultimodalSearchTypes() const { return this->multimodalSearchTypes_ != nullptr;};
    void deleteMultimodalSearchTypes() { this->multimodalSearchTypes_ = nullptr;};
    inline const vector<string> & multimodalSearchTypes() const { DARABONBA_PTR_GET_CONST(multimodalSearchTypes_, vector<string>) };
    inline vector<string> multimodalSearchTypes() { DARABONBA_PTR_GET(multimodalSearchTypes_, vector<string>) };
    inline ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam& setMultimodalSearchTypes(const vector<string> & multimodalSearchTypes) { DARABONBA_PTR_SET_VALUE(multimodalSearchTypes_, multimodalSearchTypes) };
    inline ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam& setMultimodalSearchTypes(vector<string> && multimodalSearchTypes) { DARABONBA_PTR_SET_RVALUE(multimodalSearchTypes_, multimodalSearchTypes) };


    // searchSources Field Functions 
    bool hasSearchSources() const { return this->searchSources_ != nullptr;};
    void deleteSearchSources() { this->searchSources_ = nullptr;};
    inline const vector<Models::ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParamSearchSources> & searchSources() const { DARABONBA_PTR_GET_CONST(searchSources_, vector<Models::ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParamSearchSources>) };
    inline vector<Models::ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParamSearchSources> searchSources() { DARABONBA_PTR_GET(searchSources_, vector<Models::ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParamSearchSources>) };
    inline ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam& setSearchSources(const vector<Models::ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParamSearchSources> & searchSources) { DARABONBA_PTR_SET_VALUE(searchSources_, searchSources) };
    inline ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam& setSearchSources(vector<Models::ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParamSearchSources> && searchSources) { DARABONBA_PTR_SET_RVALUE(searchSources_, searchSources) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<vector<string>> multimodalSearchTypes_ = nullptr;
    std::shared_ptr<vector<Models::ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParamSearchSources>> searchSources_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
