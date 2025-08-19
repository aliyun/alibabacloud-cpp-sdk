// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTDELETIONCHECKRESULTRESPONSEBODYACCOUNTDELETIONCHECKRESULTINFOABANDONABLECHECKS_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTDELETIONCHECKRESULTRESPONSEBODYACCOUNTDELETIONCHECKRESULTINFOABANDONABLECHECKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckName, checkName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckName, checkName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks() = default ;
    GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks(const GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks &) = default ;
    GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks(GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks &&) = default ;
    GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks() = default ;
    GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks& operator=(const GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks &) = default ;
    GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks& operator=(GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkId_ != nullptr
        && this->checkName_ != nullptr && this->description_ != nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline string checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
    inline GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkName Field Functions 
    bool hasCheckName() const { return this->checkName_ != nullptr;};
    void deleteCheckName() { this->checkName_ = nullptr;};
    inline string checkName() const { DARABONBA_PTR_GET_DEFAULT(checkName_, "") };
    inline GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks& setCheckName(string checkName) { DARABONBA_PTR_SET_VALUE(checkName_, checkName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // The ID of the check item.
    std::shared_ptr<string> checkId_ = nullptr;
    // The name of the cloud service to which the check item belongs.
    std::shared_ptr<string> checkName_ = nullptr;
    // The description of the check item.
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
