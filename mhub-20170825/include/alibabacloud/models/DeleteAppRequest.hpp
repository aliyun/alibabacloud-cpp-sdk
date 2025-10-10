// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
namespace Models
{
  class DeleteAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
    };
    DeleteAppRequest() = default ;
    DeleteAppRequest(const DeleteAppRequest &) = default ;
    DeleteAppRequest(DeleteAppRequest &&) = default ;
    DeleteAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppRequest() = default ;
    DeleteAppRequest& operator=(const DeleteAppRequest &) = default ;
    DeleteAppRequest& operator=(DeleteAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKey_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline DeleteAppRequest& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mhub20170825
#endif
