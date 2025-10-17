// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHUSERENIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHUSERENIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DetachUserENIRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachUserENIRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachUserENIRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
    };
    DetachUserENIRequest() = default ;
    DetachUserENIRequest(const DetachUserENIRequest &) = default ;
    DetachUserENIRequest(DetachUserENIRequest &&) = default ;
    DetachUserENIRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachUserENIRequest() = default ;
    DetachUserENIRequest& operator=(const DetachUserENIRequest &) = default ;
    DetachUserENIRequest& operator=(DetachUserENIRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DetachUserENIRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
