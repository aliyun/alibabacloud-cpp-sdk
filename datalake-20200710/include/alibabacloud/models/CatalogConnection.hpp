// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATALOGCONNECTION_HPP_
#define ALIBABACLOUD_MODELS_CATALOGCONNECTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class CatalogConnection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CatalogConnection& obj) { 
      DARABONBA_PTR_TO_JSON(JdbcPassword, jdbcPassword_);
      DARABONBA_PTR_TO_JSON(JdbcUri, jdbcUri_);
      DARABONBA_PTR_TO_JSON(JdbcUserName, jdbcUserName_);
      DARABONBA_PTR_TO_JSON(ThriftUri, thriftUri_);
      DARABONBA_PTR_TO_JSON(VpcConnectionId, vpcConnectionId_);
    };
    friend void from_json(const Darabonba::Json& j, CatalogConnection& obj) { 
      DARABONBA_PTR_FROM_JSON(JdbcPassword, jdbcPassword_);
      DARABONBA_PTR_FROM_JSON(JdbcUri, jdbcUri_);
      DARABONBA_PTR_FROM_JSON(JdbcUserName, jdbcUserName_);
      DARABONBA_PTR_FROM_JSON(ThriftUri, thriftUri_);
      DARABONBA_PTR_FROM_JSON(VpcConnectionId, vpcConnectionId_);
    };
    CatalogConnection() = default ;
    CatalogConnection(const CatalogConnection &) = default ;
    CatalogConnection(CatalogConnection &&) = default ;
    CatalogConnection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CatalogConnection() = default ;
    CatalogConnection& operator=(const CatalogConnection &) = default ;
    CatalogConnection& operator=(CatalogConnection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jdbcPassword_ == nullptr
        && return this->jdbcUri_ == nullptr && return this->jdbcUserName_ == nullptr && return this->thriftUri_ == nullptr && return this->vpcConnectionId_ == nullptr; };
    // jdbcPassword Field Functions 
    bool hasJdbcPassword() const { return this->jdbcPassword_ != nullptr;};
    void deleteJdbcPassword() { this->jdbcPassword_ = nullptr;};
    inline string jdbcPassword() const { DARABONBA_PTR_GET_DEFAULT(jdbcPassword_, "") };
    inline CatalogConnection& setJdbcPassword(string jdbcPassword) { DARABONBA_PTR_SET_VALUE(jdbcPassword_, jdbcPassword) };


    // jdbcUri Field Functions 
    bool hasJdbcUri() const { return this->jdbcUri_ != nullptr;};
    void deleteJdbcUri() { this->jdbcUri_ = nullptr;};
    inline string jdbcUri() const { DARABONBA_PTR_GET_DEFAULT(jdbcUri_, "") };
    inline CatalogConnection& setJdbcUri(string jdbcUri) { DARABONBA_PTR_SET_VALUE(jdbcUri_, jdbcUri) };


    // jdbcUserName Field Functions 
    bool hasJdbcUserName() const { return this->jdbcUserName_ != nullptr;};
    void deleteJdbcUserName() { this->jdbcUserName_ = nullptr;};
    inline string jdbcUserName() const { DARABONBA_PTR_GET_DEFAULT(jdbcUserName_, "") };
    inline CatalogConnection& setJdbcUserName(string jdbcUserName) { DARABONBA_PTR_SET_VALUE(jdbcUserName_, jdbcUserName) };


    // thriftUri Field Functions 
    bool hasThriftUri() const { return this->thriftUri_ != nullptr;};
    void deleteThriftUri() { this->thriftUri_ = nullptr;};
    inline string thriftUri() const { DARABONBA_PTR_GET_DEFAULT(thriftUri_, "") };
    inline CatalogConnection& setThriftUri(string thriftUri) { DARABONBA_PTR_SET_VALUE(thriftUri_, thriftUri) };


    // vpcConnectionId Field Functions 
    bool hasVpcConnectionId() const { return this->vpcConnectionId_ != nullptr;};
    void deleteVpcConnectionId() { this->vpcConnectionId_ = nullptr;};
    inline string vpcConnectionId() const { DARABONBA_PTR_GET_DEFAULT(vpcConnectionId_, "") };
    inline CatalogConnection& setVpcConnectionId(string vpcConnectionId) { DARABONBA_PTR_SET_VALUE(vpcConnectionId_, vpcConnectionId) };


  protected:
    std::shared_ptr<string> jdbcPassword_ = nullptr;
    std::shared_ptr<string> jdbcUri_ = nullptr;
    std::shared_ptr<string> jdbcUserName_ = nullptr;
    std::shared_ptr<string> thriftUri_ = nullptr;
    std::shared_ptr<string> vpcConnectionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
