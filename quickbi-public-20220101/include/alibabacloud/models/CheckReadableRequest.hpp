// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKREADABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKREADABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class CheckReadableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckReadableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorksId, worksId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckReadableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorksId, worksId_);
    };
    CheckReadableRequest() = default ;
    CheckReadableRequest(const CheckReadableRequest &) = default ;
    CheckReadableRequest(CheckReadableRequest &&) = default ;
    CheckReadableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckReadableRequest() = default ;
    CheckReadableRequest& operator=(const CheckReadableRequest &) = default ;
    CheckReadableRequest& operator=(CheckReadableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userId_ != nullptr
        && this->worksId_ != nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CheckReadableRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // worksId Field Functions 
    bool hasWorksId() const { return this->worksId_ != nullptr;};
    void deleteWorksId() { this->worksId_ = nullptr;};
    inline string worksId() const { DARABONBA_PTR_GET_DEFAULT(worksId_, "") };
    inline CheckReadableRequest& setWorksId(string worksId) { DARABONBA_PTR_SET_VALUE(worksId_, worksId) };


  protected:
    // The user ID of the Quick BI to be checked.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    // The ID of the work. Resources here include BI portal, dashboards, spreadsheets, and self-service access.
    // 
    // This parameter is required.
    std::shared_ptr<string> worksId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
