// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVEDATABASESTONETWORKDOMAINRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_MOVEDATABASESTONETWORKDOMAINRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class MoveDatabasesToNetworkDomainResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveDatabasesToNetworkDomainResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, MoveDatabasesToNetworkDomainResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    MoveDatabasesToNetworkDomainResponseBodyResults() = default ;
    MoveDatabasesToNetworkDomainResponseBodyResults(const MoveDatabasesToNetworkDomainResponseBodyResults &) = default ;
    MoveDatabasesToNetworkDomainResponseBodyResults(MoveDatabasesToNetworkDomainResponseBodyResults &&) = default ;
    MoveDatabasesToNetworkDomainResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveDatabasesToNetworkDomainResponseBodyResults() = default ;
    MoveDatabasesToNetworkDomainResponseBodyResults& operator=(const MoveDatabasesToNetworkDomainResponseBodyResults &) = default ;
    MoveDatabasesToNetworkDomainResponseBodyResults& operator=(MoveDatabasesToNetworkDomainResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->databaseId_ == nullptr && return this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MoveDatabasesToNetworkDomainResponseBodyResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline MoveDatabasesToNetworkDomainResponseBodyResults& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MoveDatabasesToNetworkDomainResponseBodyResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // Indicates whether the database is added to the network domain.
    // 
    // > The code LICENSE_OUT_OF_LIMIT indicates that the network domain feature is not supported by the current Bastionhost edition.
    std::shared_ptr<string> code_ = nullptr;
    // The database ID.
    std::shared_ptr<string> databaseId_ = nullptr;
    // The error message that is returned.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
