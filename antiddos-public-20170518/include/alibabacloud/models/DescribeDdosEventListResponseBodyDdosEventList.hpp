// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTLISTRESPONSEBODYDDOSEVENTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTLISTRESPONSEBODYDDOSEVENTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDdosEventListResponseBodyDdosEventListDdosEvent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeDdosEventListResponseBodyDdosEventList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosEventListResponseBodyDdosEventList& obj) { 
      DARABONBA_PTR_TO_JSON(DdosEvent, ddosEvent_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosEventListResponseBodyDdosEventList& obj) { 
      DARABONBA_PTR_FROM_JSON(DdosEvent, ddosEvent_);
    };
    DescribeDdosEventListResponseBodyDdosEventList() = default ;
    DescribeDdosEventListResponseBodyDdosEventList(const DescribeDdosEventListResponseBodyDdosEventList &) = default ;
    DescribeDdosEventListResponseBodyDdosEventList(DescribeDdosEventListResponseBodyDdosEventList &&) = default ;
    DescribeDdosEventListResponseBodyDdosEventList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosEventListResponseBodyDdosEventList() = default ;
    DescribeDdosEventListResponseBodyDdosEventList& operator=(const DescribeDdosEventListResponseBodyDdosEventList &) = default ;
    DescribeDdosEventListResponseBodyDdosEventList& operator=(DescribeDdosEventListResponseBodyDdosEventList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ddosEvent_ != nullptr; };
    // ddosEvent Field Functions 
    bool hasDdosEvent() const { return this->ddosEvent_ != nullptr;};
    void deleteDdosEvent() { this->ddosEvent_ = nullptr;};
    inline const vector<Models::DescribeDdosEventListResponseBodyDdosEventListDdosEvent> & ddosEvent() const { DARABONBA_PTR_GET_CONST(ddosEvent_, vector<Models::DescribeDdosEventListResponseBodyDdosEventListDdosEvent>) };
    inline vector<Models::DescribeDdosEventListResponseBodyDdosEventListDdosEvent> ddosEvent() { DARABONBA_PTR_GET(ddosEvent_, vector<Models::DescribeDdosEventListResponseBodyDdosEventListDdosEvent>) };
    inline DescribeDdosEventListResponseBodyDdosEventList& setDdosEvent(const vector<Models::DescribeDdosEventListResponseBodyDdosEventListDdosEvent> & ddosEvent) { DARABONBA_PTR_SET_VALUE(ddosEvent_, ddosEvent) };
    inline DescribeDdosEventListResponseBodyDdosEventList& setDdosEvent(vector<Models::DescribeDdosEventListResponseBodyDdosEventListDdosEvent> && ddosEvent) { DARABONBA_PTR_SET_RVALUE(ddosEvent_, ddosEvent) };


  protected:
    std::shared_ptr<vector<Models::DescribeDdosEventListResponseBodyDdosEventListDdosEvent>> ddosEvent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
