// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSETINFOPUBLISHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTASSETINFOPUBLISHREQUEST_HPP_
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
  class ListAssetInfoPublishRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssetInfoPublishRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssetInfoPublishRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    ListAssetInfoPublishRequest() = default ;
    ListAssetInfoPublishRequest(const ListAssetInfoPublishRequest &) = default ;
    ListAssetInfoPublishRequest(ListAssetInfoPublishRequest &&) = default ;
    ListAssetInfoPublishRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssetInfoPublishRequest() = default ;
    ListAssetInfoPublishRequest& operator=(const ListAssetInfoPublishRequest &) = default ;
    ListAssetInfoPublishRequest& operator=(ListAssetInfoPublishRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->uuidList_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAssetInfoPublishRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & getUuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> getUuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline ListAssetInfoPublishRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline ListAssetInfoPublishRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // An extended parameter. This parameter is temporarily unavailable.
    shared_ptr<string> name_ {};
    // The UUIDs of the servers that you want to query.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> uuidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
