// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREMINDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREMINDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetRemindRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRemindRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RemindId, remindId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRemindRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RemindId, remindId_);
    };
    GetRemindRequest() = default ;
    GetRemindRequest(const GetRemindRequest &) = default ;
    GetRemindRequest(GetRemindRequest &&) = default ;
    GetRemindRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRemindRequest() = default ;
    GetRemindRequest& operator=(const GetRemindRequest &) = default ;
    GetRemindRequest& operator=(GetRemindRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->remindId_ != nullptr; };
    // remindId Field Functions 
    bool hasRemindId() const { return this->remindId_ != nullptr;};
    void deleteRemindId() { this->remindId_ = nullptr;};
    inline int64_t remindId() const { DARABONBA_PTR_GET_DEFAULT(remindId_, 0L) };
    inline GetRemindRequest& setRemindId(int64_t remindId) { DARABONBA_PTR_SET_VALUE(remindId_, remindId) };


  protected:
    // The custom alert rule ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> remindId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
