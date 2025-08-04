// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMARTAUDITRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSMARTAUDITRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSmartAuditResultResponseBodyDataErrorItemDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetSmartAuditResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmartAuditResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorItemDetails, errorItemDetails_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmartAuditResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorItemDetails, errorItemDetails_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetSmartAuditResultResponseBodyData() = default ;
    GetSmartAuditResultResponseBodyData(const GetSmartAuditResultResponseBodyData &) = default ;
    GetSmartAuditResultResponseBodyData(GetSmartAuditResultResponseBodyData &&) = default ;
    GetSmartAuditResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmartAuditResultResponseBodyData() = default ;
    GetSmartAuditResultResponseBodyData& operator=(const GetSmartAuditResultResponseBodyData &) = default ;
    GetSmartAuditResultResponseBodyData& operator=(GetSmartAuditResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorItemDetails_ != nullptr
        && this->errorMessage_ != nullptr && this->status_ != nullptr; };
    // errorItemDetails Field Functions 
    bool hasErrorItemDetails() const { return this->errorItemDetails_ != nullptr;};
    void deleteErrorItemDetails() { this->errorItemDetails_ = nullptr;};
    inline const vector<Models::GetSmartAuditResultResponseBodyDataErrorItemDetails> & errorItemDetails() const { DARABONBA_PTR_GET_CONST(errorItemDetails_, vector<Models::GetSmartAuditResultResponseBodyDataErrorItemDetails>) };
    inline vector<Models::GetSmartAuditResultResponseBodyDataErrorItemDetails> errorItemDetails() { DARABONBA_PTR_GET(errorItemDetails_, vector<Models::GetSmartAuditResultResponseBodyDataErrorItemDetails>) };
    inline GetSmartAuditResultResponseBodyData& setErrorItemDetails(const vector<Models::GetSmartAuditResultResponseBodyDataErrorItemDetails> & errorItemDetails) { DARABONBA_PTR_SET_VALUE(errorItemDetails_, errorItemDetails) };
    inline GetSmartAuditResultResponseBodyData& setErrorItemDetails(vector<Models::GetSmartAuditResultResponseBodyDataErrorItemDetails> && errorItemDetails) { DARABONBA_PTR_SET_RVALUE(errorItemDetails_, errorItemDetails) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetSmartAuditResultResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSmartAuditResultResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<vector<Models::GetSmartAuditResultResponseBodyDataErrorItemDetails>> errorItemDetails_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
