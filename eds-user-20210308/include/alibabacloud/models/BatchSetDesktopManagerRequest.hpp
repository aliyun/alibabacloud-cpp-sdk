// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSETDESKTOPMANAGERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHSETDESKTOPMANAGERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class BatchSetDesktopManagerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSetDesktopManagerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsDesktopManager, isDesktopManager_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSetDesktopManagerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsDesktopManager, isDesktopManager_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    BatchSetDesktopManagerRequest() = default ;
    BatchSetDesktopManagerRequest(const BatchSetDesktopManagerRequest &) = default ;
    BatchSetDesktopManagerRequest(BatchSetDesktopManagerRequest &&) = default ;
    BatchSetDesktopManagerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSetDesktopManagerRequest() = default ;
    BatchSetDesktopManagerRequest& operator=(const BatchSetDesktopManagerRequest &) = default ;
    BatchSetDesktopManagerRequest& operator=(BatchSetDesktopManagerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isDesktopManager_ != nullptr
        && this->users_ != nullptr; };
    // isDesktopManager Field Functions 
    bool hasIsDesktopManager() const { return this->isDesktopManager_ != nullptr;};
    void deleteIsDesktopManager() { this->isDesktopManager_ = nullptr;};
    inline string isDesktopManager() const { DARABONBA_PTR_GET_DEFAULT(isDesktopManager_, "") };
    inline BatchSetDesktopManagerRequest& setIsDesktopManager(string isDesktopManager) { DARABONBA_PTR_SET_VALUE(isDesktopManager_, isDesktopManager) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<string> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
    inline vector<string> users() { DARABONBA_PTR_GET(users_, vector<string>) };
    inline BatchSetDesktopManagerRequest& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline BatchSetDesktopManagerRequest& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    std::shared_ptr<string> isDesktopManager_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
