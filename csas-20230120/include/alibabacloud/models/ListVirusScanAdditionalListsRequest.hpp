// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRUSSCANADDITIONALLISTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRUSSCANADDITIONALLISTSREQUEST_HPP_
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
  class ListVirusScanAdditionalListsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirusScanAdditionalListsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalTypes, additionalTypes_);
      DARABONBA_PTR_TO_JSON(DevType, devType_);
      DARABONBA_PTR_TO_JSON(ListDetail, listDetail_);
      DARABONBA_PTR_TO_JSON(ListIds, listIds_);
      DARABONBA_PTR_TO_JSON(ListType, listType_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirusScanAdditionalListsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalTypes, additionalTypes_);
      DARABONBA_PTR_FROM_JSON(DevType, devType_);
      DARABONBA_PTR_FROM_JSON(ListDetail, listDetail_);
      DARABONBA_PTR_FROM_JSON(ListIds, listIds_);
      DARABONBA_PTR_FROM_JSON(ListType, listType_);
    };
    ListVirusScanAdditionalListsRequest() = default ;
    ListVirusScanAdditionalListsRequest(const ListVirusScanAdditionalListsRequest &) = default ;
    ListVirusScanAdditionalListsRequest(ListVirusScanAdditionalListsRequest &&) = default ;
    ListVirusScanAdditionalListsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirusScanAdditionalListsRequest() = default ;
    ListVirusScanAdditionalListsRequest& operator=(const ListVirusScanAdditionalListsRequest &) = default ;
    ListVirusScanAdditionalListsRequest& operator=(ListVirusScanAdditionalListsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalTypes_ == nullptr
        && this->devType_ == nullptr && this->listDetail_ == nullptr && this->listIds_ == nullptr && this->listType_ == nullptr; };
    // additionalTypes Field Functions 
    bool hasAdditionalTypes() const { return this->additionalTypes_ != nullptr;};
    void deleteAdditionalTypes() { this->additionalTypes_ = nullptr;};
    inline const vector<string> & getAdditionalTypes() const { DARABONBA_PTR_GET_CONST(additionalTypes_, vector<string>) };
    inline vector<string> getAdditionalTypes() { DARABONBA_PTR_GET(additionalTypes_, vector<string>) };
    inline ListVirusScanAdditionalListsRequest& setAdditionalTypes(const vector<string> & additionalTypes) { DARABONBA_PTR_SET_VALUE(additionalTypes_, additionalTypes) };
    inline ListVirusScanAdditionalListsRequest& setAdditionalTypes(vector<string> && additionalTypes) { DARABONBA_PTR_SET_RVALUE(additionalTypes_, additionalTypes) };


    // devType Field Functions 
    bool hasDevType() const { return this->devType_ != nullptr;};
    void deleteDevType() { this->devType_ = nullptr;};
    inline string getDevType() const { DARABONBA_PTR_GET_DEFAULT(devType_, "") };
    inline ListVirusScanAdditionalListsRequest& setDevType(string devType) { DARABONBA_PTR_SET_VALUE(devType_, devType) };


    // listDetail Field Functions 
    bool hasListDetail() const { return this->listDetail_ != nullptr;};
    void deleteListDetail() { this->listDetail_ = nullptr;};
    inline string getListDetail() const { DARABONBA_PTR_GET_DEFAULT(listDetail_, "") };
    inline ListVirusScanAdditionalListsRequest& setListDetail(string listDetail) { DARABONBA_PTR_SET_VALUE(listDetail_, listDetail) };


    // listIds Field Functions 
    bool hasListIds() const { return this->listIds_ != nullptr;};
    void deleteListIds() { this->listIds_ = nullptr;};
    inline const vector<string> & getListIds() const { DARABONBA_PTR_GET_CONST(listIds_, vector<string>) };
    inline vector<string> getListIds() { DARABONBA_PTR_GET(listIds_, vector<string>) };
    inline ListVirusScanAdditionalListsRequest& setListIds(const vector<string> & listIds) { DARABONBA_PTR_SET_VALUE(listIds_, listIds) };
    inline ListVirusScanAdditionalListsRequest& setListIds(vector<string> && listIds) { DARABONBA_PTR_SET_RVALUE(listIds_, listIds) };


    // listType Field Functions 
    bool hasListType() const { return this->listType_ != nullptr;};
    void deleteListType() { this->listType_ = nullptr;};
    inline string getListType() const { DARABONBA_PTR_GET_DEFAULT(listType_, "") };
    inline ListVirusScanAdditionalListsRequest& setListType(string listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


  protected:
    shared_ptr<vector<string>> additionalTypes_ {};
    // This parameter is required.
    shared_ptr<string> devType_ {};
    shared_ptr<string> listDetail_ {};
    shared_ptr<vector<string>> listIds_ {};
    shared_ptr<string> listType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
