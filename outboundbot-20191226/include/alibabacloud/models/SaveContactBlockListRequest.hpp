// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVECONTACTBLOCKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVECONTACTBLOCKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class SaveContactBlockListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveContactBlockListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactBlockListList, contactBlockListList_);
      DARABONBA_PTR_TO_JSON(ContactBlockListsJson, contactBlockListsJson_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveContactBlockListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactBlockListList, contactBlockListList_);
      DARABONBA_PTR_FROM_JSON(ContactBlockListsJson, contactBlockListsJson_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    SaveContactBlockListRequest() = default ;
    SaveContactBlockListRequest(const SaveContactBlockListRequest &) = default ;
    SaveContactBlockListRequest(SaveContactBlockListRequest &&) = default ;
    SaveContactBlockListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveContactBlockListRequest() = default ;
    SaveContactBlockListRequest& operator=(const SaveContactBlockListRequest &) = default ;
    SaveContactBlockListRequest& operator=(SaveContactBlockListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactBlockListList_ == nullptr
        && return this->contactBlockListsJson_ == nullptr && return this->instanceId_ == nullptr; };
    // contactBlockListList Field Functions 
    bool hasContactBlockListList() const { return this->contactBlockListList_ != nullptr;};
    void deleteContactBlockListList() { this->contactBlockListList_ = nullptr;};
    inline const vector<string> & contactBlockListList() const { DARABONBA_PTR_GET_CONST(contactBlockListList_, vector<string>) };
    inline vector<string> contactBlockListList() { DARABONBA_PTR_GET(contactBlockListList_, vector<string>) };
    inline SaveContactBlockListRequest& setContactBlockListList(const vector<string> & contactBlockListList) { DARABONBA_PTR_SET_VALUE(contactBlockListList_, contactBlockListList) };
    inline SaveContactBlockListRequest& setContactBlockListList(vector<string> && contactBlockListList) { DARABONBA_PTR_SET_RVALUE(contactBlockListList_, contactBlockListList) };


    // contactBlockListsJson Field Functions 
    bool hasContactBlockListsJson() const { return this->contactBlockListsJson_ != nullptr;};
    void deleteContactBlockListsJson() { this->contactBlockListsJson_ = nullptr;};
    inline string contactBlockListsJson() const { DARABONBA_PTR_GET_DEFAULT(contactBlockListsJson_, "") };
    inline SaveContactBlockListRequest& setContactBlockListsJson(string contactBlockListsJson) { DARABONBA_PTR_SET_VALUE(contactBlockListsJson_, contactBlockListsJson) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SaveContactBlockListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<vector<string>> contactBlockListList_ = nullptr;
    std::shared_ptr<string> contactBlockListsJson_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
