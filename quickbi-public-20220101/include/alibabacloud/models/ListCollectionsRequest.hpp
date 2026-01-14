// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOLLECTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOLLECTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListCollectionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCollectionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCollectionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListCollectionsRequest() = default ;
    ListCollectionsRequest(const ListCollectionsRequest &) = default ;
    ListCollectionsRequest(ListCollectionsRequest &&) = default ;
    ListCollectionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCollectionsRequest() = default ;
    ListCollectionsRequest& operator=(const ListCollectionsRequest &) = default ;
    ListCollectionsRequest& operator=(ListCollectionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userId_ == nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListCollectionsRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // User ID. This refers to the UserID in Quick BI, not the Alibaba Cloud UID.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
