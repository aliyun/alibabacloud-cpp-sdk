// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEFAVORITESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEFAVORITESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class SaveFavoritesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveFavoritesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorksId, worksId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveFavoritesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorksId, worksId_);
    };
    SaveFavoritesRequest() = default ;
    SaveFavoritesRequest(const SaveFavoritesRequest &) = default ;
    SaveFavoritesRequest(SaveFavoritesRequest &&) = default ;
    SaveFavoritesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveFavoritesRequest() = default ;
    SaveFavoritesRequest& operator=(const SaveFavoritesRequest &) = default ;
    SaveFavoritesRequest& operator=(SaveFavoritesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userId_ == nullptr
        && return this->worksId_ == nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SaveFavoritesRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // worksId Field Functions 
    bool hasWorksId() const { return this->worksId_ != nullptr;};
    void deleteWorksId() { this->worksId_ = nullptr;};
    inline string worksId() const { DARABONBA_PTR_GET_DEFAULT(worksId_, "") };
    inline SaveFavoritesRequest& setWorksId(string worksId) { DARABONBA_PTR_SET_VALUE(worksId_, worksId) };


  protected:
    // The user ID of the person who favorites the work. This user ID is the UserID of Quick BI, not the UID of Alibaba Cloud.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    // The ID of the work being favorited.
    // 
    // This parameter is required.
    std::shared_ptr<string> worksId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
