// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKTEMPLATEFULLTREEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKTEMPLATEFULLTREEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkTemplateFullTreeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkTemplateFullTreeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkTemplateFullTreeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
    };
    GetSparkTemplateFullTreeRequest() = default ;
    GetSparkTemplateFullTreeRequest(const GetSparkTemplateFullTreeRequest &) = default ;
    GetSparkTemplateFullTreeRequest(GetSparkTemplateFullTreeRequest &&) = default ;
    GetSparkTemplateFullTreeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkTemplateFullTreeRequest() = default ;
    GetSparkTemplateFullTreeRequest& operator=(const GetSparkTemplateFullTreeRequest &) = default ;
    GetSparkTemplateFullTreeRequest& operator=(GetSparkTemplateFullTreeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline GetSparkTemplateFullTreeRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
