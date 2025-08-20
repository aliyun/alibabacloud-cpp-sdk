// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERDESCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERDESCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyDBClusterDescriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterDescriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterDescriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
    };
    ModifyDBClusterDescriptionRequest() = default ;
    ModifyDBClusterDescriptionRequest(const ModifyDBClusterDescriptionRequest &) = default ;
    ModifyDBClusterDescriptionRequest(ModifyDBClusterDescriptionRequest &&) = default ;
    ModifyDBClusterDescriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterDescriptionRequest() = default ;
    ModifyDBClusterDescriptionRequest& operator=(const ModifyDBClusterDescriptionRequest &) = default ;
    ModifyDBClusterDescriptionRequest& operator=(ModifyDBClusterDescriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterDescription_ != nullptr
        && this->DBClusterId_ != nullptr; };
    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string DBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline ModifyDBClusterDescriptionRequest& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterDescriptionRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


  protected:
    // The description of the cluster.
    // 
    // *   The description cannot start with `http://` or `https`.
    // *   The description must be 2 to 256 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterDescription_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
