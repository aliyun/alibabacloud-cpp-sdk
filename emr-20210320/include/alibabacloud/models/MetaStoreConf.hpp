// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METASTORECONF_HPP_
#define ALIBABACLOUD_MODELS_METASTORECONF_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class MetaStoreConf : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetaStoreConf& obj) { 
      DARABONBA_PTR_TO_JSON(DbPassword, dbPassword_);
      DARABONBA_PTR_TO_JSON(DbUrl, dbUrl_);
      DARABONBA_PTR_TO_JSON(DbUserName, dbUserName_);
    };
    friend void from_json(const Darabonba::Json& j, MetaStoreConf& obj) { 
      DARABONBA_PTR_FROM_JSON(DbPassword, dbPassword_);
      DARABONBA_PTR_FROM_JSON(DbUrl, dbUrl_);
      DARABONBA_PTR_FROM_JSON(DbUserName, dbUserName_);
    };
    MetaStoreConf() = default ;
    MetaStoreConf(const MetaStoreConf &) = default ;
    MetaStoreConf(MetaStoreConf &&) = default ;
    MetaStoreConf(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetaStoreConf() = default ;
    MetaStoreConf& operator=(const MetaStoreConf &) = default ;
    MetaStoreConf& operator=(MetaStoreConf &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbPassword_ != nullptr
        && this->dbUrl_ != nullptr && this->dbUserName_ != nullptr; };
    // dbPassword Field Functions 
    bool hasDbPassword() const { return this->dbPassword_ != nullptr;};
    void deleteDbPassword() { this->dbPassword_ = nullptr;};
    inline string dbPassword() const { DARABONBA_PTR_GET_DEFAULT(dbPassword_, "") };
    inline MetaStoreConf& setDbPassword(string dbPassword) { DARABONBA_PTR_SET_VALUE(dbPassword_, dbPassword) };


    // dbUrl Field Functions 
    bool hasDbUrl() const { return this->dbUrl_ != nullptr;};
    void deleteDbUrl() { this->dbUrl_ = nullptr;};
    inline string dbUrl() const { DARABONBA_PTR_GET_DEFAULT(dbUrl_, "") };
    inline MetaStoreConf& setDbUrl(string dbUrl) { DARABONBA_PTR_SET_VALUE(dbUrl_, dbUrl) };


    // dbUserName Field Functions 
    bool hasDbUserName() const { return this->dbUserName_ != nullptr;};
    void deleteDbUserName() { this->dbUserName_ = nullptr;};
    inline string dbUserName() const { DARABONBA_PTR_GET_DEFAULT(dbUserName_, "") };
    inline MetaStoreConf& setDbUserName(string dbUserName) { DARABONBA_PTR_SET_VALUE(dbUserName_, dbUserName) };


  protected:
    std::shared_ptr<string> dbPassword_ = nullptr;
    std::shared_ptr<string> dbUrl_ = nullptr;
    std::shared_ptr<string> dbUserName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
