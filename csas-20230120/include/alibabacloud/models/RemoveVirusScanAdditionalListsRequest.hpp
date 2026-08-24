// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEVIRUSSCANADDITIONALLISTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEVIRUSSCANADDITIONALLISTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class RemoveVirusScanAdditionalListsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveVirusScanAdditionalListsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListIds, listIds_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveVirusScanAdditionalListsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListIds, listIds_);
    };
    RemoveVirusScanAdditionalListsRequest() = default ;
    RemoveVirusScanAdditionalListsRequest(const RemoveVirusScanAdditionalListsRequest &) = default ;
    RemoveVirusScanAdditionalListsRequest(RemoveVirusScanAdditionalListsRequest &&) = default ;
    RemoveVirusScanAdditionalListsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveVirusScanAdditionalListsRequest() = default ;
    RemoveVirusScanAdditionalListsRequest& operator=(const RemoveVirusScanAdditionalListsRequest &) = default ;
    RemoveVirusScanAdditionalListsRequest& operator=(RemoveVirusScanAdditionalListsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listIds_ == nullptr; };
    // listIds Field Functions 
    bool hasListIds() const { return this->listIds_ != nullptr;};
    void deleteListIds() { this->listIds_ = nullptr;};
    inline const vector<string> & getListIds() const { DARABONBA_PTR_GET_CONST(listIds_, vector<string>) };
    inline vector<string> getListIds() { DARABONBA_PTR_GET(listIds_, vector<string>) };
    inline RemoveVirusScanAdditionalListsRequest& setListIds(const vector<string> & listIds) { DARABONBA_PTR_SET_VALUE(listIds_, listIds) };
    inline RemoveVirusScanAdditionalListsRequest& setListIds(vector<string> && listIds) { DARABONBA_PTR_SET_RVALUE(listIds_, listIds) };


  protected:
    // The collection of entry IDs to remove. At least one entry ID must be specified.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> listIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
