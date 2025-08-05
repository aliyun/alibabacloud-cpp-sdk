// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTTARGETSRESPONSEBODYDATAERRORENTRIES_HPP_
#define ALIBABACLOUD_MODELS_PUTTARGETSRESPONSEBODYDATAERRORENTRIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class PutTargetsResponseBodyDataErrorEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutTargetsResponseBodyDataErrorEntries& obj) { 
      DARABONBA_PTR_TO_JSON(EntryId, entryId_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
    };
    friend void from_json(const Darabonba::Json& j, PutTargetsResponseBodyDataErrorEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(EntryId, entryId_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
    };
    PutTargetsResponseBodyDataErrorEntries() = default ;
    PutTargetsResponseBodyDataErrorEntries(const PutTargetsResponseBodyDataErrorEntries &) = default ;
    PutTargetsResponseBodyDataErrorEntries(PutTargetsResponseBodyDataErrorEntries &&) = default ;
    PutTargetsResponseBodyDataErrorEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutTargetsResponseBodyDataErrorEntries() = default ;
    PutTargetsResponseBodyDataErrorEntries& operator=(const PutTargetsResponseBodyDataErrorEntries &) = default ;
    PutTargetsResponseBodyDataErrorEntries& operator=(PutTargetsResponseBodyDataErrorEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entryId_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr; };
    // entryId Field Functions 
    bool hasEntryId() const { return this->entryId_ != nullptr;};
    void deleteEntryId() { this->entryId_ = nullptr;};
    inline string entryId() const { DARABONBA_PTR_GET_DEFAULT(entryId_, "") };
    inline PutTargetsResponseBodyDataErrorEntries& setEntryId(string entryId) { DARABONBA_PTR_SET_VALUE(entryId_, entryId) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline PutTargetsResponseBodyDataErrorEntries& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline PutTargetsResponseBodyDataErrorEntries& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


  protected:
    // The ID of the failed event target.
    std::shared_ptr<string> entryId_ = nullptr;
    // The error code returned.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> errorMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
