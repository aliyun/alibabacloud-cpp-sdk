// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEDNSRESPONSEBODYPRIVATEDNSLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEDNSRESPONSEBODYPRIVATEDNSLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrivateDNSResponseBodyPrivateDNSListRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ListPrivateDNSResponseBodyPrivateDNSList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateDNSResponseBodyPrivateDNSList& obj) { 
      DARABONBA_PTR_TO_JSON(BindInstances, bindInstances_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(IntranetDomain, intranetDomain_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateDNSResponseBodyPrivateDNSList& obj) { 
      DARABONBA_PTR_FROM_JSON(BindInstances, bindInstances_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(IntranetDomain, intranetDomain_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListPrivateDNSResponseBodyPrivateDNSList() = default ;
    ListPrivateDNSResponseBodyPrivateDNSList(const ListPrivateDNSResponseBodyPrivateDNSList &) = default ;
    ListPrivateDNSResponseBodyPrivateDNSList(ListPrivateDNSResponseBodyPrivateDNSList &&) = default ;
    ListPrivateDNSResponseBodyPrivateDNSList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateDNSResponseBodyPrivateDNSList() = default ;
    ListPrivateDNSResponseBodyPrivateDNSList& operator=(const ListPrivateDNSResponseBodyPrivateDNSList &) = default ;
    ListPrivateDNSResponseBodyPrivateDNSList& operator=(ListPrivateDNSResponseBodyPrivateDNSList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindInstances_ == nullptr
        && return this->createdTime_ == nullptr && return this->intranetDomain_ == nullptr && return this->records_ == nullptr && return this->type_ == nullptr; };
    // bindInstances Field Functions 
    bool hasBindInstances() const { return this->bindInstances_ != nullptr;};
    void deleteBindInstances() { this->bindInstances_ = nullptr;};
    inline const vector<string> & bindInstances() const { DARABONBA_PTR_GET_CONST(bindInstances_, vector<string>) };
    inline vector<string> bindInstances() { DARABONBA_PTR_GET(bindInstances_, vector<string>) };
    inline ListPrivateDNSResponseBodyPrivateDNSList& setBindInstances(const vector<string> & bindInstances) { DARABONBA_PTR_SET_VALUE(bindInstances_, bindInstances) };
    inline ListPrivateDNSResponseBodyPrivateDNSList& setBindInstances(vector<string> && bindInstances) { DARABONBA_PTR_SET_RVALUE(bindInstances_, bindInstances) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline ListPrivateDNSResponseBodyPrivateDNSList& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // intranetDomain Field Functions 
    bool hasIntranetDomain() const { return this->intranetDomain_ != nullptr;};
    void deleteIntranetDomain() { this->intranetDomain_ = nullptr;};
    inline string intranetDomain() const { DARABONBA_PTR_GET_DEFAULT(intranetDomain_, "") };
    inline ListPrivateDNSResponseBodyPrivateDNSList& setIntranetDomain(string intranetDomain) { DARABONBA_PTR_SET_VALUE(intranetDomain_, intranetDomain) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<Models::ListPrivateDNSResponseBodyPrivateDNSListRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<Models::ListPrivateDNSResponseBodyPrivateDNSListRecords>) };
    inline vector<Models::ListPrivateDNSResponseBodyPrivateDNSListRecords> records() { DARABONBA_PTR_GET(records_, vector<Models::ListPrivateDNSResponseBodyPrivateDNSListRecords>) };
    inline ListPrivateDNSResponseBodyPrivateDNSList& setRecords(const vector<Models::ListPrivateDNSResponseBodyPrivateDNSListRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline ListPrivateDNSResponseBodyPrivateDNSList& setRecords(vector<Models::ListPrivateDNSResponseBodyPrivateDNSListRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListPrivateDNSResponseBodyPrivateDNSList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The instances that are associated with the resolution.
    std::shared_ptr<vector<string>> bindInstances_ = nullptr;
    // The time when the resolution was created. The time is displayed in UTC.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The internal domain name.
    std::shared_ptr<string> intranetDomain_ = nullptr;
    // The resolution records.
    std::shared_ptr<vector<Models::ListPrivateDNSResponseBodyPrivateDNSListRecords>> records_ = nullptr;
    // The internal domain name resolution type. Valid values:
    // 
    // *   VPC: resolution for VPC access authorizations. A resolution of this type can be bound only to traditional dedicated instances.
    // *   A: resolution that supports A records. A resolution of this type can be bound only to VPC integration dedicated instances.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
