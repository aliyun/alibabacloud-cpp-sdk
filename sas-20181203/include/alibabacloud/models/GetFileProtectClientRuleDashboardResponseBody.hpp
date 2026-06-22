// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEPROTECTCLIENTRULEDASHBOARDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILEPROTECTCLIENTRULEDASHBOARDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetFileProtectClientRuleDashboardResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileProtectClientRuleDashboardResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileProtectClientRuleDashboardResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFileProtectClientRuleDashboardResponseBody() = default ;
    GetFileProtectClientRuleDashboardResponseBody(const GetFileProtectClientRuleDashboardResponseBody &) = default ;
    GetFileProtectClientRuleDashboardResponseBody(GetFileProtectClientRuleDashboardResponseBody &&) = default ;
    GetFileProtectClientRuleDashboardResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileProtectClientRuleDashboardResponseBody() = default ;
    GetFileProtectClientRuleDashboardResponseBody& operator=(const GetFileProtectClientRuleDashboardResponseBody &) = default ;
    GetFileProtectClientRuleDashboardResponseBody& operator=(GetFileProtectClientRuleDashboardResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuthTotal, authTotal_);
        DARABONBA_PTR_TO_JSON(BindCount, bindCount_);
        DARABONBA_PTR_TO_JSON(ProtectedDirectoriesCount, protectedDirectoriesCount_);
        DARABONBA_PTR_TO_JSON(ProtectedInstancesCount, protectedInstancesCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthTotal, authTotal_);
        DARABONBA_PTR_FROM_JSON(BindCount, bindCount_);
        DARABONBA_PTR_FROM_JSON(ProtectedDirectoriesCount, protectedDirectoriesCount_);
        DARABONBA_PTR_FROM_JSON(ProtectedInstancesCount, protectedInstancesCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authTotal_ == nullptr
        && this->bindCount_ == nullptr && this->protectedDirectoriesCount_ == nullptr && this->protectedInstancesCount_ == nullptr; };
      // authTotal Field Functions 
      bool hasAuthTotal() const { return this->authTotal_ != nullptr;};
      void deleteAuthTotal() { this->authTotal_ = nullptr;};
      inline string getAuthTotal() const { DARABONBA_PTR_GET_DEFAULT(authTotal_, "") };
      inline Data& setAuthTotal(string authTotal) { DARABONBA_PTR_SET_VALUE(authTotal_, authTotal) };


      // bindCount Field Functions 
      bool hasBindCount() const { return this->bindCount_ != nullptr;};
      void deleteBindCount() { this->bindCount_ = nullptr;};
      inline int32_t getBindCount() const { DARABONBA_PTR_GET_DEFAULT(bindCount_, 0) };
      inline Data& setBindCount(int32_t bindCount) { DARABONBA_PTR_SET_VALUE(bindCount_, bindCount) };


      // protectedDirectoriesCount Field Functions 
      bool hasProtectedDirectoriesCount() const { return this->protectedDirectoriesCount_ != nullptr;};
      void deleteProtectedDirectoriesCount() { this->protectedDirectoriesCount_ = nullptr;};
      inline int32_t getProtectedDirectoriesCount() const { DARABONBA_PTR_GET_DEFAULT(protectedDirectoriesCount_, 0) };
      inline Data& setProtectedDirectoriesCount(int32_t protectedDirectoriesCount) { DARABONBA_PTR_SET_VALUE(protectedDirectoriesCount_, protectedDirectoriesCount) };


      // protectedInstancesCount Field Functions 
      bool hasProtectedInstancesCount() const { return this->protectedInstancesCount_ != nullptr;};
      void deleteProtectedInstancesCount() { this->protectedInstancesCount_ = nullptr;};
      inline int32_t getProtectedInstancesCount() const { DARABONBA_PTR_GET_DEFAULT(protectedInstancesCount_, 0) };
      inline Data& setProtectedInstancesCount(int32_t protectedInstancesCount) { DARABONBA_PTR_SET_VALUE(protectedInstancesCount_, protectedInstancesCount) };


    protected:
      // The total number of web tamper-proofing licenses.
      shared_ptr<string> authTotal_ {};
      // The number of bound tamper-proofing licenses.
      shared_ptr<int32_t> bindCount_ {};
      // The total number of web tamper-proofing rules.
      shared_ptr<int32_t> protectedDirectoriesCount_ {};
      // The total number of online web tamper-proofing clients.
      shared_ptr<int32_t> protectedInstancesCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetFileProtectClientRuleDashboardResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetFileProtectClientRuleDashboardResponseBody::Data) };
    inline GetFileProtectClientRuleDashboardResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetFileProtectClientRuleDashboardResponseBody::Data) };
    inline GetFileProtectClientRuleDashboardResponseBody& setData(const GetFileProtectClientRuleDashboardResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFileProtectClientRuleDashboardResponseBody& setData(GetFileProtectClientRuleDashboardResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFileProtectClientRuleDashboardResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned when the API call is successful.
    shared_ptr<GetFileProtectClientRuleDashboardResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
