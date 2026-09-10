// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCRONEXECTIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCRONEXECTIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetCronExecTimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCronExecTimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cronRule, cronRule_);
    };
    friend void from_json(const Darabonba::Json& j, GetCronExecTimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cronRule, cronRule_);
    };
    GetCronExecTimeRequest() = default ;
    GetCronExecTimeRequest(const GetCronExecTimeRequest &) = default ;
    GetCronExecTimeRequest(GetCronExecTimeRequest &&) = default ;
    GetCronExecTimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCronExecTimeRequest() = default ;
    GetCronExecTimeRequest& operator=(const GetCronExecTimeRequest &) = default ;
    GetCronExecTimeRequest& operator=(GetCronExecTimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cronRule_ == nullptr; };
    // cronRule Field Functions 
    bool hasCronRule() const { return this->cronRule_ != nullptr;};
    void deleteCronRule() { this->cronRule_ = nullptr;};
    inline string getCronRule() const { DARABONBA_PTR_GET_DEFAULT(cronRule_, "") };
    inline GetCronExecTimeRequest& setCronRule(string cronRule) { DARABONBA_PTR_SET_VALUE(cronRule_, cronRule) };


  protected:
    // The Cron expression. Replace spaces with plus signs `+` when passing the expression as a query parameter.
    // 
    // This parameter is required.
    shared_ptr<string> cronRule_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
