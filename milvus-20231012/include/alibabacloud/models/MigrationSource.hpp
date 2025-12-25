// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONSOURCE_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONSOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MigrationSourceAuthInfo.hpp>
#include <alibabacloud/models/MigrationSourceEndpoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class MigrationSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationSource& obj) { 
      DARABONBA_PTR_TO_JSON(authInfo, authInfo_);
      DARABONBA_PTR_TO_JSON(database, database_);
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationSource& obj) { 
      DARABONBA_PTR_FROM_JSON(authInfo, authInfo_);
      DARABONBA_PTR_FROM_JSON(database, database_);
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
    };
    MigrationSource() = default ;
    MigrationSource(const MigrationSource &) = default ;
    MigrationSource(MigrationSource &&) = default ;
    MigrationSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationSource() = default ;
    MigrationSource& operator=(const MigrationSource &) = default ;
    MigrationSource& operator=(MigrationSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authInfo_ == nullptr
        && return this->database_ == nullptr && return this->endpoint_ == nullptr; };
    // authInfo Field Functions 
    bool hasAuthInfo() const { return this->authInfo_ != nullptr;};
    void deleteAuthInfo() { this->authInfo_ = nullptr;};
    inline const MigrationSourceAuthInfo & authInfo() const { DARABONBA_PTR_GET_CONST(authInfo_, MigrationSourceAuthInfo) };
    inline MigrationSourceAuthInfo authInfo() { DARABONBA_PTR_GET(authInfo_, MigrationSourceAuthInfo) };
    inline MigrationSource& setAuthInfo(const MigrationSourceAuthInfo & authInfo) { DARABONBA_PTR_SET_VALUE(authInfo_, authInfo) };
    inline MigrationSource& setAuthInfo(MigrationSourceAuthInfo && authInfo) { DARABONBA_PTR_SET_RVALUE(authInfo_, authInfo) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline MigrationSource& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline const MigrationSourceEndpoint & endpoint() const { DARABONBA_PTR_GET_CONST(endpoint_, MigrationSourceEndpoint) };
    inline MigrationSourceEndpoint endpoint() { DARABONBA_PTR_GET(endpoint_, MigrationSourceEndpoint) };
    inline MigrationSource& setEndpoint(const MigrationSourceEndpoint & endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };
    inline MigrationSource& setEndpoint(MigrationSourceEndpoint && endpoint) { DARABONBA_PTR_SET_RVALUE(endpoint_, endpoint) };


  protected:
    std::shared_ptr<MigrationSourceAuthInfo> authInfo_ = nullptr;
    std::shared_ptr<string> database_ = nullptr;
    std::shared_ptr<MigrationSourceEndpoint> endpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
