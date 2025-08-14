// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIAGENTPHONENUMBERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAIAGENTPHONENUMBERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAIAgentPhoneNumberResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIAgentPhoneNumberResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIAgentPhoneNumberResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListAIAgentPhoneNumberResponseBodyData() = default ;
    ListAIAgentPhoneNumberResponseBodyData(const ListAIAgentPhoneNumberResponseBodyData &) = default ;
    ListAIAgentPhoneNumberResponseBodyData(ListAIAgentPhoneNumberResponseBodyData &&) = default ;
    ListAIAgentPhoneNumberResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIAgentPhoneNumberResponseBodyData() = default ;
    ListAIAgentPhoneNumberResponseBodyData& operator=(const ListAIAgentPhoneNumberResponseBodyData &) = default ;
    ListAIAgentPhoneNumberResponseBodyData& operator=(ListAIAgentPhoneNumberResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->phoneNumber_ != nullptr
        && this->status_ != nullptr; };
    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline ListAIAgentPhoneNumberResponseBodyData& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListAIAgentPhoneNumberResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> phoneNumber_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
