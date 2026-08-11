// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQPSSTATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQPSSTATSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetQpsStatsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQpsStatsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQpsStatsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetQpsStatsRequest() = default ;
    GetQpsStatsRequest(const GetQpsStatsRequest &) = default ;
    GetQpsStatsRequest(GetQpsStatsRequest &&) = default ;
    GetQpsStatsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQpsStatsRequest() = default ;
    GetQpsStatsRequest& operator=(const GetQpsStatsRequest &) = default ;
    GetQpsStatsRequest& operator=(GetQpsStatsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->query_ == nullptr
        && this->regionId_ == nullptr; };
    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline GetQpsStatsRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetQpsStatsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The query condition. The value is a string in JSON format.
    // 
    // >Different query conditions return different protected objects. For more information, see **Query parameter description**.
    shared_ptr<string> query_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
