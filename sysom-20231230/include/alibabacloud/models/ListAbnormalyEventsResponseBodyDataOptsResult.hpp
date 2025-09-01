// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTABNORMALYEVENTSRESPONSEBODYDATAOPTSRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTABNORMALYEVENTSRESPONSEBODYDATAOPTSRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListAbnormalyEventsResponseBodyDataOptsResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAbnormalyEventsResponseBodyDataOptsResult& obj) { 
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListAbnormalyEventsResponseBodyDataOptsResult& obj) { 
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    ListAbnormalyEventsResponseBodyDataOptsResult() = default ;
    ListAbnormalyEventsResponseBodyDataOptsResult(const ListAbnormalyEventsResponseBodyDataOptsResult &) = default ;
    ListAbnormalyEventsResponseBodyDataOptsResult(ListAbnormalyEventsResponseBodyDataOptsResult &&) = default ;
    ListAbnormalyEventsResponseBodyDataOptsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAbnormalyEventsResponseBodyDataOptsResult() = default ;
    ListAbnormalyEventsResponseBodyDataOptsResult& operator=(const ListAbnormalyEventsResponseBodyDataOptsResult &) = default ;
    ListAbnormalyEventsResponseBodyDataOptsResult& operator=(ListAbnormalyEventsResponseBodyDataOptsResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr
        && this->url_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAbnormalyEventsResponseBodyDataOptsResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListAbnormalyEventsResponseBodyDataOptsResult& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
