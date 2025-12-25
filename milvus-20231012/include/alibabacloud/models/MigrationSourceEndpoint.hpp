// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONSOURCEENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONSOURCEENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class MigrationSourceEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationSourceEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(port, port_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationSourceEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(port, port_);
    };
    MigrationSourceEndpoint() = default ;
    MigrationSourceEndpoint(const MigrationSourceEndpoint &) = default ;
    MigrationSourceEndpoint(MigrationSourceEndpoint &&) = default ;
    MigrationSourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationSourceEndpoint() = default ;
    MigrationSourceEndpoint& operator=(const MigrationSourceEndpoint &) = default ;
    MigrationSourceEndpoint& operator=(MigrationSourceEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpoint_ == nullptr
        && return this->port_ == nullptr; };
    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline MigrationSourceEndpoint& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline MigrationSourceEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
