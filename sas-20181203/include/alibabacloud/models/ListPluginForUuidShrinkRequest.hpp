// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINFORUUIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINFORUUIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListPluginForUuidShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginForUuidShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Types, typesShrink_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginForUuidShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Types, typesShrink_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListPluginForUuidShrinkRequest() = default ;
    ListPluginForUuidShrinkRequest(const ListPluginForUuidShrinkRequest &) = default ;
    ListPluginForUuidShrinkRequest(ListPluginForUuidShrinkRequest &&) = default ;
    ListPluginForUuidShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginForUuidShrinkRequest() = default ;
    ListPluginForUuidShrinkRequest& operator=(const ListPluginForUuidShrinkRequest &) = default ;
    ListPluginForUuidShrinkRequest& operator=(ListPluginForUuidShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->typesShrink_ == nullptr
        && this->uuid_ == nullptr; };
    // typesShrink Field Functions 
    bool hasTypesShrink() const { return this->typesShrink_ != nullptr;};
    void deleteTypesShrink() { this->typesShrink_ = nullptr;};
    inline string getTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(typesShrink_, "") };
    inline ListPluginForUuidShrinkRequest& setTypesShrink(string typesShrink) { DARABONBA_PTR_SET_VALUE(typesShrink_, typesShrink) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListPluginForUuidShrinkRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The plug-in types.
    shared_ptr<string> typesShrink_ {};
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
