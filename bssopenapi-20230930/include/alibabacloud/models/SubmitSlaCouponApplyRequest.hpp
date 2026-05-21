// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSLACOUPONAPPLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSLACOUPONAPPLYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class SubmitSlaCouponApplyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSlaCouponApplyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DamagedIds, damagedIds_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_TO_JSON(Month, month_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSlaCouponApplyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DamagedIds, damagedIds_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_FROM_JSON(Month, month_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
    };
    SubmitSlaCouponApplyRequest() = default ;
    SubmitSlaCouponApplyRequest(const SubmitSlaCouponApplyRequest &) = default ;
    SubmitSlaCouponApplyRequest(SubmitSlaCouponApplyRequest &&) = default ;
    SubmitSlaCouponApplyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSlaCouponApplyRequest() = default ;
    SubmitSlaCouponApplyRequest& operator=(const SubmitSlaCouponApplyRequest &) = default ;
    SubmitSlaCouponApplyRequest& operator=(SubmitSlaCouponApplyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EcIdAccountIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EcIdAccountIds& obj) { 
        DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
        DARABONBA_PTR_TO_JSON(EcId, ecId_);
      };
      friend void from_json(const Darabonba::Json& j, EcIdAccountIds& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
        DARABONBA_PTR_FROM_JSON(EcId, ecId_);
      };
      EcIdAccountIds() = default ;
      EcIdAccountIds(const EcIdAccountIds &) = default ;
      EcIdAccountIds(EcIdAccountIds &&) = default ;
      EcIdAccountIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EcIdAccountIds() = default ;
      EcIdAccountIds& operator=(const EcIdAccountIds &) = default ;
      EcIdAccountIds& operator=(EcIdAccountIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->ecId_ == nullptr; };
      // accountIds Field Functions 
      bool hasAccountIds() const { return this->accountIds_ != nullptr;};
      void deleteAccountIds() { this->accountIds_ = nullptr;};
      inline const vector<int64_t> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<int64_t>) };
      inline vector<int64_t> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<int64_t>) };
      inline EcIdAccountIds& setAccountIds(const vector<int64_t> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
      inline EcIdAccountIds& setAccountIds(vector<int64_t> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


      // ecId Field Functions 
      bool hasEcId() const { return this->ecId_ != nullptr;};
      void deleteEcId() { this->ecId_ = nullptr;};
      inline string getEcId() const { DARABONBA_PTR_GET_DEFAULT(ecId_, "") };
      inline EcIdAccountIds& setEcId(string ecId) { DARABONBA_PTR_SET_VALUE(ecId_, ecId) };


    protected:
      shared_ptr<vector<int64_t>> accountIds_ {};
      shared_ptr<string> ecId_ {};
    };

    virtual bool empty() const override { return this->damagedIds_ == nullptr
        && this->ecIdAccountIds_ == nullptr && this->month_ == nullptr && this->nbid_ == nullptr; };
    // damagedIds Field Functions 
    bool hasDamagedIds() const { return this->damagedIds_ != nullptr;};
    void deleteDamagedIds() { this->damagedIds_ = nullptr;};
    inline const vector<string> & getDamagedIds() const { DARABONBA_PTR_GET_CONST(damagedIds_, vector<string>) };
    inline vector<string> getDamagedIds() { DARABONBA_PTR_GET(damagedIds_, vector<string>) };
    inline SubmitSlaCouponApplyRequest& setDamagedIds(const vector<string> & damagedIds) { DARABONBA_PTR_SET_VALUE(damagedIds_, damagedIds) };
    inline SubmitSlaCouponApplyRequest& setDamagedIds(vector<string> && damagedIds) { DARABONBA_PTR_SET_RVALUE(damagedIds_, damagedIds) };


    // ecIdAccountIds Field Functions 
    bool hasEcIdAccountIds() const { return this->ecIdAccountIds_ != nullptr;};
    void deleteEcIdAccountIds() { this->ecIdAccountIds_ = nullptr;};
    inline const vector<SubmitSlaCouponApplyRequest::EcIdAccountIds> & getEcIdAccountIds() const { DARABONBA_PTR_GET_CONST(ecIdAccountIds_, vector<SubmitSlaCouponApplyRequest::EcIdAccountIds>) };
    inline vector<SubmitSlaCouponApplyRequest::EcIdAccountIds> getEcIdAccountIds() { DARABONBA_PTR_GET(ecIdAccountIds_, vector<SubmitSlaCouponApplyRequest::EcIdAccountIds>) };
    inline SubmitSlaCouponApplyRequest& setEcIdAccountIds(const vector<SubmitSlaCouponApplyRequest::EcIdAccountIds> & ecIdAccountIds) { DARABONBA_PTR_SET_VALUE(ecIdAccountIds_, ecIdAccountIds) };
    inline SubmitSlaCouponApplyRequest& setEcIdAccountIds(vector<SubmitSlaCouponApplyRequest::EcIdAccountIds> && ecIdAccountIds) { DARABONBA_PTR_SET_RVALUE(ecIdAccountIds_, ecIdAccountIds) };


    // month Field Functions 
    bool hasMonth() const { return this->month_ != nullptr;};
    void deleteMonth() { this->month_ = nullptr;};
    inline int32_t getMonth() const { DARABONBA_PTR_GET_DEFAULT(month_, 0) };
    inline SubmitSlaCouponApplyRequest& setMonth(int32_t month) { DARABONBA_PTR_SET_VALUE(month_, month) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline SubmitSlaCouponApplyRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


  protected:
    shared_ptr<vector<string>> damagedIds_ {};
    shared_ptr<vector<SubmitSlaCouponApplyRequest::EcIdAccountIds>> ecIdAccountIds_ {};
    // This parameter is required.
    shared_ptr<int32_t> month_ {};
    shared_ptr<string> nbid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
