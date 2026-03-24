// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERCUSTOMLOGCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERCUSTOMLOGCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ListUserCustomLogConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserCustomLogConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigIds, configIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserCustomLogConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigIds, configIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListUserCustomLogConfigResponseBody() = default ;
    ListUserCustomLogConfigResponseBody(const ListUserCustomLogConfigResponseBody &) = default ;
    ListUserCustomLogConfigResponseBody(ListUserCustomLogConfigResponseBody &&) = default ;
    ListUserCustomLogConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserCustomLogConfigResponseBody() = default ;
    ListUserCustomLogConfigResponseBody& operator=(const ListUserCustomLogConfigResponseBody &) = default ;
    ListUserCustomLogConfigResponseBody& operator=(ListUserCustomLogConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConfigIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigIds& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigIds& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      };
      ConfigIds() = default ;
      ConfigIds(const ConfigIds &) = default ;
      ConfigIds(ConfigIds &&) = default ;
      ConfigIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigIds() = default ;
      ConfigIds& operator=(const ConfigIds &) = default ;
      ConfigIds& operator=(ConfigIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configId_ == nullptr; };
      // configId Field Functions 
      bool hasConfigId() const { return this->configId_ != nullptr;};
      void deleteConfigId() { this->configId_ = nullptr;};
      inline const vector<string> & getConfigId() const { DARABONBA_PTR_GET_CONST(configId_, vector<string>) };
      inline vector<string> getConfigId() { DARABONBA_PTR_GET(configId_, vector<string>) };
      inline ConfigIds& setConfigId(const vector<string> & configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };
      inline ConfigIds& setConfigId(vector<string> && configId) { DARABONBA_PTR_SET_RVALUE(configId_, configId) };


    protected:
      shared_ptr<vector<string>> configId_ {};
    };

    virtual bool empty() const override { return this->configIds_ == nullptr
        && this->requestId_ == nullptr; };
    // configIds Field Functions 
    bool hasConfigIds() const { return this->configIds_ != nullptr;};
    void deleteConfigIds() { this->configIds_ = nullptr;};
    inline const ListUserCustomLogConfigResponseBody::ConfigIds & getConfigIds() const { DARABONBA_PTR_GET_CONST(configIds_, ListUserCustomLogConfigResponseBody::ConfigIds) };
    inline ListUserCustomLogConfigResponseBody::ConfigIds getConfigIds() { DARABONBA_PTR_GET(configIds_, ListUserCustomLogConfigResponseBody::ConfigIds) };
    inline ListUserCustomLogConfigResponseBody& setConfigIds(const ListUserCustomLogConfigResponseBody::ConfigIds & configIds) { DARABONBA_PTR_SET_VALUE(configIds_, configIds) };
    inline ListUserCustomLogConfigResponseBody& setConfigIds(ListUserCustomLogConfigResponseBody::ConfigIds && configIds) { DARABONBA_PTR_SET_RVALUE(configIds_, configIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserCustomLogConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListUserCustomLogConfigResponseBody::ConfigIds> configIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
