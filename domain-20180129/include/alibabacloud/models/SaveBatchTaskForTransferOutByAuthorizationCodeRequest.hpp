// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEBATCHTASKFORTRANSFEROUTBYAUTHORIZATIONCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEBATCHTASKFORTRANSFEROUTBYAUTHORIZATIONCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveBatchTaskForTransferOutByAuthorizationCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveBatchTaskForTransferOutByAuthorizationCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TransferOutParamList, transferOutParamList_);
    };
    friend void from_json(const Darabonba::Json& j, SaveBatchTaskForTransferOutByAuthorizationCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TransferOutParamList, transferOutParamList_);
    };
    SaveBatchTaskForTransferOutByAuthorizationCodeRequest() = default ;
    SaveBatchTaskForTransferOutByAuthorizationCodeRequest(const SaveBatchTaskForTransferOutByAuthorizationCodeRequest &) = default ;
    SaveBatchTaskForTransferOutByAuthorizationCodeRequest(SaveBatchTaskForTransferOutByAuthorizationCodeRequest &&) = default ;
    SaveBatchTaskForTransferOutByAuthorizationCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveBatchTaskForTransferOutByAuthorizationCodeRequest() = default ;
    SaveBatchTaskForTransferOutByAuthorizationCodeRequest& operator=(const SaveBatchTaskForTransferOutByAuthorizationCodeRequest &) = default ;
    SaveBatchTaskForTransferOutByAuthorizationCodeRequest& operator=(SaveBatchTaskForTransferOutByAuthorizationCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TransferOutParamList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TransferOutParamList& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizationCode, authorizationCode_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      };
      friend void from_json(const Darabonba::Json& j, TransferOutParamList& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizationCode, authorizationCode_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      };
      TransferOutParamList() = default ;
      TransferOutParamList(const TransferOutParamList &) = default ;
      TransferOutParamList(TransferOutParamList &&) = default ;
      TransferOutParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TransferOutParamList() = default ;
      TransferOutParamList& operator=(const TransferOutParamList &) = default ;
      TransferOutParamList& operator=(TransferOutParamList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authorizationCode_ == nullptr
        && this->domainName_ == nullptr; };
      // authorizationCode Field Functions 
      bool hasAuthorizationCode() const { return this->authorizationCode_ != nullptr;};
      void deleteAuthorizationCode() { this->authorizationCode_ = nullptr;};
      inline string getAuthorizationCode() const { DARABONBA_PTR_GET_DEFAULT(authorizationCode_, "") };
      inline TransferOutParamList& setAuthorizationCode(string authorizationCode) { DARABONBA_PTR_SET_VALUE(authorizationCode_, authorizationCode) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline TransferOutParamList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    protected:
      shared_ptr<string> authorizationCode_ {};
      shared_ptr<string> domainName_ {};
    };

    virtual bool empty() const override { return this->transferOutParamList_ == nullptr; };
    // transferOutParamList Field Functions 
    bool hasTransferOutParamList() const { return this->transferOutParamList_ != nullptr;};
    void deleteTransferOutParamList() { this->transferOutParamList_ = nullptr;};
    inline const vector<SaveBatchTaskForTransferOutByAuthorizationCodeRequest::TransferOutParamList> & getTransferOutParamList() const { DARABONBA_PTR_GET_CONST(transferOutParamList_, vector<SaveBatchTaskForTransferOutByAuthorizationCodeRequest::TransferOutParamList>) };
    inline vector<SaveBatchTaskForTransferOutByAuthorizationCodeRequest::TransferOutParamList> getTransferOutParamList() { DARABONBA_PTR_GET(transferOutParamList_, vector<SaveBatchTaskForTransferOutByAuthorizationCodeRequest::TransferOutParamList>) };
    inline SaveBatchTaskForTransferOutByAuthorizationCodeRequest& setTransferOutParamList(const vector<SaveBatchTaskForTransferOutByAuthorizationCodeRequest::TransferOutParamList> & transferOutParamList) { DARABONBA_PTR_SET_VALUE(transferOutParamList_, transferOutParamList) };
    inline SaveBatchTaskForTransferOutByAuthorizationCodeRequest& setTransferOutParamList(vector<SaveBatchTaskForTransferOutByAuthorizationCodeRequest::TransferOutParamList> && transferOutParamList) { DARABONBA_PTR_SET_RVALUE(transferOutParamList_, transferOutParamList) };


  protected:
    // This parameter is required.
    shared_ptr<vector<SaveBatchTaskForTransferOutByAuthorizationCodeRequest::TransferOutParamList>> transferOutParamList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
