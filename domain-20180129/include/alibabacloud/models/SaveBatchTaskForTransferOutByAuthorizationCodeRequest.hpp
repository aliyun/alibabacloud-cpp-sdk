// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEBATCHTASKFORTRANSFEROUTBYAUTHORIZATIONCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEBATCHTASKFORTRANSFEROUTBYAUTHORIZATIONCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SaveBatchTaskForTransferOutByAuthorizationCodeRequestTransferOutParamList.hpp>
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
    virtual bool empty() const override { return this->transferOutParamList_ == nullptr; };
    // transferOutParamList Field Functions 
    bool hasTransferOutParamList() const { return this->transferOutParamList_ != nullptr;};
    void deleteTransferOutParamList() { this->transferOutParamList_ = nullptr;};
    inline const vector<SaveBatchTaskForTransferOutByAuthorizationCodeRequestTransferOutParamList> & transferOutParamList() const { DARABONBA_PTR_GET_CONST(transferOutParamList_, vector<SaveBatchTaskForTransferOutByAuthorizationCodeRequestTransferOutParamList>) };
    inline vector<SaveBatchTaskForTransferOutByAuthorizationCodeRequestTransferOutParamList> transferOutParamList() { DARABONBA_PTR_GET(transferOutParamList_, vector<SaveBatchTaskForTransferOutByAuthorizationCodeRequestTransferOutParamList>) };
    inline SaveBatchTaskForTransferOutByAuthorizationCodeRequest& setTransferOutParamList(const vector<SaveBatchTaskForTransferOutByAuthorizationCodeRequestTransferOutParamList> & transferOutParamList) { DARABONBA_PTR_SET_VALUE(transferOutParamList_, transferOutParamList) };
    inline SaveBatchTaskForTransferOutByAuthorizationCodeRequest& setTransferOutParamList(vector<SaveBatchTaskForTransferOutByAuthorizationCodeRequestTransferOutParamList> && transferOutParamList) { DARABONBA_PTR_SET_RVALUE(transferOutParamList_, transferOutParamList) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<SaveBatchTaskForTransferOutByAuthorizationCodeRequestTransferOutParamList>> transferOutParamList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
