// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGRESERVEPOLICY_HPP_
#define ALIBABACLOUD_MODELS_LOGRESERVEPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class LogReservePolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LogReservePolicy& obj) { 
      DARABONBA_PTR_TO_JSON(expirationDays, expirationDays_);
      DARABONBA_PTR_TO_JSON(openHistory, openHistory_);
    };
    friend void from_json(const Darabonba::Json& j, LogReservePolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(expirationDays, expirationDays_);
      DARABONBA_PTR_FROM_JSON(openHistory, openHistory_);
    };
    LogReservePolicy() = default ;
    LogReservePolicy(const LogReservePolicy &) = default ;
    LogReservePolicy(LogReservePolicy &&) = default ;
    LogReservePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LogReservePolicy() = default ;
    LogReservePolicy& operator=(const LogReservePolicy &) = default ;
    LogReservePolicy& operator=(LogReservePolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expirationDays_ == nullptr
        && return this->openHistory_ == nullptr; };
    // expirationDays Field Functions 
    bool hasExpirationDays() const { return this->expirationDays_ != nullptr;};
    void deleteExpirationDays() { this->expirationDays_ = nullptr;};
    inline int64_t expirationDays() const { DARABONBA_PTR_GET_DEFAULT(expirationDays_, 0L) };
    inline LogReservePolicy& setExpirationDays(int64_t expirationDays) { DARABONBA_PTR_SET_VALUE(expirationDays_, expirationDays) };


    // openHistory Field Functions 
    bool hasOpenHistory() const { return this->openHistory_ != nullptr;};
    void deleteOpenHistory() { this->openHistory_ = nullptr;};
    inline bool openHistory() const { DARABONBA_PTR_GET_DEFAULT(openHistory_, false) };
    inline LogReservePolicy& setOpenHistory(bool openHistory) { DARABONBA_PTR_SET_VALUE(openHistory_, openHistory) };


  protected:
    std::shared_ptr<int64_t> expirationDays_ = nullptr;
    std::shared_ptr<bool> openHistory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
