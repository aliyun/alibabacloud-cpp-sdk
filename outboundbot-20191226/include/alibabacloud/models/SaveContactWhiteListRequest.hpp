// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVECONTACTWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVECONTACTWHITELISTREQUEST_HPP_
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
  class SaveContactWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveContactWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactWhiteListList, contactWhiteListList_);
      DARABONBA_PTR_TO_JSON(ContactWhiteListsJson, contactWhiteListsJson_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveContactWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactWhiteListList, contactWhiteListList_);
      DARABONBA_PTR_FROM_JSON(ContactWhiteListsJson, contactWhiteListsJson_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    SaveContactWhiteListRequest() = default ;
    SaveContactWhiteListRequest(const SaveContactWhiteListRequest &) = default ;
    SaveContactWhiteListRequest(SaveContactWhiteListRequest &&) = default ;
    SaveContactWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveContactWhiteListRequest() = default ;
    SaveContactWhiteListRequest& operator=(const SaveContactWhiteListRequest &) = default ;
    SaveContactWhiteListRequest& operator=(SaveContactWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactWhiteListList_ == nullptr
        && return this->contactWhiteListsJson_ == nullptr && return this->instanceId_ == nullptr; };
    // contactWhiteListList Field Functions 
    bool hasContactWhiteListList() const { return this->contactWhiteListList_ != nullptr;};
    void deleteContactWhiteListList() { this->contactWhiteListList_ = nullptr;};
    inline const vector<string> & contactWhiteListList() const { DARABONBA_PTR_GET_CONST(contactWhiteListList_, vector<string>) };
    inline vector<string> contactWhiteListList() { DARABONBA_PTR_GET(contactWhiteListList_, vector<string>) };
    inline SaveContactWhiteListRequest& setContactWhiteListList(const vector<string> & contactWhiteListList) { DARABONBA_PTR_SET_VALUE(contactWhiteListList_, contactWhiteListList) };
    inline SaveContactWhiteListRequest& setContactWhiteListList(vector<string> && contactWhiteListList) { DARABONBA_PTR_SET_RVALUE(contactWhiteListList_, contactWhiteListList) };


    // contactWhiteListsJson Field Functions 
    bool hasContactWhiteListsJson() const { return this->contactWhiteListsJson_ != nullptr;};
    void deleteContactWhiteListsJson() { this->contactWhiteListsJson_ = nullptr;};
    inline string contactWhiteListsJson() const { DARABONBA_PTR_GET_DEFAULT(contactWhiteListsJson_, "") };
    inline SaveContactWhiteListRequest& setContactWhiteListsJson(string contactWhiteListsJson) { DARABONBA_PTR_SET_VALUE(contactWhiteListsJson_, contactWhiteListsJson) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SaveContactWhiteListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<vector<string>> contactWhiteListList_ = nullptr;
    std::shared_ptr<string> contactWhiteListsJson_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
