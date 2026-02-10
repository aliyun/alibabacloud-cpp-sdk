// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTAGWITHUUIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDTAGWITHUUIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddTagWithUuidRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTagWithUuidRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, AddTagWithUuidRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    AddTagWithUuidRequest() = default ;
    AddTagWithUuidRequest(const AddTagWithUuidRequest &) = default ;
    AddTagWithUuidRequest(AddTagWithUuidRequest &&) = default ;
    AddTagWithUuidRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTagWithUuidRequest() = default ;
    AddTagWithUuidRequest& operator=(const AddTagWithUuidRequest &) = default ;
    AddTagWithUuidRequest& operator=(AddTagWithUuidRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagName_ == nullptr
        && this->uuidList_ == nullptr; };
    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline AddTagWithUuidRequest& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline string getUuidList() const { DARABONBA_PTR_GET_DEFAULT(uuidList_, "") };
    inline AddTagWithUuidRequest& setUuidList(string uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };


  protected:
    // The name of the tag.
    // 
    // This parameter is required.
    shared_ptr<string> tagName_ {};
    // The UUIDs of the servers. Separate multiple UUIDs with commas (,).
    // 
    // > You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
    shared_ptr<string> uuidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
