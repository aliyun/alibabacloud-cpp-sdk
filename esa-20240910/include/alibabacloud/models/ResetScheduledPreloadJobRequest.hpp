// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETSCHEDULEDPRELOADJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETSCHEDULEDPRELOADJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ResetScheduledPreloadJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetScheduledPreloadJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, ResetScheduledPreloadJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    ResetScheduledPreloadJobRequest() = default ;
    ResetScheduledPreloadJobRequest(const ResetScheduledPreloadJobRequest &) = default ;
    ResetScheduledPreloadJobRequest(ResetScheduledPreloadJobRequest &&) = default ;
    ResetScheduledPreloadJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetScheduledPreloadJobRequest() = default ;
    ResetScheduledPreloadJobRequest& operator=(const ResetScheduledPreloadJobRequest &) = default ;
    ResetScheduledPreloadJobRequest& operator=(ResetScheduledPreloadJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ResetScheduledPreloadJobRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The ID of the scheduled prefetch task.
    shared_ptr<string> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
