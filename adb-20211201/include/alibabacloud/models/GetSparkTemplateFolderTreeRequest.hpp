// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKTEMPLATEFOLDERTREEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKTEMPLATEFOLDERTREEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkTemplateFolderTreeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkTemplateFolderTreeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkTemplateFolderTreeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
    };
    GetSparkTemplateFolderTreeRequest() = default ;
    GetSparkTemplateFolderTreeRequest(const GetSparkTemplateFolderTreeRequest &) = default ;
    GetSparkTemplateFolderTreeRequest(GetSparkTemplateFolderTreeRequest &&) = default ;
    GetSparkTemplateFolderTreeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkTemplateFolderTreeRequest() = default ;
    GetSparkTemplateFolderTreeRequest& operator=(const GetSparkTemplateFolderTreeRequest &) = default ;
    GetSparkTemplateFolderTreeRequest& operator=(GetSparkTemplateFolderTreeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline GetSparkTemplateFolderTreeRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


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
