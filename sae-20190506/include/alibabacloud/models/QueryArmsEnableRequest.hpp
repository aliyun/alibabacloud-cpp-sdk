// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYARMSENABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYARMSENABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class QueryArmsEnableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryArmsEnableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryArmsEnableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
    };
    QueryArmsEnableRequest() = default ;
    QueryArmsEnableRequest(const QueryArmsEnableRequest &) = default ;
    QueryArmsEnableRequest(QueryArmsEnableRequest &&) = default ;
    QueryArmsEnableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryArmsEnableRequest() = default ;
    QueryArmsEnableRequest& operator=(const QueryArmsEnableRequest &) = default ;
    QueryArmsEnableRequest& operator=(QueryArmsEnableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline QueryArmsEnableRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
