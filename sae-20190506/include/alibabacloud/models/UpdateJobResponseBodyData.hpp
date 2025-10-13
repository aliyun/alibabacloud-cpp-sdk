// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
    };
    UpdateJobResponseBodyData() = default ;
    UpdateJobResponseBodyData(const UpdateJobResponseBodyData &) = default ;
    UpdateJobResponseBodyData(UpdateJobResponseBodyData &&) = default ;
    UpdateJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateJobResponseBodyData() = default ;
    UpdateJobResponseBodyData& operator=(const UpdateJobResponseBodyData &) = default ;
    UpdateJobResponseBodyData& operator=(UpdateJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->changeOrderId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateJobResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline UpdateJobResponseBodyData& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


  protected:
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the change order. It can be used to query the task status.
    std::shared_ptr<string> changeOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
