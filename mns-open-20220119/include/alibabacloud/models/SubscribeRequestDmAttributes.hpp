// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIBEREQUESTDMATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIBEREQUESTDMATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class SubscribeRequestDmAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubscribeRequestDmAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(Subject, subject_);
    };
    friend void from_json(const Darabonba::Json& j, SubscribeRequestDmAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(Subject, subject_);
    };
    SubscribeRequestDmAttributes() = default ;
    SubscribeRequestDmAttributes(const SubscribeRequestDmAttributes &) = default ;
    SubscribeRequestDmAttributes(SubscribeRequestDmAttributes &&) = default ;
    SubscribeRequestDmAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubscribeRequestDmAttributes() = default ;
    SubscribeRequestDmAttributes& operator=(const SubscribeRequestDmAttributes &) = default ;
    SubscribeRequestDmAttributes& operator=(SubscribeRequestDmAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->subject_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline SubscribeRequestDmAttributes& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline SubscribeRequestDmAttributes& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


  protected:
    std::shared_ptr<string> accountName_ = nullptr;
    std::shared_ptr<string> subject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
