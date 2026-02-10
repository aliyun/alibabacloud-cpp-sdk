// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDISCOVERDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDISCOVERDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class QueryDiscoverDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDiscoverDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateMark, createMark_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDiscoverDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateMark, createMark_);
    };
    QueryDiscoverDatabaseRequest() = default ;
    QueryDiscoverDatabaseRequest(const QueryDiscoverDatabaseRequest &) = default ;
    QueryDiscoverDatabaseRequest(QueryDiscoverDatabaseRequest &&) = default ;
    QueryDiscoverDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDiscoverDatabaseRequest() = default ;
    QueryDiscoverDatabaseRequest& operator=(const QueryDiscoverDatabaseRequest &) = default ;
    QueryDiscoverDatabaseRequest& operator=(QueryDiscoverDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createMark_ == nullptr; };
    // createMark Field Functions 
    bool hasCreateMark() const { return this->createMark_ != nullptr;};
    void deleteCreateMark() { this->createMark_ = nullptr;};
    inline string getCreateMark() const { DARABONBA_PTR_GET_DEFAULT(createMark_, "") };
    inline QueryDiscoverDatabaseRequest& setCreateMark(string createMark) { DARABONBA_PTR_SET_VALUE(createMark_, createMark) };


  protected:
    // The ID of the scan task.
    // 
    // > You can call the [StartDiscoverDatabaseTask](~~StartDiscoverDatabaseTask~~) operation to query the ID of the task.
    shared_ptr<string> createMark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
