// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVULGLOBALCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVULGLOBALCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListVulGlobalConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVulGlobalConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VulGlobalConfigList, vulGlobalConfigList_);
    };
    friend void from_json(const Darabonba::Json& j, ListVulGlobalConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VulGlobalConfigList, vulGlobalConfigList_);
    };
    ListVulGlobalConfigResponseBody() = default ;
    ListVulGlobalConfigResponseBody(const ListVulGlobalConfigResponseBody &) = default ;
    ListVulGlobalConfigResponseBody(ListVulGlobalConfigResponseBody &&) = default ;
    ListVulGlobalConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVulGlobalConfigResponseBody() = default ;
    ListVulGlobalConfigResponseBody& operator=(const ListVulGlobalConfigResponseBody &) = default ;
    ListVulGlobalConfigResponseBody& operator=(ListVulGlobalConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VulGlobalConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VulGlobalConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigKey, configKey_);
        DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
      };
      friend void from_json(const Darabonba::Json& j, VulGlobalConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigKey, configKey_);
        DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
      };
      VulGlobalConfigList() = default ;
      VulGlobalConfigList(const VulGlobalConfigList &) = default ;
      VulGlobalConfigList(VulGlobalConfigList &&) = default ;
      VulGlobalConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VulGlobalConfigList() = default ;
      VulGlobalConfigList& operator=(const VulGlobalConfigList &) = default ;
      VulGlobalConfigList& operator=(VulGlobalConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configKey_ == nullptr
        && this->configValue_ == nullptr; };
      // configKey Field Functions 
      bool hasConfigKey() const { return this->configKey_ != nullptr;};
      void deleteConfigKey() { this->configKey_ = nullptr;};
      inline string getConfigKey() const { DARABONBA_PTR_GET_DEFAULT(configKey_, "") };
      inline VulGlobalConfigList& setConfigKey(string configKey) { DARABONBA_PTR_SET_VALUE(configKey_, configKey) };


      // configValue Field Functions 
      bool hasConfigValue() const { return this->configValue_ != nullptr;};
      void deleteConfigValue() { this->configValue_ = nullptr;};
      inline string getConfigValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
      inline VulGlobalConfigList& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


    protected:
      // The key of the configuration item.
      shared_ptr<string> configKey_ {};
      // The value of the configuration item.
      shared_ptr<string> configValue_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->vulGlobalConfigList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVulGlobalConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vulGlobalConfigList Field Functions 
    bool hasVulGlobalConfigList() const { return this->vulGlobalConfigList_ != nullptr;};
    void deleteVulGlobalConfigList() { this->vulGlobalConfigList_ = nullptr;};
    inline const vector<ListVulGlobalConfigResponseBody::VulGlobalConfigList> & getVulGlobalConfigList() const { DARABONBA_PTR_GET_CONST(vulGlobalConfigList_, vector<ListVulGlobalConfigResponseBody::VulGlobalConfigList>) };
    inline vector<ListVulGlobalConfigResponseBody::VulGlobalConfigList> getVulGlobalConfigList() { DARABONBA_PTR_GET(vulGlobalConfigList_, vector<ListVulGlobalConfigResponseBody::VulGlobalConfigList>) };
    inline ListVulGlobalConfigResponseBody& setVulGlobalConfigList(const vector<ListVulGlobalConfigResponseBody::VulGlobalConfigList> & vulGlobalConfigList) { DARABONBA_PTR_SET_VALUE(vulGlobalConfigList_, vulGlobalConfigList) };
    inline ListVulGlobalConfigResponseBody& setVulGlobalConfigList(vector<ListVulGlobalConfigResponseBody::VulGlobalConfigList> && vulGlobalConfigList) { DARABONBA_PTR_SET_RVALUE(vulGlobalConfigList_, vulGlobalConfigList) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The configurations.
    shared_ptr<vector<ListVulGlobalConfigResponseBody::VulGlobalConfigList>> vulGlobalConfigList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
