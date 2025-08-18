// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSCHEDULEDPRELOADEXECUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTSCHEDULEDPRELOADEXECUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class StartScheduledPreloadExecutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartScheduledPreloadExecutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, StartScheduledPreloadExecutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    StartScheduledPreloadExecutionRequest() = default ;
    StartScheduledPreloadExecutionRequest(const StartScheduledPreloadExecutionRequest &) = default ;
    StartScheduledPreloadExecutionRequest(StartScheduledPreloadExecutionRequest &&) = default ;
    StartScheduledPreloadExecutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartScheduledPreloadExecutionRequest() = default ;
    StartScheduledPreloadExecutionRequest& operator=(const StartScheduledPreloadExecutionRequest &) = default ;
    StartScheduledPreloadExecutionRequest& operator=(StartScheduledPreloadExecutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline StartScheduledPreloadExecutionRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The ID of the prefetch plan.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
