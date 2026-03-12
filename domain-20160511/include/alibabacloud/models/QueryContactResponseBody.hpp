// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTACTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTACTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20160511
{
namespace Models
{
  class QueryContactResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryContactResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CCity, CCity_);
      DARABONBA_PTR_TO_JSON(CCompany, CCompany_);
      DARABONBA_PTR_TO_JSON(CCountry, CCountry_);
      DARABONBA_PTR_TO_JSON(CName, CName_);
      DARABONBA_PTR_TO_JSON(CProvince, CProvince_);
      DARABONBA_PTR_TO_JSON(CVenu, CVenu_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(ECity, ECity_);
      DARABONBA_PTR_TO_JSON(ECompany, ECompany_);
      DARABONBA_PTR_TO_JSON(EName, EName_);
      DARABONBA_PTR_TO_JSON(EProvince, EProvince_);
      DARABONBA_PTR_TO_JSON(EVenu, EVenu_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(PostalCode, postalCode_);
      DARABONBA_PTR_TO_JSON(RegType, regType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TelArea, telArea_);
      DARABONBA_PTR_TO_JSON(TelExt, telExt_);
      DARABONBA_PTR_TO_JSON(TelMain, telMain_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
    };
    friend void from_json(const Darabonba::Json& j, QueryContactResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CCity, CCity_);
      DARABONBA_PTR_FROM_JSON(CCompany, CCompany_);
      DARABONBA_PTR_FROM_JSON(CCountry, CCountry_);
      DARABONBA_PTR_FROM_JSON(CName, CName_);
      DARABONBA_PTR_FROM_JSON(CProvince, CProvince_);
      DARABONBA_PTR_FROM_JSON(CVenu, CVenu_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(ECity, ECity_);
      DARABONBA_PTR_FROM_JSON(ECompany, ECompany_);
      DARABONBA_PTR_FROM_JSON(EName, EName_);
      DARABONBA_PTR_FROM_JSON(EProvince, EProvince_);
      DARABONBA_PTR_FROM_JSON(EVenu, EVenu_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(PostalCode, postalCode_);
      DARABONBA_PTR_FROM_JSON(RegType, regType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TelArea, telArea_);
      DARABONBA_PTR_FROM_JSON(TelExt, telExt_);
      DARABONBA_PTR_FROM_JSON(TelMain, telMain_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
    };
    QueryContactResponseBody() = default ;
    QueryContactResponseBody(const QueryContactResponseBody &) = default ;
    QueryContactResponseBody(QueryContactResponseBody &&) = default ;
    QueryContactResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryContactResponseBody() = default ;
    QueryContactResponseBody& operator=(const QueryContactResponseBody &) = default ;
    QueryContactResponseBody& operator=(QueryContactResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CCity_ == nullptr
        && this->CCompany_ == nullptr && this->CCountry_ == nullptr && this->CName_ == nullptr && this->CProvince_ == nullptr && this->CVenu_ == nullptr
        && this->createDate_ == nullptr && this->ECity_ == nullptr && this->ECompany_ == nullptr && this->EName_ == nullptr && this->EProvince_ == nullptr
        && this->EVenu_ == nullptr && this->email_ == nullptr && this->postalCode_ == nullptr && this->regType_ == nullptr && this->requestId_ == nullptr
        && this->telArea_ == nullptr && this->telExt_ == nullptr && this->telMain_ == nullptr && this->updateDate_ == nullptr; };
    // CCity Field Functions 
    bool hasCCity() const { return this->CCity_ != nullptr;};
    void deleteCCity() { this->CCity_ = nullptr;};
    inline string getCCity() const { DARABONBA_PTR_GET_DEFAULT(CCity_, "") };
    inline QueryContactResponseBody& setCCity(string CCity) { DARABONBA_PTR_SET_VALUE(CCity_, CCity) };


    // CCompany Field Functions 
    bool hasCCompany() const { return this->CCompany_ != nullptr;};
    void deleteCCompany() { this->CCompany_ = nullptr;};
    inline string getCCompany() const { DARABONBA_PTR_GET_DEFAULT(CCompany_, "") };
    inline QueryContactResponseBody& setCCompany(string CCompany) { DARABONBA_PTR_SET_VALUE(CCompany_, CCompany) };


    // CCountry Field Functions 
    bool hasCCountry() const { return this->CCountry_ != nullptr;};
    void deleteCCountry() { this->CCountry_ = nullptr;};
    inline string getCCountry() const { DARABONBA_PTR_GET_DEFAULT(CCountry_, "") };
    inline QueryContactResponseBody& setCCountry(string CCountry) { DARABONBA_PTR_SET_VALUE(CCountry_, CCountry) };


    // CName Field Functions 
    bool hasCName() const { return this->CName_ != nullptr;};
    void deleteCName() { this->CName_ = nullptr;};
    inline string getCName() const { DARABONBA_PTR_GET_DEFAULT(CName_, "") };
    inline QueryContactResponseBody& setCName(string CName) { DARABONBA_PTR_SET_VALUE(CName_, CName) };


    // CProvince Field Functions 
    bool hasCProvince() const { return this->CProvince_ != nullptr;};
    void deleteCProvince() { this->CProvince_ = nullptr;};
    inline string getCProvince() const { DARABONBA_PTR_GET_DEFAULT(CProvince_, "") };
    inline QueryContactResponseBody& setCProvince(string CProvince) { DARABONBA_PTR_SET_VALUE(CProvince_, CProvince) };


    // CVenu Field Functions 
    bool hasCVenu() const { return this->CVenu_ != nullptr;};
    void deleteCVenu() { this->CVenu_ = nullptr;};
    inline string getCVenu() const { DARABONBA_PTR_GET_DEFAULT(CVenu_, "") };
    inline QueryContactResponseBody& setCVenu(string CVenu) { DARABONBA_PTR_SET_VALUE(CVenu_, CVenu) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline QueryContactResponseBody& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // ECity Field Functions 
    bool hasECity() const { return this->ECity_ != nullptr;};
    void deleteECity() { this->ECity_ = nullptr;};
    inline string getECity() const { DARABONBA_PTR_GET_DEFAULT(ECity_, "") };
    inline QueryContactResponseBody& setECity(string ECity) { DARABONBA_PTR_SET_VALUE(ECity_, ECity) };


    // ECompany Field Functions 
    bool hasECompany() const { return this->ECompany_ != nullptr;};
    void deleteECompany() { this->ECompany_ = nullptr;};
    inline string getECompany() const { DARABONBA_PTR_GET_DEFAULT(ECompany_, "") };
    inline QueryContactResponseBody& setECompany(string ECompany) { DARABONBA_PTR_SET_VALUE(ECompany_, ECompany) };


    // EName Field Functions 
    bool hasEName() const { return this->EName_ != nullptr;};
    void deleteEName() { this->EName_ = nullptr;};
    inline string getEName() const { DARABONBA_PTR_GET_DEFAULT(EName_, "") };
    inline QueryContactResponseBody& setEName(string EName) { DARABONBA_PTR_SET_VALUE(EName_, EName) };


    // EProvince Field Functions 
    bool hasEProvince() const { return this->EProvince_ != nullptr;};
    void deleteEProvince() { this->EProvince_ = nullptr;};
    inline string getEProvince() const { DARABONBA_PTR_GET_DEFAULT(EProvince_, "") };
    inline QueryContactResponseBody& setEProvince(string EProvince) { DARABONBA_PTR_SET_VALUE(EProvince_, EProvince) };


    // EVenu Field Functions 
    bool hasEVenu() const { return this->EVenu_ != nullptr;};
    void deleteEVenu() { this->EVenu_ = nullptr;};
    inline string getEVenu() const { DARABONBA_PTR_GET_DEFAULT(EVenu_, "") };
    inline QueryContactResponseBody& setEVenu(string EVenu) { DARABONBA_PTR_SET_VALUE(EVenu_, EVenu) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline QueryContactResponseBody& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // postalCode Field Functions 
    bool hasPostalCode() const { return this->postalCode_ != nullptr;};
    void deletePostalCode() { this->postalCode_ = nullptr;};
    inline string getPostalCode() const { DARABONBA_PTR_GET_DEFAULT(postalCode_, "") };
    inline QueryContactResponseBody& setPostalCode(string postalCode) { DARABONBA_PTR_SET_VALUE(postalCode_, postalCode) };


    // regType Field Functions 
    bool hasRegType() const { return this->regType_ != nullptr;};
    void deleteRegType() { this->regType_ = nullptr;};
    inline string getRegType() const { DARABONBA_PTR_GET_DEFAULT(regType_, "") };
    inline QueryContactResponseBody& setRegType(string regType) { DARABONBA_PTR_SET_VALUE(regType_, regType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryContactResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // telArea Field Functions 
    bool hasTelArea() const { return this->telArea_ != nullptr;};
    void deleteTelArea() { this->telArea_ = nullptr;};
    inline string getTelArea() const { DARABONBA_PTR_GET_DEFAULT(telArea_, "") };
    inline QueryContactResponseBody& setTelArea(string telArea) { DARABONBA_PTR_SET_VALUE(telArea_, telArea) };


    // telExt Field Functions 
    bool hasTelExt() const { return this->telExt_ != nullptr;};
    void deleteTelExt() { this->telExt_ = nullptr;};
    inline string getTelExt() const { DARABONBA_PTR_GET_DEFAULT(telExt_, "") };
    inline QueryContactResponseBody& setTelExt(string telExt) { DARABONBA_PTR_SET_VALUE(telExt_, telExt) };


    // telMain Field Functions 
    bool hasTelMain() const { return this->telMain_ != nullptr;};
    void deleteTelMain() { this->telMain_ = nullptr;};
    inline string getTelMain() const { DARABONBA_PTR_GET_DEFAULT(telMain_, "") };
    inline QueryContactResponseBody& setTelMain(string telMain) { DARABONBA_PTR_SET_VALUE(telMain_, telMain) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline QueryContactResponseBody& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


  protected:
    shared_ptr<string> CCity_ {};
    shared_ptr<string> CCompany_ {};
    shared_ptr<string> CCountry_ {};
    shared_ptr<string> CName_ {};
    shared_ptr<string> CProvince_ {};
    shared_ptr<string> CVenu_ {};
    shared_ptr<string> createDate_ {};
    shared_ptr<string> ECity_ {};
    shared_ptr<string> ECompany_ {};
    shared_ptr<string> EName_ {};
    shared_ptr<string> EProvince_ {};
    shared_ptr<string> EVenu_ {};
    shared_ptr<string> email_ {};
    shared_ptr<string> postalCode_ {};
    shared_ptr<string> regType_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> telArea_ {};
    shared_ptr<string> telExt_ {};
    shared_ptr<string> telMain_ {};
    shared_ptr<string> updateDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20160511
#endif
