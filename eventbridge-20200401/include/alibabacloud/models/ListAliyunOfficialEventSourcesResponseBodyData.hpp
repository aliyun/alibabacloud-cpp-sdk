// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALIYUNOFFICIALEVENTSOURCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTALIYUNOFFICIALEVENTSOURCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListAliyunOfficialEventSourcesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAliyunOfficialEventSourcesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EventSourceList, eventSourceList_);
    };
    friend void from_json(const Darabonba::Json& j, ListAliyunOfficialEventSourcesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EventSourceList, eventSourceList_);
    };
    ListAliyunOfficialEventSourcesResponseBodyData() = default ;
    ListAliyunOfficialEventSourcesResponseBodyData(const ListAliyunOfficialEventSourcesResponseBodyData &) = default ;
    ListAliyunOfficialEventSourcesResponseBodyData(ListAliyunOfficialEventSourcesResponseBodyData &&) = default ;
    ListAliyunOfficialEventSourcesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAliyunOfficialEventSourcesResponseBodyData() = default ;
    ListAliyunOfficialEventSourcesResponseBodyData& operator=(const ListAliyunOfficialEventSourcesResponseBodyData &) = default ;
    ListAliyunOfficialEventSourcesResponseBodyData& operator=(ListAliyunOfficialEventSourcesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventSourceList_ != nullptr; };
    // eventSourceList Field Functions 
    bool hasEventSourceList() const { return this->eventSourceList_ != nullptr;};
    void deleteEventSourceList() { this->eventSourceList_ = nullptr;};
    inline const vector<Models::ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList> & eventSourceList() const { DARABONBA_PTR_GET_CONST(eventSourceList_, vector<Models::ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList>) };
    inline vector<Models::ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList> eventSourceList() { DARABONBA_PTR_GET(eventSourceList_, vector<Models::ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList>) };
    inline ListAliyunOfficialEventSourcesResponseBodyData& setEventSourceList(const vector<Models::ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList> & eventSourceList) { DARABONBA_PTR_SET_VALUE(eventSourceList_, eventSourceList) };
    inline ListAliyunOfficialEventSourcesResponseBodyData& setEventSourceList(vector<Models::ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList> && eventSourceList) { DARABONBA_PTR_SET_RVALUE(eventSourceList_, eventSourceList) };


  protected:
    // The event sources.
    std::shared_ptr<vector<Models::ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList>> eventSourceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
