// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGULIVEPULLTOPUSHSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MIGULIVEPULLTOPUSHSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class MiguLivePullToPushStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MiguLivePullToPushStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, MiguLivePullToPushStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    MiguLivePullToPushStatusResponseBodyData() = default ;
    MiguLivePullToPushStatusResponseBodyData(const MiguLivePullToPushStatusResponseBodyData &) = default ;
    MiguLivePullToPushStatusResponseBodyData(MiguLivePullToPushStatusResponseBodyData &&) = default ;
    MiguLivePullToPushStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MiguLivePullToPushStatusResponseBodyData() = default ;
    MiguLivePullToPushStatusResponseBodyData& operator=(const MiguLivePullToPushStatusResponseBodyData &) = default ;
    MiguLivePullToPushStatusResponseBodyData& operator=(MiguLivePullToPushStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && return this->status_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MiguLivePullToPushStatusResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline MiguLivePullToPushStatusResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
