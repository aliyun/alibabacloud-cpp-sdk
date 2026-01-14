// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELCOLLECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELCOLLECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class CancelCollectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelCollectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorksId, worksId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelCollectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorksId, worksId_);
    };
    CancelCollectionRequest() = default ;
    CancelCollectionRequest(const CancelCollectionRequest &) = default ;
    CancelCollectionRequest(CancelCollectionRequest &&) = default ;
    CancelCollectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelCollectionRequest() = default ;
    CancelCollectionRequest& operator=(const CancelCollectionRequest &) = default ;
    CancelCollectionRequest& operator=(CancelCollectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userId_ == nullptr
        && this->worksId_ == nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CancelCollectionRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // worksId Field Functions 
    bool hasWorksId() const { return this->worksId_ != nullptr;};
    void deleteWorksId() { this->worksId_ = nullptr;};
    inline string getWorksId() const { DARABONBA_PTR_GET_DEFAULT(worksId_, "") };
    inline CancelCollectionRequest& setWorksId(string worksId) { DARABONBA_PTR_SET_VALUE(worksId_, worksId) };


  protected:
    // The ID of the favorite user. The user ID is the UserID of the Quick BI, not the UID of Alibaba Cloud.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
    // The ID of the work to cancel the collection.
    // 
    // This parameter is required.
    shared_ptr<string> worksId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
