// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESOFUSERRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESOFUSERRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstancesOfUserResponseBodyDataListAdminList.hpp>
#include <alibabacloud/models/ListInstancesOfUserResponseBodyDataListNumberList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListInstancesOfUserResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesOfUserResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AdminList, adminList_);
      DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_TO_JSON(ConsoleUrl, consoleUrl_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NumberList, numberList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesOfUserResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminList, adminList_);
      DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_FROM_JSON(ConsoleUrl, consoleUrl_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NumberList, numberList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListInstancesOfUserResponseBodyDataList() = default ;
    ListInstancesOfUserResponseBodyDataList(const ListInstancesOfUserResponseBodyDataList &) = default ;
    ListInstancesOfUserResponseBodyDataList(ListInstancesOfUserResponseBodyDataList &&) = default ;
    ListInstancesOfUserResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesOfUserResponseBodyDataList() = default ;
    ListInstancesOfUserResponseBodyDataList& operator=(const ListInstancesOfUserResponseBodyDataList &) = default ;
    ListInstancesOfUserResponseBodyDataList& operator=(ListInstancesOfUserResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adminList_ != nullptr
        && this->aliyunUid_ != nullptr && this->consoleUrl_ != nullptr && this->description_ != nullptr && this->domainName_ != nullptr && this->id_ != nullptr
        && this->name_ != nullptr && this->numberList_ != nullptr && this->status_ != nullptr; };
    // adminList Field Functions 
    bool hasAdminList() const { return this->adminList_ != nullptr;};
    void deleteAdminList() { this->adminList_ = nullptr;};
    inline const vector<Models::ListInstancesOfUserResponseBodyDataListAdminList> & adminList() const { DARABONBA_PTR_GET_CONST(adminList_, vector<Models::ListInstancesOfUserResponseBodyDataListAdminList>) };
    inline vector<Models::ListInstancesOfUserResponseBodyDataListAdminList> adminList() { DARABONBA_PTR_GET(adminList_, vector<Models::ListInstancesOfUserResponseBodyDataListAdminList>) };
    inline ListInstancesOfUserResponseBodyDataList& setAdminList(const vector<Models::ListInstancesOfUserResponseBodyDataListAdminList> & adminList) { DARABONBA_PTR_SET_VALUE(adminList_, adminList) };
    inline ListInstancesOfUserResponseBodyDataList& setAdminList(vector<Models::ListInstancesOfUserResponseBodyDataListAdminList> && adminList) { DARABONBA_PTR_SET_RVALUE(adminList_, adminList) };


    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline string aliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
    inline ListInstancesOfUserResponseBodyDataList& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // consoleUrl Field Functions 
    bool hasConsoleUrl() const { return this->consoleUrl_ != nullptr;};
    void deleteConsoleUrl() { this->consoleUrl_ = nullptr;};
    inline string consoleUrl() const { DARABONBA_PTR_GET_DEFAULT(consoleUrl_, "") };
    inline ListInstancesOfUserResponseBodyDataList& setConsoleUrl(string consoleUrl) { DARABONBA_PTR_SET_VALUE(consoleUrl_, consoleUrl) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListInstancesOfUserResponseBodyDataList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ListInstancesOfUserResponseBodyDataList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListInstancesOfUserResponseBodyDataList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListInstancesOfUserResponseBodyDataList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // numberList Field Functions 
    bool hasNumberList() const { return this->numberList_ != nullptr;};
    void deleteNumberList() { this->numberList_ = nullptr;};
    inline const vector<Models::ListInstancesOfUserResponseBodyDataListNumberList> & numberList() const { DARABONBA_PTR_GET_CONST(numberList_, vector<Models::ListInstancesOfUserResponseBodyDataListNumberList>) };
    inline vector<Models::ListInstancesOfUserResponseBodyDataListNumberList> numberList() { DARABONBA_PTR_GET(numberList_, vector<Models::ListInstancesOfUserResponseBodyDataListNumberList>) };
    inline ListInstancesOfUserResponseBodyDataList& setNumberList(const vector<Models::ListInstancesOfUserResponseBodyDataListNumberList> & numberList) { DARABONBA_PTR_SET_VALUE(numberList_, numberList) };
    inline ListInstancesOfUserResponseBodyDataList& setNumberList(vector<Models::ListInstancesOfUserResponseBodyDataListNumberList> && numberList) { DARABONBA_PTR_SET_RVALUE(numberList_, numberList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstancesOfUserResponseBodyDataList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<vector<Models::ListInstancesOfUserResponseBodyDataListAdminList>> adminList_ = nullptr;
    std::shared_ptr<string> aliyunUid_ = nullptr;
    std::shared_ptr<string> consoleUrl_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::ListInstancesOfUserResponseBodyDataListNumberList>> numberList_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
