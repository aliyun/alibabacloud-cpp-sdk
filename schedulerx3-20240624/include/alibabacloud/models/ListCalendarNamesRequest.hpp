// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALENDARNAMESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCALENDARNAMESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListCalendarNamesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCalendarNamesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCalendarNamesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    ListCalendarNamesRequest() = default ;
    ListCalendarNamesRequest(const ListCalendarNamesRequest &) = default ;
    ListCalendarNamesRequest(ListCalendarNamesRequest &&) = default ;
    ListCalendarNamesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCalendarNamesRequest() = default ;
    ListCalendarNamesRequest& operator=(const ListCalendarNamesRequest &) = default ;
    ListCalendarNamesRequest& operator=(ListCalendarNamesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListCalendarNamesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
