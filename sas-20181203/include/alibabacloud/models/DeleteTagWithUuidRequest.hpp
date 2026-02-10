// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETAGWITHUUIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETAGWITHUUIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteTagWithUuidRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTagWithUuidRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTagWithUuidRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    DeleteTagWithUuidRequest() = default ;
    DeleteTagWithUuidRequest(const DeleteTagWithUuidRequest &) = default ;
    DeleteTagWithUuidRequest(DeleteTagWithUuidRequest &&) = default ;
    DeleteTagWithUuidRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTagWithUuidRequest() = default ;
    DeleteTagWithUuidRequest& operator=(const DeleteTagWithUuidRequest &) = default ;
    DeleteTagWithUuidRequest& operator=(DeleteTagWithUuidRequest &&) = default ;
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
    inline DeleteTagWithUuidRequest& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline string getUuidList() const { DARABONBA_PTR_GET_DEFAULT(uuidList_, "") };
    inline DeleteTagWithUuidRequest& setUuidList(string uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };


  protected:
    // The name of the tag.
    // 
    // This parameter is required.
    shared_ptr<string> tagName_ {};
    // The UUIDs of servers.
    // 
    // > If the UuidList parameter is specified, Security Center removes the tag only from the servers whose UUIDs are specified by UuidList. If the UuidList parameter is not specified, Security Center removes the tag from all servers.
    shared_ptr<string> uuidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
