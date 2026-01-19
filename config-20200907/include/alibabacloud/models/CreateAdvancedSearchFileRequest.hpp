// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEADVANCEDSEARCHFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEADVANCEDSEARCHFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class CreateAdvancedSearchFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAdvancedSearchFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Sql, sql_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAdvancedSearchFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
    };
    CreateAdvancedSearchFileRequest() = default ;
    CreateAdvancedSearchFileRequest(const CreateAdvancedSearchFileRequest &) = default ;
    CreateAdvancedSearchFileRequest(CreateAdvancedSearchFileRequest &&) = default ;
    CreateAdvancedSearchFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAdvancedSearchFileRequest() = default ;
    CreateAdvancedSearchFileRequest& operator=(const CreateAdvancedSearchFileRequest &) = default ;
    CreateAdvancedSearchFileRequest& operator=(CreateAdvancedSearchFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sql_ == nullptr; };
    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline CreateAdvancedSearchFileRequest& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


  protected:
    // The SQL statement used to query resources.
    // 
    // This parameter is required.
    shared_ptr<string> sql_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
