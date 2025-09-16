// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESQLINSTANCENAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESQLINSTANCENAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class UpdateSqlInstanceNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSqlInstanceNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSqlInstanceNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    UpdateSqlInstanceNameRequest() = default ;
    UpdateSqlInstanceNameRequest(const UpdateSqlInstanceNameRequest &) = default ;
    UpdateSqlInstanceNameRequest(UpdateSqlInstanceNameRequest &&) = default ;
    UpdateSqlInstanceNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSqlInstanceNameRequest() = default ;
    UpdateSqlInstanceNameRequest& operator=(const UpdateSqlInstanceNameRequest &) = default ;
    UpdateSqlInstanceNameRequest& operator=(UpdateSqlInstanceNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateSqlInstanceNameRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
