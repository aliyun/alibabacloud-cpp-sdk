// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBPARTNERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUBPARTNERLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20250227
{
namespace Models
{
  class GetSubPartnerListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubPartnerListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubPartnerList, subPartnerList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubPartnerListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubPartnerList, subPartnerList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetSubPartnerListResponseBody() = default ;
    GetSubPartnerListResponseBody(const GetSubPartnerListResponseBody &) = default ;
    GetSubPartnerListResponseBody(GetSubPartnerListResponseBody &&) = default ;
    GetSubPartnerListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubPartnerListResponseBody() = default ;
    GetSubPartnerListResponseBody& operator=(const GetSubPartnerListResponseBody &) = default ;
    GetSubPartnerListResponseBody& operator=(GetSubPartnerListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubPartnerList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubPartnerList& obj) { 
        DARABONBA_PTR_TO_JSON(Address, address_);
        DARABONBA_PTR_TO_JSON(AgreementStatus, agreementStatus_);
        DARABONBA_PTR_TO_JSON(AgreementStatusDesc, agreementStatusDesc_);
        DARABONBA_PTR_TO_JSON(City, city_);
        DARABONBA_PTR_TO_JSON(CompanyName, companyName_);
        DARABONBA_PTR_TO_JSON(Contact, contact_);
        DARABONBA_PTR_TO_JSON(District, district_);
        DARABONBA_PTR_TO_JSON(JoinTime, joinTime_);
        DARABONBA_PTR_TO_JSON(MasterAccount, masterAccount_);
        DARABONBA_PTR_TO_JSON(MasterUid, masterUid_);
        DARABONBA_PTR_TO_JSON(Pid, pid_);
        DARABONBA_PTR_TO_JSON(Province, province_);
      };
      friend void from_json(const Darabonba::Json& j, SubPartnerList& obj) { 
        DARABONBA_PTR_FROM_JSON(Address, address_);
        DARABONBA_PTR_FROM_JSON(AgreementStatus, agreementStatus_);
        DARABONBA_PTR_FROM_JSON(AgreementStatusDesc, agreementStatusDesc_);
        DARABONBA_PTR_FROM_JSON(City, city_);
        DARABONBA_PTR_FROM_JSON(CompanyName, companyName_);
        DARABONBA_PTR_FROM_JSON(Contact, contact_);
        DARABONBA_PTR_FROM_JSON(District, district_);
        DARABONBA_PTR_FROM_JSON(JoinTime, joinTime_);
        DARABONBA_PTR_FROM_JSON(MasterAccount, masterAccount_);
        DARABONBA_PTR_FROM_JSON(MasterUid, masterUid_);
        DARABONBA_PTR_FROM_JSON(Pid, pid_);
        DARABONBA_PTR_FROM_JSON(Province, province_);
      };
      SubPartnerList() = default ;
      SubPartnerList(const SubPartnerList &) = default ;
      SubPartnerList(SubPartnerList &&) = default ;
      SubPartnerList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubPartnerList() = default ;
      SubPartnerList& operator=(const SubPartnerList &) = default ;
      SubPartnerList& operator=(SubPartnerList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->address_ == nullptr
        && this->agreementStatus_ == nullptr && this->agreementStatusDesc_ == nullptr && this->city_ == nullptr && this->companyName_ == nullptr && this->contact_ == nullptr
        && this->district_ == nullptr && this->joinTime_ == nullptr && this->masterAccount_ == nullptr && this->masterUid_ == nullptr && this->pid_ == nullptr
        && this->province_ == nullptr; };
      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline SubPartnerList& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // agreementStatus Field Functions 
      bool hasAgreementStatus() const { return this->agreementStatus_ != nullptr;};
      void deleteAgreementStatus() { this->agreementStatus_ = nullptr;};
      inline string getAgreementStatus() const { DARABONBA_PTR_GET_DEFAULT(agreementStatus_, "") };
      inline SubPartnerList& setAgreementStatus(string agreementStatus) { DARABONBA_PTR_SET_VALUE(agreementStatus_, agreementStatus) };


      // agreementStatusDesc Field Functions 
      bool hasAgreementStatusDesc() const { return this->agreementStatusDesc_ != nullptr;};
      void deleteAgreementStatusDesc() { this->agreementStatusDesc_ = nullptr;};
      inline string getAgreementStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(agreementStatusDesc_, "") };
      inline SubPartnerList& setAgreementStatusDesc(string agreementStatusDesc) { DARABONBA_PTR_SET_VALUE(agreementStatusDesc_, agreementStatusDesc) };


      // city Field Functions 
      bool hasCity() const { return this->city_ != nullptr;};
      void deleteCity() { this->city_ = nullptr;};
      inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
      inline SubPartnerList& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


      // companyName Field Functions 
      bool hasCompanyName() const { return this->companyName_ != nullptr;};
      void deleteCompanyName() { this->companyName_ = nullptr;};
      inline string getCompanyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
      inline SubPartnerList& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


      // contact Field Functions 
      bool hasContact() const { return this->contact_ != nullptr;};
      void deleteContact() { this->contact_ = nullptr;};
      inline string getContact() const { DARABONBA_PTR_GET_DEFAULT(contact_, "") };
      inline SubPartnerList& setContact(string contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };


      // district Field Functions 
      bool hasDistrict() const { return this->district_ != nullptr;};
      void deleteDistrict() { this->district_ = nullptr;};
      inline string getDistrict() const { DARABONBA_PTR_GET_DEFAULT(district_, "") };
      inline SubPartnerList& setDistrict(string district) { DARABONBA_PTR_SET_VALUE(district_, district) };


      // joinTime Field Functions 
      bool hasJoinTime() const { return this->joinTime_ != nullptr;};
      void deleteJoinTime() { this->joinTime_ = nullptr;};
      inline string getJoinTime() const { DARABONBA_PTR_GET_DEFAULT(joinTime_, "") };
      inline SubPartnerList& setJoinTime(string joinTime) { DARABONBA_PTR_SET_VALUE(joinTime_, joinTime) };


      // masterAccount Field Functions 
      bool hasMasterAccount() const { return this->masterAccount_ != nullptr;};
      void deleteMasterAccount() { this->masterAccount_ = nullptr;};
      inline string getMasterAccount() const { DARABONBA_PTR_GET_DEFAULT(masterAccount_, "") };
      inline SubPartnerList& setMasterAccount(string masterAccount) { DARABONBA_PTR_SET_VALUE(masterAccount_, masterAccount) };


      // masterUid Field Functions 
      bool hasMasterUid() const { return this->masterUid_ != nullptr;};
      void deleteMasterUid() { this->masterUid_ = nullptr;};
      inline string getMasterUid() const { DARABONBA_PTR_GET_DEFAULT(masterUid_, "") };
      inline SubPartnerList& setMasterUid(string masterUid) { DARABONBA_PTR_SET_VALUE(masterUid_, masterUid) };


      // pid Field Functions 
      bool hasPid() const { return this->pid_ != nullptr;};
      void deletePid() { this->pid_ = nullptr;};
      inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
      inline SubPartnerList& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


      // province Field Functions 
      bool hasProvince() const { return this->province_ != nullptr;};
      void deleteProvince() { this->province_ = nullptr;};
      inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
      inline SubPartnerList& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    protected:
      // The detailed registered address.
      shared_ptr<string> address_ {};
      // The agreement status code.
      shared_ptr<string> agreementStatus_ {};
      // The description of the agreement status.
      shared_ptr<string> agreementStatusDesc_ {};
      // The city of the registered address.
      shared_ptr<string> city_ {};
      // The name of the secondary distributor.
      shared_ptr<string> companyName_ {};
      // The name of the contact.
      shared_ptr<string> contact_ {};
      // The district or county of the registered address.
      shared_ptr<string> district_ {};
      // The time when the secondary distributor first joined.
      shared_ptr<string> joinTime_ {};
      // The name of the primary account of the secondary distributor.
      shared_ptr<string> masterAccount_ {};
      // The UID of the primary account of the secondary distributor.
      shared_ptr<string> masterUid_ {};
      // The PID of the secondary distributor.
      shared_ptr<string> pid_ {};
      // The province of the registered address.
      shared_ptr<string> province_ {};
    };

    virtual bool empty() const override { return this->message_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->subPartnerList_ == nullptr && this->success_ == nullptr
        && this->total_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSubPartnerListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline string getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, "") };
    inline GetSubPartnerListResponseBody& setPageNo(string pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline GetSubPartnerListResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSubPartnerListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subPartnerList Field Functions 
    bool hasSubPartnerList() const { return this->subPartnerList_ != nullptr;};
    void deleteSubPartnerList() { this->subPartnerList_ = nullptr;};
    inline const vector<GetSubPartnerListResponseBody::SubPartnerList> & getSubPartnerList() const { DARABONBA_PTR_GET_CONST(subPartnerList_, vector<GetSubPartnerListResponseBody::SubPartnerList>) };
    inline vector<GetSubPartnerListResponseBody::SubPartnerList> getSubPartnerList() { DARABONBA_PTR_GET(subPartnerList_, vector<GetSubPartnerListResponseBody::SubPartnerList>) };
    inline GetSubPartnerListResponseBody& setSubPartnerList(const vector<GetSubPartnerListResponseBody::SubPartnerList> & subPartnerList) { DARABONBA_PTR_SET_VALUE(subPartnerList_, subPartnerList) };
    inline GetSubPartnerListResponseBody& setSubPartnerList(vector<GetSubPartnerListResponseBody::SubPartnerList> && subPartnerList) { DARABONBA_PTR_SET_RVALUE(subPartnerList_, subPartnerList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSubPartnerListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetSubPartnerListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The message returned.
    shared_ptr<string> message_ {};
    // The current page number.
    shared_ptr<string> pageNo_ {};
    // The number of secondary distributors returned per page. Maximum value: 100.
    // 
    // This parameter is required.
    shared_ptr<string> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of secondary distributors.
    shared_ptr<vector<GetSubPartnerListResponseBody::SubPartnerList>> subPartnerList_ {};
    // Indicates whether the call was successful.
    shared_ptr<bool> success_ {};
    // The total number of entries that match the query conditions.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20250227
#endif
