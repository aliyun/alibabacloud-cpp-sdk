// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINFORUUIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINFORUUIDREQUEST_HPP_
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
  class ListPluginForUuidRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginForUuidRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Types, types_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginForUuidRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Types, types_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListPluginForUuidRequest() = default ;
    ListPluginForUuidRequest(const ListPluginForUuidRequest &) = default ;
    ListPluginForUuidRequest(ListPluginForUuidRequest &&) = default ;
    ListPluginForUuidRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginForUuidRequest() = default ;
    ListPluginForUuidRequest& operator=(const ListPluginForUuidRequest &) = default ;
    ListPluginForUuidRequest& operator=(ListPluginForUuidRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->types_ == nullptr
        && this->uuid_ == nullptr; };
    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline const vector<string> & getTypes() const { DARABONBA_PTR_GET_CONST(types_, vector<string>) };
    inline vector<string> getTypes() { DARABONBA_PTR_GET(types_, vector<string>) };
    inline ListPluginForUuidRequest& setTypes(const vector<string> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
    inline ListPluginForUuidRequest& setTypes(vector<string> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListPluginForUuidRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The plug-in types.
    shared_ptr<vector<string>> types_ {};
    // The UUID of the server.
    // 
    // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
    // 
    // This parameter is required.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
