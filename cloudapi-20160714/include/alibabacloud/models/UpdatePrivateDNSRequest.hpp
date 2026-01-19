// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPRIVATEDNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPRIVATEDNSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class UpdatePrivateDNSRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrivateDNSRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IntranetDomain, intranetDomain_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrivateDNSRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IntranetDomain, intranetDomain_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdatePrivateDNSRequest() = default ;
    UpdatePrivateDNSRequest(const UpdatePrivateDNSRequest &) = default ;
    UpdatePrivateDNSRequest(UpdatePrivateDNSRequest &&) = default ;
    UpdatePrivateDNSRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrivateDNSRequest() = default ;
    UpdatePrivateDNSRequest& operator=(const UpdatePrivateDNSRequest &) = default ;
    UpdatePrivateDNSRequest& operator=(UpdatePrivateDNSRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(Record, record_);
        DARABONBA_PTR_TO_JSON(Weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(Record, record_);
        DARABONBA_PTR_FROM_JSON(Weight, weight_);
      };
      Records() = default ;
      Records(const Records &) = default ;
      Records(Records &&) = default ;
      Records(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Records() = default ;
      Records& operator=(const Records &) = default ;
      Records& operator=(Records &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->record_ == nullptr
        && this->weight_ == nullptr; };
      // record Field Functions 
      bool hasRecord() const { return this->record_ != nullptr;};
      void deleteRecord() { this->record_ = nullptr;};
      inline string getRecord() const { DARABONBA_PTR_GET_DEFAULT(record_, "") };
      inline Records& setRecord(string record) { DARABONBA_PTR_SET_VALUE(record_, record) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline Records& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      // The resolution record.
      shared_ptr<string> record_ {};
      // The weight of the record.
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->intranetDomain_ == nullptr
        && this->records_ == nullptr && this->securityToken_ == nullptr && this->type_ == nullptr; };
    // intranetDomain Field Functions 
    bool hasIntranetDomain() const { return this->intranetDomain_ != nullptr;};
    void deleteIntranetDomain() { this->intranetDomain_ = nullptr;};
    inline string getIntranetDomain() const { DARABONBA_PTR_GET_DEFAULT(intranetDomain_, "") };
    inline UpdatePrivateDNSRequest& setIntranetDomain(string intranetDomain) { DARABONBA_PTR_SET_VALUE(intranetDomain_, intranetDomain) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<UpdatePrivateDNSRequest::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<UpdatePrivateDNSRequest::Records>) };
    inline vector<UpdatePrivateDNSRequest::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<UpdatePrivateDNSRequest::Records>) };
    inline UpdatePrivateDNSRequest& setRecords(const vector<UpdatePrivateDNSRequest::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline UpdatePrivateDNSRequest& setRecords(vector<UpdatePrivateDNSRequest::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline UpdatePrivateDNSRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdatePrivateDNSRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The internal domain name.
    // 
    // This parameter is required.
    shared_ptr<string> intranetDomain_ {};
    // The resolution records. This parameter is valid only when Type is set to A.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdatePrivateDNSRequest::Records>> records_ {};
    shared_ptr<string> securityToken_ {};
    // The internal domain name resolution type. Valid values:
    // 
    // *   VPC: resolution for virtual private cloud (VPC) access authorizations. A resolution of this type can be bound only to traditional dedicated instances.
    // *   A: resolution that supports A records. A resolution of this type can be bound only to VPC integration dedicated instances.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
