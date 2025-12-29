// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRESOURCESTATICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRESOURCESTATICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class QueryResourceStaticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryResourceStaticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryResourceStaticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
    };
    QueryResourceStaticsRequest() = default ;
    QueryResourceStaticsRequest(const QueryResourceStaticsRequest &) = default ;
    QueryResourceStaticsRequest(QueryResourceStaticsRequest &&) = default ;
    QueryResourceStaticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryResourceStaticsRequest() = default ;
    QueryResourceStaticsRequest& operator=(const QueryResourceStaticsRequest &) = default ;
    QueryResourceStaticsRequest& operator=(QueryResourceStaticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline QueryResourceStaticsRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


  protected:
    // 7171a6ca-d1cd-4928-8642-7d5cfe69\\*\\*\\*\\*
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
