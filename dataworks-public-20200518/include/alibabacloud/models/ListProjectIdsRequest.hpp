// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTIDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTIDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListProjectIdsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectIdsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectIdsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListProjectIdsRequest() = default ;
    ListProjectIdsRequest(const ListProjectIdsRequest &) = default ;
    ListProjectIdsRequest(ListProjectIdsRequest &&) = default ;
    ListProjectIdsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectIdsRequest() = default ;
    ListProjectIdsRequest& operator=(const ListProjectIdsRequest &) = default ;
    ListProjectIdsRequest& operator=(ListProjectIdsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userId_ != nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListProjectIdsRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the desired Alibaba Cloud account.
    // 
    // You can log on to the [DataWorks](https://workbench.data.aliyun.com/console) console and move the pointer over the profile picture in the upper-right corner to view the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
