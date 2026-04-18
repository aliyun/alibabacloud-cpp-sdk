// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHISTORYACTIVEUSERCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYHISTORYACTIVEUSERCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class QueryHistoryActiveUserCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHistoryActiveUserCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataDate, dataDate_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHistoryActiveUserCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDate, dataDate_);
    };
    QueryHistoryActiveUserCountRequest() = default ;
    QueryHistoryActiveUserCountRequest(const QueryHistoryActiveUserCountRequest &) = default ;
    QueryHistoryActiveUserCountRequest(QueryHistoryActiveUserCountRequest &&) = default ;
    QueryHistoryActiveUserCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHistoryActiveUserCountRequest() = default ;
    QueryHistoryActiveUserCountRequest& operator=(const QueryHistoryActiveUserCountRequest &) = default ;
    QueryHistoryActiveUserCountRequest& operator=(QueryHistoryActiveUserCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataDate_ == nullptr; };
    // dataDate Field Functions 
    bool hasDataDate() const { return this->dataDate_ != nullptr;};
    void deleteDataDate() { this->dataDate_ = nullptr;};
    inline string getDataDate() const { DARABONBA_PTR_GET_DEFAULT(dataDate_, "") };
    inline QueryHistoryActiveUserCountRequest& setDataDate(string dataDate) { DARABONBA_PTR_SET_VALUE(dataDate_, dataDate) };


  protected:
    shared_ptr<string> dataDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
